
module decode(
  input clk,
  input reset,

  // From fetch to decode
  input [31:0] fetch_insn,
  input        fetch_insn_valid,
  output       fetch_retry // always false in lab3

  // from decode to execute
  input         decode_retry, // (always false in lab3)
  output        decode_valid, 
  output [31:0] decode_insn, 
  output [63:0] decode_pc,
  output [63:0] decode_sign_ext, 
  output [63:0] decode_src1, 
  output [63:0] decode_src2,

  // from execute to decode
  input         dest_valid,
  input         dest_long,
  input  [63:0] dest
  
);

 // reg file
 //
 // sign ext


endmodule

