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

parameter DRAW=3'b000;
parameter OTHER=3'b001;
reg [2:0] state;

initial begin
    state = 0;
    pixel = 0;
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
always @(posedge clk) begin
/*
	center_x = 30;
	center_y = 20;
	height   = 5;
	r = 5;
	*/
	/* diamond */
		// $display("%b\n", pixel);

	// $display("renderer done");
    case (state)
        DRAW: begin
            pixel = 0;
			draw_sq(square1);
            draw_sq(square2);
			draw_sq(square3);
            $display("in drawing mode");
            //state <= state + 1;
        end
        default: begin
            $display("about to quit");
            #100000;
            $finish;

        end
    endcase

end


/*

*/


endmodule
