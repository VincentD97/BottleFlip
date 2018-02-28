`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:28:25 03/19/2013 
// Design Name: 
// Module Name:    NERP_demo_top 
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
module NERP_demo_top(
	input wire clk,			//master clock = 50MHz
	input wire clr,			//right-most pushbutton for reset
	output wire [6:0] seg,	//7-segment display LEDs
	output wire [3:0] an,	//7-segment display anode enable
	output wire dp,			//7-segment display decimal point
	output wire [2:0] red,	//red vga output - 3 bits
	output wire [2:0] green,//green vga output - 3 bits
	output wire [1:0] blue,	//blue vga output - 2 bits
	output wire hsync,		//horizontal sync out
	output wire vsync			//vertical sync out
	);
`include "consts.v"
// 7-segment clock interconnect
wire segclk;

// VGA display clock interconnect
wire dclk;

// our render clock
wire rclk;

// disable the 7-segment decimal points
assign dp = 1;

// 2d pixel 

wire [80*60*3 : 0] pixel;

// generate 7-segment clock & display clock
clockdiv U1(
	.clk(clk),
	.clr(clr),
	.segclk(segclk),
	.dclk(dclk),
    .rclk(rclk)
	);

// 7-segment display controller
segdisplay U2(
	.segclk(segclk),
	.clr(clr),
	.seg(seg),
	.an(an)
	);


// VGA controller
vga640x480 U3(
	.dclk(dclk),
	.clr(clr),
	.hsync(hsync),
	.vsync(vsync),
	.red(red),
	.green(green),
	.blue(blue),
	.pixel(pixel)
	);
	
//parameter PSIZE = 640 * 480;


reg [31:0] center_x; // horizontal
reg [31:0] center_y; // vertical
reg [31:0] r; // the top vertex of the <> shape is at (center_x, center_y - r)
reg [31:0] height;

reg btn;


			  
wire [SQ_WIDTH - 1 : 0] sq1;
wire [SQ_WIDTH - 1 : 0] sq2;
wire [SQ_WIDTH - 1 : 0] sq3;
wire [PLAYER_WIDTH - 1 : 0] pl;
fsm U5(.clk(rclk), .btn(btn), 
		.square1(sq1),
		.square2(sq2),
		.square3(sq3),
		.player(pl)
);

renderer U4(.clk(rclk),
	        .pixel(pixel),
			  .square1(sq1),
			  .square2(sq2),
			  .square3(sq3),
			  .player(pl)
			  );
			  

integer f, i, j, cnt;
initial begin
	f = $fopen("output.txt", "w");
	cnt = 0;
	i = 0; 
	j = 0;
	btn = 0;
end
/*
wire [2:0] pix;
assign pix = ;
	*/
	
always @(posedge rclk) begin
	for (j = 0; j < 60; j = j + 1) 
		for (i = 0; i < 80; i = i +1) 
			case (pixel[(j * 80 + i) * 3 +: 3])
				3'b000: $fwrite(f, "0");	
				3'b001: $fwrite(f, "1");
				3'b010: $fwrite(f, "2");
				3'b011: $fwrite(f, "3");
				3'b100: $fwrite(f, "4");
				3'b101: $fwrite(f, "5");
				3'b110: $fwrite(f, "6");
				3'b111: $fwrite(f, "7");
				//default: code_to_rgb = 8'b11111111;
			endcase
	cnt = cnt + 1;
    $fwrite(f, "\n");
	$fflush(f);
	//$display("%b\n", pixel);
	$display("TB PRINTED %d-th frame", cnt);


end
	

endmodule

