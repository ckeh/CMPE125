
module fetch(
  input clk,
  input reset,

  // top level interface
  // output         icache_ack_data_retry, Never, we always accept pending request
  input          icache_ack_data_valid,
  input  [255:0] icache_ack_data,

  output [63-5:0] icache_req_addr,   // lower 5 bits are always zero
  output          icache_req_addr_valid,
  // input           icache_req_addr_retry, Never, testbench always accepts new requests

  // from execute to fetch
  input           execute_valid,
  output          execute_retry, // Set if icache miss
  input  [63-1:0] execute_pc,    // icache calls it core_req_pc, // Bit 0 is always zero

  // From fetch to decode
  output        fetch_insn_valid,
  input         fetch_insn_retry, // always false in lab3
  output [31:0] fetch_insn  // core_ack_insn in icache

);

 // i cache here

endmodule

