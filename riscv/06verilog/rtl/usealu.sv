
import myalyuops::*;

module usealu(
  input clk,
  input reset,
  input [3:0] op);

always @(*) begin
  if (op == DO_SUB) begin
    $display("do sub\n");
  end else begin
    $display("do add?\n");
  end
end

endmodule

