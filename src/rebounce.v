module rebounce (/*AUTOARG*/
   // Outputs
   output inst_vld,
   // Inputs
   input btn, input clk, input rst
);
	parameter COUNTDOWN = 1000;
	integer count;
	
initial begin count = 0 ; end

   always @(posedge clk) begin
		if (btn) 
			count = COUNTDOWN;
		else begin
			count = (count == 0) ? 0 : count - 1;
		end
	end
	assign inst_vld = (count != 0);
	
	
  
endmodule