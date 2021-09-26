
module localVariables(
  input clk,
  input  [31:0] inp,
  output [31:0] res
);

  localparam MySubstractValue = 3;

  reg [31:0] tmp;

  always @(*) begin
    tmp = inp + 1;
  end

  always @(*) begin
    if (inp[0])
      res_next = tmp;
    else
      res_next = MySubstractValue-tmp;
  end

  flop f(....
         .d(res_next), .q(res))

endmodule

