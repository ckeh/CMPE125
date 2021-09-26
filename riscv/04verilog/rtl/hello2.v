
module hello2(
  input clk
);

  reg [5:0] b;
  reg [5:0] c;
  reg [5:0] d;

  initial begin
    b = 3;
    #1
    c = 4;
    b = 5;
    #1
    b = 6;
  end

 always @(b) begin
   d = b;
   c = c + 1;
   $display("d changed to %d (1)",d);
 end

 always @(b) begin
   d = b+100;
   $display("d changed to %d (100)",d);
 end

 always @(c) begin
   d = c;
   b = c+1;
   $display("d changed to %d (2)",d);
 end

endmodule

