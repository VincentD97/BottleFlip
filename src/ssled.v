`timescale 1ns / 1ps

module ssled(
	input [15:0] n,
	input clk_disp,
	output [7:0] seg,
	output [3:0] an
    );
// AN3 - AN0
// CA - CG

	reg [3:0] unary;
   reg [1:0] binary;
	wire [3:0] d;
	initial begin
		unary = 4'b1110;
		binary = 2'b0;
	end
	
	assign d = n[ ( 4 * binary + 3) -: 4];
	
	ssled_disp _disp(.digit(d), .ssled_sel(unary), .seg(seg), .an(an));
	
	function [3:0] binary_to_unary;
	input [1:0] bin;
	begin
		case (bin[1:0])
			2'b00: binary_to_unary = 4'b1110;
			2'b01: binary_to_unary = 4'b1101;
			2'b10: binary_to_unary = 4'b1011;
			2'b11: binary_to_unary = 4'b0111;
		endcase
	end
	endfunction
	
	always @ (posedge clk_disp) begin
	
		$display("ssled: from ssled_disp: %d %d : %d %d", n[15:12], n[11:8], n[7:4], n[3:0]);
		$display("ssled: binary = %d, digit = %d", binary, d);

		binary <= binary + 1'b1;
		
		if (unary == 4'b0111) begin
			unary <= 4'b1110;
		end else if ( unary == 4'b1111) begin
			unary <= binary_to_unary(binary + 1'b1);
		end else begin
			unary <= {unary[2:0], 1'b1};
		end
		
		$display("displaying unary %b, binary %d", unary, binary);
	end		
endmodule


module ssled_disp(
	input [3:0] digit,
	input [3:0] ssled_sel,
	output [7:0] seg,
	output [3:0] an
);	
   reg [7:0] seg_reg;
   reg [3:0] an_reg;
	reg [7:0] map[0:9];

	assign seg[7:0] = seg_reg[7:0];
	assign an[3:0] = an_reg[3:0];

	initial begin
		seg_reg[7:0] = 8'b0;
		an_reg[3:0] = 4'b0;
		map[0] = 8'b11000000;
		map[1] = 8'b11111001;
	   map[2] = 8'b10100100;
	   map[3] = 8'b10110000;
	   map[4] = 8'b10011001;
	   map[5] = 8'b10010010;
	   map[6] = 8'b10000010;
	   map[7] = 8'b11111000;
	   map[8] = 8'b10000000;
	   map[9] = 8'b10010000;
	end
	
	
function [7:0] ssled_map(
	input [3:0] digit_
	);
	begin
		if (digit_ < 4'b1010)
			ssled_map = map[digit_];
		else
			ssled_map = 8'b0;
	end
endfunction


	always @* begin
		seg_reg[7:0] = ssled_map(digit);
		an_reg[3:0] = ssled_sel[3:0];
	end
	
endmodule



