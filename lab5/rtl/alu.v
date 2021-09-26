`include "memops.h"

module alu(
  input           clk,
  input           reset,

  // All the inputs come from decode stage
  output          insn_retry, // set if branch_target_retry AND new inst_valid (always false in lab3)
  input           insn_valid,
  input [31:0]    insn, 

  input [63:0]    pc,

  input [63:0]    sign_ext, 
  input [63:0]    src1, 
  input [63:0]    src2,
  input [4:0]     rd,

  // From execute to register file (decode)
  // No need, RF always accepts writes input         dest_retry, 
  output          dest_valid,
  input           dest_retry,
  output [4:0]    dest_rd,
  output          dest_long,
  output [63:0]   dest_data,    
  output          dest_clear,

  // From execute to fetch
  input           branch_target_retry, 
  output          branch_target_valid,
  output [63-1:0] branch_target,

  // From execute to dcache
  output [63:0]   dcache_req_addr,  // load or store address computed at execute
  output [63:0]   dcache_req_data, // data just for the store going to from exe to testbench
  output [3:0]    dcache_req_op,  // RVMOP_*
  output [4:0]    dcache_req_rd,  // destination register for the load
  output          dcache_req_valid,
  input           dcache_req_retry

);

  reg        dest_valid_next;
  reg        dest_long_next;
  reg [63:0] dest_next;

  reg        branch_target_valid_next;
  reg [63:0] branch_target_next;

  reg [63:0] dcache_req_addr_next;
  reg [63:0] dcache_req_data_next;
  reg [3:0]  dcache_req_op_next;
  reg [4:0]  dcache_req_rd_next;
  reg        dcache_req_valid_next;
  reg        dcache_req_retry_next;

  localparam  LOAD      = 7'b0000011;
  //localparam  LOAD_FP   = 7'b0000111;
  //localparam  CUSTOM_0  = 7'b0001011;
  //localparam  MISC_MEM  = 7'b0001111;
  localparam  OP_IMM    = 7'b0010011;
  localparam  AUIPC     = 7'b0010111;
  localparam  OP_IMM_32 = 7'b0011011;
  localparam  STORE     = 7'b0100011;
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
  reg [2:0] funct3;
  reg [6:0] funct7;
  reg [4:0] dest_reg;
  reg [5:0] shamt6;

  always @(*) begin
    opcode = insn[6:0];
    shamt  = insn[24:20];
    funct3 = insn[14:12];
    funct7 = insn[31:25];

    shamt6 = insn[25:20];

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

  reg dest_clear_next;

  reg [63:0] desired_pc_next;
  reg       busy_next;
  wire [63:0] desired_pc;
  wire      busy;
  
  flop #(.Bits(64)) want ( .d(desired_pc_next), .q(desired_pc), .*);
  flop doing ( .d(busy_next), .q(busy), .*);

  always@(*) begin
    if(desired_pc_next == pc) begin
      busy_next = 0;
    end 
  end
    assign dest_clear =(busy && opcode == LOAD)? 1: 0; 
    

  always @(*) begin
    if(insn_valid && pc == desired_pc) begin //&& (pc == desired_pc)) begin
      desired_pc_next = pc+4;
      /***************************************************************************************
      *                                   opcode = OP
      *     
      ***************************************************************************************/
      if (opcode == OP) begin
        //$display ("insn = %b\n (%d) src1 = %b\n (%d) src2 = %b\n (%d) dest_next = %b\n (%d) dest      = %b\n", insn,signed'(src1),src1,signed'(src2),src2,signed'(dest_next),dest_next,signed'(dest),dest);
        dest_valid_next = 1;
        dest_long_next   = 1;
        branch_target_valid_next = 0;
        dcache_req_valid_next = 0;
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
            dest_valid_next = 1'bx;
            dest_long_next = 1'bx;
            branch_target_valid_next = 1'bx;
          end

        endcase


        /***************************************************************************************
        *                                   opcode = OP_IMM
        *     
        ***************************************************************************************/


      end else if (opcode == OP_IMM) begin
        //$display ("insn = %b\n (%d) src1 = %b\n (%d) src2 = %b\n (%d) dest_next = %b\n (%d) dest      = %b\n", insn,signed'(src1),src1,signed'(src2),src2,signed'(dest_next),dest_next,signed'(dest),dest);
        dest_valid_next = 1;
        dest_long_next = 1;
        branch_target_valid_next = 0;
        dcache_req_valid = 0;
        //branch_target_next = 64'b0; not needed

        casez ({funct7,funct3})
          {FUNCT7_DC , FUNCT3_ADDI}   :  begin
            //$display("ADDI is running");
            dest_next = signed'(sign_ext) + signed'(src1);
          end
          {FUNCT7_DC , FUNCT3_SLTI}   :  begin
            //$display("SLTI is running");
            dest_next = {64{signed'(sign_ext) > signed'(src1)}};
          end
          {FUNCT7_DC , FUNCT3_SLTIU}  :  begin
            //$display("SLTIU is running");
            dest_next = {64{sign_ext > src1}};
          end
          {FUNCT7_DC , FUNCT3_XORI}   :  begin
            //$display("XORI is running");
            dest_next = sign_ext ^ src1;
          end
          {FUNCT7_DC , FUNCT3_ORI}    :  begin
            //$display("ORI is running");
            dest_next = sign_ext | src1;
          end
          {FUNCT7_DC , FUNCT3_ANDI}   :  begin
            //$display("ANDI is running");
            dest_next = sign_ext & src1;
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
            dest_valid_next = 1'bx;
            dest_long_next = 1'bx;
            branch_target_valid_next = 1'bx;
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
        branch_target_valid_next = 0;
        dcache_req_valid_next = 0;
        dest_valid_next = 1;
        dest_long_next = 1'b1;
        dest_next = signed'(sign_ext) + pc;


        /***************************************************************************************
        *                                   opcode = OP_IMM_32
        *     
        ***************************************************************************************/
      end else if (opcode == OP_IMM_32) begin
        //$display ("insn = %b\n (%d) src1 = %b\n (%d) src2 = %b\n (%d) dest_next = %b\n (%d) dest      = %b\n", insn,signed'(src1),src1,signed'(src2),src2,signed'(dest_next),dest_next,signed'(dest),dest);
        dest_valid_next = 1;
        dest_long_next = 0;
        branch_target_valid_next = 0;
        dcache_req_valid_next = 0;

        casez ({funct7, funct3})  
          {FUNCT7_DC , FUNCT3_ADD}  :  begin
            //$display("ADDIW is running");
            dest_next = signed'(src1 + sign_ext);  //ADDIW
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
            dest_valid_next = 1'bx;
            dest_long_next = 1'bx;
            branch_target_valid_next = 1'bx;
            dest_next = 64'dx;
          end
        endcase
        
        dest_next = dest_next & 64'h00000000FFFFFFFF;


        /***************************************************************************************
        *                                   opcode = OP_32
        *     
        ***************************************************************************************/
      end else if (opcode == OP_32) begin
        //$display ("insn = %b\n (%d) src1 = %b\n (%d) src2 = %b\n (%d) dest_next = %b\n (%d) dest      = %b\n", insn,signed'(src1),src1,signed'(src2),src2,signed'(dest_next),dest_next,signed'(dest),dest);
        dcache_req_valid_next = 0;
        branch_target_valid_next = 0;
        dest_valid_next = 1;
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
            branch_target_valid_next = 1'bx;
            dest_valid_next = 1'bx;
            dest_long_next = 1'bx;
            dest_next = 64'dx;
          end
        endcase

        dest_next = dest_next & 64'h00000000FFFFFFFF;


        /***************************************************************************************
        *                                   opcode = BRANCH
        *     
        ***************************************************************************************/  
      end else if (opcode == BRANCH) begin
        //$display ("insn = %b\n (%d) src1 = %b\n (%d) src2 = %b\n (%d) branch_next = %b\n (%d) branch      = %b\npc = %b\n", insn,signed'(src1),src1,signed'(src2),src2,signed'(branch_target_next),branch_target_next,signed'(branch_target),branch_target,pc);
        dcache_req_valid_next = 0;
        dest_valid_next = 0;
        casez (funct3)
          FUNCT3_BEQ  :  begin
            //$display("BEQ is running");
            branch_target_valid_next = signed'(src1) == signed'(src2);
            branch_target_next        = pc + signed'(sign_ext);
          end

          FUNCT3_BNE  :  begin
            //$display("BNE is running");
            branch_target_valid_next = signed'(src1) != signed'(src2);
            branch_target_next        = pc + signed'(sign_ext);
          end

          FUNCT3_BLT  :  begin
            //$display("BLT is running");
            branch_target_valid_next = signed'(src1) < signed'(src2);
            branch_target_next        = pc + signed'(sign_ext);
          end

          FUNCT3_BGE  :  begin
            //$display("BGE is running");
            branch_target_valid_next = signed'(src1) >= signed'(src2);
            branch_target_next        = pc + signed'(sign_ext);
          end

          FUNCT3_BLTU :  begin
            //$display("BLTU is running");
            branch_target_valid_next = src1 < src2;
            branch_target_next        = pc + signed'(sign_ext);
          end

          FUNCT3_BGEU :  begin
            //$display("BGEU is running");
            branch_target_valid_next = src1 >= src2;
            branch_target_next        = pc + signed'(sign_ext);
          end
          default     :  begin
            branch_target_valid_next = 1'bx;
            branch_target_next = 64'dx;
            dest_valid_next = 1'bx;
          end
        endcase

        if(branch_target_valid_next == 1)begin
          desired_pc_next = branch_target_next;
        end
        busy_next = branch_target_valid_next;

        /***************************************************************************************
        *                                   opcode = JAL
        *     
        ***************************************************************************************/  
      end else if (opcode == JAL) begin
        //$display ("insn = %b\n (%d) src1 = %b\n (%d) src2 = %b\n (%d) branch_next = %b\n (%d) branch      = %b\npc = %b\n", insn,signed'(src1),src1,signed'(src2),src2,signed'(branch_target_next),branch_target_next,signed'(branch_target),branch_target,pc);
        //$display("JAL is running");
        dest_valid_next = 1;
        dest_next = pc+4;
        dest_long_next = 1'b1;   
        branch_target_valid_next = 1;
        branch_target_next = pc + signed'(sign_ext);

        desired_pc_next = branch_target_next;
        busy_next = branch_target_valid_next;

        /***************************************************************************************
        *                                   opcode = JALR
        *     
        ***************************************************************************************/      
      end else if (opcode == JALR) begin
        //$display ("insn = %b\n (%d) src1 = %b\n (%d) src2 = %b\n (%d) branch_next = %b\n (%d) branch      = %b\npc = %b\n", insn,signed'(src1),src1,signed'(src2),src2,signed'(branch_target_next),branch_target_next,signed'(branch_target),branch_target,pc);
        //$display("JALR is running");
        dest_valid_next = 1;
        dest_next = pc+4;
        dest_long_next = 1'b1;
        branch_target_valid_next = 1;
        branch_target_next = (signed'(sign_ext) + signed'(src1));
        branch_target_next = branch_target_next & 64'd-2;
        
        desired_pc_next = branch_target_next;
        busy_next = branch_target_valid;

        /***************************************************************************************
        *                                   opcode = LOAD
        *     
        ***************************************************************************************/  
      end else if (opcode == LOAD) begin
        casez (funct3)
          3'd0: begin //LB (8)
            dcache_req_addr_next = sign_ext + src1;
            dcache_req_op_next = `RVMOP_LB;
            dcache_req_rd_next  = rd;
            dcache_req_valid_next = 1;
            //dest_valid_next  = 1;
            //dest_long_next  = 0;
            branch_target_valid_next  = 0;
          end

          3'd1: begin //LH (16)
            dcache_req_addr_next = sign_ext + src1;
            dcache_req_op_next = `RVMOP_LH;
            dcache_req_rd_next  = rd;
            dcache_req_valid_next = 1;
            //dest_valid_next  = 1;
            //dest_long_next  = 0;
            branch_target_valid_next  = 0;
          end

          3'd2: begin // LW sign extends before storing (32)
            dcache_req_addr_next = sign_ext + src1;
            dcache_req_op_next = `RVMOP_LW;
            dcache_req_rd_next  = rd;
            dcache_req_valid_next = 1;
            //dest_valid_next  = 1;
            //dest_long_next  = 0;
            branch_target_valid_next  = 0;
          end

          3'd3: begin //LD(64)
            $display("LOAD DESTR = %d", rd);
            dcache_req_addr_next = sign_ext + src1;
            dcache_req_op_next = `RVMOP_LD;
            dcache_req_rd_next  = rd;
            dcache_req_valid_next = 1;
            //dest_valid_next  = 1;
            //dest_long_next  = 1;
            branch_target_valid_next  = 0;
          end

          3'd4: begin //LBU (8)
            dcache_req_addr_next = sign_ext + src1;
            dcache_req_op_next = `RVMOP_LBU;
            dcache_req_rd_next  = rd;
            dcache_req_valid_next = 1;
            //dest_valid_next  = 1;
            //dest_long_next  = 0;
            branch_target_valid_next  = 0;
          end

          3'd5: begin //LHU(16)
            dcache_req_addr_next = sign_ext + src1;
            dcache_req_op_next = `RVMOP_LHU;
            dcache_req_rd_next  = rd;
            dcache_req_valid_next = 1;
            //dest_valid_next  = 1;
            //dest_long_next  = 0;
            branch_target_valid_next  = 0;
          end

          3'd6: begin //LWU(32) zero extends before storing
            dcache_req_addr_next = sign_ext + src1;
            dcache_req_op_next = `RVMOP_LWU;
            dcache_req_rd_next  = rd;
            dcache_req_valid_next = 1;
            //dest_valid_next  = 1;
            //dest_long_next  = 0;
            branch_target_valid_next  = 0;
          end
          
          default: begin
            dcache_req_valid_next = 1'bx;
            dest_valid_next = 1'bx;
            branch_target_valid_next = 1'bx;
          end
        endcase

        /***************************************************************************************
        *                                   opcode = STORE
        *     
        ***************************************************************************************/  
      end else if (opcode == STORE) begin
        casez (funct3)
          3'd0 : begin //SB
            dcache_req_addr_next = sign_ext + src1;
            dcache_req_op_next = `RVMOP_SB;
            dcache_req_data_next = src2;
            dcache_req_valid_next = 1;
            dest_valid_next = 0;
            branch_target_valid_next = 0;
          end
          3'd1 : begin //SH
            dcache_req_addr_next = sign_ext + src1;
            dcache_req_op_next = `RVMOP_SH;
            dcache_req_data_next = src2;
            dcache_req_valid_next = 1;
            dest_valid_next = 0;
            branch_target_valid_next = 0;
          end
          3'd2 : begin //SW
            dcache_req_addr_next = sign_ext + src1;
            dcache_req_op_next = `RVMOP_SW;
            dcache_req_data_next = src2;
            dcache_req_valid_next = 1;
            dest_valid_next = 0;
            branch_target_valid_next = 0;
          end 
          3'd3 : begin //SD
            dcache_req_addr_next = sign_ext + src1;
            dcache_req_op_next = `RVMOP_SD;
            dcache_req_data_next = src2;
            dcache_req_valid_next = 1;
            dest_valid_next = 0;
            branch_target_valid_next = 0;
          end 
          default: begin
            dcache_req_valid_next = 1'bx;
            dest_valid_next = 1'bx;
            branch_target_valid_next = 1'bx;
          end 
        endcase
      end else begin
        dcache_req_valid_next = 1'bx;
        dest_valid_next = 1'bx;
        branch_target_valid_next = 1'bx;
        dcache_req_valid_next = 1'bx;
      end
    end else begin
      dest_valid_next = 1'b0;
      dest_clear_next = 0;
      branch_target_valid_next = 1'b0;
      dcache_req_valid_next = 1'b0;
    end
    $display("dest_valid = %d, dest_data = %d, dest_rd = %d", dest_valid_next,dest_next,rd);
  end



  // from execute to fetch
  /*
  flop_e #(.Bits(64+1)) f1(
    .clk(clk),
    .reset(reset),
    .we(insn_valid),
    .d({branch_target_next,branch_target_valid_next}),
    .q({branch_target     ,branch_target_valid     })
  );
*/



