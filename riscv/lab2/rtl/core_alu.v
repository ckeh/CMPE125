

// Lab2:
//
// The goal of this task is to implement a RISC V ALU
//
// The RISC V ISA is explained in http://riscv.org/spec/riscv-spec-v2.0.pdf 
//
// For lab2, you should implement all the arirthmetic and control flow
// instructions from RV32I and RV64I (NOT LD/ST. not fences, not syscalls, or RD*)
// The list is in page 50-51.
//
// You should have a core_alu_tb.cpp that runs in verilator (start with class
// sample3). The testbench should test all the instructions.
//
// The ALU should take 1 cycle to perform the operation. This means that it
// has just flops that are already instantiated, no more.
//
// All the code should be synthesizable, you can use Verilog 2001. This means
// that no implicit lathes, no directives non-synthesizable like # or
// initial...
//
// The TA will evaluate the correctness running his own core_alu_tb.cpp
// testbench that will test several instructions. The grade will depend 
// on the compilation, being synthesizable, and the % of test passing.
//
//


//`include "riscv_opcodes.h"

module core_alu(
  input clk,
  input reset,          // reset is active high (1 == reset, 0 == no reset)

  /* verilator lint_off UNUSED */
  input [31:0] insn, 

  input [63:0] pc,      // PC of the current instruction (needed for control flow instructions)
  /* verilator lint_on UNUSED */

  input [63:0] src1,    // data in src1. E.g: add R1,R2,R3 -> R1 = R2+R3. src1 has the contents of R2
  input [63:0] src2,    // data in src2 

  output        dest_enable, // True, if a value must be written to the destination register file
  output        dest_long,   // true, the destination is 64bits, otherwise 32bits
  output [63:0] dest,        // value of the operation result (some may not have result like branches or nops)

  output        branch_target_enable,  // True, when the following instruction is something different from PC+4
  output [63:0] branch_target          // target address when branch_target_enable is true
);

  
  wire        dest_enable_next;
  wire        dest_long_next;
  wire [63:0] dest_next;

  wire        branch_target_enable_next;
  wire [63:0] branch_target_next;

  // INSERT YOUR LAB CODE HERE!!

  localparam  LOAD      = 7'b0000011;
  localparam  LOAD_FP   = 7'b0000111;
  localparam  CUSTOM_0  = 7'b0001011;
  localparam  MISC_MEM  = 7'b0001111;
  localparam  OP_IMM    = 7'b0010011;
  localparam  AUIPC     = 7'b0010111;
  localparam  OP_IMM_32 = 7'b0011011;
  localparam  STORE     = 7'b0100011;
  localparam  STORE_FP  = 7'b0100111;
  localparam  CUSTOM_1  = 7'b0101011;
  localparam  AMO       = 7'b0101111;
  localparam  OP        = 7'b0110011;
  localparam  LUI       = 7'b0110111;
  localparam  OP_32     = 7'b0111011;
  localparam  MADD      = 7'b1000011;
  localparam  MSUB      = 7'b1000111;
  localparam  NMSUB     = 7'b1001011;
  localparam  NMADD     = 7'b1001111;
  localparam  OP_FP     = 7'b1010011;
  localparam  CUSTOM_2  = 7'b1011011;
  localparam  BRANCH    = 7'b1100011;
  localparam  JALR      = 7'b1100111;
  localparam  JAL       = 7'b1101111;
  localparam  SYSTEM    = 7'b1110011;
  localparam  CUSTOM_3  = 7'b1111011;


  reg [6:0] opcode;
  //reg [4:0] shamt;
  reg [2:0] funct3;
  reg [6:0] funct7;
  //reg [4:0] rs1;
  //reg [4:0] rd;
  always @(*) begin
`ifndef VALID_CODE_TOO
    opcode = insn[6:0];
    //shamt  = insn[24:20];
    funct3 = insn[14:12];
    funct7 = insn[31:25];
`else
    {funct7, shamt, rs1, funct3, rd, opcode} = insn;
`endif
  end

  localparam FUNCT3_ADD = 3'b000;
  localparam FUNCT3_SUB = 3'b000;

  localparam FUNCT7_ADD = 7'b0000000;
  localparam FUNCT7_SUB = 7'b0100000;

  `ifdef NOTUSEDNOW
  signed reg [63:0] foo1;
  signed reg [31:0] foo2;
  signed reg [63:0] signed_shift;

  always @(*) begin
    // foo1 = foo2; // Not what you may expect (foo1[63:32] == 0 even for negative numbers)

    foo1 = src1;
    foo2 = src2;

    sign_cmp = foo1 < foo2;
  end
`endif

  always @(*) begin
    branch_target_enable_next = 0; // FIXME
    branch_target_next = 0; // FIXME

    //if (opcode == `OP) begin // If I use a define, must use `
    if (opcode == OP) begin
      dest_enable_next = 1;
      dest_long_next   = 1;
      casez ({funct7,funct3})
        {FUNCT7_ADD , FUNCT3_ADD }:  dest_next = src1 + src2;
        {FUNCT7_SUB , FUNCT3_SUB }:  dest_next = src1 - src2;
        // {7'b??110?0 , 
        //{FUNCT7_SLT , FUNCT3_SLT }:  dest_next = sign_cmp;
        //{FUNCT7_SLTU, FUNCT3_SLTU}:  dest_next = src1 < src2;

        /*
        SLL:  dest_next = src1 << shamt;
        SLT:  dest_next = signed'(src1) < signed'(src2);
        SLT:  dest_next = sign_cmp;
        SLTU: dest_next = src1 < src2;
        XOR:  dest_next = src1 ^ src2;
        SRL:  dest_next = src1 >> shamt;
        SRA:  dest_next = signed'(src1) >>> shamt;
        OR:   dest_next = src1 | src2;
        AND:  dest_next = src1 & src2;*/
        default: dest_next = 64'bx;
      endcase
    end else begin
      dest_enable_next = 0;
      dest_long_next   = 1'bx;
      dest_next = 64'bx;
    end
  end


  flop #(.Bits(64+1)) f1(
    .clk(clk),
    .reset(reset),
    .d({branch_target_next,branch_target_enable_next}),
    .q({branch_target     ,branch_target_enable     })
  );

  flop #(.Bits(64+1+1)) f2(
    .clk(clk),
    .reset(reset),
    .d({dest_next,dest_long_next,dest_enable_next}),
    .q({dest     ,dest_long     ,dest_enable     })
  );

endmodule

