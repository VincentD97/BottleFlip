module tb_mem;
reg clk;

tb_main U1(clk);
initial begin
  clk = 0;
  forever begin 
    clk = ~clk;
    # 10;
  end
end

endmodule