`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:38:55 02/28/2018 
// Design Name: 
// Module Name:    fsm 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module fsm(
    input clk,
    input restart,
	 input [7:0] jump_dist,
	 output [SQ_WIDTH - 1:0] square1,
	 output [SQ_WIDTH - 1:0] square2,
	 output [SQ_WIDTH - 1:0] square3,
	 output [PLAYER_WIDTH - 1:0] player,
     output [15:0] out_score,
     output perfect
    );

`include "consts.v"

parameter RESET = 0;
parameter GEN_NEXT = 1;
parameter JUMP_PREP = 2;
parameter SHIFT = 3;
parameter FALL = 4;

parameter SQ_R = 8'd6;
parameter NUM_SQ = 3;

reg [15:0] score; 	// 0-9999. Every 4 bits represent a decimal digit.
assign out_score = score;
reg perfect_r;
assign perfect = perfect_r;
reg [3:0] diff_score;
reg [15:0] tmp_score;

function [15:0] newScore(input [15:0] score, input perfect_r);
begin
    diff_score = perfect_r ? PERFECT_HIT : NORMAL_HIT;
    tmp_score = score;
    tmp_score[3:0] = score[3:0] + diff_score;
    if (tmp_score[3:0] > 4'b1001) begin
        tmp_score[3:0] = tmp_score[3:0] - 4'b1010;
        tmp_score[7:4] = tmp_score[7:4] + 1;
    end
    if (tmp_score[7:4] > 4'b1001) begin
        tmp_score[7:4] = tmp_score[7:4] - 4'b1010;
        tmp_score[11:8] = tmp_score[11:8] + 1;
    end
    if (tmp_score[11:8] > 4'b1001) begin
        tmp_score[11:8] = tmp_score[11:8] - 4'b1010;
        tmp_score[15:12] = tmp_score[15:12] + 1;
    end
    newScore = tmp_score;
end
endfunction

reg [2:0] state;
reg [NUM_SQ - 2:0] layout;
reg [NUM_SQ * 8 - 8 - 1:0] dist;
reg [NUM_SQ - 1:0] color;

reg [SQ_WIDTH - 1:0] square [2:0];
assign square1 = square[0];
assign square2 = square[1];
assign square3 = square[2];

reg [PLAYER_WIDTH - 1:0] player_reg;
assign player =  player_reg;

initial begin score = 0; perfect_r = 0; state = 0; layout = 0; dist = 0; color = 0; square[0] = 0; square[1] = 0; square[2] = 0;player_reg = 0; end

function[8:0] colorscheme(input color);
	if (color) colorscheme = {3'd1, 3'd2, 3'd3};
	else colorscheme = {3'd3, 3'd2, 3'd1};
endfunction



reg [7:0] baseX; 
reg [7:0] newbaseX; 
reg [7:0] baseY;
reg [7:0] newbaseY;
integer signed diffX;
integer signed diffY;
reg [7:0] shiftX;
reg [7:0] shiftY;
reg [7:0] tmpX;
integer i;
reg[15:0] jump_ratio;
parameter signed jump_tot_sft = 4;
reg should_fall;

initial begin baseX = 0; newbaseX = 0; baseY = 0; newbaseY = 0; diffX = 0; diffY = 0; shiftX = 0; shiftY = 0; tmpX = 0; i = 0; jump_ratio = 0; end

function [7:0] s_dist(input layout, input [7:0] dist);
    if (layout) s_dist = -dist; else s_dist = dist;
endfunction
function [15:0] base(input layout);
    if (layout) base = {8'd40, 8'd100};
    else base = {8'd20, 8'd100};
endfunction
function [7:0] last8bits(input[15:0] x);
	 reg [7:0] wulala;
	 {wulala, last8bits} = x;
endfunction


task layout_to_xy(input [1:0] layout, input[2:0] color);
begin
    {baseX, baseY} = base(layout[0]);
	
	for (i = 0; i < NUM_SQ; i = i + 1) begin
		if (i == 0) begin
            square[i] = {baseX, baseY, SQ_R, 8'd5, colorscheme(color[i])};
        end else begin
            square[i] = {square[i-1][`SQ_CX] + s_dist(layout[i-1], dist[ i * 8 - 1 -: 8]) ,
                         square[i-1][`SQ_CY] - dist[ i * 8 - 1 -: 8], SQ_R, 8'd5, colorscheme(color[i])}; 
        end
        //$display("square[%d] = %b", i, square[i]);
	end
	
end
endtask

task shift_xy(input signed [7:0] x, input signed [7:0] y); 
begin
	 for (i = 0; i < NUM_SQ; i = i + 1) begin 
        square[i][`SQ_CX] = square[i][`SQ_CX] + x;
        square[i][`SQ_CY] = square[i][`SQ_CY] + y;
    end
end
endtask

random rand_();


reg [7:0] dx;
reg [7:0] dy;
reg [7:0] landing_x_l;
reg [7:0] landing_x_r;
reg [7:0] landing_y_u;
reg [7:0] landing_y_d;
reg [7:0] landing_x;
reg [7:0] landing_y;

initial begin 
    dx = 0;
    dy = 0;
    landing_x_l = 0;
    landing_x_r = 0;
    landing_y_u = 0;
    landing_y_d = 0;
    landing_x = 0;
    landing_y = 0;
end

task updatePlayer;
begin
	dy = last8bits((/*(square[0][`SQ_CY] - square[1][`SQ_CY])*/ pl_jump_dist * jump_ratio) >>> jump_tot_sft);
	if (square[1][`SQ_CX] > square[0][`SQ_CX]) begin
		dx = last8bits((/*(square[1][`SQ_CX] - square[0][`SQ_CX])*/ pl_jump_dist * jump_ratio) >>> jump_tot_sft);
		player_reg = { ( landing_x_l ? (square[0][`SQ_CX] + dx - landing_x_l) : 
                                       (square[0][`SQ_CX] + dx + landing_x_r) ),
                       ( landing_y_u ? (square[0][`SQ_CY] - dy - landing_y_u
							- (last8bits(dx * (/*square[1][`SQ_CX] - square[0][`SQ_CX]*/ pl_jump_dist - dx)) >>> 2) ) :
                                       (square[0][`SQ_CY] - dy + landing_y_d
							- (last8bits(dx * (/*square[1][`SQ_CX] - square[0][`SQ_CX]*/ pl_jump_dist - dx)) >>> 2) ) ),
					   PL_INIT_H };
	end else begin
        dx = last8bits((/*(square[0][`SQ_CX] - square[1][`ySQ_CX])*/ pl_jump_dist * jump_ratio) >>> jump_tot_sft);

        $display("fsm:player_reg_x, %d", ( landing_x_l ? (square[0][`SQ_CX] - dx - landing_x_l) : 
                                       (square[0][`SQ_CX] - dx + landing_x_r) ));

        $display("fsm: dy = %d, dx = %d, pl_jump_dist = %d, jump_ratio = %d, jump_tot_sft = %d", dy, dx, 
        pl_jump_dist, jump_ratio, jump_tot_sft);
        $display("fsm:player_reg_y, %d", 
						( landing_y_u ? (square[0][`SQ_CY] - dy - landing_y_u
							- (last8bits(dx * (/*square[0][`SQ_CX] - square[1][`SQ_CX]*/ pl_jump_dist - dx)) >>> 2) ) :
                                       (square[0][`SQ_CY] - dy + landing_y_d
							- (last8bits(dx * (/*square[0][`SQ_CX] - square[1][`SQ_CX]*/ pl_jump_dist - dx)) >>> 2) ) ));
        

        player_reg = { ( landing_x_l ? (square[0][`SQ_CX] - dx - landing_x_l) : 
                                       (square[0][`SQ_CX] - dx + landing_x_r) ),
						( landing_y_u ? (square[0][`SQ_CY] - dy - landing_y_u
							- (last8bits(dx * (/*square[0][`SQ_CX] - square[1][`SQ_CX]*/ pl_jump_dist - dx)) >>> 2) ) :
                                       (square[0][`SQ_CY] - dy + landing_y_d
							- (last8bits(dx * (/*square[0][`SQ_CX] - square[1][`SQ_CX]*/ pl_jump_dist - dx)) >>> 2) ) ),
						PL_INIT_H };
	end

    
end
endtask






integer seed;
reg init;

initial begin
    seed = 0;
    init = 0;
end

function integer rand;
input x;
begin
   if (init == 0) begin seed = 879387228; init = 1; end
   seed = (seed * 1103515245 + 12345) & 'h7fffffff;
   rand = seed;
end
endfunction




task reset;
begin
    should_fall = 0;
	score = 0;
	layout = 2'b01;	// keeping shift to the right
	color = 3'b001;
    layout = rand(1) & 2'b11;
    color = rand(1) & 3'b111;
    dist[7:0]  = 13 + (rand(1) & 3'b111);
    dist[15:8] = 13 + (rand(1) & 3'b111);
    //$display("random %d", rand.rand(1) & 7'b1111111);
    //$display("init state: layout = %b, color = %b, dist = %b, %b", 
    //        layout, color, dist[15:8], dist[7:0]);
	layout_to_xy(layout, color);
    jump_ratio = 0;
    landing_x_l = 0;
    landing_x_r = 0;
    landing_y_u = 0;
    landing_y_d = 0;
    player_reg = {square[0][`SQ_CX], square[0][`SQ_CY], PL_INIT_H};
	// updatePlayer();
    state = GEN_NEXT;
end
endtask










reg next_layout;
reg next_color;
reg[7:0] next_dist;

reg shift_state;
reg static_state;
parameter STATIC_ANIM = 1;
parameter signed shift_tot_sft = 4;

parameter shift_lazy_sft = 2;
reg [shift_lazy_sft - 1:0] shift_lazy;

reg signed [7: 0] shift_ratio;

initial begin shift_ratio = 0; shift_lazy = 0; shift_state = 0; static_state = 0; next_dist = 0; next_layout = 0; next_color = 0; end

parameter SHIFT_PREP = 0;
parameter SHIFT_EXEC = 1;

initial begin should_fall = 0; end

task gen_next; 
begin
    next_layout = ((rand(1) & 4'b1111) > 4'b1101) ? layout[NUM_SQ - 2] : ~layout[NUM_SQ - 2];
    // $display("next layout is %d based on prev layout %d", next_layout, layout[NUM_SQ - 2]);
    next_color = rand(1) & 1;
    next_dist = 13 + (rand(1) & 3'b111);
    layout = {next_layout, layout[NUM_SQ - 2: 1]};
    color = {next_color, color[NUM_SQ - 1: 1]};
    dist  = {next_dist, dist[ ((NUM_SQ - 1) * 8) - 1: 8]};
    layout_to_xy(layout, color);
	updatePlayer();
    state = should_fall ? FALL : JUMP_PREP;
    perfect_r = 0;
end
endtask



reg [7:0] pl_jump_dist;
reg [15:0] jump_dist_sr;
wire end_of_jump = jump_dist_sr[15:8] > 0 && jump_dist_sr[7:0] == 0;

initial begin
    pl_jump_dist = 0;
    jump_dist_sr = 0;
end

task jump_prep; 
begin
    layout_to_xy(layout, color);
    updatePlayer();

    $display("jump dist sr === %d, %d", jump_dist_sr[15:8], jump_dist_sr[7:0]);
    $display("jump dist raw = %d", jump_dist);
    
    if (end_of_jump) begin
        pl_jump_dist = jump_dist_sr[15:8];
		$display("EOJ: jump dist === %d", pl_jump_dist);
        state = SHIFT;
        shift_state = SHIFT_PREP;
    end else begin
        pl_jump_dist = 0;
    end
    jump_dist_sr = {jump_dist_sr[7:0], jump_dist};
end
endtask





task shift;
begin
    if (shift_state == SHIFT_PREP) begin
        {baseX, baseY} = base(layout[0]);
        baseX = baseX + s_dist(layout[0], dist[7:0]);
        baseY = baseY - dist[7:0];
        {newbaseX, newbaseY} = base(layout[1]);
        // $display("baseX = %d, baseY = %d, nbX = %d, nbY = %d", baseX, baseY, newbaseX, newbaseY);
        // get the second square's current base and would-be base 
        diffX = newbaseX - baseX; 
        diffY = newbaseY - baseY;
        // $display("diffX = %d, diffY = %d", diffX, diffY);
        shift_state = SHIFT_EXEC;
        shift_ratio = 0;
        shift_lazy = 0;
    end

	layout_to_xy(layout, color);

    //$display("shift_ratio = %d, shift_amount = %d, %d", 
    //    shift_ratio, (diffX * shift_ratio) >>> shift_tot_sft, 
    //                 (diffY * shift_ratio) >>> shift_tot_sft );
    
	 shift_xy( (diffX * shift_ratio) >>> shift_tot_sft,
				  (diffY * shift_ratio) >>> shift_tot_sft );

    if (shift_ratio == (1 << shift_tot_sft)) 
    begin
        // $display("prev state: layout = %b, color = %b, dist = %d, %d", 
        //    layout, color, dist[15:8], dist[7:0]);
        state = GEN_NEXT;
        // static_state = STATIC_ANIM;
        // $display("new state: layout = %b, color = %b, dist = %d, %d", 
        //    layout, color, dist[15:8], dist[7:0]);
    end else begin
        //if (shift_lazy == (1 << shift_lazy_sft - 1)) 
        shift_ratio = shift_ratio + 1;
        shift_lazy = shift_lazy + 1;
    end
	 
	updatePlayer();
	if (jump_ratio == (1 << jump_tot_sft)) begin	
        if (player_reg[`PL_X] < square[1][`SQ_CX]) begin
            landing_x_l = square[1][`SQ_CX] - player_reg[`PL_X];
            landing_x_r = 0;
        end else begin
            landing_x_r = player_reg[`PL_X] - square[1][`SQ_CX];
            landing_x_l = 0;
        end
        if (player_reg[`PL_Y] < square[1][`SQ_CY]) begin
            landing_y_u = square[1][`SQ_CY] - player_reg[`PL_Y];
            landing_y_d = 0;
        end else begin
            landing_y_d = player_reg[`PL_Y] - square[1][`SQ_CY];
            landing_y_u = 0;
        end
        if (landing_x_l + landing_x_r + landing_y_u + landing_y_d > SQ_R) begin
            $display("============================================== falling =======");
            should_fall = 1;
        end else begin
            if (landing_x_l + landing_x_r + landing_y_u + landing_y_d == 0) begin
                perfect_r = 1;
            end
            score = newScore(score, perfect_r);
            $display("============================================== score : %d%d%d%d =======", score[15:12], score[11:8], score[7:4], score[3:0]);
        end
        jump_ratio = 0;
        state = GEN_NEXT;
	 end else begin
		  jump_ratio = jump_ratio + 1;
	 end
	 
end

endtask

task fall;
begin
	layout_to_xy(layout, color);
    updatePlayer();
end
endtask


always @(negedge clk) begin
    if (restart) begin
        state = RESET;
    end
	case (state)
		RESET: reset();
        GEN_NEXT: gen_next();
        JUMP_PREP: jump_prep();
        SHIFT: shift();
		FALL: fall();
	endcase
end


initial begin
	state = 0;
end

endmodule
