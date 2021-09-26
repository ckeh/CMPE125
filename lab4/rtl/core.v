
module core(
  input clk,
  input reset,

  // icache interface
  output         icache_ack_data_retry,
  input          icache_ack_data_valid,
  input  [255:0] icache_ack_data,

  output [63:0] icache_req_addr,
  output        icache_req_addr_valid,
  input         icache_req_addr_retry,

  // dcache interface (from execute to testbench)
  output [63:0] dcache_req_addr,  // load or store address computed at execute
  output [63:0] dcache_req_data, // data just for the store going to from exe to testbench
  output [3:0]  dcache_req_op,  // RVMOP_*
  output [4:0]  dcache_req_rd,  // destination register for the load
  output        dcache_req_valid,
  input         dcache_req_retry,

  // dcache interface from testbench to decode
  input  [63:0] dcache_ack_data,
  input  [4:0]  dcache_ack_rd,  // destination register for the load
  input         dcache_ack_valid,
  output        dcache_ack_retry, // ALWAYS_FALSE

  // Debug interface
  output [63:0] debug_pc_ex,

  output        debug_dest_valid,
  output [63:0] debug_dest,
  output  [4:0] debug_dest_rd,
  output        debug_dest_long
);

  wire            fetch_valid;
  wire            fetch_retry;
  wire [31:0]     fetch_insn;
  wire [63-1:0]   fetch_pc;

  wire            execute_valid;
  wire [63-1:0]   execute_pc;
  wire            execute_retry;

  wire            decode_retry;
  wire            decode_valid;
  wire [31:0]     decode_insn;
  wire [63:0]     decode_pc;
  wire [63:0]     decode_sign_ext;
  wire [63:0]     decode_src1;
  wire [63:0]     decode_src2;

  wire [4:0]      dest_rd;
  wire            dest_valid;
  wire            dest_long;
  wire            dest_retry;
  wire            dest_clear;
  wire [63:0]     dest_data;


  wire [63-5:0]     req_addr;
  assign icache_req_addr = {req_addr, 5'b0};


  assign debug_pc_ex = decode_pc;
  assign debug_dest_valid = dest_valid;
  assign debug_dest = dest_data;
  assign debug_dest_rd = dest_rd;
  assign debug_dest_long = dest_long;

 fetch f( 
   .clk(clk), 
   .reset(reset),

   //toplevel 
   .icache_ack_data_retry(icache_ack_data_retry),//FIXME
   .icache_ack_data_valid(icache_ack_data_valid),
   .icache_ack_data(icache_ack_data),

   .icache_req_addr_retry(icache_req_addr_retry),//FIXME
   .icache_req_addr_valid(icache_req_addr_valid),
   .icache_req_addr(req_addr),
   
   //from execute to fetch
   .execute_valid(execute_valid),
   .execute_retry(execute_retry),
   .execute_pc(execute_pc),

   //from fetch to decode
   .fetch_valid(fetch_valid),
   .fetch_retry(fetch_retry),
   .fetch_insn(fetch_insn),
   .fetch_pc(fetch_pc)
 );

 decode d( 
   .clk(clk),
   .reset(reset),

   //from fetch to decode
   .fetch_insn(fetch_insn),
   .fetch_valid(fetch_valid),
   .fetch_retry(fetch_retry),
   .fetch_pc({fetch_pc,1'b0}),
   
   //from decode to execute
   .decode_retry(decode_retry), // (always false in lab3)
   .decode_valid(decode_valid), 
   .decode_insn(decode_insn), 
   .decode_pc(decode_pc),
   .decode_sign_ext(decode_sign_ext), 
   .decode_src1(decode_src1), 
   .decode_src2(decode_src2),

  // from execute to decode
   .dest_valid(dest_valid),
   .dest_retry(dest_retry),//FIXME
   .dest_rd(dest_rd),
   .dest_long(dest_long),
   .dest_data(dest_data),
   .dest_clear(dest_clear), //FIXME

  //dcache
   .dcache_ack_data(dcache_ack_data), //FIXME
   .dcache_ack_rd(dcache_ack_rd),
   .dcache_ack_valid(dcache_ack_valid),
   .dcache_ack_retry(dcache_ack_retry)
 );

 execute e( 
   .clk(clk),
   .reset(reset),

  // from decode to execute
   .decode_retry(decode_retry), 
   .decode_valid(decode_valid), 
   .decode_insn(decode_insn), 
   .decode_pc(decode_pc),
   .decode_sign_ext(decode_sign_ext), 
   .decode_src1(decode_src1), 
   .decode_src2(decode_src2),
 

  // from execute to fetch
   .execute_valid(execute_valid),
   .execute_retry(execute_retry), 
   .execute_pc(execute_pc),

  // from execute to decode
   .dest_valid(dest_valid),
   .dest_retry(dest_retry), //FIXME
   .dest_rd(dest_rd),
   .dest_long(dest_long),
   .dest_data(dest_data),
   .dest_clear(dest_clear), //FIXME

  // from execute to testbench
   .dcache_req_addr(dcache_req_addr), //FIXME
   .dcache_req_data(dcache_req_data),
   .dcache_req_op(dcache_req_op),
   .dcache_req_rd(dcache_req_rd),
   .dcache_req_valid(dcache_req_valid),
   .dcache_req_retry(dcache_req_retry)

 );

endmodule

