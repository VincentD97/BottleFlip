module memory(clk, rst, wr, addr, raddr, raddr2, di, _do, do2);

input clk;
input rst;
input wr;
// length: 120 * 60 = 7200
// addrss: 16 bits
input [15:0] raddr;
input [15:0] raddr2;
input [15:0] addr;
input [2:0] di;
output wire [2:0] _do;
output wire [2:0] do2;
reg [2:0] ram[120 * 60 - 1 : 0];

integer i;

always @(posedge clk) begin
    if (rst) begin
        //for (i = 0; i < 12 * 60; i = i + 1) ram[i] = 0;
    end
    else if (wr) begin
        //if (di) $display("writing %d to ram[%d]", di, addr);
        ram[addr] = di;
    end
end

assign _do = ram[raddr];
assign do2 = ram[raddr2];
endmodule