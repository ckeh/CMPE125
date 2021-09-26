
#include "Vsample3.h"
#include "verilated.h"
#include "verilated_vcd_c.h"


vluint64_t global_time = 0;
VerilatedVcdC* tfp = 0;

void advance_clock(Vsample3 *top, int nclocks=1) {

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
  Vsample3* top = new Vsample3;

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
  top->op = 0;
  top->a = 3;
  top->b = 1;

  advance_clock(top,1);
  //-------------------------------------------------------
  top->op = 1;
  top->a = 3;
  top->b = 1;

  advance_clock(top,1);
  //-------------------------------------------------------
  //top->op = 1;
  //top->a = 3;
  top->b = 0;

  advance_clock(top,1);
  //-------------------------------------------------------
  advance_clock(top,1);

#ifdef TRACE
  tfp->close();
#endif

  exit(0);
}

