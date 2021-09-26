
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
  //-------------------------------------------------------
  top->reset = 0;
  top->insn = 0xae0db3; // ADD
  top->src1 = 3;
  top->src2 = 1;
  top->pc   = 0xdeaddead;

  advance_clock(top,1);

  int error=0;

  if (!top->dest_enable) {
    printf("ERROR: expected dest_enable\n");
    error++;
  }else if (top->dest != 4) {
    printf("ERROR: 3+1 should be 4 not (%lld)\n",(long long)top->dest);
    error++;
  }

  advance_clock(top,1);
  advance_clock(top,1);
  advance_clock(top,1);

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

