
#include "Vcore.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "igen.h"

vluint64_t global_time = 0;
VerilatedVcdC* tfp = 0;

void advance_clock(Vcore *top, int nclocks=1) {

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
  Vcore* top = new Vcore;

#ifdef TRACE
  // init trace dump
  Verilated::traceEverOn(true);
  tfp = new VerilatedVcdC;

  top->trace(tfp, 99);
  tfp->open("output.vcd");
#endif
  
  uint32_t icache_line[8] = { 0x1A5E333,
                              0x6B94A9EF,
                              0xEAA0493,
                              0x72C2FA6F,
                              0x1AB3CB3,
                              0x6636BEEF,
                              0x9741EEE3,
                              0x303FEFE3  };


  top->clk = 1;
  top->reset = 1;
  advance_clock(top);

  top->reset = 0;
  advance_clock(top);

  while (!top->icache_req_addr_valid && global_time < 1000)
    advance_clock(top);

  if (!top->icache_req_addr_valid) {
    printf("1000 cycles without an icache request.\n");
    exit(0);
  }

  printf("\tReceived icache request!\n\n");

  for (i = 0; i < 8; i++)
    top->icache_ack_data[i] = icache_line[i];

  top->icache_ack_data_valid = 1;
  advance_clock(top);

  vluint64_t tick_until;

  for (i = 0; i < 8; i++) {
    tick_until = global_time + 1000;

    while (!top->debug_dest_valid && global_time < tick_until)
      advance_clock(top);

    if (!top->debug_dest_valid) {
      printf("1000 cycles without producing outout.\n");
      exit(0);
    }
  
    printf("\tSent instruction: %s\n", inst_text(icache_line[i]).c_str());
    printf("\t\tReceived output: (pc: %lX, dest: %lX, dest-reg: %d, f-long: %d)\n\n",
      top->debug_pc_ex, top->debug_dest, top->debug_dest_rd, top->debug_dest_long);
    
    advance_clock(top);
  }

  printf("Done.\n\n");

#ifdef TRACE
  tfp->close();
#endif

  return 0;
}

