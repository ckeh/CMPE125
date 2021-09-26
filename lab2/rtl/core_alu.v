

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


  input [31:0] insn, 

  input [63:0] pc,      // PC of the current instruction (needed for control flow instructions)


  input [63:0] src1,    // data in src1. E.g: add R1,R2,R3 -> R1 = R2+R3. src1 has the contents of R2
  input [63:0] src2,    // data in src2 

  output        dest_enable, // True, if a value must be written to the destination register file
  output        dest_long,   // true, the destination is 64bits, otherwise 32bits
  output [63:0] dest,        // value of the operation result (some may not have result like branches or nops)

  output        branch_target_enable,  // True, when the following instruction is something different from PC+4
  output [63:0] branch_target          // target address when branch_target_enable is true
);

  
  reg        dest_enable_next;
  reg        dest_long_next;
  reg [63:0] dest_next;

  reg        branch_target_enable_next;
  reg [63:0] branch_target_next;


  //localparam  LOAD      = 7'b0000011;
  //localparam  LOAD_FP   = 7'b0000111;
  //localparam  CUSTOM_0  = 7'b0001011;
  //localparam  MISC_MEM  = 7'b0001111;
  localparam  OP_IMM    = 7'b0010011;
  localparam  AUIPC     = 7'b0010111;
  localparam  OP_IMM_32 = 7'b0011011;
  //localparam  STORE     = 7'b0100011;
  //localparam  STORE_FP  = 7'b0100111;
  //localparam  CUSTOM_1  = 7'b0101011;
  //localparam  AMO       = 7'b0101111;
  localparam  OP        = 7'b0110011;
  //localparam  LUI       = 7'b0110111;
  localparam  OP_32     = 7'b0111011;
  //localparam  MADD      = 7'b1000011;
  //localparam  MSUB      = 7'b1000111;
  //localparam  NMSUB     = 7'b1001011;
  //localparam  NMADD     = 7'b1001111;
  //localparam  OP_FP     = 7'b1010011;
  //localparam  CUSTOM_2  = 7'b1011011;
  localparam  BRANCH    = 7'b1100011;
  localparam  JALR      = 7'b1100111;
  localparam  JAL       = 7'b1101111;
  //localparam  SYSTEM    = 7'b1110011; //Do we need to do thisx No
  //localparam  CUSTOM_3  = 7'b1111011;


  reg [6:0] opcode;
  reg [4:0] shamt;
  reg [11:0] imm12;
  reg [19:0] imm20;
  reg [2:0] funct3;
  reg [6:0] funct7;

  reg [63:0] signXimm12;
  reg [63:0] signXimm20;
  reg [5:0] shamt6;

  always @(*) begin
    opcode = insn[6:0];
    shamt  = insn[24:20];
    funct3 = insn[14:12];
    funct7 = insn[31:25];
    imm12  = insn[31:20];
    imm20  = insn[31:12];

    signXimm20 =  {{32{imm20[19]}}, imm20 , {12{1'b0}}};
    signXimm12 = {{52{imm12[11]}}, imm12};
    shamt6 = imm12[5:0];

    //$display ("insn = %b\nsrc1 = %b\nsrc2 = %b\ndest = %b", insn,src1,src2,dest);
  end

  //OP
  localparam FUNCT3_ADD   = 3'b000;
  localparam FUNCT3_SUB   = 3'b000;
  localparam FUNCT3_SLL   = 3'b001;
  localparam FUNCT3_SLT   = 3'b010;
  localparam FUNCT3_SLTU  = 3'b011;
  localparam FUNCT3_XOR   = 3'b100;
  localparam FUNCT3_SRL   = 3'b101;
  localparam FUNCT3_SRA   = 3'b101;
  localparam FUNCT3_OR    = 3'b110;
  localparam FUNCT3_AND   = 3'b111;
  
  //OP_IMM
  localparam FUNCT3_ADDI  = 3'b000;
  localparam FUNCT3_SLTI  = 3'b010;
  localparam FUNCT3_SLTIU = 3'b011;
  localparam FUNCT3_XORI  = 3'b100;
  localparam FUNCT3_ORI   = 3'b110;
  localparam FUNCT3_ANDI  = 3'b111;
  localparam FUNCT3_SLLI  = 3'b001;
  localparam FUNCT3_SRLI  = 3'b101;
  localparam FUNCT3_SRAI  = 3'b101;

  //BRANCH
  localparam FUNCT3_BEQ   = 3'b000;
  localparam FUNCT3_BNE   = 3'b001;
  localparam FUNCT3_BLT   = 3'b100;
  localparam FUNCT3_BGE   = 3'b101;
  localparam FUNCT3_BLTU  = 3'b110;
  localparam FUNCT3_BGEU  = 3'b111;

  //OP
  localparam FUNCT7_ADD   = 7'b0000000;
  localparam FUNCT7_SUB   = 7'b0100000;
  localparam FUNCT7_SLL   = 7'b0000000;
  localparam FUNCT7_SLT   = 7'b0000000;
  localparam FUNCT7_SLTU  = 7'b0000000;
  localparam FUNCT7_XOR   = 7'b0000000;
  localparam FUNCT7_SRL   = 7'b0000000;
  localparam FUNCT7_SRA   = 7'b0100000;
  localparam FUNCT7_OR    = 7'b0000000;
  localparam FUNCT7_AND   = 7'b0000000;

  //OP_IMM
  localparam FUNCT7_SLLI  = 7'b0000000;
  localparam FUNCT7_SRLI  = 7'b0000000;
  localparam FUNCT7_SRAI  = 7'b0100000;
  localparam FUNCT6_SLLI  = 6'b000000;
  localparam FUNCT6_SRLI  = 6'b000000;
  localparam FUNCT6_SRAI  = 6'b010000;

  //NO FUNCT 7
  localparam FUNCT7_DC    = 7'b???????;
 
  always @(*) begin

    
/***************************************************************************************
*                                   opcode = OP
*     
***************************************************************************************/
    if (opcode == OP) begin
    //$display ("insn = %b\n (%d) src1 = %b\n (%d) src2 = %b\n (%d) dest_next = %b\n (%d) dest      = %b\n", insn,signed'(src1),src1,signed'(src2),src2,signed'(dest_next),dest_next,signed'(dest),dest);
      dest_enable_next = 1;
      dest_long_next   = 1;
      branch_target_enable_next = 0;
      //branch_target_next = 64'b0; not needed
      casez ({funct7,funct3})
        {FUNCT7_ADD , FUNCT3_ADD}   :  begin
          //$display ("ADD is running");
          dest_next = signed'(src1) + signed'(src2);
        end
        {FUNCT7_SUB , FUNCT3_SUB}   :  begin
          //$display ("SUB is running");
          dest_next = signed'(src1) - signed'(src2);
        end
        {FUNCT7_SLL , FUNCT3_SLL}   :  begin
          //$display("SLL is running");
          dest_next = src1 << src2[5:0];
        end
        {FUNCT7_SLT , FUNCT3_SLT}   :  begin
          //$display("SLT is running");
          dest_next = {64{signed'(src1) < signed'(src2)}};
        end
        {FUNCT7_SLTU , FUNCT3_SLTU} :  begin
          //$display("SLTU is running");
          dest_next = {64{src1 < src2}};
        end
        {FUNCT7_XOR , FUNCT3_XOR}   :  begin
          //$display("XOR is running");
          dest_next = src1 ^ src2;
        end
        {FUNCT7_SRL , FUNCT3_SRL}   :  begin
          //$display("SRL is running");
          dest_next = src1 >> src2[5:0];
        end
        {FUNCT7_SRA , FUNCT3_SRA}   :  begin
          //$display("SRA is running");
          dest_next = signed'(src1) >>> src2[5:0];
        end  
        {FUNCT7_OR , FUNCT3_OR}     :  begin
          //$display("OR is running");
          dest_next = src1 | src2;
        end
        {FUNCT7_AND, FUNCT3_AND}    :  begin
          //$display("AND is running");
          dest_next = src1 & src2;
        end
        default                     :  begin
          //$display("DEFUALT");
          dest_next = 64'dx;
          dest_enable_next = 1'bx;
          dest_long_next = 1'bx;
          branch_target_enable_next = 1'bx;
        end

      endcase


/***************************************************************************************
*                                   opcode = OP_IMM
*     
***************************************************************************************/


    end else if (opcode == OP_IMM) begin
    //$display ("insn = %b\n (%d) src1 = %b\n (%d) src2 = %b\n (%d) dest_next = %b\n (%d) dest      = %b\n", insn,signed'(src1),src1,signed'(src2),src2,signed'(dest_next),dest_next,signed'(dest),dest);
      dest_enable_next = 1;
      dest_long_next = 1;
      branch_target_enable_next = 0;
      //branch_target_next = 64'b0; not needed

      casez ({funct7,funct3})
        {FUNCT7_DC , FUNCT3_ADDI}   :  begin
          //$display("ADDI is running");
          dest_next = signed'(signXimm12) + signed'(src1);
        end
        {FUNCT7_DC , FUNCT3_SLTI}   :  begin
          //$display("SLTI is running");
          dest_next = {64{signed'(signXimm12) > signed'(src1)}};
        end
        {FUNCT7_DC , FUNCT3_SLTIU}  :  begin
          //$display("SLTIU is running");
          dest_next = {64{signXimm12 > src1}};
        end
        {FUNCT7_DC , FUNCT3_XORI}   :  begin
          //$display("XORI is running");
          dest_next = signXimm12 ^ src1;
        end
        {FUNCT7_DC , FUNCT3_ORI}    :  begin
          //$display("ORI is running");
          dest_next = signXimm12 | src1;
        end
        {FUNCT7_DC , FUNCT3_ANDI}   :  begin
          //$display("ANDI is running");
          dest_next = signXimm12 & src1;
        end
        //not needed since we are only doing 64 bits
        //{FUNCT7_SLLI , FUNCT3_SLLI} :  dest_next = src1 << imm12[5:0];
        //{FUNCT7_SRLI , FUNCT3_SRLI} :  dest_next = src1 >> imm12[5:0];
        //{FUNCT7_SRAI , FUNCT3_SRAI} :  dest_next = src1 >>> imm12[5:0];       
        {FUNCT6_SLLI, 1'b? , FUNCT3_SLLI} :  begin
          //$display("SLLI is running");
          dest_next = src1 << shamt6;
        end
        {FUNCT6_SRLI, 1'b? , FUNCT3_SRLI} :  begin
          //$display("SRLI is running");
          dest_next = src1 >> shamt6;
        end
        {FUNCT6_SRAI, 1'b? , FUNCT3_SRAI} :  begin
          //$display("SRAI is running");
          dest_next = signed'(src1) >>> shamt6;
        end
        default                     :  begin
          dest_enable_next = 1'bx;
          dest_long_next = 1'bx;
          branch_target_enable_next = 1'bx;
          dest_next = 64'dx;
        end
      endcase


/***************************************************************************************
*                                   opcode = AUIPC
*     
***************************************************************************************/
    end else if (opcode == AUIPC) begin
    //$display ("insn = %b\n (%d) src1 = %b\n (%d) src2 = %b\n (%d) branch_next = %b\n (%d) branch      = %b\npc = %b\n", insn,signed'(src1),src1,signed'(src2),src2,signed'(branch_target_next),branch_target_next,signed'(branch_target),branch_target,pc);
      //$display("AUIPC is running");
      branch_target_enable_next = 0;
      dest_enable_next = 1;
      dest_long_next = 1'b1;
      dest_next = signed'(signXimm20) + pc;

      
/***************************************************************************************
*                                   opcode = OP_IMM_32
*     
***************************************************************************************/
    end else if (opcode == OP_IMM_32) begin
    //$display ("insn = %b\n (%d) src1 = %b\n (%d) src2 = %b\n (%d) dest_next = %b\n (%d) dest      = %b\n", insn,signed'(src1),src1,signed'(src2),src2,signed'(dest_next),dest_next,signed'(dest),dest);
      dest_enable_next = 1;
      dest_long_next = 0;
      branch_target_enable_next = 0;

      casez ({funct7, funct3})  
        {FUNCT7_DC , FUNCT3_ADD}  :  begin
          //$display("ADDIW is running");
          dest_next = signed'(src1 + signXimm12);  //ADDIW
        end
        {FUNCT7_SLL , FUNCT3_SLL} :  begin
          //$display("SLLIW is running");
          dest_next = src1 << shamt;               //SLLIW
        end
        {FUNCT7_SRL , FUNCT3_SRL} :  begin
          //$display("SRLIW is running");
          dest_next = src1 >> shamt;               //SRLIW
        end
        {FUNCT7_SRA , FUNCT3_SRA} :  begin
          //$display("SRAIW is running");
          dest_next = signed'(src1) >>> shamt;              //SRAIW
        end
        default                   :  begin
          dest_enable_next = 1'bx;
          dest_long_next = 1'bx;
          branch_target_enable_next = 1'bx;
          dest_next = 64'dx;
        end
      endcase



/***************************************************************************************
*                                   opcode = OP_32
*     
***************************************************************************************/
    end else if (opcode == OP_32) begin
    //$display ("insn = %b\n (%d) src1 = %b\n (%d) src2 = %b\n (%d) dest_next = %b\n (%d) dest      = %b\n", insn,signed'(src1),src1,signed'(src2),src2,signed'(dest_next),dest_next,signed'(dest),dest);
      branch_target_enable_next = 0;
      dest_enable_next = 1;
      dest_long_next = 0;
      casez ({funct7, funct3})
        {FUNCT7_ADD , FUNCT3_ADD} : begin
          //$display("ADDW is running");
          dest_next = signed'(src1 + src2);    //ADDW
        end
        {FUNCT7_SUB , FUNCT3_SUB} : begin
          //$display("SUBW is running");
          dest_next = signed'(src1 - src2);    //SUBW
        end
        {FUNCT7_SLL , FUNCT3_SLL} : begin
          //$display("SLLW is running");
          dest_next = src1 << src2[4:0];   //SLLW
        end
        {FUNCT7_SRL , FUNCT3_SRL} : begin
          //$display("SRLW is running");
          dest_next = src1 >> src2[4:0];   //SRLW
        end
        {FUNCT7_SRA , FUNCT3_SRA} : begin
          //$display("SRAW is running");
          dest_next = signed'(src1) >>> src2[4:0];  //SRAW
        end
        default                   : begin
          branch_target_enable_next = 1'bx;
          dest_enable_next = 1'bx;
          dest_long_next = 1'bx;
          dest_next = 64'dx;
        end
      endcase



/***************************************************************************************
*                                   opcode = BRANCH
*     
***************************************************************************************/  
    end else if (opcode == BRANCH) begin
    //$display ("insn = %b\n (%d) src1 = %b\n (%d) src2 = %b\n (%d) branch_next = %b\n (%d) branch      = %b\npc = %b\n", insn,signed'(src1),src1,signed'(src2),src2,signed'(branch_target_next),branch_target_next,signed'(branch_target),branch_target,pc);
      dest_enable_next = 0;
      casez (funct3)
        FUNCT3_BEQ  :  begin
          //$display("BEQ is running");
          branch_target_enable_next = signed'(src1) == signed'(src2);
          branch_target_next        = pc + signed'({{51{insn[31]}},insn[31], insn[7], insn[30:25], insn[11:8], 1'b0});
        end

        FUNCT3_BNE  :  begin
          //$display("BNE is running");
          branch_target_enable_next = signed'(src1) != signed'(src2);
          branch_target_next        = pc + signed'({{51{insn[31]}},insn[31], insn[7], insn[30:25], insn[11:8], 1'b0});
        end

        FUNCT3_BLT  :  begin
          //$display("BLT is running");
          branch_target_enable_next = signed'(src1) < signed'(src2);
          branch_target_next        = pc + signed'({{51{insn[31]}},insn[31], insn[7], insn[30:25], insn[11:8], 1'b0});
        end

        FUNCT3_BGE  :  begin
          //$display("BGE is running");
          branch_target_enable_next = signed'(src1) >= signed'(src2);
          branch_target_next        = pc + signed'({{51{insn[31]}},insn[31], insn[7], insn[30:25], insn[11:8], 1'b0});
        end

        FUNCT3_BLTU :  begin
          //$display("BLTU is running");
          branch_target_enable_next = src1 < src2;
          branch_target_next        = pc + signed'({{51{insn[31]}},insn[31], insn[7], insn[30:25], insn[11:8], 1'b0});
        end

        FUNCT3_BGEU :  begin
          //$display("BGEU is running");
          branch_target_enable_next = src1 >= src2;
          branch_target_next        = pc + signed'({{51{insn[31]}},insn[31], insn[7], insn[30:25], insn[11:8], 1'b0});
        end
        default     :  begin
          branch_target_enable_next = 1'bx;
          branch_target_next = 64'dx;
          dest_enable_next = 1'bx;
        end
      endcase


