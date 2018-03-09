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
	output end_of_jump,
	output [15:0] digits,
	output light_on,
	output light_blink
);

	assign digits = {nums[3], nums[2], nums[1], nums[0]};
	reg [3:0] nums [3:0];
	reg [2:0] sr;
	parameter interval = 1048576 * 3; // 2^20 * 3
	integer press_count;
	
	reg [7:0] jump_dist_r;
	assign jump_dist = jump_dist_r;
	
initial begin
	nums[0] = 0;
	nums[1] = 0;
	nums[2] = 0;
	nums[3]= 0;
	sr = 0;
	press_count = 0;
	jump_dist_r = 0;
end

task increment;
begin
	if (nums[0] < 9) nums[0] <= nums[0] + 1;
	else begin
		nums[0] <= 0;
		if (nums[1] < 9) nums[1] <= nums[1] + 1;
		else begin
			nums[1] <= 0;
			if (nums[2] < 9) nums[2] <= nums[2] + 1;
			else begin
				nums[2] <= 0;
				if (nums[3] < 9) nums[3] <= nums[3] + 1; else nums[3] <= 0;
			end
		end
	end
end
endtask
	
wire btn_posedge = ~sr[1] && sr[0];
wire btn_negedge = sr[1] && ~sr[0];
wire btn_on = sr[0];

reg light_on_r;
reg light_blink_r;
assign light_on = light_on_r;
assign light_blink = light_blink_r;

always @(posedge clk) begin
	light_on_r <= 1;
	light_blink_r <= 1;
	if (btn_posedge || btn_on) begin
		if (press_count == interval) begin
			increment();
			jump_dist_r <= jump_dist_r + 1;
			press_count <= 0;
		end else press_count <= press_count + 1;
		
	end else if (btn_negedge) begin
		nums[0] <= 0;
		nums[1] <= 0;
		nums[2] <= 0;
		nums[3] <= 0;
		jump_dist_r <= 0;
	end
	sr <= {sr[0], jump_btn};
end
	
	


endmodule
