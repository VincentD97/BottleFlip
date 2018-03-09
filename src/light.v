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
	input blink,
	input clk_blink,
	input on,
	output wire [7:0] led
);

integer i;
reg ison;
reg [7:0] light;

initial begin i = 0; end

always @(on) begin
	ison = clk_blink && blink;
	for (i = 0; i < 8; i = i + 1) begin
		light[i] = ison;
	end
end

assign led = light;

endmodule
