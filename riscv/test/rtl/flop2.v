
module flop2(
  input clk,
  input reset,
  input d,
  output q_sync, 
  output q_async
);

reg q_sync;
reg q_async;

always @(posedge clk) begin
  if (reset)
    q_sync <= 0;
  else
    q_sync <= d;
end


always @(posedge clk or posedge reset) begin
  if (reset == 1)
    q_async <= 0;
  else
    q_async <= d;
end

endmodule

