#include <stdlib.h>
#include "Vcore.h"
#include "verilated.h"
#include "verilated_vcd_c.h"


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

  top->clk = 1;

  // initialize simulation inputs
  top->reset = 1;
  advance_clock(top,2);

  top->reset = 0;
  srand(time(NULL));
  int cyclenum = rand() %19 + 2;
  printf("RANDOM NUMBER = %d\n\n", cyclenum);
  bool request = false;

  for(i = 0; i<cyclenum; i++){
    advance_clock(top,1);
    if(top->icache_req_addr_valid){
      request = true;
      printf("REQUEST! \nvalid = %d, req_addr = %lX\n", top->icache_req_addr_valid, top->icache_req_addr);
    }
  }
  

  unsigned int rom [8] = { 
    0x500013,  //ADDI 
    0x110113, //addi
    0x204E63, //blt
    0x405282B3, //sub
    0x40420233, //sub
    0x42823B, //addw
    0x12829B, //addiw
    0xFE029CE3 //bne
  };
  if(request){
    for (i = 0; i<8; i++){
      top->icache_ack_data[i] = rom[i];
    }

    top->icache_ack_data_valid = 1;
    advance_clock(top,1);

    top->icache_ack_data_valid = 0;
    advance_clock(top,1);
  }
  request = false;

  for (i = 0; i<100; i++){
    advance_clock(top, 1); 
    if(top->icache_req_addr_valid){
      request = true;
      printf("REQUEST!\nvalid = %d, req_addr = %lX\n", top->icache_req_addr_valid, top->icache_req_addr);
      break;
    } 
  }

  cyclenum = rand() %19 + 2;
  
  printf("\n\nRANDOM NUMBER2 = %d\n\n", cyclenum);
  unsigned int rom1 [8] = { 
    0x80006F,  // JAL
    0x40420233, //sub
    0x20013, //addi
    0x8067, //jalr
    0x00,
    0x00,
    0x00,
    0x00
  };

  if(request){
    advance_clock(top, cyclenum);
    for (i = 0; i<8; i++){
      top->icache_ack_data[i] = rom1[i];
    }
    top->icache_ack_data_valid = 1;
    advance_clock(top,1);

    top->icache_ack_data_valid = 0;
    request = false;
  }
  advance_clock(top,50);


#ifdef TRACE
  tfp->close();
#endif

  exit(0);
}

