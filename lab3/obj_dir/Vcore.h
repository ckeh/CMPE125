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
    VL_IN8(icache_ack_data_valid,0,0);
    VL_OUT8(icache_req_addr_valid,0,0);
    VL_OUT8(debug_dest_valid,0,0);
    VL_OUT8(debug_dest_rd,4,0);
    VL_OUT8(debug_dest_long,0,0);
    //char	__VpadToAlign7[1];
    VL_INW(icache_ack_data,255,0,8);
    VL_OUT64(icache_req_addr,63,0);
    VL_OUT64(debug_pc_ex,63,0);
    VL_OUT64(debug_dest,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(v__DOT__fetch_insn_valid,0,0);
    VL_SIG8(v__DOT__fetch_insn_retry,0,0);
    VL_SIG8(v__DOT__execute_valid,0,0);
    VL_SIG8(v__DOT__execute_retry,0,0);
    VL_SIG8(v__DOT__decode_retry,0,0);
    VL_SIG8(v__DOT__decode_valid,0,0);
    VL_SIG8(v__DOT__dest_rd,4,0);
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
    VL_SIG8(v__DOT__d__DOT__r__DOT__rf_cntr,4,0);
    VL_SIG8(v__DOT__e__DOT__a__DOT__dest_valid_next,0,0);
    VL_SIG8(v__DOT__e__DOT__a__DOT__dest_long_next,0,0);
    VL_SIG8(v__DOT__e__DOT__a__DOT__branch_target_valid_next,0,0);
    //char	__VpadToAlign89[1];
    VL_SIG16(v__DOT__d__DOT__s__DOT__branchimm,12,0);
    VL_SIG(v__DOT__fetch_insn,31,0);
    VL_SIG(v__DOT__decode_insn,31,0);
    VL_SIG(v__DOT__f__DOT__i__DOT__core_ack_insn_next,31,0);
    VL_SIG(v__DOT__d__DOT__s__DOT__jalimm,20,0);
    //char	__VpadToAlign108[4];
    VL_SIG64(v__DOT__fetch_pc,62,0);
    VL_SIG64(v__DOT__execute_pc,62,0);
    VL_SIG64(v__DOT__decode_pc,63,0);
    VL_SIG64(v__DOT__decode_sign_ext,63,0);
    VL_SIG64(v__DOT__decode_src1,63,0);
    VL_SIG64(v__DOT__decode_src2,63,0);
    VL_SIG64(v__DOT__req_addr,58,0);
    VL_SIG64(v__DOT__f__DOT__i__DOT__pc_req_tag,52,0);
    VL_SIG64(v__DOT__e__DOT__pc,63,0);
    VL_SIG64(v__DOT__e__DOT__a__DOT__dest_next,63,0);
    VL_SIG64(v__DOT__e__DOT__a__DOT__branch_target_next,63,0);
    VL_SIG8(v__DOT__f__DOT__i__DOT__ic_valid[64],0,0);
    VL_SIG64(v__DOT__f__DOT__i__DOT__ic_tag[64],52,0);
    VL_SIGW(v__DOT__f__DOT__i__DOT__ic_data[64],255,0,8);
    VL_SIG64(v__DOT__d__DOT__r__DOT__rf[32],63,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    //char	__VpadToAlign3085[3];
    VL_SIGW(v__DOT__e__DOT__a__DOT____Vcellout__f1__q,64,0,3);
    //char	__VpadToAlign3100[4];
    VL_SIGW(v__DOT__e__DOT__a__DOT____Vcellout__f2__q,65,0,3);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign3124[4];
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
    static void	_combo__TOP__3(Vcore__Syms* __restrict vlSymsp);
    static void	_combo__TOP__5(Vcore__Syms* __restrict vlSymsp);
    static void	_eval(Vcore__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vcore__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vcore__Syms* __restrict vlSymsp);
    static void	_initial__TOP__2(Vcore__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__1(Vcore__Syms* __restrict vlSymsp);
    static void	_settle__TOP__4(Vcore__Syms* __restrict vlSymsp);
    static void	_settle__TOP__6(Vcore__Syms* __restrict vlSymsp);
    static void	traceChgThis(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__5(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
