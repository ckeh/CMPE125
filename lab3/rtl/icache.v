
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
  input           icache_ack_data_valid,
  input  [255:0]  icache_ack_data,

  output [63-5:0] icache_req_addr,   // lower 5 bits are always zero
  output          icache_req_addr_valid,

  // core interface
  
  //from execute 
  input  [63-1:0] core_req_pc, // Bit 0 is always zero
  input         core_req_pc_valid,

  //to decode
  output [31:0] core_ack_insn,
  output        core_ack_insn_valid
);

 //wire ic_valid;
  //reg            ic_valid_next;
  //reg [255:0]    ic_data_next;
  //reg [63-5-6:0] ic_tag_next;

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

      //$display("pc_req_offset = %h", pc_req_offset);
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

    //if(core_req_pc_valid) begin
      if( !reset && (core_req_pc_valid || pc_valid ) && ic_tag[pc_req_index] == pc_req_tag && ic_valid[pc_req_index] ==1'b1) begin
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
    //end else begin
    //  core_ack_insn_valid_next = 1'b0;
    //  icache_req_addr_valid_next = 1'b0;
    //end
  end

  always_comb begin
    icache_req_addr_next = core_req_pc[62:4];
  end

  


// supposed to deal with when cache miss/hit
/*
 always_comb begin
   core_ack_insn_valid_next = 0;
   icache_req_addr_valid_next = 0;

   if (icache_req_addr_valid) begin
     if (icache_req_addr[63:5] == ic_tag) begin
       core_ack_insn_valid_next = 1;
     end else begin
       icache_req_addr_valid_next = 1;
       ic_tag_we = 1;
     end
   end
 end
 */

  always_comb begin
    ic_data_we = 0;
    ic_tag_we  = 0;
    ic_valid_we = 0;
    //ic_valid_next = 0;
    if (icache_ack_data_valid) begin
      ic_data_we   = 1;
      ic_tag_we    = 1;
      ic_valid_we  = 1;
      //ic_data_next = icache_ack_data;
      //ic_tag_next  = pc_req_tag;
      //ic_valid_next= 1'b1;
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

  /*
  flop_e #(.Bits(256)) f_ic_data (
    .clk(clk),
    .reset(reset),
    .we(ic_data_we & core_req_pc_valid),
    .d (ic_data_next),
    .q (ic_data[pc_req_index])
  );
*/

 // Missing flop for icache_req, ic_tag, ic_data
  flop #(.Bits(59)) f_icache_req (
    .clk(clk),
    .reset(reset),
    .d(icache_req_addr_next),
    .q(icache_req_addr)
  );

  flop f_icache_valid (
    .d(icache_req_addr_valid_next),
    .q(icache_req_addr_valid),
    .*
  );

/*
  flop_e #(.Bits(53))f_ic_tag (
    .clk(clk),
    .reset(reset),
    .we(ic_tag_we & core_req_pc_valid),
    .d(ic_tag_next),
    .q(ic_tag[pc_req_index])
  );



  flop_e f_valid (
    .clk   (clk),
    .reset (reset),
    .we    (ic_valid_we & core_req_pc_valid),
    .d     (ic_valid_next),
    .q     (ic_valid)
  );
*/
  flop #(.Bits(32))f_ack_insn (
    .d(core_ack_insn_next),
    .q(core_ack_insn),
    .*
  );

  flop f_ack_insn_valid (
    .d(core_ack_insn_valid_next),
    .q(core_ack_insn_valid),
    .*
  );

endmodule

