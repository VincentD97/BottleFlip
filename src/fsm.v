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
	 input btn,
	 output [SQ_WIDTH - 1:0] square1,
	 output [SQ_WIDTH - 1:0] square2,
	 output [SQ_WIDTH - 1:0] square3,
	 output [PLAYER_WIDTH - 1:0] player
    );

`include "consts.v"

parameter RESET = 0;
parameter STATIC = 1;
parameter JUMP = 2;

parameter SQ_SIZE = 5;


reg [2:0] state;
reg [2:0] layout;
reg [7:0] dist [1:0];
reg [2:0] color;

reg [SQ_WIDTH - 1:0] square [2:0];

assign square1 = square[0];
assign square2 = square[1];
assign square3 = square[2];

function[8:0] colorscheme(input color);
	if (color) colorscheme = {3'd1, 3'd2, 3'd3};
	else colorscheme = {3'd3, 3'd2, 3'd1};
endfunction



reg [7:0] baseX; 
reg [7:0] baseY;
reg [7:0] tmpX;
integer i;

task layout_to_xy(input [1:0] layout, input[2:0] color);
begin
	if (layout[0] == 0) begin
		baseX = 10;
		baseY = 50;
	end else begin
		baseX = 70;
		baseY = 50;
	end
	
	for (i = 0; i < 3; i = i + 1) begin
		if (i == 0) begin
			square[i] = {baseX, baseY, 8'd5, 8'd5, colorscheme(color[i])};
			$display("baseX = %d    baseY = %d", baseX, baseY);
		end else begin
			$display("i: %d,   layout: %b,   layout[i - 1]: %b", i, layout, layout[i-1]);
			if (layout[i - 1] == 1'b0) begin
				tmpX = square[i-1][`SQ_CX] + dist[i - 1];
			end else begin
				tmpX = square[i-1][`SQ_CX] - dist[i - 1];
			end
			$display("last CX: %d,    tmp: %d", square[i-1][`SQ_CX], tmpX);
			square[i] = {tmpX, 
						    square[i-1][`SQ_CY] - dist[i - 1], 
							 8'd5, 
							 8'd5, 
							 colorscheme(color[i])}; 
		end
	end
end
endtask


task reset();
begin
	dist[1] = 8'd20;
	dist[0] = 8'd15;
	layout = 2'b01;	// keeping shift to the right
	color = 3'b001;
	layout_to_xy(layout, color);
end
endtask

always @(posedge clk) begin
	case (state)
		RESET: reset();
	endcase
end


initial begin
	state = 0;
end

endmodule
