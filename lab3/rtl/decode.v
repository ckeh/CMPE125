
module decode(
  input clk,
  input reset,

  // From fetch to decode
  input [31:0] fetch_insn,
  input        fetch_insn_valid,
  output       fetch_insn_retry, // always false in lab3
  input [63:0] fetch_pc,

  // from decode to execute
  input         decode_retry, // (always false in lab3)
  output        decode_valid, 
  output [31:0] decode_insn, 
  output [63:0] decode_pc,
  output [63:0] decode_sign_ext, 
  output [63:0] decode_src1, 
  output [63:0] decode_src2,

  // from execute to decode
  input [4:0]   dest_rd,
  input         dest_valid,
  input         dest_long,
  input  [63:0] dest
  
);

  assign fetch_insn_retry = 1'b0; //will change in next lab
  flop f_retry                   ( .d(decode_retry), .q(fetch_insn_retry), .*);
  
  
  
  flop d_valid ( .d(fetch_insn_valid), .q(decode_valid),.*);// .we(fetch_insn_valid),.*);
  flop_er #(.Bits(64), .Reset_Value(64'b0)) d_pc       ( .d(fetch_pc), .q(decode_pc), .we(fetch_insn_valid), .*);
  flop_e #(.Bits(32)) d_insn     ( .d(fetch_insn), .q(decode_insn), .we(fetch_insn_valid), .*);

  wire [4:0] rs1;
  wire [4:0] rs2;

  assign rs2 = fetch_insn[24:20];
  assign rs1 = fetch_insn[19:15];


  //wire dest_valid_next;
  //flop f_dest_rd ( .d(dest_valid), .q(dest_valid_next), .*);

 // reg file
  regfile r (
    .clk(clk), 
    .reset(reset), 
    .rs1(rs1),
    .rs2(rs2),
    .rd(dest_rd),

    .we(dest_valid), // Write enable

    .dest(dest),
    .dest_long(dest_long),

    .data1(decode_src1),
    .data2(decode_src2)
  ); 

 // sign ext
  signext s (.clk(clk), .reset(reset), .insn(fetch_insn), .insn_valid(fetch_insn_valid), .sign_ext(decode_sign_ext));

endmodule

