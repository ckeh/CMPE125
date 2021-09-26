
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

  wire        fetch_insn_valid;
  wire        fetch_insn_retry;
  wire [31:0] fetch_insn;

 fetch f(.clk(clk), .*);

 decode d FIXME

 execute e FIXME

endmodule

