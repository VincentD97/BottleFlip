`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:17:30 02/23/2018 
// Design Name: 
// Module Name:    renderer 
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


module renderer(
	input clk,
	input [SQ_WIDTH - 1:0] square1,
	input [SQ_WIDTH - 1:0] square2,
	input [SQ_WIDTH - 1:0] square3,
	input [PLAYER_WIDTH - 1:0] player,
    input [15:0] rmemaddr,
    input [15:0] rmemaddr2,
    output wire [2:0] memo,
    output wire [2:0] memo2
);

`include "consts.v"

reg signed [8:0] x;
reg signed [8:0] y;

parameter CLR=3'b000;
parameter DRAW=3'b001;
parameter IDLE=3'b010;
parameter OTHER=3'b001;
reg [2:0] state;


reg [2:0] render_sq_st;
parameter RENDER_SQ_INIT = 0;
parameter RENDER_SQ_MIDDLE = 1;
parameter RENDER_SQ_LEFT = 2;
parameter RENDER_SQ_RIGHT = 3;
parameter RENDER_SQ_DONE = 4;


reg [1:0] render_pl_st;
parameter RENDER_PL_INIT = 0;
parameter RENDER_PL_MAIN = 1;
parameter RENDER_PL_DONE = 2;

reg [3:0] render_st;
parameter RENDER_SQ1 = 0;
parameter RENDER_SQ2 = 1;
parameter RENDER_SQ3 = 2;
parameter RENDER_PL = 3;


reg [31:0] idleCount;

initial begin
    x = 0;
    y = 0;
    state = 0;
    render_sq_st = 0;
    render_pl_st = 0;
    render_st = 0;
    idleCount = 0;
    rst = 0;

end

wire valido;
assign valido = (x >= 0 && x < PX_WIDTH && y >= 0 && y < PX_HEIGHT); 


task incr_draw_square(input [7:0] center_x, input [7:0] center_y, input [7:0] r, input [7:0] height, 
input [2:0] color1, input [2:0] color2, input [2:0] color3); 
begin
    case (render_sq_st)
    RENDER_SQ_INIT: 
    begin
        wr <= 0;  // must be non-writeable
        y <= center_y - r;
        x <= center_x - r;

        $display("Setting x to %d, y to %d", y, x);
        render_sq_st <= RENDER_SQ_MIDDLE;
    end
    RENDER_SQ_MIDDLE:
    begin
        if (x == center_x + r && y == center_y + r) begin
            wr <= 1;
            memi <= color2;
            y <= center_y + 1;
            x <= center_x - r;
            render_sq_st <= RENDER_SQ_LEFT;
        end else begin
            if ( x + y >= center_x + center_y - r &&
                 x + y <= center_x + center_y + r &&
                 x - y >= center_x - center_y - r &&
                 x - y <= center_x - center_y + r )
            begin wr <= 1; memi <= color1; end else wr <= 0;

            if (x < center_x + r) x <= x + 1;
            else begin x <= center_x - r; y <= y + 1; end
        end
    end
    RENDER_SQ_LEFT:
    begin
        if (x == center_x && y == center_y + r + height) begin
            wr <= 1;
            memi <= color3;
            y <= center_y + 1;
            x <= center_x + r;
            render_sq_st <= RENDER_SQ_RIGHT;
        end else begin
            wr <= 1;
            memi <= color2;
            if (y < center_y + x - (center_x - r) + height) y <= y + 1;
            else begin x <= x + 1; y <= center_y + (x + 1) - (center_x - r) + 1; end
        end
    end
    RENDER_SQ_RIGHT:
    begin
        if (x == center_x + 1 && y == center_y + r - 1 + height) begin 
            wr <= 0;
            render_sq_st <= RENDER_SQ_DONE;
        end else begin 
            wr <= 1;
            memi <= color3;
            if (y < center_y + (center_x + r) - x + height) y <= y + 1;
            else begin x <= x - 1; y <= center_y + (center_x + r) - x + 2; end
        end
    end
    endcase
end
endtask