//from execute to fetch
fflop #(.Size(63)) ff1(
  .din(branch_target_next[63:1]), 
  .dinValid(branch_target_valid_next), 
  .dinRetry(), 

  .q(branch_target),
  .qValid(branch_target_valid),
  .qRetry(0),
  .*);


//from execute to decode
fflop #(.Size(64+1+5+1)) ff2(
  .din({dest_next,dest_long_next, rd, dest_clear_next}), 
  .dinValid(dest_valid_next), 
  .dinRetry(), 

  .q({dest_data, dest_long, dest_rd, dest_clear}),
  .qValid(dest_valid),
  .qRetry(0),
  .*);

/*
flop #(.Bits(64+1+1)) f2(
  .clk(clk),
  .reset(reset),
  .d({dest_next,dest_long_next,dest_valid_next}),
  .q({dest     ,dest_long     ,dest_valid     })
);
*/
  //from execute to testbench
  fflop #(.Size(64+64+4+5)) ff_dcache(
    .din({dcache_req_addr_next, dcache_req_data_next, dcache_req_op_next, dcache_req_rd_next}), 
    .dinValid(dcache_req_valid_next), 
    .dinRetry(insn_retry), 

    .q({dcache_req_addr, dcache_req_data_next, dcache_req_op, dcache_req_rd}),
    .qValid(dcache_req_valid),
    .qRetry(dcache_req_retry),
    .*
  );



endmodule

