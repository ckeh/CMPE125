
#include "Vregfile.h"
#include "verilated.h"
#include "verilated_vcd_c.h"


vluint64_t global_time = 0;
VerilatedVcdC* tfp = 0;

void advance_clock(Vregfile *top, int nclocks=1) {

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
  Vregfile* top = new Vregfile;

#ifdef TRACE
  // init trace dump
  Verilated::traceEverOn(true);
  tfp = new VerilatedVcdC;

  top->trace(tfp, 99);
  tfp->open("output.vcd");
#endif

  top->clk = 1;

  // initialize simulation inputs
  top->reset = 1;
  advance_clock(top,2);

  top->reset = 0;
  top->rs1 = 0;
  top->rs2 = 1;
  top->rd  = 1;
  top->dest = 0xdeaddead;
  advance_clock(top,1);

  top->rs1 = 0;
  top->rs2 = 1;
  top->rd  = 1;
  top->dest = 0xbeefbeed;
  advance_clock(top,1);

#ifdef TRACE
  tfp->close();
#endif

  exit(0);
}

