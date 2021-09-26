
module counter(
  input clk,
  input reset,
  input add,

  output [7:0] total
);

  reg [7:0] total;
  reg [7:0] total_next;

  always @(*) begin
    if (add)
      total_next = total + 1;
    else
      total_next = total;
  end

  always @(posedge clk) begin
    if (reset)
      total <= 0;
    else begin
      total <= total_next;
    end
  end

endmodule


module counter2(
  input clk,
  input reset,
  input add,

  output [7:0] total
);

  reg [7:0] total_next;

  always @(total or add) begin
    if (add)
      total_next = total + 1;
    else
      total_next = total;
  end

  flop #(.Bits(8)) n (.clk(clk), .reset(reset), .d(total_next), .q(total));

endmodule

module counter3(
  input clk,
  input reset,
  input add,

  output [7:0] total
);

  reg [7:0] total;

  always @(posedge clk) begin
    if (reset)
      total <= 0;
    else begin
      if (add)
        total <= total + 1;
      // Optional, not needed
      // else
      //  total <= total;
    end
  end

endmodule

module counter4(
  input clk,
  input reset,
  input add,

  output [7:0] total
);

  reg [7:0] total;
  wire [7:0] total_next;

  assign total_next = add?(total+1):total;

  always @(posedge clk) begin
    if (reset)
      total <= 0;
    else begin
      total <= total_next
    end
  end

endmodule

module counter5(
  input clk,
  input reset,
  input add,

  output [7:0] total
);

  reg [7:0] total;
  wire [7:0] total_next;

  always @(posedge clk) begin
    if (reset)
      total <= 0;
    else begin
      total <= total_next
    end
  end

  assign total_next = add?(total+1):total;

endmodule

module counter_bad(
  input clk,
  input reset,
  input add,

  output [7:0] total
);

  reg [7:0] total;
  reg [7:0] total_next;

  always @(*) begin
    if (reset)
      total_next = 0;
    else if (add)
      total_next = total;
    else
      total_next = total;
  end

  always @(posedge clk) begin
    if (reset)
      total <= 0;
    else begin
      total <= total_next
    end
  end

endmodule

module counter_bad2(
  input clk,
  input reset,
  input add,

  output [7:0] total
);
  wire clk;
  wire reset;


  reg [7:0] total;
  reg [7:0] total_next;

  always @(*) begin
    if (add)
      total_next = total + 1;
  end

  always @(posedge clk or posedge reset) begin
    if (reset)
      total <= 0;
    else begin
      total <= total_next;
    end
  end

endmodule

module counter_bad3(
  input clk,
  input reset,
  input add,

  output [7:0] total
);


  reg [7:0] total;
  reg [7:0] total_next;

    if (add)
      total_next = total + 1;
    else
      total_next = total;

  always @(posedge clk or posedge reset) begin
    if (reset)
      total <= 0;
    else begin
      total <= total_next;
    end
  end

endmodule

