
module decode(
  input clk,
  input reset,

  // From fetch to decode
  input        fetch_valid,
  output       fetch_retry,
  input [31:0] fetch_insn,
  input [63:0] fetch_pc,

  // from decode to execute
  output        decode_valid, 
  input         decode_retry, 
  output [31:0] decode_insn, 
  output [63:0] decode_pc,
  output [63:0] decode_sign_ext, 
  output [63:0] decode_src1, 
  output [63:0] decode_src2,

  // from execute to decode
  input         dest_valid,
  output        dest_retry, // ALWAYS FALSE to execute
  input  [4:0]  dest_rd,
  input         dest_long,
  input  [63:0] dest_data,
  input         dest_clear,

  // dcache interface from testbench to decode
  input  [63:0] dcache_ack_data,
  input  [4:0]  dcache_ack_rd,  // destination register for the load
  input         dcache_ack_valid,
  output        dcache_ack_retry  // ALWAYS FALSE from testbench
);

  localparam  LOAD      = 7'b0000011;
  localparam  OP_IMM    = 7'b0010011;
  localparam  OP_IMM_32 = 7'b0011011;
  localparam  STORE     = 7'b0100011;
  localparam  OP        = 7'b0110011;
  localparam  OP_32     = 7'b0111011;
  localparam  BRANCH    = 7'b1100011;
  localparam  JALR      = 7'b1100111;


 assign dest_retry = 1'b0;
 assign dcache_ack_retry = 1'b0;

 // LAB4 Main new thing:
 //
 // -Enforce dependences for load destinations
 // -Write the results from loads to register file
 // -Handle stalls (retry) set from execute
 //
 // -Clear dependence when dest_clear is set (miss path)

 wire [31:0] load;
 reg [31:0] load_next;

 reg f1_retry;
 reg f_retry;
 
 wire load_valid;
 wire load_valid_next;
 wire ffdecode_valid;
 
 flop_r #(.Reset_Value(1)) f_valid ( .d(load_valid_next), .q(load_valid), .*);
 flop #(.Bits(32))f_load ( .d(load_next), .q(load), .*);

 always @(*) begin
   if (op == LOAD) begin //LOAD
     load_next[rd] = 1'b1;
   end else if (load[rd] | load[rs1] | load[rs2]) begin
    f1_retry = 1'b1;
    load_valid_next = 0;

   end

   if(f1_retry) begin
    decode_valid = load_valid;
  end else begin
    decode_valid = ffdecode_valid;
  end
   if (f1_retry == 1 && load != 32'b0 && dcache_ack_valid) begin
     if (load[dcache_ack_rd] == 1'b1) begin
       load_next[dcache_ack_rd] = 0;
       f1_retry = 1'b0;
       
     end
   end
   
   if(dest_clear) begin
     load_next = 32'b0;
     f1_retry = 0; 
   end
 end

 always @(*) begin
   if(load != 0) begin
     fetch_retry = f1_retry;
   //end else if((op == OP ||op == OP_IMM ||op == OP_IMM_32 ||op == OP_32 ||op == BRANCH ||op == JALR ||op == LOAD ||op == STORE) && rs1 == dcache_ack_rd && dcache_ack_valid) begin
     //fetch_retry = f1_retry;
     //decode_src1 = dcache_ack_data;
   //end else if ((op == OP || op == OP_32 || op == BRANCH || op == STORE) && rs2 == dcache_ack_rd && dcache_ack_valid) begin
     //fetch_retry = f1_retry;
     //decode_src2 = dcache_ack_data;
   end else begin
     fetch_retry = f_retry;
     load_valid_next = 1;
   end
 end

 fflop #(.Size(64+32+64))ff_pc_insn_signext ( 
   .din({fetch_pc, fetch_insn, sign_ext_next}), 
   .dinValid(fetch_valid), 
   .dinRetry(fetch_retry), 

   .q({decode_pc, decode_insn, decode_sign_ext}),
   .qValid(ffdecode_valid),
   .qRetry(decode_retry),
   .*);

 wire [4:0] rs1;
 wire [4:0] rs2;
 wire [4:0] rd;

 assign rs2 = fetch_insn[24:20];
 assign rs1 = fetch_insn[19:15];
 assign rd =  fetch_insn[11:7];


 // reg file
 regfile r (
   .clk(clk), 
   .reset(reset), 
   .rs1(rs1),
   .rs2(rs2),
   .rd(dest_rd),

   .we(dest_valid), // Write enable

   .dest(dest_data),
   .dest_long(dest_long),

   .dcache_ack_data(dcache_ack_data),
   .dcache_ack_rd(dcache_ack_rd),
   .dcache_ack_valid(dcache_ack_valid),

   //.fetch_valid(fetch_valid),
   //.decode_valid(decode_valid),
   //.fetch_retry(fetch_retry),
   .decode_retry(decode_retry),

   .data1(decode_src1),
   .data2(decode_src2)
 ); 



 /* -------------------------------------------------------------------------------
 *
 *                                   SIGN EXTEND
 *                Created here instead of a separate module because
 *                of the fluid flop
 *
 *
 --------------------------------------------------------------------------------*/
 // sign ext
 //
 reg [63:0] sign_ext_next;

 reg [11:0] imm12; //jalr, imm op, addiw
 reg [19:0] imm20; //auipc

 reg [12:0] branchimm; //branches
 reg [20:0] jalimm; //jal

 reg [6:0] op;

 reg [11:0] stimm12;
 //parsing of insn
 always @(*) begin
   branchimm = {fetch_insn[31], fetch_insn[7], fetch_insn[30:25], fetch_insn[11:8], 1'b0};
   jalimm    = {fetch_insn[31], fetch_insn[19:12], fetch_insn[20], fetch_insn[30:21], 1'b0};
   imm12     = fetch_insn[31:20];
   stimm12   = {fetch_insn[31:25],fetch_insn[11:7]};
   imm20     = fetch_insn[31:12];
   op        = fetch_insn[6:0];
 end

 always @(*) begin
   casez (op)
     7'b1100011: sign_ext_next = {{51{branchimm[12]}},branchimm}; //branch operations
     7'b1101111: sign_ext_next = {{43{jalimm[20]}},jalimm}; //jal op
     7'b0010111: sign_ext_next = {{32{imm20[19]}},imm20,{12{1'b0}}}; //auipc
     7'b0100011: sign_ext_next = {{52{stimm12[11]}},stimm12}; //st
     default   : sign_ext_next = {{52{imm12[11]}},imm12}; //everything else will use the 12bit imm or none at all
   endcase
 end
 /*
 signext s (.clk(clk), .reset(reset), .insn(fetch_insn), .insn_valid(fetch_valid), .sign_ext(decode_sign_ext));
 */
 endmodule

