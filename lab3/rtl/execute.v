
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
  output [4:0]  dest_rd,
  output        dest_valid,
  output        dest_long,
  output [63:0] dest

);

//assign  execute_valid = 1;
flop_r #(.Reset_Value(1)) f_valid ( .d(decode_valid), .q(execute_valid),.*);
//flop_r #(.Bits(63),.Reset_Value(-4)) f_pc ( .d(), .q(execute_pc),.*);

//maybe
//wire execute_valid_hold;
//flop f_valid_hold ( .d(execute_valid_hold), .q(execute_valid), .*);

assign decode_retry = 1'b0;
flop f_retry ( .d(execute_retry), .q(decode_retry), .*);

wire [4:0] dest_rd_next;
/*verilator lint_off UNUSED*/
wire [63:0] pc;
/*verilator lint_on UNUSED*/

flop_er #(.Bits(64),.Reset_Value(64'b0)) f_pc ( .d(decode_pc+4), .q(pc), .we(decode_valid), .*);
//assign pc = decode_pc+4;
assign dest_rd_next = decode_insn [11:7];

wire branch_target_valid;

// bit 0 on branch_target_pc isnt used
/*verilator lint_off UNUSED*/
wire [63:0] branch_target_pc;
/*verilator lint_on UNUSED*/

// instantiate ALU here
  alu a (
    .clk(clk),
    .reset(reset),

    // All the inputs come from decode stage
    .insn_retry(decode_retry),// set if branch_target_retry AND new inst_valid (always false in lab3)
    .insn_valid(decode_valid), 
    .insn(decode_insn), 

    .pc(decode_pc),

    .sign_ext(decode_sign_ext), 
    .src1(decode_src1), 
    .src2(decode_src2),


  // From execute to register file (decode)
  // No need, RF always accepts writes input         dest_retry, 
    .dest_valid(dest_valid),
    .dest_long(dest_long),
    .dest(dest),    

  // From execute to fetch
    .branch_target_retry(execute_retry), 
    .branch_target_valid(branch_target_valid),
    .branch_target(branch_target_pc)

  );
//wire [63-1:0] execute_pc_next;
assign execute_pc = (branch_target_valid)? branch_target_pc[63:1]: (pc[63:1]);
//flop #(.Bits(63)) f_exe_pc ( .d(execute_pc_next), .q(execute_pc), .*);

flop_e #(.Bits(5))dregflop ( .clk(clk), .reset(reset), .we(decode_valid), .d(dest_rd_next), .q(dest_rd));
//flop  f_valid ( .d(decode_valid), .q(execute_valid), .*);

endmodule

