module flop_r #(parameter Bits = 1, Reset_Value = 1'b0) (
  input clk,
  input reset,
  input [Bits-1:0] d,
  output [Bits-1:0] q
);
  always @(posedge clk) begin
    if(reset)
      q<=Reset_Value;
    else 
      q<= d;
  end
endmodule
