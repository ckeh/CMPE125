
// Main Characteristics:
//
// cache hit in 1 cycle
// cache miss random delay provided by testbench (2-20 cycles)
//
// 64 entries in cache (64 cache lines). Index has 6 bits
//
// cache line has 256bits == 32bytes, offset (byte in slides) has 5bits
//
// tag has 64-6-5 == 53bits tag
//
// Align core_req_pc, Not allowed address 31,30,29, 27 25 23 21 19...
//

module icache(
  input clk,
  input reset,

  // top level interface
  output          icache_ack_data_retry,
  input           icache_ack_data_valid,
  input  [255:0]  icache_ack_data,

  output [63-5:0] icache_req_addr,   // lower 5 bits are always zero
  output          icache_req_addr_valid,
  input           icache_req_addr_retry,

  //--------------------core interface---------------------
  //from execute 
  input  [63-1:0] core_req_pc, // Bit 0 is always zero
  input           core_req_pc_valid,
  output          core_req_pc_retry,
  output [63-1:0] next_pc,

  //to decode
  output [31:0] core_ack_insn,
  output        core_ack_insn_valid,
  input         core_ack_insn_retry
  );

reg ic_valid_we;
reg ic_data_we; // write enable if pc request is valid
reg ic_tag_we; 

//storage for icache
reg             ic_valid [63:0]; //valid bit of icache
reg [63-5-6:0]  ic_tag   [63:0]; //tag of data in icache
reg [255:0]     ic_data  [63:0]; //cache size

reg             core_ack_insn_valid_next; //valid when we send an insn
reg [31:0]      core_ack_insn_next;

reg             icache_req_addr_valid_next;
reg [63-5:0]    icache_req_addr_next; 

reg [4:0]   pc_req_offset; 
reg [5:0]   pc_req_index;
reg [52:0]  pc_req_tag;

reg [5:0]  clear_idx;

wire pc_valid;
wire pc_valid_next;
flop f_pc_valid ( .d(pc_valid_next), .q(pc_valid), .*);


always_comb begin
  if(core_req_pc_valid && !reset) begin
    pc_valid_next      = 1'b1;
    pc_req_offset = {core_req_pc[3:0],1'b0};
    pc_req_index  = core_req_pc[9:4]; 
    pc_req_tag    = core_req_pc[62:10];
  end
end

always_comb begin
  case(pc_req_offset)
    //only multiples of 4 should be used 
    0:  core_ack_insn_next = ic_data[pc_req_index][32-1:0];
    2:  core_ack_insn_next = ic_data[pc_req_index][(32+16-1):(0+16)]; // Should not happen in our codes, but may in testbench
    4:  core_ack_insn_next = ic_data[pc_req_index][(32*2-1):(32*1)];
    6:  core_ack_insn_next = ic_data[pc_req_index][(32*2+16-1):(32*1+16)];
    8:  core_ack_insn_next = ic_data[pc_req_index][(32*3-1):(32*2)]; // 2001 verilog
    10: core_ack_insn_next = ic_data[pc_req_index][(32*3+16-1):(32*2+16)];
    12: core_ack_insn_next = ic_data[pc_req_index][(32*4-1):(32*3)];
    14: core_ack_insn_next = ic_data[pc_req_index][(32*4+16-1):(32*3+16)];
    16: core_ack_insn_next = ic_data[pc_req_index][(32*5-1):(32*4)];
    18: core_ack_insn_next = ic_data[pc_req_index][(32*5+16-1):(32*4+16)];
    20: core_ack_insn_next = ic_data[pc_req_index][(32*6-1):(32*5)];
    22: core_ack_insn_next = ic_data[pc_req_index][(32*6+16-1):(32*5+16)];
    24: core_ack_insn_next = ic_data[pc_req_index][(32*7-1):(32*6)];
    26: core_ack_insn_next = ic_data[pc_req_index][(32*7+16-1):(32*6+16)];
    28: core_ack_insn_next = ic_data[pc_req_index][(32*8-1):(32*7)]; 
    default: begin
      core_ack_insn_next = 32'hdeaddead;
    end
  endcase

  if( !reset && (core_req_pc_valid ||pc_valid ) && ic_tag[pc_req_index] == pc_req_tag && ic_valid[pc_req_index] ==1'b1) begin
    core_ack_insn_valid_next = 1'b1;
    icache_req_addr_valid_next = 1'b0;
    pc_valid_next = 0;
  end else if(core_req_pc_valid) begin
    icache_req_addr_valid_next = 1'b1;
    core_ack_insn_valid_next = 1'b0;
  end else begin
    icache_req_addr_valid_next = 1'b0;
    core_ack_insn_valid_next = 1'b0;
  end
end

always_comb begin
  icache_req_addr_next = core_req_pc[62:4];
end

always_comb begin
  ic_data_we = 0;
  ic_tag_we  = 0;
  ic_valid_we = 0;
  if (icache_ack_data_valid) begin
    ic_data_we   = 1;
    ic_tag_we    = 1;
    ic_valid_we  = 1;

  end
end

always @(posedge clk) begin
  if(reset) begin
    ic_valid [clear_idx] <= 0;
    clear_idx <= clear_idx + 1;
  end else begin
    if(ic_data_we)
      ic_data[pc_req_index] <= icache_ack_data;
    if(ic_tag_we)
      ic_tag[pc_req_index] <= pc_req_tag;
    if(ic_valid_we)
      ic_valid[pc_req_index] <= 1'b1;
  end
end

//to the testbench
fflop #(.Size(59)) ff_req (
  .din(icache_req_addr_next),
  .dinValid(icache_req_addr_valid_next),
  .dinRetry(),

  .q(icache_req_addr),
  .qValid(icache_req_addr_valid),
  .qRetry(icache_req_addr_retry),
  .*
);

//to decode
fflop #(.Size(32+63))ff_ack_insn (
  .din({core_ack_insn_next, core_req_pc}),
  .dinValid(core_ack_insn_valid_next),
  .dinRetry(core_req_pc_retry),

  .q({core_ack_insn, next_pc}),
  .qValid(core_ack_insn_valid),
  .qRetry(core_ack_insn_retry),
  .*
);

endmodule

