module tb_main(input clk);
reg wr;
reg [15:0] addr;
reg [2:0] di;
wire [2:0] do;
integer cnt = 0;

memory mem(clk, wr, addr, di, do);

always @(posedge clk) begin
    cnt <= cnt + 1;
    if (cnt == 10) begin   
        wr <= 1;
        addr <= 163;
        di <= 1;
        $display("saving");
    end 
    else if (cnt == 11) begin
        wr <= 1;
        addr <= 164;
        di <= 2;
    end else begin
        wr <= 0;
    end

    if (cnt == 120) begin
        addr = 163;
        $display("loading = %d", do);
        addr = 164;
        $display("loading = %d", do);
    end
end

endmodule