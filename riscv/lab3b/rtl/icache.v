
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
  input          icache_ack_data_valid,
  input  [255:0] icache_ack_data,

  output [63-5:0] icache_req_addr,   // lower 5 bits are always zero
  output        icache_req_addr_valid,

  // core interface
  input  [63-1:0] core_req_pc, // Bit 0 is always zero
  input         core_req_pc_valid,

  output [31:0] core_ack_insn,
  output        core_ack_insn_valid
);

 wire ic_valid;
 reg ic_valid_next;

 reg [63-5:0]  ic_tag;
 reg [255:0]   ic_data;

 reg core_ack_insn_valid_next;

 reg [5:0]  req_offset;
 always_comb begin
   req_offset = {core_req_pc[4:0],1'b0};
 end

 always_comb begin
   case(req_offset)
     0: core_ack_insn_next = ic_data[31:0]
     2: core_ack_insn_next = ic_data[48-1:16] // Should not happen in our codes, but may in testbench
     4: core_ack_insn_next = ic_data[(32*2-1):(32*1)];
     6: core_ack_insn_next = ic_data[(32*2+16-1):(32*1+16)]
     8: core_ack_insn_next = ic_data[(32*3-1)-:32]; // 2001 verilog
     10: core_ack_insn_next = ic_data;
     12: core_ack_insn_next = ic_data;
     14: core_ack_insn_next = ic_data;
     16: core_ack_insn_next = ic_data;
     18: core_ack_insn_next = ic_data;
     20: core_ack_insn_next = ic_data;
     22: core_ack_insn_next = ic_data;
     24: core_ack_insn_next = ic_data;
     26: core_ack_insn_next = ic_data;
     28: core_ack_insn_next = ic_data;
     default: begin
       core_ack_insn_next = 32'hdeaddead;
     end
   endcase
 end

 always_comb
   icache_req_addr_next = core_req_pc[63:5];
   ic_tag_we            = core_req_pc[63:5];
 end

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

 always_comb begin
   ic_data_we = 0;
   if (icache_ack_data_valid) begin
     ic_data_we   = 1;
     ic_data_next = icache_ack_data;
   end
 end

 flop_e ic_data (
   .clk(clk),
   .reset(reset),
   .we(ic_data_we),
   .d (ic_data_next)
   .q (ic_data)
   );



 // Missing flop for icache_req, ic_tag, ic_data

 flop f_valid (
   .clk   (clk),
   .reset (reset),
   .d     (ic_valid_next),
   .q     (ic_valid));


endmodule

