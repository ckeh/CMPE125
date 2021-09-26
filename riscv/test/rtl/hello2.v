
module hello2(input clk);

initial begin
  $display("Hello World");
end

always @(posedge clk) begin
  // Execute this when clk goes from 0 to 1

  $display("Hello too");
end


endmodule