/***************************************************************************************
*                                   opcode = JAL
*     
***************************************************************************************/  
    end else if (opcode == JAL) begin
    //$display ("insn = %b\n (%d) src1 = %b\n (%d) src2 = %b\n (%d) branch_next = %b\n (%d) branch      = %b\npc = %b\n", insn,signed'(src1),src1,signed'(src2),src2,signed'(branch_target_next),branch_target_next,signed'(branch_target),branch_target,pc);
      //$display("JAL is running");
      dest_enable_next = 1;
      dest_next = pc+4;
      dest_long_next = 1'b1;   
      branch_target_enable_next = 1;
      branch_target_next = pc + signed'({{43{insn[31]}},insn[31], insn[19:12], insn[20], insn[30:21], 1'b0});


 /***************************************************************************************
*                                   opcode = JALR
*     
***************************************************************************************/      
    end else if (opcode == JALR) begin
    //$display ("insn = %b\n (%d) src1 = %b\n (%d) src2 = %b\n (%d) branch_next = %b\n (%d) branch      = %b\npc = %b\n", insn,signed'(src1),src1,signed'(src2),src2,signed'(branch_target_next),branch_target_next,signed'(branch_target),branch_target,pc);
      //$display("JALR is running");
      dest_enable_next = 1;
      dest_next = pc+4;
      dest_long_next = 1'b1;
      branch_target_enable_next = 1;
      branch_target_next = (signed'(signXimm12) + signed'(src1));
      branch_target_next = branch_target_next & 64'd-2;
    end else begin
      dest_enable_next = 1'bx;
      dest_long_next   = 1'bx;
      dest_next = 64'dx;
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

