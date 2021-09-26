
module regfile(
  input clk,
  input reset,

  input [4:0] rs1,
  input [4:0] rs2,
  input [4:0] rd,

  input       we, // Write enable

  input [63:0] dest,
  input        dest_long,

  input [63:0] dcache_ack_data,
  input [4:0]  dcache_ack_rd,
  input        dcache_ack_valid,

  input decode_retry,
  output reg [63:0] data1,
  output reg [63:0] data2
);

  reg [63:0] rf[31:0];
  //reg [63:0] dest32;
  reg [4:0] rf_cntr;
  initial begin
    // It is OK in hardware to have a random initial value
    rf_cntr = 0;
  end

  reg [63:0] data1_next;
  reg [63:0] data2_next;
  always @(posedge clk) begin
    if (reset) begin
      rf[rf_cntr] <= 0;
      rf_cntr <= rf_cntr + 1;
    end else begin
       // data1  <= rf[rs1];
       // data2  <= rf[rs2];
    
       //regular writes 
      if (we) begin
        if (dest_long) begin
          rf[rd] <= dest;
        end else begin
          rf[rd][31:0] <= dest[31:0]; // Just write the lower 32bits
        end
      end

      if (dcache_ack_valid) begin
        rf[dcache_ack_rd] <= dcache_ack_data;
      end
    end
  end

  always @(*) begin
    data1_next = rf[rs1];
    data2_next = rf[rs2];
      
    // used when data cache responds
      if (dcache_ack_valid) begin
        if(dcache_ack_rd == rs1) begin
          data1_next = dcache_ack_data;
        end
        if (dcache_ack_rd == rs2)begin
          data2_next = dcache_ack_data;
        end
      end
  end
  fflop #(.Size(64+64)) data ( 
    .din({data1_next, data2_next}),
    .dinValid(1),
    .dinRetry(),

    .q({data1, data2}),
    .qValid(),
    .qRetry(decode_retry),
    .*
  );

endmodule

