
module execute(
  input clk,
  input reset,

  // from decode to execute
  output        decode_retry, 
  input         decode_valid, 
  input  [31:0] decode_insn, 
  input  [63:0] decode_pc,
  input  [63:0] decode_sign_ext, 
  input  [63:0] decode_src1, 
  input  [63:0] decode_src2,
  

  // from execute to fetch
  output           execute_valid,
  input            execute_retry, 
  output  [63-1:0] execute_pc,

  // from execute to decode
  output        dest_valid,
  output        dest_long,
  output [63:0] dest

);

 // instantiate ALU here

endmodule

