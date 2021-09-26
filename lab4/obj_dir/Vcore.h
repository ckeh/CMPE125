// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vcore_H_
#define _Vcore_H_

#include "verilated.h"
class Vcore__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vcore) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(icache_ack_data_retry,0,0);
    VL_IN8(icache_ack_data_valid,0,0);
    VL_OUT8(icache_req_addr_valid,0,0);
    VL_IN8(icache_req_addr_retry,0,0);
    VL_OUT8(dcache_req_op,3,0);
    VL_OUT8(dcache_req_rd,4,0);
    VL_OUT8(dcache_req_valid,0,0);
    VL_IN8(dcache_req_retry,0,0);
    VL_IN8(dcache_ack_rd,4,0);
    VL_IN8(dcache_ack_valid,0,0);
    VL_OUT8(dcache_ack_retry,0,0);
    VL_OUT8(debug_dest_valid,0,0);
    VL_OUT8(debug_dest_rd,4,0);
    VL_OUT8(debug_dest_long,0,0);
    VL_INW(icache_ack_data,255,0,8);
    VL_OUT64(icache_req_addr,63,0);
    VL_OUT64(dcache_req_addr,63,0);
    VL_OUT64(dcache_req_data,63,0);
    VL_IN64(dcache_ack_data,63,0);
    VL_OUT64(debug_pc_ex,63,0);
    VL_OUT64(debug_dest,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(v__DOT__fetch_retry,0,0);
    VL_SIG8(v__DOT__execute_retry,0,0);
    VL_SIG8(v__DOT__decode_valid,0,0);
    VL_SIG8(v__DOT__dest_clear,0,0);
    VL_SIG8(v__DOT__f__DOT__i__DOT__ic_valid_we,0,0);
    VL_SIG8(v__DOT__f__DOT__i__DOT__ic_data_we,0,0);
    VL_SIG8(v__DOT__f__DOT__i__DOT__ic_tag_we,0,0);
    VL_SIG8(v__DOT__f__DOT__i__DOT__core_ack_insn_valid_next,0,0);
    VL_SIG8(v__DOT__f__DOT__i__DOT__icache_req_addr_valid_next,0,0);
    VL_SIG8(v__DOT__f__DOT__i__DOT__pc_req_offset,4,0);
    VL_SIG8(v__DOT__f__DOT__i__DOT__pc_req_index,5,0);
    VL_SIG8(v__DOT__f__DOT__i__DOT__clear_idx,5,0);
    VL_SIG8(v__DOT__f__DOT__i__DOT__pc_valid,0,0);
    VL_SIG8(v__DOT__f__DOT__i__DOT__pc_valid_next,0,0);
    VL_SIG8(v__DOT__f__DOT__i__DOT__ff_req__DOT__c1,0,0);
    VL_SIG8(v__DOT__f__DOT__i__DOT__ff_req__DOT__c2,0,0);
    VL_SIG8(v__DOT__f__DOT__i__DOT__ff_req__DOT__shadowValid,0,0);
    VL_SIG8(v__DOT__f__DOT__i__DOT__ff_req__DOT__q_enable,0,0);
    VL_SIG8(v__DOT__f__DOT__i__DOT__ff_req__DOT__priv_qValidla2,0,0);
    VL_SIG8(v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__c1,0,0);
    VL_SIG8(v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__c2,0,0);
    VL_SIG8(v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__shadowValid,0,0);
    VL_SIG8(v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__q_enable,0,0);
    VL_SIG8(v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__priv_qValidla2,0,0);
    VL_SIG8(v__DOT__f__DOT__f_pc__DOT__priv_qValidla2,0,0);
    VL_SIG8(v__DOT__d__DOT__f1_retry,0,0);
    VL_SIG8(v__DOT__d__DOT__f_retry,0,0);
    VL_SIG8(v__DOT__d__DOT__load_valid,0,0);
    VL_SIG8(v__DOT__d__DOT__load_valid_next,0,0);
    VL_SIG8(v__DOT__d__DOT__ff_pc_insn_signext__DOT__c1,0,0);
    VL_SIG8(v__DOT__d__DOT__ff_pc_insn_signext__DOT__c2,0,0);
    VL_SIG8(v__DOT__d__DOT__ff_pc_insn_signext__DOT__shadowValid,0,0);
    VL_SIG8(v__DOT__d__DOT__ff_pc_insn_signext__DOT__q_enable,0,0);
    VL_SIG8(v__DOT__d__DOT__ff_pc_insn_signext__DOT__priv_qValidla2,0,0);
    VL_SIG8(v__DOT__d__DOT__r__DOT__rf_cntr,4,0);
    VL_SIG8(v__DOT__d__DOT__r__DOT__data__DOT__c1,0,0);
    VL_SIG8(v__DOT__d__DOT__r__DOT__data__DOT__shadowValid,0,0);
    VL_SIG8(v__DOT__d__DOT__r__DOT__data__DOT__q_enable,0,0);
    VL_SIG8(v__DOT__d__DOT__r__DOT__data__DOT__priv_qValidla2,0,0);
    VL_SIG8(v__DOT__e__DOT__rd_mem1__DOT__c1,0,0);
    VL_SIG8(v__DOT__e__DOT__rd_mem1__DOT__c2,0,0);
    VL_SIG8(v__DOT__e__DOT__rd_mem1__DOT__shadowValid,0,0);
    VL_SIG8(v__DOT__e__DOT__rd_mem1__DOT__q_enable,0,0);
    VL_SIG8(v__DOT__e__DOT__rd_mem1__DOT__priv_qValidla2,0,0);
    VL_SIG8(v__DOT__e__DOT__rd_mem2__DOT__c1,0,0);
    VL_SIG8(v__DOT__e__DOT__rd_mem2__DOT__c2,0,0);
    VL_SIG8(v__DOT__e__DOT__rd_mem2__DOT__shadowValid,0,0);
    VL_SIG8(v__DOT__e__DOT__rd_mem2__DOT__q_enable,0,0);
    VL_SIG8(v__DOT__e__DOT__rd_mem2__DOT__priv_qValidla2,0,0);
    VL_SIG8(v__DOT__e__DOT__rd_mem3__DOT__c1,0,0);
    VL_SIG8(v__DOT__e__DOT__rd_mem3__DOT__c2,0,0);
    VL_SIG8(v__DOT__e__DOT__rd_mem3__DOT__shadowValid,0,0);
    VL_SIG8(v__DOT__e__DOT__rd_mem3__DOT__q_enable,0,0);
    VL_SIG8(v__DOT__e__DOT__rd_mem3__DOT__priv_qValidla2,0,0);
    VL_SIG8(v__DOT__e__DOT__a__DOT__dest_valid_next,0,0);
    VL_SIG8(v__DOT__e__DOT__a__DOT__dest_long_next,0,0);
    VL_SIG8(v__DOT__e__DOT__a__DOT__branch_target_valid_next,0,0);
    VL_SIG8(v__DOT__e__DOT__a__DOT__dcache_req_op_next,3,0);
    VL_SIG8(v__DOT__e__DOT__a__DOT__dcache_req_rd_next,4,0);
    VL_SIG8(v__DOT__e__DOT__a__DOT__dcache_req_valid_next,0,0);
    VL_SIG8(v__DOT__e__DOT__a__DOT__dcache_req_retry_next,0,0);
    VL_SIG8(v__DOT__e__DOT__a__DOT__dest_reg,4,0);
    VL_SIG8(v__DOT__e__DOT__a__DOT__dest_clear_next,0,0);
    VL_SIG8(v__DOT__e__DOT__a__DOT__busy_next,0,0);
    VL_SIG8(v__DOT__e__DOT__a__DOT__busy,0,0);
    VL_SIG8(v__DOT__e__DOT__a__DOT__ff1__DOT__c2,0,0);
    VL_SIG8(v__DOT__e__DOT__a__DOT__ff1__DOT__shadowValid,0,0);
    VL_SIG8(v__DOT__e__DOT__a__DOT__ff1__DOT__priv_qValidla2,0,0);
    VL_SIG8(v__DOT__e__DOT__a__DOT__ff2__DOT__c2,0,0);
    VL_SIG8(v__DOT__e__DOT__a__DOT__ff2__DOT__q_enable,0,0);
    VL_SIG8(v__DOT__e__DOT__a__DOT__ff2__DOT__priv_qValidla2,0,0);
    VL_SIG8(v__DOT__e__DOT__a__DOT__ff_dcache__DOT__c1,0,0);
    VL_SIG8(v__DOT__e__DOT__a__DOT__ff_dcache__DOT__c2,0,0);
    VL_SIG8(v__DOT__e__DOT__a__DOT__ff_dcache__DOT__shadowValid,0,0);
    VL_SIG8(v__DOT__e__DOT__a__DOT__ff_dcache__DOT__priv_dinRetry,0,0);
    VL_SIG8(v__DOT__e__DOT__a__DOT__ff_dcache__DOT__q_enable,0,0);
    VL_SIG8(v__DOT__e__DOT__a__DOT__ff_dcache__DOT__priv_qValidla2,0,0);
    //char	__VpadToAlign177[1];
    VL_SIG16(v__DOT__d__DOT__branchimm,12,0);
    VL_SIG16(v__DOT__d__DOT__stimm12,11,0);
    //char	__VpadToAlign182[2];
    VL_SIG(v__DOT__f__DOT__i__DOT__core_ack_insn_next,31,0);
    //char	__VpadToAlign188[4];
    VL_SIGW(v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__shadowq,94,0,3);
    VL_SIG(v__DOT__d__DOT__load,31,0);
    VL_SIG(v__DOT__d__DOT__load_next,31,0);
    VL_SIG(v__DOT__d__DOT__jalimm,20,0);
    VL_SIGW(v__DOT__d__DOT__ff_pc_insn_signext__DOT__shadowq,159,0,5);
    //char	__VpadToAlign236[4];
    VL_SIGW(v__DOT__d__DOT__r__DOT__data__DOT__shadowq,127,0,4);
    VL_SIGW(v__DOT__e__DOT__rd_mem1__DOT__shadowq,68,0,3);
    //char	__VpadToAlign268[4];
    VL_SIGW(v__DOT__e__DOT__rd_mem2__DOT__shadowq,68,0,3);
    //char	__VpadToAlign284[4];
    VL_SIGW(v__DOT__e__DOT__rd_mem3__DOT__shadowq,68,0,3);
    //char	__VpadToAlign300[4];
    VL_SIGW(v__DOT__e__DOT__a__DOT__ff2__DOT__shadowq,70,0,3);
    //char	__VpadToAlign316[4];
    VL_SIGW(v__DOT__e__DOT__a__DOT__ff_dcache__DOT__shadowq,136,0,5);
    //char	__VpadToAlign340[4];
    VL_SIG64(v__DOT__execute_pc,62,0);
    VL_SIG64(v__DOT__req_addr,58,0);
    VL_SIG64(v__DOT__f__DOT__pc,62,0);
    VL_SIG64(v__DOT__f__DOT__pc_next,62,0);
    VL_SIG64(v__DOT__f__DOT__i__DOT__pc_req_tag,52,0);
    VL_SIG64(v__DOT__f__DOT__i__DOT__ff_req__DOT__shadowq,58,0);
    VL_SIG64(v__DOT__f__DOT__f_pc__DOT__shadowq,62,0);
    VL_SIG64(v__DOT__d__DOT__r__DOT__data1_next,63,0);
    VL_SIG64(v__DOT__d__DOT__r__DOT__data2_next,63,0);
    VL_SIG64(v__DOT__e__DOT__pc,63,0);
    VL_SIG64(v__DOT__e__DOT__rs1_data,63,0);
    VL_SIG64(v__DOT__e__DOT__rs2_data,63,0);
    VL_SIG64(v__DOT__e__DOT__a__DOT__dest_next,63,0);
    VL_SIG64(v__DOT__e__DOT__a__DOT__branch_target_next,63,0);
    VL_SIG64(v__DOT__e__DOT__a__DOT__dcache_req_addr_next,63,0);
    VL_SIG64(v__DOT__e__DOT__a__DOT__dcache_req_data_next,63,0);
    VL_SIG64(v__DOT__e__DOT__a__DOT__desired_pc_next,63,0);
    VL_SIG64(v__DOT__e__DOT__a__DOT__desired_pc,63,0);
    VL_SIG64(v__DOT__e__DOT__a__DOT__ff1__DOT__shadowq,62,0);
    VL_SIG8(v__DOT__f__DOT__i__DOT__ic_valid[64],0,0);
    VL_SIG64(v__DOT__f__DOT__i__DOT__ic_tag[64],52,0);
    VL_SIGW(v__DOT__f__DOT__i__DOT__ic_data[64],255,0,8);
    VL_SIG64(v__DOT__d__DOT__r__DOT__rf[32],63,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    //char	__VpadToAlign3381[3];
    VL_SIGW(v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q,94,0,3);
    //char	__VpadToAlign3396[4];
    VL_SIGW(v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q,159,0,5);
    //char	__VpadToAlign3420[4];
    VL_SIGW(v__DOT__d__DOT__r__DOT____Vcellout__data__q,127,0,4);
    VL_SIGW(v__DOT__e__DOT____Vcellout__rd_mem1__q,68,0,3);
    //char	__VpadToAlign3452[4];
    VL_SIGW(v__DOT__e__DOT____Vcellout__rd_mem2__q,68,0,3);
    //char	__VpadToAlign3468[4];
    VL_SIGW(v__DOT__e__DOT____Vcellout__rd_mem3__q,68,0,3);
    //char	__VpadToAlign3484[4];
    VL_SIGW(v__DOT__e__DOT__a__DOT____Vcellout__ff2__q,70,0,3);
    //char	__VpadToAlign3500[4];
    VL_SIGW(v__DOT__e__DOT__a__DOT____Vcellout__ff_dcache__q,136,0,5);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign3532[4];
    Vcore__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vcore& operator= (const Vcore&);	///< Copying not allowed
    Vcore(const Vcore&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vcore(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vcore();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vcore__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vcore__Syms* symsp, bool first);
  private:
    static QData	_change_request(Vcore__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__11(Vcore__Syms* __restrict vlSymsp);
    static void	_combo__TOP__14(Vcore__Syms* __restrict vlSymsp);
    static void	_combo__TOP__22(Vcore__Syms* __restrict vlSymsp);
    static void	_combo__TOP__25(Vcore__Syms* __restrict vlSymsp);
    static void	_combo__TOP__27(Vcore__Syms* __restrict vlSymsp);
    static void	_combo__TOP__29(Vcore__Syms* __restrict vlSymsp);
    static void	_combo__TOP__6(Vcore__Syms* __restrict vlSymsp);
    static void	_eval(Vcore__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vcore__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vcore__Syms* __restrict vlSymsp);
    static void	_initial__TOP__1(Vcore__Syms* __restrict vlSymsp);
    static void	_initial__TOP__7(Vcore__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__20(Vcore__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__10(Vcore__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__12(Vcore__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__13(Vcore__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__16(Vcore__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__17(Vcore__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__18(Vcore__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__2(Vcore__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__21(Vcore__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__23(Vcore__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(Vcore__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__5(Vcore__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__8(Vcore__Syms* __restrict vlSymsp);
    static void	_settle__TOP__15(Vcore__Syms* __restrict vlSymsp);
    static void	_settle__TOP__19(Vcore__Syms* __restrict vlSymsp);
    static void	_settle__TOP__24(Vcore__Syms* __restrict vlSymsp);
    static void	_settle__TOP__26(Vcore__Syms* __restrict vlSymsp);
    static void	_settle__TOP__28(Vcore__Syms* __restrict vlSymsp);
    static void	_settle__TOP__4(Vcore__Syms* __restrict vlSymsp);
    static void	_settle__TOP__9(Vcore__Syms* __restrict vlSymsp);
    static void	traceChgThis(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__10(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__11(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__12(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__13(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__14(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__15(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__16(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__17(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__18(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__19(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__20(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__21(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__22(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__23(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__24(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__5(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__6(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__7(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__8(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__9(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
