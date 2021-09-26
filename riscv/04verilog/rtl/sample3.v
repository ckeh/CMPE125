
`include "aluops.h"

module sample3(
  input clk,
  input reset,

  input [3:0]  a,
  input [3:0]  b,
  input [1:0] op,

  output [3:0] result
);

  reg [3:0] result_next;

  always @(*) begin
    case(op)
      `OP_ADD:   result_next = a + b;
      `OP_SUB:   result_next = a - b;
      `OP_SHIFT: result_next = a<<b;
      default:   result_next = 4'bx;
    endcase
  end

  flop #(.Bits(4)) f0 (.clk(clk), .reset(reset), .d(result_next), .q(result));

endmodule

