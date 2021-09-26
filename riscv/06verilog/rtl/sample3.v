
`include "aluops.h"

typedef struct packed {
  logic [3:0] a;
  logic [3:0] b;
  logic [1:0] op;
} MyALUOps;

module sample3(
  input clk,
  input reset,

  input MyALUOps ctrl,

  output logic [3:0] result
);

  logic [3:0] result_next;

  always @(*) begin
    result_next = compute(ctrl.a,ctrl.b,ctrl.op);
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

