
module sample3(
  //input wire clk, // Just for example, not so common
  //input reset,
  //input [3:0] a,
  //input [3:0] b,
  //input op,
  output [4:0] result);

reg [4:0] result;

`ifdef WORKS_BUT_NOT_CODING_COMPLIANT
always @(posedge clk) begin
  if (reset) begin
    result <= 0;
  end else begin
    if (op) begin
      result <= a - b;
    end else begin
      result <= a + b;
    end
  end
end
`else

  reg reset;
  reg [3:0] a;
  reg [3:0] b;
  reg op;
  reg clk;

  initial begin
    //---------------------
    reset = 1;
    clk = 1;
    #1
    clk = 0;
    #1
    //---------------------
    reset = 0;
    op = 0;
    a = 3;
    b = 1;
    clk = 1;
    #1
    clk = 0;
    #1
    //---------------------
    clk = 1;
    op = 1;
    a = 3;
    b = 1;
    #1
    clk = 0;
    #1
    //---------------------
    clk = 1;
    b = 0;
    #1
    clk = 0;
    #1
    clk = 1;
  end

  reg [4:0] result_next;

  always @(a /*or b */ or op) begin
    if (op) begin
      result_next = a - b;
    end else begin
      result_next = a + b;
    end
    $display("block called %d",result_next);
  end

  // flop library in the future
  always @(posedge clk) begin
    if (reset) begin
      result <= 0;
    end else begin
      result <= result_next;
    end
  end

`endif

endmodule

