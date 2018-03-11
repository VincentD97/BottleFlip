`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:10:18 03/07/2018 
// Design Name: 
// Module Name:    logic 
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
module button2dist(
	input clk,
	input jump_btn,
	output [7:0] jump_dist,
	output end_of_jump
);

	reg [2:0] sr;
	parameter interval = 1048576 * 3; // 2^20 * 3
	integer press_count;
	
	reg [7:0] jump_dist_r;
	assign jump_dist = jump_dist_r;
	
initial begin
	sr = 0;
	press_count = 0;
	jump_dist_r = 0;
end

wire btn_posedge = ~sr[1] && sr[0];
wire btn_negedge = sr[1] && ~sr[0];
wire btn_on = sr[0];

always @(posedge clk) begin
	if (btn_posedge || btn_on) begin
		if (press_count == interval) begin
			jump_dist_r <= jump_dist_r + 1;
			press_count <= 0;
		end else press_count <= press_count + 1;
		
	end else if (btn_negedge) begin
		jump_dist_r <= 0;
	end

	//$display("in button2dist: %d", jump_dist);
	sr <= {sr[0], jump_btn};
end
	
	


endmodule
