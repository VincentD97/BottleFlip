module memory(clk, wr, addr, di, do);

input clk;
input wr;
// length: 120 * 60 = 7200
// addrss: 16 bits
input [15:0] addr;
input [2:0] di;
output wire [2:0] do;
reg [2:0] ram[120 * 60 - 1 : 0];

always @(posedge clk) begin
    if (wr) begin
        $display("writing %d to ram[%d]", di, addr);
        ram[addr] = di;
    end
end

assign do = ram[addr];
endmodule