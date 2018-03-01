`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:16:30 02/26/2018
// Design Name:   NERP_demo_top
// Module Name:   C:/Users/152/Downloads/0226/tb.v
// Project Name:  NERP_demo
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: NERP_demo_top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb;

	// Inputs
	reg clk;
	reg clr;

	// Outputs
	wire [6:0] seg;
	wire [3:0] an;
	wire dp;
	wire [2:0] red;
	wire [2:0] green;
	wire [1:0] blue;
	wire hsync;
	wire vsync;

	// Instantiate the Unit Under Test (UUT)
	NERP_demo_top uut (
		.clk(clk), 
		.clr(clr), 
		.seg(seg), 
		.an(an), 
		.dp(dp), 
		.red(red), 
		.green(green), 
		.blue(blue), 
		.hsync(hsync), 
		.vsync(vsync)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		clr = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		forever begin
			clk = 0;
			#1;
			clk = 1;
			#1;
		end
        
		// Add stimulus here

	end
      
endmodule

