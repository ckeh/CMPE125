
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
    result_next = compute(a,b,op);
  end

  flop #(.Bits(4)) f0 (.clk(clk), .reset(reset), .d(result_next), .q(result));

  function [3:0] compute(
    input [3:0] a1,
    input [3:0] b1,
    input [1:0] op1);
    begin
      case(op1)
        `OP_ADD:   compute = a1 + b1;
        `OP_SUB:   compute = a1 - b1;
        `OP_SHIFT: compute = a1<<b1;
        default:   compute = 4'bx;
      endcase
    end
  endfunction

endmodule

