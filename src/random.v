
module random;
integer seed;
reg init;

initial begin
    seed = 0;
    init = 0;
end

function integer rand;
input x;
begin
    if (init == 0) begin seed = 879387228; init = 1; end
   seed = (seed * 1103515245 + 12345) & 'h7fffffff;
   rand = seed;
end
endfunction

endmodule
