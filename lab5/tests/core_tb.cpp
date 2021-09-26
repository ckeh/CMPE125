#include <stdlib.h>
#include "Vcore.h"
#include "verilated.h"
#include "verilated_vcd_c.h"


vluint64_t global_time = 0;
VerilatedVcdC* tfp = 0;

#if 1
void advance_half_clock(Vcore *top) {
#ifdef TRACE
  tfp->dump(global_time);
#endif

  top->eval();
  top->clk = !top->clk;
  top->eval();

  global_time++;
  if (Verilated::gotFinish())  
    exit(0);
}

void advance_clock(Vcore *top, int nclocks=1) {

  for( int i=0;i<nclocks;i++) {
    for (int clk=0; clk<2; clk++) {
      advance_half_clock(top);
    }
  }
}
#endif

#if 0
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
#endif

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
  int cyclenum = 5;//rand() %19 + 2;
  printf("RANDOM NUMBER = %d\n\n", cyclenum);
  bool request = false;

  for(i = 0; i<cyclenum; i++){
    advance_clock(top,1);
    if(top->icache_req_addr_valid){
      if(request == false)
        printf("REQUEST! \nvalid = %d, req_addr = %lX\n", top->icache_req_addr_valid, top->icache_req_addr);
      request = true;
      
    }
  }
#if 1
  unsigned int rom [8] = { 
    0x200013,  //ADDI 
    0x110113, //addi
    0x42823B, //addw
    0x12829B, //addiw
    0xFE029CE3, //bne
    0x3183,  //LD 
    0x518213,  //ADDI 
    0x500013  //ADDI 
  };
#endif
#if 0
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
#endif
#if 0
  unsigned int rom [8] = { 
    0x500013,  //ADDI r0+5->r1 
    0x500093,  //ADDI r1+5->r2 ...
    0x508113,  //ADDI 
    0x3183,  //LD 
    0x518213,  //ADDI 
    0x520293,  //ADDI 
    0x528313,  //ADDI 
    0x530393,  //ADDI 
  };
#endif
#if 0
  unsigned int rom [8] = { 
    0x500013,  //ADDI r0+5->r1 
    0x500093,  //ADDI r1+5->r2 ...
    0x508113,  //ADDI 
    0x510193,  //ADDI 
    0x518213,  //ADDI 
    0x520293,  //ADDI 
    0x528313,  //ADDI 
    0x530393,  //ADDI 
  };
#endif
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
  for(i = 0; i<20; i++){
    advance_clock(top,1);
    if(top->dcache_req_valid){
      break;
      printf("REQEST FOR RD%d\n",top->dcache_req_rd);
    }
  }
//advance_clock(top,20);
top->dcache_req_retry = 1;

advance_clock(top,30);
top->dcache_req_retry = 0;
advance_clock(top,1);

top->dcache_ack_valid = 1;
top->dcache_ack_data = 1;
top->dcache_ack_rd = 3;
advance_clock(top,1);

top->dcache_ack_valid = 0;
top->dcache_ack_data = 0;
top->dcache_ack_rd = 0;
advance_clock(top,20);
advance_clock(top,20);

#if 0
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
#endif

#ifdef TRACE
  tfp->close();
#endif

  exit(0);
}

