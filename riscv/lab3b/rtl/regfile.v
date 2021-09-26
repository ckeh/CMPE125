
module regfile(
  input clk,
  input reset,

  input [4:0] rs1,
  input [4:0] rs2,
  input [4:0] rd,

  input       we, // Write enable

  input [63:0] dest,
  input        dest_long,

  output reg [63:0] data1,
  output reg [63:0] data2);

  reg [63:0] rf[31:0];

  reg [4:0] rf_cntr;
  initial begin
    // It is OK in hardware to have a random initial value
    rf_cntr = 0;
  end

  always @(posedge clk) begin
    if (reset) begin
      rf[rf_cntr] <= 0;
      rf_cntr <= rf_cntr + 1;
    end else begin
      data1  <= rf[rs1];
      data2  <= rf[rs2];
      if (we) begin
        if (dest_long) begin
          rf[rd] <= dest;
        end else begin
          rf[rd] <= dest; // FIXME: Just write the lower 32bits
        end
      end
    end
  end

endmodule

