`timescale 1ns / 1ps

module ssled(
	input [15:0] in_score,
	input clk_disp,
	output [6:0] seg,
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

	wire [15:0] n;
	assign n = in_score;
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



	function [15:0] bcd(input [15:0] bin) ; 
	reg [7:0] i;
	begin
		bcd = 0;
		for (i = 0; i < 16; i = i+1) //run for 8 iterations
			begin
				bcd = {bcd[14:0],bin[15-i]}; //concatenation
				//if a hex digit of 'bcd' is more than 4, add 3 to it.  
				if(i < 15 && bcd[3:0] > 4) 
					bcd[3:0] = bcd[3:0] + 3;
				if(i < 15 && bcd[7:4] > 4)
					bcd[7:4] = bcd[7:4] + 3;    
				if(i < 15 && bcd[11:8] > 4)
					bcd[11:8] = bcd[11:8] + 3;  
				if(i < 15 && bcd[15:12] > 4)
					bcd[15:12] = bcd[15:12] + 3;  
			end
	end
	endfunction







integer f;
	initial begin
		//f = $fopen("ssled.txt", "w");
	end
	
	always @ (posedge clk_disp) begin
	
		//$display("ssled: from ssled_disp: %d %d : %d %d", n[15:12], n[11:8], n[7:4], n[3:0]);
		//$display("ssled: binary = %d, digit = %d", binary, d);

		//$fwrite(f, "%b,%b\n", seg, an);
		binary <= binary + 1'b1;
		
		if (unary == 4'b0111) begin
			unary <= 4'b1110;
		end else if ( unary == 4'b1111) begin
			unary <= binary_to_unary(binary + 1'b1);
		end else begin
			unary <= {unary[2:0], 1'b1};
		end
		
		//$display("displaying unary %b, binary %d", unary, binary);
	end		
endmodule


module ssled_disp(
	input [3:0] digit,
	input [3:0] ssled_sel,
	output [6:0] seg,
	output [3:0] an
);	
   reg [6:0] seg_reg;
   reg [3:0] an_reg;
	reg [6:0] map[0:9];

	assign seg[6:0] = seg_reg[6:0];
	assign an[3:0] = an_reg[3:0];

	initial begin
		seg_reg[6:0] = 7'b0;
		an_reg[3:0] = 4'b0;
		map[0] = 7'b1000000;
		map[1] = 7'b1111001;
		map[2] = 7'b0100100;
		map[3] = 7'b0110000;
		map[4] = 7'b0011001;
		map[5] = 7'b0010010;
		map[6] = 7'b0000010;
		map[7] = 7'b1111000;
		map[8] = 7'b0000000;
		map[9] = 7'b0010000;
	end
	
	
function [6:0] ssled_map(
	input [3:0] digit_
	);
	begin
		if (digit_ < 4'b1010)
			ssled_map = map[digit_];
		else
			ssled_map = 7'b0;
	end
endfunction


	always @* begin
		seg_reg[6:0] = ssled_map(digit);
		an_reg[3:0] = ssled_sel[3:0];
	end
	
endmodule



