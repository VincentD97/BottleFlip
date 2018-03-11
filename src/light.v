`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:02:38 03/07/2018 
// Design Name: 
// Module Name:    light 
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
module light(
	input perfect,
	input clk,
	output wire [7:0] led
);

`include "consts.v"

reg [7:0] led_r;
assign led = led_r;

integer times_count;
integer clk_count;
integer i;
initial begin
	times_count	= 0;
	clk_count = 0;
	i = 0;
end

reg on;

always @(posedge clk) begin
	if (perfect) begin
		times_count = BLINK_TIMES;
		clk_count = 2 * BLINK_PERIOD;
	end
	for (i = 0; i < 8; i = i + 1) begin
		led_r[i] = (times_count > 0 && clk_count > BLINK_PERIOD);
	end
	if (clk_count > 0) begin
		clk_count = clk_count - 1;
	end else if (times_count > 0) begin
		times_count = times_count - 1;
		clk_count = 2 * BLINK_PERIOD;
	end
	// $display("times_count = %d,    clk_count = %d", times_count, clk_count);
end


endmodule
