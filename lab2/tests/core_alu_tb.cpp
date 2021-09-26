
#include "Vcore_alu.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#define OP_ADD   0
#define OP_SUB   1
#define OP_SHIFT 2

vluint64_t global_time = 0;
VerilatedVcdC* tfp = 0;

void advance_clock(Vcore_alu *top, int nclocks=1) {

  for( int i=0;i<nclocks;i++) {
    for (int clk=0; clk<2; clk++) {
#ifdef TRACE
      tfp->dump(global_time);
#endif

      top->clk = !top->clk;
      top->eval();

      global_time++;
      if (Verilated::gotFinish())  
        exit(0);
    }
  }

}

int main(int argc, char **argv, char **env) {
  int i;
  int clk;
  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  Vcore_alu* top = new Vcore_alu;

#ifdef TRACE
  // init trace dump
  Verilated::traceEverOn(true);
  tfp = new VerilatedVcdC;

  top->trace(tfp, 99);
  tfp->open("output.vcd");
#endif

  // initialize simulation inputs
  top->clk = 1;
  top->reset = 1;

  advance_clock(top,1);
  top->reset = 0;


//========================================= OP ========================================
//--------------------------------------------------------------------------------------------------
//
//                                          SUB
//
//--------------------------------------------------------------------------------------------------
  top-> insn = 0x41FF8FB3;  //SUB
  
  top->src1 = 3;
  top->src2 = 5;
  top->pc = 0x0;
  

  advance_clock(top,1);

  int error=0;


  if (!top->dest_enable) {
    printf("ERROR: expected dest_enable\n");
    error++;
  }else if (top->dest != -2) {
    printf("\n\nERROR IN SUB!!!!!!!!!!!!!\n\n");
    error++;
  }

  //printf(" First: %lld %lld (%lld)\n", (long long)top->src1, (long long)top->src2, (long long)top->dest);


//--------------------------------------------------------------------------------------------------
//
//                                          ADD
//
//--------------------------------------------------------------------------------------------------

  top->insn = 0x1FF8FB3; // ADD
  
  top -> src1 = 1;
  top -> src2 = -1;

  advance_clock(top,1);
  
  //printf("Second %lld %lld (%lld)\n",  (long long)top->src1, (long long)top->src2, (long long)top->dest);
  if (top->dest != 0){
    printf("\n\nERROR IN ADD!!!!!!!!!!!!\n\n");
    error ++;
  }

  
  
//--------------------------------------------------------------------------------------------------
//
//                                          SLL
//
//--------------------------------------------------------------------------------------------------
 
  top-> insn = 0x01FF9FB3;  //SLL
  top->src1 = 1;
  top->src2 = 5;
  top->pc = 0x0;
  

  advance_clock(top,1);

  if(top -> dest != (1<<5)){
    printf ("\n\nERROR ON SLL\n\n");
    error++;
  }





//--------------------------------------------------------------------------------------------------
//
//                                          SLT
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x01FFAFB3;  //SLT
  top->src1 = -12;
  top->src2 = 9;
  top->pc = 0x0;

  advance_clock(top,1);

  
  if(top -> dest != -1){
    printf("\n\nERROR IN SLT\n\n");
    error++;
  }





  
//--------------------------------------------------------------------------------------------------
//
//                                          SLTU
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x01FFBFB3;  //SLTU
  top->src1 = 3;
  top->src2 = 1;
  top->pc = 0x0;


  advance_clock(top,1);

  
  if (top -> dest != 0){
    printf("\n\nERROR IN SLTU\n\n");
    error++;
  }




  
//--------------------------------------------------------------------------------------------------
//
//                                          XOR
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x01FFCFB3;  //XOR
  top->src1 = 10;
  top->src2 = 12;
  top->pc = 0x0;
  

  advance_clock(top,1);

  if (top->dest !=  6){
    printf("\n\nERROR IN XOR\n\n");
    error++;
  }




//--------------------------------------------------------------------------------------------------
//
//                                          SRL
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x01FFDFB3;  //SRL 
  top->src1 = 8;
  top->src2 = 2;
  top->pc = 0x0;

  advance_clock(top,1);

  if (top->dest != 2) {
    printf("\n\nERROR IN SRL\n\n");
    error++;
  }




  
//--------------------------------------------------------------------------------------------------
//
//                                          SRA
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x41FFDFB3;  //SRA
  top->src1 = -1024;//9223372036854775808;
  top->src2 = 2;
  top->pc = 0x0;
  

  advance_clock(top,1);

  if(top->dest != -256){
    printf("\n\nERROR IN SRA\n\n");
    error++;
  }




  
//--------------------------------------------------------------------------------------------------
//
//                                          OR
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x01FFEFB3;  //OR
  top->src1 = 10;
  top->src2 = 12;
  top->pc = 0x0;
  

  advance_clock(top,1);

if (top->dest != 14){
  printf ("\n\nERROR IN OR\n\n");
  error++;
}




  
//--------------------------------------------------------------------------------------------------
//
//                                          AND
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x01FFFFB3;  //AND
  top->src1 = 10;
  top->src2 = 12;
  top->pc = 0x0;
  

  advance_clock(top,1);

  if(top->dest != 8){
    printf("\n\nERROR IN AND\n\n");
    error++;
  }




  
//========================================= OP_IMM ========================================
//--------------------------------------------------------------------------------------------------
//
//                                          ADDI
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x002F8F93;  //ADDI
  top->src1 = 3;
  top->src2 = 5;
  top->pc = 0x0;
  

  advance_clock(top,1);

 
  if(top->dest != 5){
    printf("\n\nERROR IN ANDI\n\n");
    error++;
  } 


//--------------------------------------------------------------------------------------------------
//
//                                          SLTI
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0xAAAFAF93;  //SLTI
  top->src1 = 1;
  top->src2 = 3;
  top->pc = 0x0;
  

  advance_clock(top,1);

  if(top->dest != 0){
    printf("\n\nERROR IN SLTI\n\n");
    error++;
  }



//--------------------------------------------------------------------------------------------------
//
//                                          SLTIU
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x00AFBF93;  //SLTIU
  top->src1 = 9;
  top->src2 = 9;
  top->pc = 0x0;
  

  advance_clock(top,1);

  if(top->dest != -1){
    printf("\n\nERROR IN SLTIU\n\n");
    error++;
  }


//--------------------------------------------------------------------------------------------------
//
//                                          XORI
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x00AFCF93;  //XORI
  top->src1 = 12;
  top->src2 = 5;
  top->pc = 0x0;
  

  advance_clock(top,1);

  if(top->dest != 6){
    printf("\n\nERROR IN XORI\n\n");
    error++;
  }






//--------------------------------------------------------------------------------------------------
//
//                                          ORI
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x00AFEF93;  //ORI
  top->src1 = 12;
  top->src2 = 2;
  top->pc = 0x0;
  

  advance_clock(top,1);

  if(top->dest != 14){
    printf("\n\nERROR IN XORI\n\n");
    error++;
  }





//--------------------------------------------------------------------------------------------------
//
//                                          ANDI
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x00AFFF93;  //ANDI
  top->src1 = 12;
  top->src2 = 12;
  top->pc = 0x0;
  

  advance_clock(top,1);

  if(top->dest != 8){
    printf("\n\nERROR IN ANDI\n\n");
    error++;
  }





//--------------------------------------------------------------------------------------------------
//
//                                         SLLI 
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x020F9F93;  //SLLI
  top->src1 = 1;
  top->src2 = 5;
  top->pc = 0x0;
  

  advance_clock(top,1);

  if(top->dest != 4294967296){
    printf("\n\nERROR IN SLLI\n\n");
    error++;
  }





//--------------------------------------------------------------------------------------------------
//
//                                          SRLI
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x001FDF93;  //SRLI
  top->src1 = 2;
  top->src2 = 5;
  top->pc = 0x0;
  

  advance_clock(top,1);

  if(top->dest != 1){
    printf("ERROR IN SRLI");
    error++;
  }






//--------------------------------------------------------------------------------------------------
//
//                                          SRAI
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x401FDF93;  //SRAI
  top->src1 = -1;
  top->src2 = 5;
  top->pc = 0x0;
  

  advance_clock(top,1);

  if(top->dest != -1){
    printf("\n\nERROR IN SRAI\n\n");
    error++;
  }
  
//========================================= AUIPC ========================================
//--------------------------------------------------------------------------------------------------
//
//                                          AUIPC
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x00001F97;  //AUIPC
  top->src1 = 3;
  top->src2 = 5;
  top->pc = 0x1;
  

  advance_clock(top,1);

  if(top->dest != 4097){
    printf("ERROR IN AUIPC");
    error++;
  }



//========================================= OP_IMM_32 ========================================
//--------------------------------------------------------------------------------------------------
//
//                                          ADDIW
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0xFFFF8F9B;  //ADDIW
  top->src1 = 3;
  top->src2 = 5;
  top->pc = 0x0;
  

  advance_clock(top,1);

 
  if(top->dest != 2){
    printf("\n\nERROR IN ADDIW\n\n");
    error++;
  } 


//--------------------------------------------------------------------------------------------------
//
//                                          SLLIW
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x015F9F9B;  //SLLIW
  top->src1 = 1;
  top->src2 = 3;
  top->pc = 0x0;
  

  advance_clock(top,1);

  if(top->dest != 2097152){
    printf("\n\nERROR IN SLLIW\n\n");
    error++;
  } else if(top->dest_long != 0){
    printf("\n\nERROR IN SLLIW DEST_LONG IS NOT 0");
    error++;
  }



//--------------------------------------------------------------------------------------------------
//
//                                          SRLIW
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x015FDF9B;  //SRLIW
  top->src1 = 2097152;
  top->src2 = 9;
  top->pc = 0x0;
  

  advance_clock(top,1);

  if(top->dest != 1){
    printf("\n\nERROR IN SRLIW\n\n");
    error++;
  } else if (top->dest_long != 0){
    printf("\n\nERROR IN SRLIW DEST_LONG IS NOT 0\n\n");
    error++;
  }


//--------------------------------------------------------------------------------------------------
//
//                                          SRAIW
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x415FDF9B;  //SRAIW
  top->src1 = -2;
  top->src2 = 5;
  top->pc = 0x0;

  advance_clock(top,1);

  if(top->dest != -1){
    printf("\n\nERROR IN SRAIW\n\n");
    error++;
  } else if (top->dest_long != 0){
    printf("\n\nERROR IN SRAIW DEST_LONG IS NOT 0\n\n");
    error++;
  }



 
 
//========================================= OP_32 ========================================
//--------------------------------------------------------------------------------------------------
//
//                                          ADDW
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x01FF8FBB;  //ADDW
  top->src1 = 3;
  top->src2 = 5;
  top->pc = 0x0;
  

  advance_clock(top,1);

 
  if(top->dest != 8){
    printf("\n\nERROR IN ADDW\n\n");
    error++;
  }  else if (top->dest_long != 0){
    printf("\n\nERROR IN ADDW DEST_LONG IS NOT 0\n\n");
    error++;
  }


//--------------------------------------------------------------------------------------------------
//
//                                          SUBW
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x41FF8FBB;  //SUBW
  top->src1 = 3;
  top->src2 = 5;
  top->pc = 0x0;
  

  advance_clock(top,1);

 
  if(top->dest != -2){
    printf("\n\nERROR IN SUBW\n\n");
    error++;
  }  else if (top->dest_long != 0){
    printf("\n\nERROR IN SUBW DEST_LONG IS NOT 0\n\n");
    error++;
  }


//--------------------------------------------------------------------------------------------------
//
//                                          SLLW
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x01FF9FBB;  //SLLW
  top->src1 = 1;
  top->src2 = 3;
  top->pc = 0x0;
  

  advance_clock(top,1);

  if(top->dest != 8){
    printf("\n\nERROR IN SLLW\n\n");
    error++;
  } else if(top->dest_long != 0){
    printf("\n\nERROR IN SLLW DEST_LONG IS NOT 0");
    error++;
  }



//--------------------------------------------------------------------------------------------------
//
//                                          SRLW
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x01FFDFBB;  //SRLW
  top->src1 = 8;
  top->src2 = 1;
  top->pc = 0x0;
  

  advance_clock(top,1);

  if(top->dest != 4){
    printf("\n\nERROR IN SRLW\n\n");
    error++;
  } else if (top->dest_long != 0){
    printf("\n\nERROR IN SRLW DEST_LONG IS NOT 0\n\n");
    error++;
  }


//--------------------------------------------------------------------------------------------------
//
//                                          SRAW
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x41FFDFBB;  //SRAW
  top->src1 = -8;
  top->src2 = 2;
  top->pc = 0x0;

  advance_clock(top,1);

  if(top->dest != -2){
    printf("\n\nERROR IN SRAW\n\n");
    error++;
  } else if (top->dest_long != 0){
    printf("\n\nERROR IN SRAW DEST_LONG IS NOT 0\n\n");
    error++;
  }



 
 
 
//========================================= BRANCH ========================================
//--------------------------------------------------------------------------------------------------
//
//                                          BEQ
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x3FF8163;  //BEQ
  top->src1 = 5;
  top->src2 = 5;
  top->pc = 0x1;
  

  advance_clock(top,1);

 
  if(top->branch_target != 35){
    printf("\n\nERROR IN BEQ\n\n");
    error++;
  }  else if (top->dest_enable != 0){
    printf("\n\nERROR IN BEQ DEST_LONG IS NOT 0\n\n");
    error++;
  } else if(top->branch_target_enable != 1){
    printf("\n\nERROR IN BEQ BRANCH_TARGET_ENABLE NOT 1\n\n");
    error++;
  }


//--------------------------------------------------------------------------------------------------
//
//                                          BNE
//
//--------------------------------------------------------------------------------------------------
  top-> insn = 0x3FF9163;  //BNE
  top->src1 = 3; 
  top->src2 = 5;
  top->pc = 0x2;
  

  advance_clock(top,1);

   if(top->branch_target != 36){
    printf("\n\nERROR IN BNE\n\n");
    error++;
  }  else if (top->dest_enable != 0){
    printf("\n\nERROR IN BNE DEST_LONG IS NOT 0\n\n");
    error++;
  } else if(top->branch_target_enable != 1){
    printf("\n\nERROR IN BNE BRANCH_TARGET_ENABLE NOT 1\n\n");
    error++;
  }



//--------------------------------------------------------------------------------------------------
//
//                                          BLT
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x3FFC163;  //BLT
  top->src1 = 1;
  top->src2 = 3;
  top->pc = 0x3;
  

  advance_clock(top,1);

  if(top->branch_target != 37){
    printf("\n\nERROR IN BLT\n\n");
    error++;
  }  else if (top->dest_enable != 0){
    printf("\n\nERROR IN BLT DEST_LONG IS NOT 0\n\n");
    error++;
  } else if(top->branch_target_enable != 1){
    printf("\n\nERROR IN BLT BRANCH_TARGET_ENABLE NOT 1\n\n");
    error++;
  }



//--------------------------------------------------------------------------------------------------
//
//                                          BGE
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x3FFD163;  //BGE
  top->src1 = 8;
  top->src2 = 1;
  top->pc = 0x4;
  

  advance_clock(top,1);

  if(top->branch_target != 38){
    printf("\n\nERROR IN BGE\n\n");
    error++;
  }  else if (top->dest_enable != 0){
    printf("\n\nERROR IN BGE DEST_LONG IS NOT 0\n\n");
    error++;
  } else if(top->branch_target_enable != 1){
    printf("\n\nERROR IN BGE BRANCH_TARGET_ENABLE NOT 1\n\n");
    error++;
  }

//--------------------------------------------------------------------------------------------------
//
//                                          BLTU
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x3FFE163;  //BLTU
  top->src1 = 1;
  top->src2 = 2;
  top->pc = 0x5;

  advance_clock(top,1);


  if(top->branch_target != 39){
    printf("\n\nERROR IN BLTU\n\n");
    error++;
  }  else if (top->dest_enable != 0){
    printf("\n\nERROR IN BLTU DEST_LONG IS NOT 0\n\n");
    error++;
  } else if(top->branch_target_enable != 1){
    printf("\n\nERROR IN BLTU BRANCH_TARGET_ENABLE NOT 1\n\n");
    error++;
  }

 
//--------------------------------------------------------------------------------------------------
//
//                                          BGEU
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x3FFF163;  //BGEU
  top->src1 = 2;
  top->src2 = 2;
  top->pc = 0x6;

  advance_clock(top,1);

  if(top->branch_target != 40){
    printf("\n\nERROR IN BGEU\n\n");
    error++;
  }  else if (top->dest_enable != 0){
    printf("\n\nERROR IN BGEU DEST_LONG IS NOT 0\n\n");
    error++;
  } else if(top->branch_target_enable != 1){
    printf("\n\nERROR IN BGEU BRANCH_TARGET_ENABLE NOT 1\n\n");
    error++;
  }


 
 

//========================================= JALR ========================================
//--------------------------------------------------------------------------------------------------
//
//                                          JALR
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x001F8FE7;  //JALR
  top->src1 = 2;
  top->src2 = 5;
  top->pc = 0x1;
  

  advance_clock(top,1);

 
  if(top->branch_target != 2){
    printf("\n\nERROR IN JALR\n\n");
    error++;
  }  else if (top->dest_enable != 1){
    printf("\n\nERROR IN JALR DEST_LONG IS NOT 1\n\n");
    error++;
  } else if(top->branch_target_enable != 1){
    printf("\n\nERROR IN JALR BRANCH_TARGET_ENABLE NOT 1\n\n");
    error++;
  }


//========================================= JAL ========================================
//--------------------------------------------------------------------------------------------------
//
//                                          JAL
//
//--------------------------------------------------------------------------------------------------
  
  top-> insn = 0x0301FEF;  //JAL
  top->src1 = 5;
  top->src2 = 5;
  top->pc = 0x2;
  

  advance_clock(top,1);

 
  if(top->branch_target != 6148){
    printf("\n\nERROR IN JAL\n\n");
    error++;
  }  else if (top->dest_enable != 1){
    printf("\n\nERROR IN JAL DEST_LONG IS NOT 1\n\n");
    error++;
  } else if(top->branch_target_enable != 1){
    printf("\n\nERROR IN JAL BRANCH_TARGET_ENABLE NOT 1\n\n");
    error++;
  }





//-----------------------------------------ERROR COUNT--------------------------------------------------
//
//
//
//
  
  if (error==0) {
    printf("Congratulations. All test PASS\n");
  }else{
    printf("ERROR: there are %d failing tests\n",error);
  }

#ifdef TRACE
  tfp->close();
#endif

  exit(0);
}

