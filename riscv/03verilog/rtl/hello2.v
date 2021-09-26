
module hello2(input clk);

initial begin
  $display("Hello World");
end

reg  a;
wire b;

assign b = clk;
always @(clk) begin
  a = clk;
  $display("a=%d b=%d",a,b);
end

always @(posedge clk) begin
  // Execute this when clk goes from 0 to 1
  //

`ifdef NOT_REALLY_USED
  if ( 3'b10x == 3'b10x ) begin
    $display("True %b", ( 3'b10x == 3'b10x ));
  end else begin
    $display("false %b", ( 3'b10x == 3'b10x ));
  end
  $display("done %b", (4'b1001<<1));
`endif
end


endmodule

