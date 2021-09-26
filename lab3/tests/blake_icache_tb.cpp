
#include "Vicache.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

vluint64_t global_time = 0;
VerilatedVcdC* tfp = 0;

void advance_clock(Vicache *top, int nclocks=1) {

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
  Vicache* top = new Vicache;

  uint32_t icache_line[8] = { 0x1A5E333,
                              0x6B94A9EF,
                              0xEAA0493,
                              0x72C2FA6F,
                              0x1AB3CB3,
                              0x6636BEEF,
                              0x9741EEE3,
                              0x303FEFE3  };

#ifdef TRACE
  // init trace dump
  Verilated::traceEverOn(true);
  tfp = new VerilatedVcdC;

  top->trace(tfp, 99);
  tfp->open("output_icache.vcd");
#endif

  top->clk = 1;
  top->reset = 1;
  advance_clock(top);

  top->reset = 0;
  top->icache_ack_data_valid = 0;
  top->core_req_pc_valid = 1;
  top->core_req_pc = 0;

  advance_clock(top);
//  top->core_req_pc_valid = 0;

  i = 0;
  while (i++ < 100) {
    if (top->icache_req_addr_valid) {
        printf("\tReceived icache request.\n\n");
        top->icache_ack_data_valid = 1;
  
        for(i = 0; i < 8; i++)
          top->icache_ack_data[i] = icache_line[i];

        break;
    }

    advance_clock(top);
  }

  if (i >= 100)
    printf("ERROR, no icache request received for 100 cycles.\n");

  advance_clock(top);
  top->icache_ack_data_valid = 0;

  advance_clock(top);

  printf("Done.\n");

#ifdef TRACE
  tfp->close();
#endif

  return 0;
}

