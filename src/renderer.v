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
	output [PX_WIDTH*PX_HEIGHT*3:0] pixel,
	input [SQ_WIDTH - 1:0] square1,
	input [SQ_WIDTH - 1:0] square2,
	input [SQ_WIDTH - 1:0] square3,
	input [PLAYER_WIDTH - 1:0] player
);

`include "consts.v"

reg [PX_WIDTH*PX_HEIGHT*3:0] pixel;

reg [31:0] x;
reg [31:0] y;

parameter CLR=3'b000;
parameter DRAW=3'b001;
parameter OTHER=3'b001;
reg [2:0] state;

initial begin
    state = 0;
    pixel = 0;
    x = 0;
    y = 0;
end

task draw_square(input [7:0] center_x, input [7:0] center_y, input [7:0] r, input [7:0] height, 
input [2:0] color1, input [2:0] color2, input [2:0] color3); 
    begin
	//$display("%d %d %d", center_x, center_y, r);
    for (y = center_y - r; y <= center_y + r; y = y + 1) begin
        for (x = center_x - r; x <= center_x + r; x = x + 1) begin
            if ( x + y >= center_x + center_y - r &&
                x + y <= center_x + center_y + r &&
                x - y >= center_x - center_y - r &&
                x - y <= center_x - center_y + r ) begin
                pixel[(y * PX_WIDTH + x) * 3 +: 3] = color1;
                //$display("painting %d, %d to %d", x, y, color1); 
            end
        end
    end

    /* parallelogram left */
    for (x = center_x - r; x <= center_x; x = x + 1) begin
        for (y = center_y + x - (center_x - r) + 1; y <= center_y + x - (center_x - r) + height; y = y + 1) begin
            pixel[(y * PX_WIDTH + x) * 3 +: 3] = color2;
        end
    end

    /* parallelogram right */
    for (x = center_x + r; x >= center_x + 1; x = x - 1) begin
        for (y = center_y + (center_x + r) - x + 1; y <= center_y + (center_x + r) - x + height; y = y + 1) begin
            pixel[(y * PX_WIDTH + x) * 3 +: 3] = color3;
            // $display("setting %d,%d to %d", x, y, color3);
        end
    end
	
end
endtask

task draw_sq(input [SQ_WIDTH - 1 : 0] square1);
begin
	//$display("here in draw_sq, %b, %d, %d", square1, square1[`SQ_CX], square1[`SQ_CY]);
	draw_square(
					square1[`SQ_CX], square1[`SQ_CY], square1[`SQ_R], 
					square1[`SQ_H], square1[`SQ_C1], square1[`SQ_C2], square1[`SQ_C3]);
end
endtask


task draw_player(input reg[7:0] botmid_x, input reg[7:0] botmid_y, input reg [7:0] height); 
begin
	for (x = botmid_x - PL_DRAW_WIDTH; x <= botmid_x + PL_DRAW_WIDTH; x = x + 1) begin
		for (y = botmid_y; y > botmid_y - height; y = y - 1) begin
			pixel[(y * PX_WIDTH + x) * 3 +: 3] = PL_COLOR;
		end
	end
end
endtask


task draw_pl(input [PLAYER_WIDTH - 1 : 0] player);
begin
	draw_player(
					player[`PL_X], player[`PL_Y], player[`PL_H]);
end
endtask

task render;
begin
	draw_sq(square1);
    draw_sq(square2);
				draw_sq(square3);
				draw_pl(player);
            $display("in drawing mode");
end

reg clr_st = 0;
task clear;
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
    end
end

always @(posedge clk) begin
    case (state)
        CLR: clear();
        DRAW: render();
				
            //state <= state + 1;
        end
        default: begin
            $display("about to quit");
            #100000;
            $finish;

        end
    endcase

end

reg memw;
assign [15:0] memaddr = y * PX_HEIGHT + x;
reg [2:0] memi;
wire [2:0] memo;

memory mem(raw_clk, memw, memaddr, memi, memo);

/*

*/


endmodule