task incr_draw_player(input reg[7:0] botmid_x, input reg[7:0] botmid_y, input reg [7:0] height); 
begin
    case (render_pl_st)
    RENDER_PL_INIT:
    begin
        wr <= 1;
        memi <= PL_COLOR;
        x <= botmid_x - PL_DRAW_WIDTH;
        y <= botmid_y;
        render_pl_st <= RENDER_PL_MAIN;
    end
    RENDER_PL_MAIN:
    begin
        if (x == botmid_x + PL_DRAW_WIDTH && y == botmid_y - height + 1) begin
            wr <= 0;
            render_pl_st <= RENDER_PL_DONE;
        end else begin
            wr <= 1;
            memi <= PL_COLOR;
            if (y > botmid_y - height + 1) y <= y - 1;
            else begin x <= x + 1; y <= botmid_y; end
        end
    end
    endcase
	//for (x = botmid_x - PL_DRAW_WIDTH; x <= botmid_x + PL_DRAW_WIDTH; x = x + 1) begin
	//	for (y = botmid_y; y >= botmid_y - height + 1; y = y - 1) begin
	//		pixel[(y * PX_WIDTH + x) * 3 +: 3] = PL_COLOR;
	//	end
	//end
end
endtask



task draw_sq(input [SQ_WIDTH - 1 : 0] square1);
begin
	//$display("here in draw_sq, %b, %d, %d", square1, square1[`SQ_CX], square1[`SQ_CY]);
	incr_draw_square(
					square1[`SQ_CX], square1[`SQ_CY], square1[`SQ_R], 
					square1[`SQ_H], square1[`SQ_C1], square1[`SQ_C2], square1[`SQ_C3]);
end
endtask


task draw_pl(input [PLAYER_WIDTH - 1 : 0] player);
begin
	incr_draw_player(
					player[`PL_X], player[`PL_Y], player[`PL_H]);
end
endtask



task render;
begin
    //$display("RENDER STATE = ", render_st);
    case (render_st)
        RENDER_SQ1: 
        begin
            draw_sq(square1);
            if (render_sq_st == RENDER_SQ_DONE) begin
                render_sq_st <= 0;
                render_st <= RENDER_SQ2;
            end
        end
        RENDER_SQ2:
        begin
            draw_sq(square2);
            if (render_sq_st == RENDER_SQ_DONE) begin
                render_sq_st <= 0;
                render_st <= RENDER_SQ3;
            end
        end
        RENDER_SQ3:
        begin
            draw_sq(square3);
            if (render_sq_st == RENDER_SQ_DONE) begin
                render_sq_st <= 0;
                render_st <= RENDER_PL;
            end
        end
        RENDER_PL:
        begin
            draw_pl(player);
            if (render_pl_st == RENDER_PL_DONE) begin
                render_pl_st <= 0;
                render_st <= 0;
                state <= IDLE;
                $display("render is done");
            end
        end
    endcase
end
endtask

reg clr_st;
task clear;
/*
begin
    if (clr_st == 0) begin
        rst = 1;
        clr_st <= 1;
    end else begin
        rst = 0;
        clr_st <= 0;
        state <= DRAW;
        $display("CLR DONE");
    end
end
endtask
*/

begin
    if (clr_st == 0) begin
        wr <= 1;
        x <= 0;
        y <= 0;
        memi <= 0;
        clr_st <= 1;
    end 
    else if (x < PX_WIDTH - 1) begin
        wr <= 1;
        memi <= 0;
        x <= x + 1;
    end else if (y < PX_HEIGHT - 1) begin
        wr <= 1;
        memi <= 0;
        y <= y + 1;
        x <= 0;
    end else begin
        clr_st <= 0;
        state <= DRAW;
        $display("CLR is done");
    end
end
endtask


always @(posedge clk) begin
    case (state)
        CLR: clear();
        DRAW: render();
        IDLE: 
        begin
            idleCount <= idleCount + 1;
            if (idleCount == idleMax) begin
                idleCount <= 0;
                state <= CLR;
            end
        end
            //state <= state + 1;
        default: begin
            $display("about to quit");
            #100000;
            $finish;
        end
    endcase
end

reg wr;

wire memw;
assign memw = wr && valido;

reg rst;
wire [15:0] memaddr;
assign memaddr = y * PX_WIDTH + x;
reg [2:0] memi;


memory mem(clk, rst, memw, memaddr, rmemaddr, rmemaddr2, memi, memo, memo2);

/*

*/


endmodule
