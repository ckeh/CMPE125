
module dcache(
  input clk,
  input reset,

  //from execute
  input [63:0] dcache_req_addr,  // load or store address computed at execute
  input [63:0] dcache_req_data, // data just for the store going to from exe to testbench
  input [3:0]  dcache_req_op,  // RVMOP_*
  input [4:0]  dcache_req_rd,  // destination register for the load
  input        dcache_req_valid,
  output         dcache_req_retry,

  // to decode
  output  [63:0] dcache_ack_data,
  output  [4:0]  dcache_ack_rd,  // destination register for the load
  output         dcache_ack_valid,
  input        dcache_ack_retry, // ALWAYS_FALSE
  );

reg dc_valid;
reg dc_data_we; // write enable if pc request is valid
reg dc_tag_we; 

//storage for dcache
reg             dc_valid [63:0]; //valid bit of dcache
reg [63-5-6:0]  dc_tag   [63:0]; //tag of data in dcache
reg [255:0]     dc_data  [63:0]; //cache size

reg             dcache_ack_valid_next; //valid when we send an insn
reg [31:0]      dcache_ack_data_next;

reg             dcache_req_addr_valid_next;
reg [63-5:0]    dcache_req_addr_next; 

reg [4:0]   dcache_req_offset; 
reg [5:0]   dcache_req_index;
reg [52:0]  dcache_req_tag;

reg [5:0]  clear_idx;

wire req_valid;
wire req_valid_next;
flop f_req_valid ( .d(req_valid_next), .q(req_valid), .*);


always_comb begin
  if(dcache_req_valid && !reset) begin
    req_valid_next      = 1'b1;
    dcache_req_offset = {core_req_pc[3:0],1'b0};
    dcache_req_index  = core_req_pc[9:4]; 
    dcache_req_tag    = core_req_pc[62:10];
  end
end

always_comb begin
  case(dcache_req_offset)
    //only multiples of 4 should be used 
    0:  dcache_ack_data_next = dc_data[dcache_req_index][32-1:0];
    2:  dcache_ack_data_next = dc_data[dcache_req_index][(32+16-1):(0+16)]; // Should not happen in our codes, but may in testbench
    4:  dcache_ack_data_next = dc_data[dcache_req_index][(32*2-1):(32*1)];
    6:  dcache_ack_data_next = dc_data[dcache_req_index][(32*2+16-1):(32*1+16)];
    8:  dcache_ack_data_next = dc_data[dcache_req_index][(32*3-1):(32*2)]; // 2001 verilog
    10: dcache_ack_data_next = dc_data[dcache_req_index][(32*3+16-1):(32*2+16)];
    12: dcache_ack_data_next = dc_data[dcache_req_index][(32*4-1):(32*3)];
    14: dcache_ack_data_next = dc_data[dcache_req_index][(32*4+16-1):(32*3+16)];
    16: dcache_ack_data_next = dc_data[dcache_req_index][(32*5-1):(32*4)];
    18: dcache_ack_data_next = dc_data[dcache_req_index][(32*5+16-1):(32*4+16)];
    20: dcache_ack_data_next = dc_data[dcache_req_index][(32*6-1):(32*5)];
    22: dcache_ack_data_next = dc_data[dcache_req_index][(32*6+16-1):(32*5+16)];
    24: dcache_ack_data_next = dc_data[dcache_req_index][(32*7-1):(32*6)];
    26: dcache_ack_data_next = dc_data[dcache_req_index][(32*7+16-1):(32*6+16)];
    28: dcache_ack_data_next = dc_data[dcache_req_index][(32*8-1):(32*7)]; 
    default: begin
      dcache_ack_data_next = 32'hdeaddead;
    end
  endcase

  if( !reset && (dcache_req_valid ||req_valid ) && dc_tag[dcache_req_index] == dcache_req_tag && dc_valid[dcache_req_index] ==1'b1) begin
    dcache_ack_valid_next = 1'b1;
    dcache_req_addr_valid_next = 1'b0;
    req_valid_next = 0;
  end else if(dcache_req_valid) begin
    dcache_req_addr_valid_next = 1'b1;
    dcache_ack_valid_next = 1'b0;
  end else begin
    dcache_req_addr_valid_next = 1'b0;
    dcache_ack_valid_next = 1'b0;
  end
end

always_comb begin
  dcache_req_addr_next = core_req_pc[62:4];
end

always_comb begin
  dc_data_we = 0;
  dc_tag_we  = 0;
  dc_valid = 0;
  if (dcache_ack_data_valid) begin
    dc_data_we   = 1;
    dc_tag_we    = 1;
    dc_valid  = 1;

  end
end

always @(posedge clk) begin
  if(reset) begin
    dc_valid [clear_idx] <= 0;
    clear_idx <= clear_idx + 1;
  end else begin
    if(dc_data_we)
      dc_data[dcache_req_index] <= dcache_ack_data;
    if(dc_tag_we)
      dc_tag[dcache_req_index] <= dcache_req_tag;
    if(dc_valid)
      dc_valid[dcache_req_index] <= 1'b1;
  end
end

//to the testbench
fflop #(.Size(59)) ff_req (
  .din(dcache_req_addr_next),
  .dinValid(dcache_req_addr_valid_next),
  .dinRetry(),

  .q(dcache_req_addr),
  .qValid(dcache_req_addr_valid),
  .qRetry(dcache_req_addr_retry),
  .*
);

//to decode
fflop #(.Size(64))ff_ack_insn (
  .din(dcache_ack_data_next),
  .dinValid(dcache_ack_valid_next),
  .dinRetry(core_req_pc_retry),

  .q({core_ack_insn, next_pc}),
  .qValid(core_ack_insn_valid),
  .qRetry(core_ack_insn_retry),
  .*
);

endmodule

