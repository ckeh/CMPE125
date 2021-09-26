module signext(
  input             clk,
  input             reset,
  input  [31:0]     insn,
  input             insn_valid,

  output [63:0]     sign_ext
);

  reg [63:0] sign_ext_next;

  reg [11:0] imm12; //jalr, imm op, addiw
  reg [19:0] imm20; //auipc

  reg [12:0] branchimm; //branches
  reg [20:0] jalimm; //jal

  reg [6:0] op;

  //parsing of insn
  always @(*) begin
    branchimm = {insn[31], insn[7], insn[30:25], insn[11:8], 1'b0};
    jalimm    = {insn[31], insn[19:12], insn[20], insn[30:21], 1'b0};
    imm12     = insn[31:20];
    imm20     = insn[31:12];
    op        = insn[6:0];
  end


//branch
        //  branch_target_next        = pc + signed'({{51{insn[31]}},insn[31], insn[7], insn[30:25], insn[11:8], 1'b0});
      //JAL
        //  branch_target_next = pc + signed'({{43{insn[31]}},insn[31], insn[19:12], insn[20], insn[30:21], 1'b0});


  always @(*) begin
    casez (op)
      7'b1100011: sign_ext_next = {{51{branchimm[12]}},branchimm}; //branch operations
      7'b1101111: sign_ext_next = {{43{jalimm[20]}},jalimm}; //jal op
      7'b0010111: sign_ext_next = {{32{imm20[19]}},imm20,{12{1'b0}}}; //auipc
      default   : sign_ext_next = {{52{imm12[11]}},imm12}; //everything else will use the 12bit imm or none at all
    endcase
  end

  flop_e #(.Bits(64))f_sign_ext ( .clk(clk), .reset(reset), .d(sign_ext_next), .q(sign_ext), .we(insn_valid));
endmodule
