#include <stdlib.h>
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

  //set up
  top->reset = 0;
  srand(time(NULL));
  int cyclenum = rand() %19 + 2;
  bool request = false;

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

  //first pc request
  top->core_req_pc = 0;
  top->core_req_pc_valid = 1;
  advance_clock(top,1);

  //the icache should request for data
  if(top->icache_req_addr_valid != 1)
    assert(0);

  //the request pc valid bit goes low
  top->core_req_pc_valid = 0;
  advance_clock(top,1);

  //wait random number of cycles
  for(i = 0; i<cyclenum; i++){
    advance_clock(top,1);
    request = true;
  }

  //if request was detected give data
  if(request){
    for (i = 0; i<8; i++){
      top->icache_ack_data[i] = rom[i];
    }

    //valid for 1 cycle
    top->icache_ack_data_valid = 1;
    advance_clock(top,1);
    top->icache_ack_data_valid = 0;
    advance_clock(top,1);
  }
  //set request to false (not used again in this test bench)
  request = false;
  advance_clock(top,1);

  //wait random number of cycles
  cyclenum = rand() %19 + 2;
  for (i = 0; i<cyclenum; i++){
    advance_clock(top,1);
  }

  // request pc with same index to cause a cache conflict
  top->core_req_pc = 1024;
  top->core_req_pc_valid = 1;
  advance_clock(top,1);

  //request from icache should be generated
  if(top->icache_req_addr_valid != 1)
    assert(0);

  top->core_req_pc_valid = 0;
  advance_clock(top,1);

  //wait random number of cycles
  advance_clock(top, cyclenum);

  //give data
  for (i = 0; i<8; i++){
    top->icache_ack_data[i] = rom1[i];
  }
  top->icache_ack_data_valid = 1;
  advance_clock(top,1);
  top->icache_ack_data_valid = 0;
  advance_clock(top,10);

#ifdef TRACE
  tfp->close();
#endif

  exit(0);
}

