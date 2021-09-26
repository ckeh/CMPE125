
module nflop
#(parameter Bits=1)
(
  input clk,
  input reset,
  input [Bits-1:0] d,
  output reg [Bits-1:0] q
);

always @(negedge clk) begin
  if (reset)
    q <= 0;
  else
    q <= d;
end

endmodule


