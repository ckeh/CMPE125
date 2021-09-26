

module alu(
  input clk,
  input reset,

  // All the inputs come from decode stage
  output       insn_retry, // set if branch_target_retry AND new inst_valid (always false in lab3)
  input        insn_valid, 
  input [31:0] insn, 

  input [63:0] pc,

  input [63:0] sign_ext, 

  input [63:0] src1, 
  input [63:0] src2,


  // From execute to register file (decode)
  // No need, RF always accepts writes input         dest_retry, 
  output        dest_valid,
  output        dest_long,
  output [63:0] dest,    

  // From execute to fetch
  input         branch_target_retry, 
  output        branch_target_valid,
  output [63:0] branch_target
);


endmodule

