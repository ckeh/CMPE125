module core(
  input clk,
  input reset,

  // icache interface
  input          icache_ack_data_valid,
  input  [255:0] icache_ack_data,

  output [63:0] icache_req_addr,
  output        icache_req_addr_valid,

  // Debug interface
  output [63:0] debug_pc_ex,

  output        debug_dest_valid,
  output [63:0] debug_dest,
  output  [4:0] debug_dest_rd,
  output        debug_dest_long
);

  wire            fetch_insn_valid;
  wire            fetch_insn_retry;
  wire [31:0]     fetch_insn;
  wire [63-1:0]     fetch_pc;

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
  wire [63:0]     dest;


  wire [63-5:0]     req_addr;
  assign icache_req_addr = {req_addr, 5'b0};


  assign debug_pc_ex = decode_pc;
  assign debug_dest_valid = dest_valid;
  assign debug_dest = dest;
  assign debug_dest_rd = dest_rd;
  assign debug_dest_long = dest_long;

 fetch f( 
   .clk(clk), 
   .reset(reset),

   //toplevel 
   .icache_ack_data_valid(icache_ack_data_valid),
   .icache_ack_data(icache_ack_data),
   .icache_req_addr(req_addr),
   .icache_req_addr_valid(icache_req_addr_valid),
   
   //from execute to fetch
   .execute_valid(execute_valid),
   .execute_retry(execute_retry),
   .execute_pc(execute_pc),

   //from fetch to decode
   .fetch_insn_valid(fetch_insn_valid),
   .fetch_insn_retry(fetch_insn_retry),
   .fetch_insn(fetch_insn),
   .fetch_pc(fetch_pc)
 );

 decode d( 
   .clk(clk),
   .reset(reset),

   //from fetch to decode
   .fetch_insn(fetch_insn),
   .fetch_insn_valid(fetch_insn_valid),
   .fetch_insn_retry(fetch_insn_retry),
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
   .dest_rd(dest_rd),
   .dest_valid(dest_valid),
   .dest_long(dest_long),
   .dest(dest)
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
   .dest_rd(dest_rd),
   .dest_valid(dest_valid),
   .dest_long(dest_long),
   .dest(dest)

 );

endmodule

