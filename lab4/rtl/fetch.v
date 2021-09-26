
module fetch(
  input clk,
  input reset,

  // top level interface
  output          icache_ack_data_retry, // ALWAYS FALSE to testbench
  input           icache_ack_data_valid,
  input  [255:0]  icache_ack_data,

  input           icache_req_addr_retry, 
  output          icache_req_addr_valid,
  output [63-5:0] icache_req_addr,   // lower 5 bits are always zero

  // from execute to fetch
  input           execute_valid,
  output          execute_retry, // ALWAYS FALSE to execute
  input  [63-1:0] execute_pc,   

  // From fetch to decode
  output          fetch_valid,
  input           fetch_retry, 
  output [31:0]   fetch_insn,  // core_ack_insn in icache
  output [63-1:0] fetch_pc   // icache calls it core_req_pc, // Bit 0 is always zero

);

  assign icache_ack_data_retry = 1'b0;
  assign execute_retry = 1'b0;

  wire [63-1:0] pc;
  reg [63-1:0] pc_next;

  icache i(
    .clk(clk),
    .reset(reset),

    .icache_ack_data_retry(icache_ack_data_retry), //output
    .icache_ack_data_valid(icache_ack_data_valid),
    .icache_ack_data(icache_ack_data),
   
   //from self 
    .core_req_pc_retry(execute_retry), //output
    .core_req_pc_valid(!fetch_retry),
    .core_req_pc(pc_next),
    .next_pc(fetch_pc),
    
    .icache_req_addr(icache_req_addr),
    .icache_req_addr_retry(icache_req_addr_retry), //input
    .icache_req_addr_valid(icache_req_addr_valid),

   //fetch_ 
    .core_ack_insn_retry(fetch_retry), //input
    .core_ack_insn_valid(fetch_valid),
    .core_ack_insn(fetch_insn)
     );

/* 
  fflop #(.Size(63))ff_pc ( 
    .din(pc_next), 
    .dinValid(1), 
    .dinRetry(), 
    
    .q(fetch_pc),
    .qValid(),
    .qRetry(fetch_retry),
    .*);
*/

  always @(*) begin
    if(!fetch_retry)begin
      if(execute_valid) begin
        pc_next = execute_pc;
      end else if(fetch_valid) begin
        pc_next = pc+2;
      end else begin
        pc_next = pc;
      end
    end
  end
    //assign pc_next = (execute_valid && !fetch_retry)? execute_pc: (fetch_valid)? pc+2: pc;

    fflop #(.Size(63))f_pc (
      .din(pc_next),
      .dinValid(1),
      .dinRetry(),

      .q(pc),
      .qValid(),
      .qRetry(0),
      .*
    );



endmodule

