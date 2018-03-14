`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:30:38 03/19/2013 
// Design Name: 
// Module Name:    vga640x480 
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

module vga640x480(
	input wire dclk,			//pixel clock: 25MHz
	input wire clr,			//asynchronous reset
	output wire hsync,		//horizontal sync out
	output wire vsync,		//vertical sync out
	output reg [2:0] red,	//red vga output
	output reg [2:0] green, //green vga output
	output reg [1:0] blue,	//blue vga output
	input [2:0] memout,
	output reg [15:0] rmemaddr
	);

`include "consts.v"
// video structure constants
parameter hpixels = 800;// horizontal pixels per line
parameter vlines = 521; // vertical lines per frame
parameter hpulse = 96; 	// hsync pulse length
parameter vpulse = 2; 	// vsync pulse length
parameter hbp = 144; 	// end of horizontal back porch


parameter hbp_real = 144 + ((640 - WIDTH) >> 1);
parameter hfp_real = 784 - ((640 - WIDTH) >> 1);


parameter hfp = 784; 	// beginning of horizontal front porch
parameter vbp = 31; 		// end of vertical back porch
parameter vfp = 511; 	// beginning of vertical front porch
// active horizontal video is therefore: 784 - 144 = 640
// active vertical video is therefore: 511 - 31 = 480

// registers for storing the horizontal & vertical counters
reg [9:0] hc;
reg [9:0] vc;

// Horizontal & vertical counters --
// this is how we keep track of where we are on the screen.
// ------------------------
// Sequential "always block", which is a block that is
// only triggered on signal transitions or "edges".
// posedge = rising edge  &  negedge = falling edge
// Assignment statements can only be used on type "reg" and need to be of the "non-blocking" type: <=
always @(posedge dclk or posedge clr)
begin
	// reset condition
	if (clr == 1)
	begin
		hc <= 0;
		vc <= 0;
	end
	else
	begin
		// keep counting until the end of the line
		if (hc < hpixels - 1)
			hc <= hc + 1;
		else
		// When we hit the end of the line, reset the horizontal
		// counter and increment the vertical counter.
		// If vertical counter is at the end of the frame, then
		// reset that one too.
		begin
			hc <= 0;
			if (vc < vlines - 1)
				vc <= vc + 1;
			else begin
				vc <= 0;
				frameCount <= frameCount + 1;
			end

		end
		
	end
end

// generate sync pulses (active low)
// ----------------
// "assign" statements are a quick way to
// give values to variables of type: wire
assign hsync = (hc < hpulse) ? 0:1;
assign vsync = (vc < vpulse) ? 0:1;



reg [15:0] frameCount;
initial begin frameCount = 0;  end


function [7:0] background(input [2:0] frameCount);
begin
	case (frameCount)
		0: background = 8'b11111011; // ffdbff
		1: background = 8'b11111010; // ffdbaa
		2: background = 8'b11111110; // ffffaa
		3: background = 8'b11011110; // dbffaa
		4: background = 8'b11011111; // dbffff
		5: background = 8'b10111111; // b6ffff
		6: background = 8'b11011011; // dbdbff
		7: background = 8'b11111111; // ffffff
	endcase
end
endfunction

function [7:0] code_to_rgb;
input [2:0] c;
begin
	case (c)
		0: code_to_rgb = background(frameCount[11:9]); // 8'b10111011; // light-purple-blue // 8'b10010010;
		1: code_to_rgb = 8'b11101100; // orange
		2: code_to_rgb = 8'b10010110; // steelgrey
		3: code_to_rgb = 8'b11111000; // yellow
		4: code_to_rgb = 8'b10100000; // crimson red
		6: /*pl_color*/ code_to_rgb = 8'b10000010; // dark-purple
		default: code_to_rgb = 8'b10010010;
	endcase
end
endfunction


wire [32:0] idx;
wire inscreen;
assign idx = ((hc - hbp_real) >> 2)+ ((vc - vbp) >> 2) * PX_WIDTH;
assign inscreen = (vc >= vbp && vc < vfp) && (hc >= hbp_real && hc < hfp_real);
always @(*)
begin
	// first check if we're within vertical active video range
	if (inscreen) begin
		rmemaddr = idx;
		{red[2:0], green[2:0], blue[1:0]} = code_to_rgb(memout);
	
	/*
	if (vc + hc >= (vbp + vfp + hbp + hfp) / 2) begin
		// display red bar
		red = 3'b111;
		green = 3'b000;
		blue = 2'b00; */
	end else begin
		red = 0;
		green = 0;
		blue = 0;
	end

end

endmodule
