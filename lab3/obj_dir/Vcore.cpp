// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore.h"             // For This
#include "Vcore__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vcore) {
    Vcore__Syms* __restrict vlSymsp = __VlSymsp = new Vcore__Syms(this, name());
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    icache_ack_data_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256,icache_ack_data);
    icache_req_addr = VL_RAND_RESET_Q(64);
    icache_req_addr_valid = VL_RAND_RESET_I(1);
    debug_pc_ex = VL_RAND_RESET_Q(64);
    debug_dest_valid = VL_RAND_RESET_I(1);
    debug_dest = VL_RAND_RESET_Q(64);
    debug_dest_rd = VL_RAND_RESET_I(5);
    debug_dest_long = VL_RAND_RESET_I(1);
    v__DOT__fetch_insn_valid = VL_RAND_RESET_I(1);
    v__DOT__fetch_insn_retry = VL_RAND_RESET_I(1);
    v__DOT__fetch_insn = VL_RAND_RESET_I(32);
    v__DOT__fetch_pc = VL_RAND_RESET_Q(63);
    v__DOT__execute_valid = VL_RAND_RESET_I(1);
    v__DOT__execute_pc = VL_RAND_RESET_Q(63);
    v__DOT__execute_retry = VL_RAND_RESET_I(1);
    v__DOT__decode_retry = VL_RAND_RESET_I(1);
    v__DOT__decode_valid = VL_RAND_RESET_I(1);
    v__DOT__decode_insn = VL_RAND_RESET_I(32);
    v__DOT__decode_pc = VL_RAND_RESET_Q(64);
    v__DOT__decode_sign_ext = VL_RAND_RESET_Q(64);
    v__DOT__decode_src1 = VL_RAND_RESET_Q(64);
    v__DOT__decode_src2 = VL_RAND_RESET_Q(64);
    v__DOT__dest_rd = VL_RAND_RESET_I(5);
    v__DOT__req_addr = VL_RAND_RESET_Q(59);
    v__DOT__f__DOT__i__DOT__ic_valid_we = VL_RAND_RESET_I(1);
    v__DOT__f__DOT__i__DOT__ic_data_we = VL_RAND_RESET_I(1);
    v__DOT__f__DOT__i__DOT__ic_tag_we = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
	    v__DOT__f__DOT__i__DOT__ic_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
	    v__DOT__f__DOT__i__DOT__ic_tag[__Vi0] = VL_RAND_RESET_Q(53);
    }}
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
	    VL_RAND_RESET_W(256,v__DOT__f__DOT__i__DOT__ic_data[__Vi0]);
    }}
    v__DOT__f__DOT__i__DOT__core_ack_insn_valid_next = VL_RAND_RESET_I(1);
    v__DOT__f__DOT__i__DOT__core_ack_insn_next = VL_RAND_RESET_I(32);
    v__DOT__f__DOT__i__DOT__icache_req_addr_valid_next = VL_RAND_RESET_I(1);
    v__DOT__f__DOT__i__DOT__pc_req_offset = VL_RAND_RESET_I(5);
    v__DOT__f__DOT__i__DOT__pc_req_index = VL_RAND_RESET_I(6);
    v__DOT__f__DOT__i__DOT__pc_req_tag = VL_RAND_RESET_Q(53);
    v__DOT__f__DOT__i__DOT__clear_idx = VL_RAND_RESET_I(6);
    v__DOT__f__DOT__i__DOT__pc_valid = VL_RAND_RESET_I(1);
    v__DOT__f__DOT__i__DOT__pc_valid_next = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    v__DOT__d__DOT__r__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    v__DOT__d__DOT__r__DOT__rf_cntr = VL_RAND_RESET_I(5);
    v__DOT__d__DOT__s__DOT__branchimm = VL_RAND_RESET_I(13);
    v__DOT__d__DOT__s__DOT__jalimm = VL_RAND_RESET_I(21);
    v__DOT__e__DOT__pc = VL_RAND_RESET_Q(64);
    v__DOT__e__DOT__a__DOT__dest_valid_next = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__a__DOT__dest_long_next = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__a__DOT__dest_next = VL_RAND_RESET_Q(64);
    v__DOT__e__DOT__a__DOT__branch_target_valid_next = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__a__DOT__branch_target_next = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65,v__DOT__e__DOT__a__DOT____Vcellout__f1__q);
    VL_RAND_RESET_W(66,v__DOT__e__DOT__a__DOT____Vcellout__f2__q);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void Vcore::__Vconfigure(Vcore__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcore::~Vcore() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vcore::eval() {
    Vcore__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vcore::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vcore::_eval_initial_loop(Vcore__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vcore::_sequent__TOP__1(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_sequent__TOP__1\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvdim0__v__DOT__f__DOT__i__DOT__ic_valid__v0,5,0);
    VL_SIG8(__Vdlyvset__v__DOT__f__DOT__i__DOT__ic_valid__v0,0,0);
    VL_SIG8(__Vdly__v__DOT__f__DOT__i__DOT__clear_idx,5,0);
    VL_SIG8(__Vdlyvdim0__v__DOT__f__DOT__i__DOT__ic_data__v0,5,0);
    VL_SIG8(__Vdlyvset__v__DOT__f__DOT__i__DOT__ic_data__v0,0,0);
    VL_SIG8(__Vdlyvdim0__v__DOT__f__DOT__i__DOT__ic_tag__v0,5,0);
    VL_SIG8(__Vdlyvset__v__DOT__f__DOT__i__DOT__ic_tag__v0,0,0);
    VL_SIG8(__Vdlyvdim0__v__DOT__f__DOT__i__DOT__ic_valid__v1,5,0);
    VL_SIG8(__Vdlyvset__v__DOT__f__DOT__i__DOT__ic_valid__v1,0,0);
    VL_SIG8(__Vdlyvdim0__v__DOT__d__DOT__r__DOT__rf__v0,4,0);
    VL_SIG8(__Vdlyvset__v__DOT__d__DOT__r__DOT__rf__v0,0,0);
    VL_SIG8(__Vdly__v__DOT__d__DOT__r__DOT__rf_cntr,4,0);
    VL_SIG8(__Vdlyvdim0__v__DOT__d__DOT__r__DOT__rf__v1,4,0);
    VL_SIG8(__Vdlyvset__v__DOT__d__DOT__r__DOT__rf__v1,0,0);
    VL_SIG8(__Vdlyvdim0__v__DOT__d__DOT__r__DOT__rf__v2,4,0);
    VL_SIG8(__Vdlyvlsb__v__DOT__d__DOT__r__DOT__rf__v2,5,0);
    VL_SIG8(__Vdlyvset__v__DOT__d__DOT__r__DOT__rf__v2,0,0);
    VL_SIG8(__Vdly__v__DOT__decode_retry,0,0);
    //char	__VpadToAlign22[2];
    VL_SIGW(__Vdlyvval__v__DOT__f__DOT__i__DOT__ic_data__v0,255,0,8);
    VL_SIG(__Vdlyvval__v__DOT__d__DOT__r__DOT__rf__v2,31,0);
    //char	__VpadToAlign60[4];
    VL_SIG64(__Vdlyvval__v__DOT__f__DOT__i__DOT__ic_tag__v0,52,0);
    VL_SIG64(__Vdlyvval__v__DOT__d__DOT__r__DOT__rf__v1,63,0);
    // Body
    __Vdly__v__DOT__decode_retry = vlTOPp->v__DOT__decode_retry;
    __Vdly__v__DOT__f__DOT__i__DOT__clear_idx = vlTOPp->v__DOT__f__DOT__i__DOT__clear_idx;
    __Vdlyvset__v__DOT__f__DOT__i__DOT__ic_data__v0 = 0U;
    __Vdlyvset__v__DOT__f__DOT__i__DOT__ic_tag__v0 = 0U;
    __Vdly__v__DOT__d__DOT__r__DOT__rf_cntr = vlTOPp->v__DOT__d__DOT__r__DOT__rf_cntr;
    __Vdlyvset__v__DOT__f__DOT__i__DOT__ic_valid__v0 = 0U;
    __Vdlyvset__v__DOT__f__DOT__i__DOT__ic_valid__v1 = 0U;
    __Vdlyvset__v__DOT__d__DOT__r__DOT__rf__v0 = 0U;
    __Vdlyvset__v__DOT__d__DOT__r__DOT__rf__v1 = 0U;
    __Vdlyvset__v__DOT__d__DOT__r__DOT__rf__v2 = 0U;
    // ALWAYS at rtl/flop.v:11
    vlTOPp->icache_req_addr_valid = ((~ (IData)(vlTOPp->reset)) 
				     & (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__icache_req_addr_valid_next));
    // ALWAYS at rtl/flop.v:11
    vlTOPp->v__DOT__f__DOT__i__DOT__pc_valid = ((~ (IData)(vlTOPp->reset)) 
						& (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_valid_next));
    // ALWAYS at rtl/flop.v:11
    __Vdly__v__DOT__decode_retry = ((~ (IData)(vlTOPp->reset)) 
				    & (IData)(vlTOPp->v__DOT__execute_retry));
    // ALWAYS at rtl/flop.v:11
    __Vdly__v__DOT__decode_retry = ((~ (IData)(vlTOPp->reset)) 
				    & (IData)(vlTOPp->v__DOT__execute_retry));
    // ALWAYS at rtl/flop_e.v:12
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__decode_sign_ext = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__fetch_insn_valid) {
	    vlTOPp->v__DOT__decode_sign_ext = ((0x63U 
						== 
						(0x7fU 
						 & vlTOPp->v__DOT__fetch_insn))
					        ? (
						   (VL_ULL(0xffffffffffffe000) 
						    & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& ((IData)(vlTOPp->v__DOT__d__DOT__s__DOT__branchimm) 
										>> 0xcU))))) 
						       << 0xdU)) 
						   | (QData)((IData)(vlTOPp->v__DOT__d__DOT__s__DOT__branchimm)))
					        : (
						   (0x6fU 
						    == 
						    (0x7fU 
						     & vlTOPp->v__DOT__fetch_insn))
						    ? 
						   ((VL_ULL(0xffffffffffe00000) 
						     & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__d__DOT__s__DOT__jalimm 
										>> 0x14U))))) 
							<< 0x15U)) 
						    | (QData)((IData)(vlTOPp->v__DOT__d__DOT__s__DOT__jalimm)))
						    : 
						   ((0x17U 
						     == 
						     (0x7fU 
						      & vlTOPp->v__DOT__fetch_insn))
						     ? 
						    (((QData)((IData)(
								      VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->v__DOT__fetch_insn 
										>> 0x1fU)))))) 
						      << 0x20U) 
						     | (QData)((IData)(
								       (0xfffff000U 
									& vlTOPp->v__DOT__fetch_insn))))
						     : 
						    ((VL_ULL(0xfffffffffffff000) 
						      & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__fetch_insn 
										>> 0x1fU))))) 
							 << 0xcU)) 
						     | (QData)((IData)(
								       (0xfffU 
									& (vlTOPp->v__DOT__fetch_insn 
									   >> 0x14U))))))));
	}
    }
    // ALWAYS at rtl/flop.v:11
    vlTOPp->v__DOT__req_addr = (VL_ULL(0x7ffffffffffffff) 
				& ((IData)(vlTOPp->reset)
				    ? VL_ULL(0) : (vlTOPp->v__DOT__execute_pc 
						   >> 4U)));
    // ALWAYS at rtl/flop_r.v:7
    vlTOPp->v__DOT__execute_valid = ((IData)(vlTOPp->reset) 
				     | (IData)(vlTOPp->v__DOT__decode_valid));
    // ALWAYS at rtl/flop_e.v:12
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f1__q[0U] = 0U;
	vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f1__q[1U] = 0U;
	vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f1__q[2U] = 0U;
    } else {
	if (vlTOPp->v__DOT__decode_valid) {
	    vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f1__q[0U] 
		= ((0xfffffffeU & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next) 
				   << 1U)) | (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next));
	    vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f1__q[1U] 
		= ((1U & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next) 
			  >> 0x1fU)) | (0xfffffffeU 
					& ((IData)(
						   (vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
						    >> 0x20U)) 
					   << 1U)));
	    vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f1__q[2U] 
		= (1U & ((IData)((vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
				  >> 0x20U)) >> 0x1fU));
	}
    }
    // ALWAYS at rtl/icache.v:160
    if (vlTOPp->reset) {
	__Vdlyvset__v__DOT__f__DOT__i__DOT__ic_valid__v0 = 1U;
	__Vdlyvdim0__v__DOT__f__DOT__i__DOT__ic_valid__v0 
	    = vlTOPp->v__DOT__f__DOT__i__DOT__clear_idx;
	__Vdly__v__DOT__f__DOT__i__DOT__clear_idx = 
	    (0x3fU & ((IData)(1U) + (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__clear_idx)));
    } else {
	if (vlTOPp->v__DOT__f__DOT__i__DOT__ic_data_we) {
	    __Vdlyvval__v__DOT__f__DOT__i__DOT__ic_data__v0[0U] 
		= vlTOPp->icache_ack_data[0U];
	    __Vdlyvval__v__DOT__f__DOT__i__DOT__ic_data__v0[1U] 
		= vlTOPp->icache_ack_data[1U];
	    __Vdlyvval__v__DOT__f__DOT__i__DOT__ic_data__v0[2U] 
		= vlTOPp->icache_ack_data[2U];
	    __Vdlyvval__v__DOT__f__DOT__i__DOT__ic_data__v0[3U] 
		= vlTOPp->icache_ack_data[3U];
	    __Vdlyvval__v__DOT__f__DOT__i__DOT__ic_data__v0[4U] 
		= vlTOPp->icache_ack_data[4U];
	    __Vdlyvval__v__DOT__f__DOT__i__DOT__ic_data__v0[5U] 
		= vlTOPp->icache_ack_data[5U];
	    __Vdlyvval__v__DOT__f__DOT__i__DOT__ic_data__v0[6U] 
		= vlTOPp->icache_ack_data[6U];
	    __Vdlyvval__v__DOT__f__DOT__i__DOT__ic_data__v0[7U] 
		= vlTOPp->icache_ack_data[7U];
	    __Vdlyvset__v__DOT__f__DOT__i__DOT__ic_data__v0 = 1U;
	    __Vdlyvdim0__v__DOT__f__DOT__i__DOT__ic_data__v0 
		= vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index;
	}
	if (vlTOPp->v__DOT__f__DOT__i__DOT__ic_tag_we) {
	    __Vdlyvval__v__DOT__f__DOT__i__DOT__ic_tag__v0 
		= vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_tag;
	    __Vdlyvset__v__DOT__f__DOT__i__DOT__ic_tag__v0 = 1U;
	    __Vdlyvdim0__v__DOT__f__DOT__i__DOT__ic_tag__v0 
		= vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index;
	}
	if (vlTOPp->v__DOT__f__DOT__i__DOT__ic_valid_we) {
	    __Vdlyvset__v__DOT__f__DOT__i__DOT__ic_valid__v1 = 1U;
	    __Vdlyvdim0__v__DOT__f__DOT__i__DOT__ic_valid__v1 
		= vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index;
	}
    }
    // ALWAYS at rtl/flop_er.v:8
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__e__DOT__pc = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__decode_valid) {
	    vlTOPp->v__DOT__e__DOT__pc = (VL_ULL(4) 
					  + vlTOPp->v__DOT__decode_pc);
	}
    }
    // ALWAYS at rtl/regfile.v:27
    if (vlTOPp->reset) {
	__Vdlyvset__v__DOT__d__DOT__r__DOT__rf__v0 = 1U;
	__Vdlyvdim0__v__DOT__d__DOT__r__DOT__rf__v0 
	    = vlTOPp->v__DOT__d__DOT__r__DOT__rf_cntr;
	__Vdly__v__DOT__d__DOT__r__DOT__rf_cntr = (0x1fU 
						   & ((IData)(1U) 
						      + (IData)(vlTOPp->v__DOT__d__DOT__r__DOT__rf_cntr)));
    } else {
	vlTOPp->v__DOT__decode_src1 = vlTOPp->v__DOT__d__DOT__r__DOT__rf
	    [(0x1fU & (vlTOPp->v__DOT__fetch_insn >> 0xfU))];
	vlTOPp->v__DOT__decode_src2 = vlTOPp->v__DOT__d__DOT__r__DOT__rf
	    [(0x1fU & (vlTOPp->v__DOT__fetch_insn >> 0x14U))];
	if ((1U & vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[0U])) {
	    if ((2U & vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[0U])) {
		__Vdlyvval__v__DOT__d__DOT__r__DOT__rf__v1 
		    = (((QData)((IData)(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[2U])) 
			<< 0x3eU) | (((QData)((IData)(
						      vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[1U])) 
				      << 0x1eU) | ((QData)((IData)(
								   vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[0U])) 
						   >> 2U)));
		__Vdlyvset__v__DOT__d__DOT__r__DOT__rf__v1 = 1U;
		__Vdlyvdim0__v__DOT__d__DOT__r__DOT__rf__v1 
		    = vlTOPp->v__DOT__dest_rd;
	    } else {
		__Vdlyvval__v__DOT__d__DOT__r__DOT__rf__v2 
		    = ((vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[1U] 
			<< 0x1eU) | (vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[0U] 
				     >> 2U));
		__Vdlyvset__v__DOT__d__DOT__r__DOT__rf__v2 = 1U;
		__Vdlyvlsb__v__DOT__d__DOT__r__DOT__rf__v2 = 0U;
		__Vdlyvdim0__v__DOT__d__DOT__r__DOT__rf__v2 
		    = vlTOPp->v__DOT__dest_rd;
	    }
	}
    }
    vlTOPp->v__DOT__f__DOT__i__DOT__clear_idx = __Vdly__v__DOT__f__DOT__i__DOT__clear_idx;
    // ALWAYSPOST at rtl/icache.v:166
    if (__Vdlyvset__v__DOT__f__DOT__i__DOT__ic_data__v0) {
	vlTOPp->v__DOT__f__DOT__i__DOT__ic_data[__Vdlyvdim0__v__DOT__f__DOT__i__DOT__ic_data__v0][0U] 
	    = __Vdlyvval__v__DOT__f__DOT__i__DOT__ic_data__v0[0U];
	vlTOPp->v__DOT__f__DOT__i__DOT__ic_data[__Vdlyvdim0__v__DOT__f__DOT__i__DOT__ic_data__v0][1U] 
	    = __Vdlyvval__v__DOT__f__DOT__i__DOT__ic_data__v0[1U];
	vlTOPp->v__DOT__f__DOT__i__DOT__ic_data[__Vdlyvdim0__v__DOT__f__DOT__i__DOT__ic_data__v0][2U] 
	    = __Vdlyvval__v__DOT__f__DOT__i__DOT__ic_data__v0[2U];
	vlTOPp->v__DOT__f__DOT__i__DOT__ic_data[__Vdlyvdim0__v__DOT__f__DOT__i__DOT__ic_data__v0][3U] 
	    = __Vdlyvval__v__DOT__f__DOT__i__DOT__ic_data__v0[3U];
	vlTOPp->v__DOT__f__DOT__i__DOT__ic_data[__Vdlyvdim0__v__DOT__f__DOT__i__DOT__ic_data__v0][4U] 
	    = __Vdlyvval__v__DOT__f__DOT__i__DOT__ic_data__v0[4U];
	vlTOPp->v__DOT__f__DOT__i__DOT__ic_data[__Vdlyvdim0__v__DOT__f__DOT__i__DOT__ic_data__v0][5U] 
	    = __Vdlyvval__v__DOT__f__DOT__i__DOT__ic_data__v0[5U];
	vlTOPp->v__DOT__f__DOT__i__DOT__ic_data[__Vdlyvdim0__v__DOT__f__DOT__i__DOT__ic_data__v0][6U] 
	    = __Vdlyvval__v__DOT__f__DOT__i__DOT__ic_data__v0[6U];
	vlTOPp->v__DOT__f__DOT__i__DOT__ic_data[__Vdlyvdim0__v__DOT__f__DOT__i__DOT__ic_data__v0][7U] 
	    = __Vdlyvval__v__DOT__f__DOT__i__DOT__ic_data__v0[7U];
    }
    // ALWAYSPOST at rtl/icache.v:168
    if (__Vdlyvset__v__DOT__f__DOT__i__DOT__ic_tag__v0) {
	vlTOPp->v__DOT__f__DOT__i__DOT__ic_tag[__Vdlyvdim0__v__DOT__f__DOT__i__DOT__ic_tag__v0] 
	    = __Vdlyvval__v__DOT__f__DOT__i__DOT__ic_tag__v0;
    }
    // ALWAYSPOST at rtl/icache.v:162
    if (__Vdlyvset__v__DOT__f__DOT__i__DOT__ic_valid__v0) {
	vlTOPp->v__DOT__f__DOT__i__DOT__ic_valid[__Vdlyvdim0__v__DOT__f__DOT__i__DOT__ic_valid__v0] = 0U;
    }
    if (__Vdlyvset__v__DOT__f__DOT__i__DOT__ic_valid__v1) {
	vlTOPp->v__DOT__f__DOT__i__DOT__ic_valid[__Vdlyvdim0__v__DOT__f__DOT__i__DOT__ic_valid__v1] = 1U;
    }
    vlTOPp->v__DOT__d__DOT__r__DOT__rf_cntr = __Vdly__v__DOT__d__DOT__r__DOT__rf_cntr;
    // ALWAYSPOST at rtl/regfile.v:29
    if (__Vdlyvset__v__DOT__d__DOT__r__DOT__rf__v0) {
	vlTOPp->v__DOT__d__DOT__r__DOT__rf[__Vdlyvdim0__v__DOT__d__DOT__r__DOT__rf__v0] = VL_ULL(0);
    }
    if (__Vdlyvset__v__DOT__d__DOT__r__DOT__rf__v1) {
	vlTOPp->v__DOT__d__DOT__r__DOT__rf[__Vdlyvdim0__v__DOT__d__DOT__r__DOT__rf__v1] 
	    = __Vdlyvval__v__DOT__d__DOT__r__DOT__rf__v1;
    }
    if (__Vdlyvset__v__DOT__d__DOT__r__DOT__rf__v2) {
	vlTOPp->v__DOT__d__DOT__r__DOT__rf[__Vdlyvdim0__v__DOT__d__DOT__r__DOT__rf__v2] 
	    = (((~ (VL_ULL(0xffffffff) << (IData)(__Vdlyvlsb__v__DOT__d__DOT__r__DOT__rf__v2))) 
		& vlTOPp->v__DOT__d__DOT__r__DOT__rf
		[__Vdlyvdim0__v__DOT__d__DOT__r__DOT__rf__v2]) 
	       | ((QData)((IData)(__Vdlyvval__v__DOT__d__DOT__r__DOT__rf__v2)) 
		  << (IData)(__Vdlyvlsb__v__DOT__d__DOT__r__DOT__rf__v2)));
    }
    // ALWAYS at rtl/flop.v:11
    vlTOPp->v__DOT__execute_retry = ((~ (IData)(vlTOPp->reset)) 
				     & (IData)(vlTOPp->v__DOT__fetch_insn_retry));
    vlTOPp->icache_req_addr = (vlTOPp->v__DOT__req_addr 
			       << 5U);
    // ALWAYS at rtl/flop_er.v:8
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__decode_pc = VL_ULL(0);
    } else {
	if (vlTOPp->v__DOT__fetch_insn_valid) {
	    vlTOPp->v__DOT__decode_pc = (vlTOPp->v__DOT__fetch_pc 
					 << 1U);
	}
    }
    // ALWAYS at rtl/flop.v:11
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[0U] = 0U;
	vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[1U] = 0U;
	vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[2U] = 0U;
    } else {
	vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[0U] 
	    = ((0xfffffffcU & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dest_next) 
			       << 2U)) | (((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next) 
					   << 1U) | (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next)));
	vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[1U] 
	    = ((3U & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dest_next) 
		      >> 0x1eU)) | (0xfffffffcU & ((IData)(
							   (vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							    >> 0x20U)) 
						   << 2U)));
	vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[2U] 
	    = (3U & ((IData)((vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
			      >> 0x20U)) >> 0x1eU));
    }
    // ALWAYS at rtl/flop_e.v:12
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__dest_rd = 0U;
    } else {
	if (vlTOPp->v__DOT__decode_valid) {
	    vlTOPp->v__DOT__dest_rd = (0x1fU & (vlTOPp->v__DOT__decode_insn 
						>> 7U));
	}
    }
    // ALWAYS at rtl/flop.v:11
    vlTOPp->v__DOT__fetch_insn_retry = ((~ (IData)(vlTOPp->reset)) 
					& (IData)(vlTOPp->v__DOT__decode_retry));
    vlTOPp->debug_pc_ex = vlTOPp->v__DOT__decode_pc;
    // ALWAYS at rtl/flop.v:11
    vlTOPp->v__DOT__fetch_pc = ((IData)(vlTOPp->reset)
				 ? VL_ULL(0) : vlTOPp->v__DOT__execute_pc);
    vlTOPp->debug_dest_valid = (1U & vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[0U]);
    vlTOPp->debug_dest = (((QData)((IData)(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[2U])) 
			   << 0x3eU) | (((QData)((IData)(
							 vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[1U])) 
					 << 0x1eU) 
					| ((QData)((IData)(
							   vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[0U])) 
					   >> 2U)));
    vlTOPp->debug_dest_long = (1U & (vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[0U] 
				     >> 1U));
    vlTOPp->debug_dest_rd = vlTOPp->v__DOT__dest_rd;
    // ALWAYS at rtl/flop.v:11
    vlTOPp->v__DOT__decode_valid = ((~ (IData)(vlTOPp->reset)) 
				    & (IData)(vlTOPp->v__DOT__fetch_insn_valid));
    // ALWAYS at rtl/flop_e.v:12
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__decode_insn = 0U;
    } else {
	if (vlTOPp->v__DOT__fetch_insn_valid) {
	    vlTOPp->v__DOT__decode_insn = vlTOPp->v__DOT__fetch_insn;
	}
    }
    vlTOPp->v__DOT__decode_retry = __Vdly__v__DOT__decode_retry;
    vlTOPp->v__DOT__execute_pc = (VL_ULL(0x7fffffffffffffff) 
				  & ((1U & vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f1__q[0U])
				      ? (((QData)((IData)(
							  vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f1__q[2U])) 
					  << 0x3eU) 
					 | (((QData)((IData)(
							     vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f1__q[1U])) 
					     << 0x1eU) 
					    | ((QData)((IData)(
							       vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f1__q[0U])) 
					       >> 2U)))
				      : (vlTOPp->v__DOT__e__DOT__pc 
					 >> 1U)));
    // ALWAYS at rtl/alu.v:143
    if (vlTOPp->v__DOT__decode_valid) {
	if ((0x33U == (0x7fU & vlTOPp->v__DOT__decode_insn))) {
	    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 1U;
	    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 1U;
	    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
	    if ((0x80000000U & vlTOPp->v__DOT__decode_insn)) {
		vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
		vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
		vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
		vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
	    } else {
		if ((0x40000000U & vlTOPp->v__DOT__decode_insn)) {
		    if ((0x20000000U & vlTOPp->v__DOT__decode_insn)) {
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
			vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
		    } else {
			if ((0x10000000U & vlTOPp->v__DOT__decode_insn)) {
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
			    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
			} else {
			    if ((0x8000000U & vlTOPp->v__DOT__decode_insn)) {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
			    } else {
				if ((0x4000000U & vlTOPp->v__DOT__decode_insn)) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				} else {
				    if ((0x2000000U 
					 & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				    } else {
					if ((0x4000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							VL_SHIFTRS_QQI(64,64,6, vlTOPp->v__DOT__decode_src1, 
								       (0x3fU 
									& (IData)(vlTOPp->v__DOT__decode_src2)));
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						}
					    }
					} else {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							(vlTOPp->v__DOT__decode_src1 
							 - vlTOPp->v__DOT__decode_src2);
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x20000000U & vlTOPp->v__DOT__decode_insn)) {
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
			vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
		    } else {
			if ((0x10000000U & vlTOPp->v__DOT__decode_insn)) {
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
			    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
			} else {
			    if ((0x8000000U & vlTOPp->v__DOT__decode_insn)) {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
			    } else {
				if ((0x4000000U & vlTOPp->v__DOT__decode_insn)) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				} else {
				    if ((0x2000000U 
					 & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((0x4000U 
						& vlTOPp->v__DOT__decode_insn)
					        ? (
						   (0x2000U 
						    & vlTOPp->v__DOT__decode_insn)
						    ? 
						   ((0x1000U 
						     & vlTOPp->v__DOT__decode_insn)
						     ? 
						    (vlTOPp->v__DOT__decode_src1 
						     & vlTOPp->v__DOT__decode_src2)
						     : 
						    (vlTOPp->v__DOT__decode_src1 
						     | vlTOPp->v__DOT__decode_src2))
						    : 
						   ((0x1000U 
						     & vlTOPp->v__DOT__decode_insn)
						     ? 
						    (vlTOPp->v__DOT__decode_src1 
						     >> 
						     (0x3fU 
						      & (IData)(vlTOPp->v__DOT__decode_src2)))
						     : 
						    (vlTOPp->v__DOT__decode_src1 
						     ^ vlTOPp->v__DOT__decode_src2)))
					        : (
						   (0x2000U 
						    & vlTOPp->v__DOT__decode_insn)
						    ? 
						   ((0x1000U 
						     & vlTOPp->v__DOT__decode_insn)
						     ? 
						    VL_NEGATE_Q((QData)((IData)(
										(vlTOPp->v__DOT__decode_src1 
										< vlTOPp->v__DOT__decode_src2))))
						     : 
						    VL_NEGATE_Q((QData)((IData)(
										VL_LTS_IQQ(1,64,64, vlTOPp->v__DOT__decode_src1, vlTOPp->v__DOT__decode_src2)))))
						    : 
						   ((0x1000U 
						     & vlTOPp->v__DOT__decode_insn)
						     ? 
						    (vlTOPp->v__DOT__decode_src1 
						     << 
						     (0x3fU 
						      & (IData)(vlTOPp->v__DOT__decode_src2)))
						     : 
						    (vlTOPp->v__DOT__decode_src1 
						     + vlTOPp->v__DOT__decode_src2))));
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if ((0x13U == (0x7fU & vlTOPp->v__DOT__decode_insn))) {
		vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 1U;
		vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 1U;
		vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
		if ((0x80000000U & vlTOPp->v__DOT__decode_insn)) {
		    if ((0x4000U & vlTOPp->v__DOT__decode_insn)) {
			if ((0x2000U & vlTOPp->v__DOT__decode_insn)) {
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
				= ((0x1000U & vlTOPp->v__DOT__decode_insn)
				    ? (vlTOPp->v__DOT__decode_sign_ext 
				       & vlTOPp->v__DOT__decode_src1)
				    : (vlTOPp->v__DOT__decode_sign_ext 
				       | vlTOPp->v__DOT__decode_src1));
			} else {
			    if ((0x1000U & vlTOPp->v__DOT__decode_insn)) {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			    } else {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
				    = (vlTOPp->v__DOT__decode_sign_ext 
				       ^ vlTOPp->v__DOT__decode_src1);
			    }
			}
		    } else {
			if ((0x2000U & vlTOPp->v__DOT__decode_insn)) {
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
				= ((0x1000U & vlTOPp->v__DOT__decode_insn)
				    ? VL_NEGATE_Q((QData)((IData)(
								  (vlTOPp->v__DOT__decode_sign_ext 
								   > vlTOPp->v__DOT__decode_src1))))
				    : VL_NEGATE_Q((QData)((IData)(
								  VL_GTS_IQQ(1,64,64, vlTOPp->v__DOT__decode_sign_ext, vlTOPp->v__DOT__decode_src1)))));
			} else {
			    if ((0x1000U & vlTOPp->v__DOT__decode_insn)) {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			    } else {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
				    = (vlTOPp->v__DOT__decode_sign_ext 
				       + vlTOPp->v__DOT__decode_src1);
			    }
			}
		    }
		} else {
		    if ((0x40000000U & vlTOPp->v__DOT__decode_insn)) {
			if ((0x20000000U & vlTOPp->v__DOT__decode_insn)) {
			    if ((0x4000U & vlTOPp->v__DOT__decode_insn)) {
				if ((0x2000U & vlTOPp->v__DOT__decode_insn)) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					= ((0x1000U 
					    & vlTOPp->v__DOT__decode_insn)
					    ? (vlTOPp->v__DOT__decode_sign_ext 
					       & vlTOPp->v__DOT__decode_src1)
					    : (vlTOPp->v__DOT__decode_sign_ext 
					       | vlTOPp->v__DOT__decode_src1));
				} else {
				    if ((0x1000U & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = (vlTOPp->v__DOT__decode_sign_ext 
					       ^ vlTOPp->v__DOT__decode_src1);
				    }
				}
			    } else {
				if ((0x2000U & vlTOPp->v__DOT__decode_insn)) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					= ((0x1000U 
					    & vlTOPp->v__DOT__decode_insn)
					    ? VL_NEGATE_Q((QData)((IData)(
									  (vlTOPp->v__DOT__decode_sign_ext 
									   > vlTOPp->v__DOT__decode_src1))))
					    : VL_NEGATE_Q((QData)((IData)(
									  VL_GTS_IQQ(1,64,64, vlTOPp->v__DOT__decode_sign_ext, vlTOPp->v__DOT__decode_src1)))));
				} else {
				    if ((0x1000U & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = (vlTOPp->v__DOT__decode_sign_ext 
					       + vlTOPp->v__DOT__decode_src1);
				    }
				}
			    }
			} else {
			    if ((0x10000000U & vlTOPp->v__DOT__decode_insn)) {
				if ((0x4000U & vlTOPp->v__DOT__decode_insn)) {
				    if ((0x2000U & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((0x1000U 
						& vlTOPp->v__DOT__decode_insn)
					        ? (vlTOPp->v__DOT__decode_sign_ext 
						   & vlTOPp->v__DOT__decode_src1)
					        : (vlTOPp->v__DOT__decode_sign_ext 
						   | vlTOPp->v__DOT__decode_src1));
				    } else {
					if ((0x1000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (vlTOPp->v__DOT__decode_sign_ext 
						   ^ vlTOPp->v__DOT__decode_src1);
					}
				    }
				} else {
				    if ((0x2000U & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((0x1000U 
						& vlTOPp->v__DOT__decode_insn)
					        ? VL_NEGATE_Q((QData)((IData)(
									      (vlTOPp->v__DOT__decode_sign_ext 
									       > vlTOPp->v__DOT__decode_src1))))
					        : VL_NEGATE_Q((QData)((IData)(
									      VL_GTS_IQQ(1,64,64, vlTOPp->v__DOT__decode_sign_ext, vlTOPp->v__DOT__decode_src1)))));
				    } else {
					if ((0x1000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (vlTOPp->v__DOT__decode_sign_ext 
						   + vlTOPp->v__DOT__decode_src1);
					}
				    }
				}
			    } else {
				if ((0x8000000U & vlTOPp->v__DOT__decode_insn)) {
				    if ((0x4000U & vlTOPp->v__DOT__decode_insn)) {
					if ((0x2000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (
						   (0x1000U 
						    & vlTOPp->v__DOT__decode_insn)
						    ? 
						   (vlTOPp->v__DOT__decode_sign_ext 
						    & vlTOPp->v__DOT__decode_src1)
						    : 
						   (vlTOPp->v__DOT__decode_sign_ext 
						    | vlTOPp->v__DOT__decode_src1));
					} else {
					    if ((0x1000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    (vlTOPp->v__DOT__decode_sign_ext 
						     ^ vlTOPp->v__DOT__decode_src1);
					    }
					}
				    } else {
					if ((0x2000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (
						   (0x1000U 
						    & vlTOPp->v__DOT__decode_insn)
						    ? 
						   VL_NEGATE_Q((QData)((IData)(
									       (vlTOPp->v__DOT__decode_sign_ext 
										> vlTOPp->v__DOT__decode_src1))))
						    : 
						   VL_NEGATE_Q((QData)((IData)(
									       VL_GTS_IQQ(1,64,64, vlTOPp->v__DOT__decode_sign_ext, vlTOPp->v__DOT__decode_src1)))));
					} else {
					    if ((0x1000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    (vlTOPp->v__DOT__decode_sign_ext 
						     + vlTOPp->v__DOT__decode_src1);
					    }
					}
				    }
				} else {
				    if ((0x4000000U 
					 & vlTOPp->v__DOT__decode_insn)) {
					if ((0x4000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    ((0x1000U 
						      & vlTOPp->v__DOT__decode_insn)
						      ? 
						     (vlTOPp->v__DOT__decode_sign_ext 
						      & vlTOPp->v__DOT__decode_src1)
						      : 
						     (vlTOPp->v__DOT__decode_sign_ext 
						      | vlTOPp->v__DOT__decode_src1));
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							(vlTOPp->v__DOT__decode_sign_ext 
							 ^ vlTOPp->v__DOT__decode_src1);
						}
					    }
					} else {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    ((0x1000U 
						      & vlTOPp->v__DOT__decode_insn)
						      ? 
						     VL_NEGATE_Q((QData)((IData)(
										(vlTOPp->v__DOT__decode_sign_ext 
										> vlTOPp->v__DOT__decode_src1))))
						      : 
						     VL_NEGATE_Q((QData)((IData)(
										VL_GTS_IQQ(1,64,64, vlTOPp->v__DOT__decode_sign_ext, vlTOPp->v__DOT__decode_src1)))));
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							(vlTOPp->v__DOT__decode_sign_ext 
							 + vlTOPp->v__DOT__decode_src1);
						}
					    }
					}
				    } else {
					if ((0x4000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (
						   (0x2000U 
						    & vlTOPp->v__DOT__decode_insn)
						    ? 
						   ((0x1000U 
						     & vlTOPp->v__DOT__decode_insn)
						     ? 
						    (vlTOPp->v__DOT__decode_sign_ext 
						     & vlTOPp->v__DOT__decode_src1)
						     : 
						    (vlTOPp->v__DOT__decode_sign_ext 
						     | vlTOPp->v__DOT__decode_src1))
						    : 
						   ((0x1000U 
						     & vlTOPp->v__DOT__decode_insn)
						     ? 
						    VL_SHIFTRS_QQI(64,64,6, vlTOPp->v__DOT__decode_src1, 
								   (0x3fU 
								    & (vlTOPp->v__DOT__decode_insn 
								       >> 0x14U)))
						     : 
						    (vlTOPp->v__DOT__decode_sign_ext 
						     ^ vlTOPp->v__DOT__decode_src1)));
					} else {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    ((0x1000U 
						      & vlTOPp->v__DOT__decode_insn)
						      ? 
						     VL_NEGATE_Q((QData)((IData)(
										(vlTOPp->v__DOT__decode_sign_ext 
										> vlTOPp->v__DOT__decode_src1))))
						      : 
						     VL_NEGATE_Q((QData)((IData)(
										VL_GTS_IQQ(1,64,64, vlTOPp->v__DOT__decode_sign_ext, vlTOPp->v__DOT__decode_src1)))));
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							(vlTOPp->v__DOT__decode_sign_ext 
							 + vlTOPp->v__DOT__decode_src1);
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if ((0x20000000U & vlTOPp->v__DOT__decode_insn)) {
			    if ((0x4000U & vlTOPp->v__DOT__decode_insn)) {
				if ((0x2000U & vlTOPp->v__DOT__decode_insn)) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					= ((0x1000U 
					    & vlTOPp->v__DOT__decode_insn)
					    ? (vlTOPp->v__DOT__decode_sign_ext 
					       & vlTOPp->v__DOT__decode_src1)
					    : (vlTOPp->v__DOT__decode_sign_ext 
					       | vlTOPp->v__DOT__decode_src1));
				} else {
				    if ((0x1000U & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = (vlTOPp->v__DOT__decode_sign_ext 
					       ^ vlTOPp->v__DOT__decode_src1);
				    }
				}
			    } else {
				if ((0x2000U & vlTOPp->v__DOT__decode_insn)) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					= ((0x1000U 
					    & vlTOPp->v__DOT__decode_insn)
					    ? VL_NEGATE_Q((QData)((IData)(
									  (vlTOPp->v__DOT__decode_sign_ext 
									   > vlTOPp->v__DOT__decode_src1))))
					    : VL_NEGATE_Q((QData)((IData)(
									  VL_GTS_IQQ(1,64,64, vlTOPp->v__DOT__decode_sign_ext, vlTOPp->v__DOT__decode_src1)))));
				} else {
				    if ((0x1000U & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = (vlTOPp->v__DOT__decode_sign_ext 
					       + vlTOPp->v__DOT__decode_src1);
				    }
				}
			    }
			} else {
			    if ((0x10000000U & vlTOPp->v__DOT__decode_insn)) {
				if ((0x4000U & vlTOPp->v__DOT__decode_insn)) {
				    if ((0x2000U & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((0x1000U 
						& vlTOPp->v__DOT__decode_insn)
					        ? (vlTOPp->v__DOT__decode_sign_ext 
						   & vlTOPp->v__DOT__decode_src1)
					        : (vlTOPp->v__DOT__decode_sign_ext 
						   | vlTOPp->v__DOT__decode_src1));
				    } else {
					if ((0x1000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (vlTOPp->v__DOT__decode_sign_ext 
						   ^ vlTOPp->v__DOT__decode_src1);
					}
				    }
				} else {
				    if ((0x2000U & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((0x1000U 
						& vlTOPp->v__DOT__decode_insn)
					        ? VL_NEGATE_Q((QData)((IData)(
									      (vlTOPp->v__DOT__decode_sign_ext 
									       > vlTOPp->v__DOT__decode_src1))))
					        : VL_NEGATE_Q((QData)((IData)(
									      VL_GTS_IQQ(1,64,64, vlTOPp->v__DOT__decode_sign_ext, vlTOPp->v__DOT__decode_src1)))));
				    } else {
					if ((0x1000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (vlTOPp->v__DOT__decode_sign_ext 
						   + vlTOPp->v__DOT__decode_src1);
					}
				    }
				}
			    } else {
				if ((0x8000000U & vlTOPp->v__DOT__decode_insn)) {
				    if ((0x4000U & vlTOPp->v__DOT__decode_insn)) {
					if ((0x2000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (
						   (0x1000U 
						    & vlTOPp->v__DOT__decode_insn)
						    ? 
						   (vlTOPp->v__DOT__decode_sign_ext 
						    & vlTOPp->v__DOT__decode_src1)
						    : 
						   (vlTOPp->v__DOT__decode_sign_ext 
						    | vlTOPp->v__DOT__decode_src1));
					} else {
					    if ((0x1000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    (vlTOPp->v__DOT__decode_sign_ext 
						     ^ vlTOPp->v__DOT__decode_src1);
					    }
					}
				    } else {
					if ((0x2000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (
						   (0x1000U 
						    & vlTOPp->v__DOT__decode_insn)
						    ? 
						   VL_NEGATE_Q((QData)((IData)(
									       (vlTOPp->v__DOT__decode_sign_ext 
										> vlTOPp->v__DOT__decode_src1))))
						    : 
						   VL_NEGATE_Q((QData)((IData)(
									       VL_GTS_IQQ(1,64,64, vlTOPp->v__DOT__decode_sign_ext, vlTOPp->v__DOT__decode_src1)))));
					} else {
					    if ((0x1000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    (vlTOPp->v__DOT__decode_sign_ext 
						     + vlTOPp->v__DOT__decode_src1);
					    }
					}
				    }
				} else {
				    if ((0x4000000U 
					 & vlTOPp->v__DOT__decode_insn)) {
					if ((0x4000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    ((0x1000U 
						      & vlTOPp->v__DOT__decode_insn)
						      ? 
						     (vlTOPp->v__DOT__decode_sign_ext 
						      & vlTOPp->v__DOT__decode_src1)
						      : 
						     (vlTOPp->v__DOT__decode_sign_ext 
						      | vlTOPp->v__DOT__decode_src1));
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							(vlTOPp->v__DOT__decode_sign_ext 
							 ^ vlTOPp->v__DOT__decode_src1);
						}
					    }
					} else {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    ((0x1000U 
						      & vlTOPp->v__DOT__decode_insn)
						      ? 
						     VL_NEGATE_Q((QData)((IData)(
										(vlTOPp->v__DOT__decode_sign_ext 
										> vlTOPp->v__DOT__decode_src1))))
						      : 
						     VL_NEGATE_Q((QData)((IData)(
										VL_GTS_IQQ(1,64,64, vlTOPp->v__DOT__decode_sign_ext, vlTOPp->v__DOT__decode_src1)))));
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							(vlTOPp->v__DOT__decode_sign_ext 
							 + vlTOPp->v__DOT__decode_src1);
						}
					    }
					}
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((0x4000U 
						& vlTOPp->v__DOT__decode_insn)
					        ? (
						   (0x2000U 
						    & vlTOPp->v__DOT__decode_insn)
						    ? 
						   ((0x1000U 
						     & vlTOPp->v__DOT__decode_insn)
						     ? 
						    (vlTOPp->v__DOT__decode_sign_ext 
						     & vlTOPp->v__DOT__decode_src1)
						     : 
						    (vlTOPp->v__DOT__decode_sign_ext 
						     | vlTOPp->v__DOT__decode_src1))
						    : 
						   ((0x1000U 
						     & vlTOPp->v__DOT__decode_insn)
						     ? 
						    (vlTOPp->v__DOT__decode_src1 
						     >> 
						     (0x3fU 
						      & (vlTOPp->v__DOT__decode_insn 
							 >> 0x14U)))
						     : 
						    (vlTOPp->v__DOT__decode_sign_ext 
						     ^ vlTOPp->v__DOT__decode_src1)))
					        : (
						   (0x2000U 
						    & vlTOPp->v__DOT__decode_insn)
						    ? 
						   ((0x1000U 
						     & vlTOPp->v__DOT__decode_insn)
						     ? 
						    VL_NEGATE_Q((QData)((IData)(
										(vlTOPp->v__DOT__decode_sign_ext 
										> vlTOPp->v__DOT__decode_src1))))
						     : 
						    VL_NEGATE_Q((QData)((IData)(
										VL_GTS_IQQ(1,64,64, vlTOPp->v__DOT__decode_sign_ext, vlTOPp->v__DOT__decode_src1)))))
						    : 
						   ((0x1000U 
						     & vlTOPp->v__DOT__decode_insn)
						     ? 
						    (vlTOPp->v__DOT__decode_src1 
						     << 
						     (0x3fU 
						      & (vlTOPp->v__DOT__decode_insn 
							 >> 0x14U)))
						     : 
						    (vlTOPp->v__DOT__decode_sign_ext 
						     + vlTOPp->v__DOT__decode_src1))));
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((0x17U == (0x7fU & vlTOPp->v__DOT__decode_insn))) {
		    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
		    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 1U;
		    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 1U;
		    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
			= (vlTOPp->v__DOT__decode_sign_ext 
			   + vlTOPp->v__DOT__decode_pc);
		} else {
		    if ((0x1bU == (0x7fU & vlTOPp->v__DOT__decode_insn))) {
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 1U;
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
			vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
			if ((0x80000000U & vlTOPp->v__DOT__decode_insn)) {
			    if ((0x4000U & vlTOPp->v__DOT__decode_insn)) {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			    } else {
				if ((0x2000U & vlTOPp->v__DOT__decode_insn)) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				} else {
				    if ((0x1000U & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = (vlTOPp->v__DOT__decode_src1 
					       + vlTOPp->v__DOT__decode_sign_ext);
				    }
				}
			    }
			} else {
			    if ((0x40000000U & vlTOPp->v__DOT__decode_insn)) {
				if ((0x20000000U & vlTOPp->v__DOT__decode_insn)) {
				    if ((0x4000U & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					if ((0x2000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    if ((0x1000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    (vlTOPp->v__DOT__decode_src1 
						     + vlTOPp->v__DOT__decode_sign_ext);
					    }
					}
				    }
				} else {
				    if ((0x10000000U 
					 & vlTOPp->v__DOT__decode_insn)) {
					if ((0x4000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							(vlTOPp->v__DOT__decode_src1 
							 + vlTOPp->v__DOT__decode_sign_ext);
						}
					    }
					}
				    } else {
					if ((0x8000000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    if ((0x4000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						if (
						    (0x2000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    if (
							(0x1000U 
							 & vlTOPp->v__DOT__decode_insn)) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							    = 
							    (vlTOPp->v__DOT__decode_src1 
							     + vlTOPp->v__DOT__decode_sign_ext);
						    }
						}
					    }
					} else {
					    if ((0x4000000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						if (
						    (0x4000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    if (
							(0x2000U 
							 & vlTOPp->v__DOT__decode_insn)) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							if (
							    (0x1000U 
							     & vlTOPp->v__DOT__decode_insn)) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								= 
								(vlTOPp->v__DOT__decode_src1 
								 + vlTOPp->v__DOT__decode_sign_ext);
							}
						    }
						}
					    } else {
						if (
						    (0x2000000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    if (
							(0x4000U 
							 & vlTOPp->v__DOT__decode_insn)) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							if (
							    (0x2000U 
							     & vlTOPp->v__DOT__decode_insn)) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    if (
								(0x1000U 
								 & vlTOPp->v__DOT__decode_insn)) {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    } else {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								    = 
								    (vlTOPp->v__DOT__decode_src1 
								     + vlTOPp->v__DOT__decode_sign_ext);
							    }
							}
						    }
						} else {
						    if (
							(0x4000U 
							 & vlTOPp->v__DOT__decode_insn)) {
							if (
							    (0x2000U 
							     & vlTOPp->v__DOT__decode_insn)) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    if (
								(0x1000U 
								 & vlTOPp->v__DOT__decode_insn)) {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								    = 
								    VL_SHIFTRS_QQI(64,64,5, vlTOPp->v__DOT__decode_src1, 
										(0x1fU 
										& (vlTOPp->v__DOT__decode_insn 
										>> 0x14U)));
							    } else {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    }
							}
						    } else {
							if (
							    (0x2000U 
							     & vlTOPp->v__DOT__decode_insn)) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    if (
								(0x1000U 
								 & vlTOPp->v__DOT__decode_insn)) {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    } else {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								    = 
								    (vlTOPp->v__DOT__decode_src1 
								     + vlTOPp->v__DOT__decode_sign_ext);
							    }
							}
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if ((0x20000000U & vlTOPp->v__DOT__decode_insn)) {
				    if ((0x4000U & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					if ((0x2000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    if ((0x1000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    (vlTOPp->v__DOT__decode_src1 
						     + vlTOPp->v__DOT__decode_sign_ext);
					    }
					}
				    }
				} else {
				    if ((0x10000000U 
					 & vlTOPp->v__DOT__decode_insn)) {
					if ((0x4000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							(vlTOPp->v__DOT__decode_src1 
							 + vlTOPp->v__DOT__decode_sign_ext);
						}
					    }
					}
				    } else {
					if ((0x8000000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    if ((0x4000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						if (
						    (0x2000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    if (
							(0x1000U 
							 & vlTOPp->v__DOT__decode_insn)) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							    = 
							    (vlTOPp->v__DOT__decode_src1 
							     + vlTOPp->v__DOT__decode_sign_ext);
						    }
						}
					    }
					} else {
					    if ((0x4000000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						if (
						    (0x4000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    if (
							(0x2000U 
							 & vlTOPp->v__DOT__decode_insn)) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							if (
							    (0x1000U 
							     & vlTOPp->v__DOT__decode_insn)) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								= 
								(vlTOPp->v__DOT__decode_src1 
								 + vlTOPp->v__DOT__decode_sign_ext);
							}
						    }
						}
					    } else {
						if (
						    (0x2000000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    if (
							(0x4000U 
							 & vlTOPp->v__DOT__decode_insn)) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							if (
							    (0x2000U 
							     & vlTOPp->v__DOT__decode_insn)) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    if (
								(0x1000U 
								 & vlTOPp->v__DOT__decode_insn)) {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    } else {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								    = 
								    (vlTOPp->v__DOT__decode_src1 
								     + vlTOPp->v__DOT__decode_sign_ext);
							    }
							}
						    }
						} else {
						    if (
							(0x4000U 
							 & vlTOPp->v__DOT__decode_insn)) {
							if (
							    (0x2000U 
							     & vlTOPp->v__DOT__decode_insn)) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    if (
								(0x1000U 
								 & vlTOPp->v__DOT__decode_insn)) {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								    = 
								    (vlTOPp->v__DOT__decode_src1 
								     >> 
								     (0x1fU 
								      & (vlTOPp->v__DOT__decode_insn 
									 >> 0x14U)));
							    } else {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    }
							}
						    } else {
							if (
							    (0x2000U 
							     & vlTOPp->v__DOT__decode_insn)) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								= 
								((0x1000U 
								  & vlTOPp->v__DOT__decode_insn)
								  ? 
								 (vlTOPp->v__DOT__decode_src1 
								  << 
								  (0x1fU 
								   & (vlTOPp->v__DOT__decode_insn 
								      >> 0x14U)))
								  : 
								 (vlTOPp->v__DOT__decode_src1 
								  + vlTOPp->v__DOT__decode_sign_ext));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if ((0x3bU == (0x7fU & vlTOPp->v__DOT__decode_insn))) {
			    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 1U;
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
			    if ((0x80000000U & vlTOPp->v__DOT__decode_insn)) {
				vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			    } else {
				if ((0x40000000U & vlTOPp->v__DOT__decode_insn)) {
				    if ((0x20000000U 
					 & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					if ((0x10000000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    if ((0x8000000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						if (
						    (0x4000000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    if (
							(0x2000000U 
							 & vlTOPp->v__DOT__decode_insn)) {
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							if (
							    (0x4000U 
							     & vlTOPp->v__DOT__decode_insn)) {
							    if (
								(0x2000U 
								 & vlTOPp->v__DOT__decode_insn)) {
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    } else {
								if (
								    (0x1000U 
								     & vlTOPp->v__DOT__decode_insn)) {
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
									= 
									VL_SHIFTRS_QQI(64,64,5, vlTOPp->v__DOT__decode_src1, 
										(0x1fU 
										& (IData)(vlTOPp->v__DOT__decode_src2)));
								} else {
								    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
								}
							    }
							} else {
							    if (
								(0x2000U 
								 & vlTOPp->v__DOT__decode_insn)) {
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    } else {
								if (
								    (0x1000U 
								     & vlTOPp->v__DOT__decode_insn)) {
								    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
								} else {
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
									= 
									(vlTOPp->v__DOT__decode_src1 
									 - vlTOPp->v__DOT__decode_src2);
								}
							    }
							}
						    }
						}
					    }
					}
				    }
				} else {
				    if ((0x20000000U 
					 & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					if ((0x10000000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    if ((0x8000000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						if (
						    (0x4000000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    if (
							(0x2000000U 
							 & vlTOPp->v__DOT__decode_insn)) {
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							if (
							    (0x4000U 
							     & vlTOPp->v__DOT__decode_insn)) {
							    if (
								(0x2000U 
								 & vlTOPp->v__DOT__decode_insn)) {
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    } else {
								if (
								    (0x1000U 
								     & vlTOPp->v__DOT__decode_insn)) {
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
									= 
									(vlTOPp->v__DOT__decode_src1 
									 >> 
									 (0x1fU 
									  & (IData)(vlTOPp->v__DOT__decode_src2)));
								} else {
								    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
								}
							    }
							} else {
							    if (
								(0x2000U 
								 & vlTOPp->v__DOT__decode_insn)) {
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    } else {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								    = 
								    ((0x1000U 
								      & vlTOPp->v__DOT__decode_insn)
								      ? 
								     (vlTOPp->v__DOT__decode_src1 
								      << 
								      (0x1fU 
								       & (IData)(vlTOPp->v__DOT__decode_src2)))
								      : 
								     (vlTOPp->v__DOT__decode_src1 
								      + vlTOPp->v__DOT__decode_src2));
							    }
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			} else {
			    if ((0x63U == (0x7fU & vlTOPp->v__DOT__decode_insn))) {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				if ((0x4000U & vlTOPp->v__DOT__decode_insn)) {
				    if ((0x2000U & vlTOPp->v__DOT__decode_insn)) {
					if ((0x1000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next 
						= (vlTOPp->v__DOT__decode_src1 
						   >= vlTOPp->v__DOT__decode_src2);
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
						= (vlTOPp->v__DOT__decode_pc 
						   + vlTOPp->v__DOT__decode_sign_ext);
					} else {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next 
						= (vlTOPp->v__DOT__decode_src1 
						   < vlTOPp->v__DOT__decode_src2);
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
						= (vlTOPp->v__DOT__decode_pc 
						   + vlTOPp->v__DOT__decode_sign_ext);
					}
				    } else {
					if ((0x1000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next 
						= VL_GTES_IQQ(1,64,64, vlTOPp->v__DOT__decode_src1, vlTOPp->v__DOT__decode_src2);
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
						= (vlTOPp->v__DOT__decode_pc 
						   + vlTOPp->v__DOT__decode_sign_ext);
					} else {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next 
						= VL_LTS_IQQ(1,64,64, vlTOPp->v__DOT__decode_src1, vlTOPp->v__DOT__decode_src2);
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
						= (vlTOPp->v__DOT__decode_pc 
						   + vlTOPp->v__DOT__decode_sign_ext);
					}
				    }
				} else {
				    if ((0x2000U & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next = VL_ULL(0);
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				    } else {
					if ((0x1000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next 
						= (vlTOPp->v__DOT__decode_src1 
						   != vlTOPp->v__DOT__decode_src2);
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
						= (vlTOPp->v__DOT__decode_pc 
						   + vlTOPp->v__DOT__decode_sign_ext);
					} else {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next 
						= (vlTOPp->v__DOT__decode_src1 
						   == vlTOPp->v__DOT__decode_src2);
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
						= (vlTOPp->v__DOT__decode_pc 
						   + vlTOPp->v__DOT__decode_sign_ext);
					}
				    }
				}
			    } else {
				if ((0x6fU == (0x7fU 
					       & vlTOPp->v__DOT__decode_insn))) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 1U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					= (VL_ULL(4) 
					   + vlTOPp->v__DOT__decode_pc);
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 1U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 1U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
					= (vlTOPp->v__DOT__decode_pc 
					   + vlTOPp->v__DOT__decode_sign_ext);
				} else {
				    if ((0x67U == (0x7fU 
						   & vlTOPp->v__DOT__decode_insn))) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 1U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = (VL_ULL(4) 
					       + vlTOPp->v__DOT__decode_pc);
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 1U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 1U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
					    = (vlTOPp->v__DOT__decode_sign_ext 
					       + vlTOPp->v__DOT__decode_src1);
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
					    = (VL_ULL(0xfffffffffffffffe) 
					       & vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next);
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
	vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
    }
    // ALWAYS at rtl/flop.v:11
    vlTOPp->v__DOT__fetch_insn_valid = ((~ (IData)(vlTOPp->reset)) 
					& (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_valid_next));
    // ALWAYS at rtl/flop.v:11
    vlTOPp->v__DOT__fetch_insn = ((IData)(vlTOPp->reset)
				   ? 0U : vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_next);
    // ALWAYS at rtl/signext.v:22
    vlTOPp->v__DOT__d__DOT__s__DOT__branchimm = ((0x1000U 
						  & (vlTOPp->v__DOT__fetch_insn 
						     >> 0x13U)) 
						 | ((0x800U 
						     & (vlTOPp->v__DOT__fetch_insn 
							<< 4U)) 
						    | ((0x7e0U 
							& (vlTOPp->v__DOT__fetch_insn 
							   >> 0x14U)) 
						       | (0x1eU 
							  & (vlTOPp->v__DOT__fetch_insn 
							     >> 7U)))));
    // ALWAYS at rtl/signext.v:23
    vlTOPp->v__DOT__d__DOT__s__DOT__jalimm = ((0x100000U 
					       & (vlTOPp->v__DOT__fetch_insn 
						  >> 0xbU)) 
					      | ((0xff000U 
						  & vlTOPp->v__DOT__fetch_insn) 
						 | ((0x800U 
						     & (vlTOPp->v__DOT__fetch_insn 
							>> 9U)) 
						    | (0x7feU 
						       & (vlTOPp->v__DOT__fetch_insn 
							  >> 0x14U)))));
}

void Vcore::_initial__TOP__2(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_initial__TOP__2\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at rtl/fetch.v:29
    vlTOPp->v__DOT__execute_retry = 0U;
    // INITIAL at rtl/regfile.v:22
    vlTOPp->v__DOT__d__DOT__r__DOT__rf_cntr = 0U;
    // INITIAL at rtl/decode.v:29
    vlTOPp->v__DOT__fetch_insn_retry = 0U;
    // INITIAL at rtl/execute.v:37
    // INITIAL at rtl/alu.v:34
    vlTOPp->v__DOT__decode_retry = 0U;
}

VL_INLINE_OPT void Vcore::_combo__TOP__3(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_combo__TOP__3\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/icache.v:145
    vlTOPp->v__DOT__f__DOT__i__DOT__ic_data_we = 0U;
    vlTOPp->v__DOT__f__DOT__i__DOT__ic_tag_we = 0U;
    vlTOPp->v__DOT__f__DOT__i__DOT__ic_valid_we = 0U;
    if (vlTOPp->icache_ack_data_valid) {
	vlTOPp->v__DOT__f__DOT__i__DOT__ic_data_we = 1U;
	vlTOPp->v__DOT__f__DOT__i__DOT__ic_tag_we = 1U;
	vlTOPp->v__DOT__f__DOT__i__DOT__ic_valid_we = 1U;
    }
}

void Vcore::_settle__TOP__4(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_settle__TOP__4\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/icache.v:145
    vlTOPp->v__DOT__f__DOT__i__DOT__ic_data_we = 0U;
    vlTOPp->v__DOT__f__DOT__i__DOT__ic_tag_we = 0U;
    vlTOPp->v__DOT__f__DOT__i__DOT__ic_valid_we = 0U;
    if (vlTOPp->icache_ack_data_valid) {
	vlTOPp->v__DOT__f__DOT__i__DOT__ic_data_we = 1U;
	vlTOPp->v__DOT__f__DOT__i__DOT__ic_tag_we = 1U;
	vlTOPp->v__DOT__f__DOT__i__DOT__ic_valid_we = 1U;
    }
    vlTOPp->icache_req_addr = (vlTOPp->v__DOT__req_addr 
			       << 5U);
    vlTOPp->debug_pc_ex = vlTOPp->v__DOT__decode_pc;
    vlTOPp->debug_dest_valid = (1U & vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[0U]);
    vlTOPp->debug_dest = (((QData)((IData)(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[2U])) 
			   << 0x3eU) | (((QData)((IData)(
							 vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[1U])) 
					 << 0x1eU) 
					| ((QData)((IData)(
							   vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[0U])) 
					   >> 2U)));
    vlTOPp->debug_dest_long = (1U & (vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[0U] 
				     >> 1U));
    vlTOPp->debug_dest_rd = vlTOPp->v__DOT__dest_rd;
    vlTOPp->v__DOT__execute_pc = (VL_ULL(0x7fffffffffffffff) 
				  & ((1U & vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f1__q[0U])
				      ? (((QData)((IData)(
							  vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f1__q[2U])) 
					  << 0x3eU) 
					 | (((QData)((IData)(
							     vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f1__q[1U])) 
					     << 0x1eU) 
					    | ((QData)((IData)(
							       vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f1__q[0U])) 
					       >> 2U)))
				      : (vlTOPp->v__DOT__e__DOT__pc 
					 >> 1U)));
    // ALWAYS at rtl/alu.v:143
    if (vlTOPp->v__DOT__decode_valid) {
	if ((0x33U == (0x7fU & vlTOPp->v__DOT__decode_insn))) {
	    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 1U;
	    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 1U;
	    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
	    if ((0x80000000U & vlTOPp->v__DOT__decode_insn)) {
		vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
		vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
		vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
		vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
	    } else {
		if ((0x40000000U & vlTOPp->v__DOT__decode_insn)) {
		    if ((0x20000000U & vlTOPp->v__DOT__decode_insn)) {
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
			vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
		    } else {
			if ((0x10000000U & vlTOPp->v__DOT__decode_insn)) {
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
			    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
			} else {
			    if ((0x8000000U & vlTOPp->v__DOT__decode_insn)) {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
			    } else {
				if ((0x4000000U & vlTOPp->v__DOT__decode_insn)) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				} else {
				    if ((0x2000000U 
					 & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				    } else {
					if ((0x4000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							VL_SHIFTRS_QQI(64,64,6, vlTOPp->v__DOT__decode_src1, 
								       (0x3fU 
									& (IData)(vlTOPp->v__DOT__decode_src2)));
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						}
					    }
					} else {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							(vlTOPp->v__DOT__decode_src1 
							 - vlTOPp->v__DOT__decode_src2);
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x20000000U & vlTOPp->v__DOT__decode_insn)) {
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
			vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
		    } else {
			if ((0x10000000U & vlTOPp->v__DOT__decode_insn)) {
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
			    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
			} else {
			    if ((0x8000000U & vlTOPp->v__DOT__decode_insn)) {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
			    } else {
				if ((0x4000000U & vlTOPp->v__DOT__decode_insn)) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				} else {
				    if ((0x2000000U 
					 & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((0x4000U 
						& vlTOPp->v__DOT__decode_insn)
					        ? (
						   (0x2000U 
						    & vlTOPp->v__DOT__decode_insn)
						    ? 
						   ((0x1000U 
						     & vlTOPp->v__DOT__decode_insn)
						     ? 
						    (vlTOPp->v__DOT__decode_src1 
						     & vlTOPp->v__DOT__decode_src2)
						     : 
						    (vlTOPp->v__DOT__decode_src1 
						     | vlTOPp->v__DOT__decode_src2))
						    : 
						   ((0x1000U 
						     & vlTOPp->v__DOT__decode_insn)
						     ? 
						    (vlTOPp->v__DOT__decode_src1 
						     >> 
						     (0x3fU 
						      & (IData)(vlTOPp->v__DOT__decode_src2)))
						     : 
						    (vlTOPp->v__DOT__decode_src1 
						     ^ vlTOPp->v__DOT__decode_src2)))
					        : (
						   (0x2000U 
						    & vlTOPp->v__DOT__decode_insn)
						    ? 
						   ((0x1000U 
						     & vlTOPp->v__DOT__decode_insn)
						     ? 
						    VL_NEGATE_Q((QData)((IData)(
										(vlTOPp->v__DOT__decode_src1 
										< vlTOPp->v__DOT__decode_src2))))
						     : 
						    VL_NEGATE_Q((QData)((IData)(
										VL_LTS_IQQ(1,64,64, vlTOPp->v__DOT__decode_src1, vlTOPp->v__DOT__decode_src2)))))
						    : 
						   ((0x1000U 
						     & vlTOPp->v__DOT__decode_insn)
						     ? 
						    (vlTOPp->v__DOT__decode_src1 
						     << 
						     (0x3fU 
						      & (IData)(vlTOPp->v__DOT__decode_src2)))
						     : 
						    (vlTOPp->v__DOT__decode_src1 
						     + vlTOPp->v__DOT__decode_src2))));
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if ((0x13U == (0x7fU & vlTOPp->v__DOT__decode_insn))) {
		vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 1U;
		vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 1U;
		vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
		if ((0x80000000U & vlTOPp->v__DOT__decode_insn)) {
		    if ((0x4000U & vlTOPp->v__DOT__decode_insn)) {
			if ((0x2000U & vlTOPp->v__DOT__decode_insn)) {
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
				= ((0x1000U & vlTOPp->v__DOT__decode_insn)
				    ? (vlTOPp->v__DOT__decode_sign_ext 
				       & vlTOPp->v__DOT__decode_src1)
				    : (vlTOPp->v__DOT__decode_sign_ext 
				       | vlTOPp->v__DOT__decode_src1));
			} else {
			    if ((0x1000U & vlTOPp->v__DOT__decode_insn)) {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			    } else {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
				    = (vlTOPp->v__DOT__decode_sign_ext 
				       ^ vlTOPp->v__DOT__decode_src1);
			    }
			}
		    } else {
			if ((0x2000U & vlTOPp->v__DOT__decode_insn)) {
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
				= ((0x1000U & vlTOPp->v__DOT__decode_insn)
				    ? VL_NEGATE_Q((QData)((IData)(
								  (vlTOPp->v__DOT__decode_sign_ext 
								   > vlTOPp->v__DOT__decode_src1))))
				    : VL_NEGATE_Q((QData)((IData)(
								  VL_GTS_IQQ(1,64,64, vlTOPp->v__DOT__decode_sign_ext, vlTOPp->v__DOT__decode_src1)))));
			} else {
			    if ((0x1000U & vlTOPp->v__DOT__decode_insn)) {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			    } else {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
				    = (vlTOPp->v__DOT__decode_sign_ext 
				       + vlTOPp->v__DOT__decode_src1);
			    }
			}
		    }
		} else {
		    if ((0x40000000U & vlTOPp->v__DOT__decode_insn)) {
			if ((0x20000000U & vlTOPp->v__DOT__decode_insn)) {
			    if ((0x4000U & vlTOPp->v__DOT__decode_insn)) {
				if ((0x2000U & vlTOPp->v__DOT__decode_insn)) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					= ((0x1000U 
					    & vlTOPp->v__DOT__decode_insn)
					    ? (vlTOPp->v__DOT__decode_sign_ext 
					       & vlTOPp->v__DOT__decode_src1)
					    : (vlTOPp->v__DOT__decode_sign_ext 
					       | vlTOPp->v__DOT__decode_src1));
				} else {
				    if ((0x1000U & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = (vlTOPp->v__DOT__decode_sign_ext 
					       ^ vlTOPp->v__DOT__decode_src1);
				    }
				}
			    } else {
				if ((0x2000U & vlTOPp->v__DOT__decode_insn)) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					= ((0x1000U 
					    & vlTOPp->v__DOT__decode_insn)
					    ? VL_NEGATE_Q((QData)((IData)(
									  (vlTOPp->v__DOT__decode_sign_ext 
									   > vlTOPp->v__DOT__decode_src1))))
					    : VL_NEGATE_Q((QData)((IData)(
									  VL_GTS_IQQ(1,64,64, vlTOPp->v__DOT__decode_sign_ext, vlTOPp->v__DOT__decode_src1)))));
				} else {
				    if ((0x1000U & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = (vlTOPp->v__DOT__decode_sign_ext 
					       + vlTOPp->v__DOT__decode_src1);
				    }
				}
			    }
			} else {
			    if ((0x10000000U & vlTOPp->v__DOT__decode_insn)) {
				if ((0x4000U & vlTOPp->v__DOT__decode_insn)) {
				    if ((0x2000U & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((0x1000U 
						& vlTOPp->v__DOT__decode_insn)
					        ? (vlTOPp->v__DOT__decode_sign_ext 
						   & vlTOPp->v__DOT__decode_src1)
					        : (vlTOPp->v__DOT__decode_sign_ext 
						   | vlTOPp->v__DOT__decode_src1));
				    } else {
					if ((0x1000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (vlTOPp->v__DOT__decode_sign_ext 
						   ^ vlTOPp->v__DOT__decode_src1);
					}
				    }
				} else {
				    if ((0x2000U & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((0x1000U 
						& vlTOPp->v__DOT__decode_insn)
					        ? VL_NEGATE_Q((QData)((IData)(
									      (vlTOPp->v__DOT__decode_sign_ext 
									       > vlTOPp->v__DOT__decode_src1))))
					        : VL_NEGATE_Q((QData)((IData)(
									      VL_GTS_IQQ(1,64,64, vlTOPp->v__DOT__decode_sign_ext, vlTOPp->v__DOT__decode_src1)))));
				    } else {
					if ((0x1000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (vlTOPp->v__DOT__decode_sign_ext 
						   + vlTOPp->v__DOT__decode_src1);
					}
				    }
				}
			    } else {
				if ((0x8000000U & vlTOPp->v__DOT__decode_insn)) {
				    if ((0x4000U & vlTOPp->v__DOT__decode_insn)) {
					if ((0x2000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (
						   (0x1000U 
						    & vlTOPp->v__DOT__decode_insn)
						    ? 
						   (vlTOPp->v__DOT__decode_sign_ext 
						    & vlTOPp->v__DOT__decode_src1)
						    : 
						   (vlTOPp->v__DOT__decode_sign_ext 
						    | vlTOPp->v__DOT__decode_src1));
					} else {
					    if ((0x1000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    (vlTOPp->v__DOT__decode_sign_ext 
						     ^ vlTOPp->v__DOT__decode_src1);
					    }
					}
				    } else {
					if ((0x2000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (
						   (0x1000U 
						    & vlTOPp->v__DOT__decode_insn)
						    ? 
						   VL_NEGATE_Q((QData)((IData)(
									       (vlTOPp->v__DOT__decode_sign_ext 
										> vlTOPp->v__DOT__decode_src1))))
						    : 
						   VL_NEGATE_Q((QData)((IData)(
									       VL_GTS_IQQ(1,64,64, vlTOPp->v__DOT__decode_sign_ext, vlTOPp->v__DOT__decode_src1)))));
					} else {
					    if ((0x1000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    (vlTOPp->v__DOT__decode_sign_ext 
						     + vlTOPp->v__DOT__decode_src1);
					    }
					}
				    }
				} else {
				    if ((0x4000000U 
					 & vlTOPp->v__DOT__decode_insn)) {
					if ((0x4000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    ((0x1000U 
						      & vlTOPp->v__DOT__decode_insn)
						      ? 
						     (vlTOPp->v__DOT__decode_sign_ext 
						      & vlTOPp->v__DOT__decode_src1)
						      : 
						     (vlTOPp->v__DOT__decode_sign_ext 
						      | vlTOPp->v__DOT__decode_src1));
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							(vlTOPp->v__DOT__decode_sign_ext 
							 ^ vlTOPp->v__DOT__decode_src1);
						}
					    }
					} else {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    ((0x1000U 
						      & vlTOPp->v__DOT__decode_insn)
						      ? 
						     VL_NEGATE_Q((QData)((IData)(
										(vlTOPp->v__DOT__decode_sign_ext 
										> vlTOPp->v__DOT__decode_src1))))
						      : 
						     VL_NEGATE_Q((QData)((IData)(
										VL_GTS_IQQ(1,64,64, vlTOPp->v__DOT__decode_sign_ext, vlTOPp->v__DOT__decode_src1)))));
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							(vlTOPp->v__DOT__decode_sign_ext 
							 + vlTOPp->v__DOT__decode_src1);
						}
					    }
					}
				    } else {
					if ((0x4000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (
						   (0x2000U 
						    & vlTOPp->v__DOT__decode_insn)
						    ? 
						   ((0x1000U 
						     & vlTOPp->v__DOT__decode_insn)
						     ? 
						    (vlTOPp->v__DOT__decode_sign_ext 
						     & vlTOPp->v__DOT__decode_src1)
						     : 
						    (vlTOPp->v__DOT__decode_sign_ext 
						     | vlTOPp->v__DOT__decode_src1))
						    : 
						   ((0x1000U 
						     & vlTOPp->v__DOT__decode_insn)
						     ? 
						    VL_SHIFTRS_QQI(64,64,6, vlTOPp->v__DOT__decode_src1, 
								   (0x3fU 
								    & (vlTOPp->v__DOT__decode_insn 
								       >> 0x14U)))
						     : 
						    (vlTOPp->v__DOT__decode_sign_ext 
						     ^ vlTOPp->v__DOT__decode_src1)));
					} else {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    ((0x1000U 
						      & vlTOPp->v__DOT__decode_insn)
						      ? 
						     VL_NEGATE_Q((QData)((IData)(
										(vlTOPp->v__DOT__decode_sign_ext 
										> vlTOPp->v__DOT__decode_src1))))
						      : 
						     VL_NEGATE_Q((QData)((IData)(
										VL_GTS_IQQ(1,64,64, vlTOPp->v__DOT__decode_sign_ext, vlTOPp->v__DOT__decode_src1)))));
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							(vlTOPp->v__DOT__decode_sign_ext 
							 + vlTOPp->v__DOT__decode_src1);
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if ((0x20000000U & vlTOPp->v__DOT__decode_insn)) {
			    if ((0x4000U & vlTOPp->v__DOT__decode_insn)) {
				if ((0x2000U & vlTOPp->v__DOT__decode_insn)) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					= ((0x1000U 
					    & vlTOPp->v__DOT__decode_insn)
					    ? (vlTOPp->v__DOT__decode_sign_ext 
					       & vlTOPp->v__DOT__decode_src1)
					    : (vlTOPp->v__DOT__decode_sign_ext 
					       | vlTOPp->v__DOT__decode_src1));
				} else {
				    if ((0x1000U & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = (vlTOPp->v__DOT__decode_sign_ext 
					       ^ vlTOPp->v__DOT__decode_src1);
				    }
				}
			    } else {
				if ((0x2000U & vlTOPp->v__DOT__decode_insn)) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					= ((0x1000U 
					    & vlTOPp->v__DOT__decode_insn)
					    ? VL_NEGATE_Q((QData)((IData)(
									  (vlTOPp->v__DOT__decode_sign_ext 
									   > vlTOPp->v__DOT__decode_src1))))
					    : VL_NEGATE_Q((QData)((IData)(
									  VL_GTS_IQQ(1,64,64, vlTOPp->v__DOT__decode_sign_ext, vlTOPp->v__DOT__decode_src1)))));
				} else {
				    if ((0x1000U & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = (vlTOPp->v__DOT__decode_sign_ext 
					       + vlTOPp->v__DOT__decode_src1);
				    }
				}
			    }
			} else {
			    if ((0x10000000U & vlTOPp->v__DOT__decode_insn)) {
				if ((0x4000U & vlTOPp->v__DOT__decode_insn)) {
				    if ((0x2000U & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((0x1000U 
						& vlTOPp->v__DOT__decode_insn)
					        ? (vlTOPp->v__DOT__decode_sign_ext 
						   & vlTOPp->v__DOT__decode_src1)
					        : (vlTOPp->v__DOT__decode_sign_ext 
						   | vlTOPp->v__DOT__decode_src1));
				    } else {
					if ((0x1000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (vlTOPp->v__DOT__decode_sign_ext 
						   ^ vlTOPp->v__DOT__decode_src1);
					}
				    }
				} else {
				    if ((0x2000U & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((0x1000U 
						& vlTOPp->v__DOT__decode_insn)
					        ? VL_NEGATE_Q((QData)((IData)(
									      (vlTOPp->v__DOT__decode_sign_ext 
									       > vlTOPp->v__DOT__decode_src1))))
					        : VL_NEGATE_Q((QData)((IData)(
									      VL_GTS_IQQ(1,64,64, vlTOPp->v__DOT__decode_sign_ext, vlTOPp->v__DOT__decode_src1)))));
				    } else {
					if ((0x1000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (vlTOPp->v__DOT__decode_sign_ext 
						   + vlTOPp->v__DOT__decode_src1);
					}
				    }
				}
			    } else {
				if ((0x8000000U & vlTOPp->v__DOT__decode_insn)) {
				    if ((0x4000U & vlTOPp->v__DOT__decode_insn)) {
					if ((0x2000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (
						   (0x1000U 
						    & vlTOPp->v__DOT__decode_insn)
						    ? 
						   (vlTOPp->v__DOT__decode_sign_ext 
						    & vlTOPp->v__DOT__decode_src1)
						    : 
						   (vlTOPp->v__DOT__decode_sign_ext 
						    | vlTOPp->v__DOT__decode_src1));
					} else {
					    if ((0x1000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    (vlTOPp->v__DOT__decode_sign_ext 
						     ^ vlTOPp->v__DOT__decode_src1);
					    }
					}
				    } else {
					if ((0x2000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (
						   (0x1000U 
						    & vlTOPp->v__DOT__decode_insn)
						    ? 
						   VL_NEGATE_Q((QData)((IData)(
									       (vlTOPp->v__DOT__decode_sign_ext 
										> vlTOPp->v__DOT__decode_src1))))
						    : 
						   VL_NEGATE_Q((QData)((IData)(
									       VL_GTS_IQQ(1,64,64, vlTOPp->v__DOT__decode_sign_ext, vlTOPp->v__DOT__decode_src1)))));
					} else {
					    if ((0x1000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    (vlTOPp->v__DOT__decode_sign_ext 
						     + vlTOPp->v__DOT__decode_src1);
					    }
					}
				    }
				} else {
				    if ((0x4000000U 
					 & vlTOPp->v__DOT__decode_insn)) {
					if ((0x4000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    ((0x1000U 
						      & vlTOPp->v__DOT__decode_insn)
						      ? 
						     (vlTOPp->v__DOT__decode_sign_ext 
						      & vlTOPp->v__DOT__decode_src1)
						      : 
						     (vlTOPp->v__DOT__decode_sign_ext 
						      | vlTOPp->v__DOT__decode_src1));
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							(vlTOPp->v__DOT__decode_sign_ext 
							 ^ vlTOPp->v__DOT__decode_src1);
						}
					    }
					} else {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    ((0x1000U 
						      & vlTOPp->v__DOT__decode_insn)
						      ? 
						     VL_NEGATE_Q((QData)((IData)(
										(vlTOPp->v__DOT__decode_sign_ext 
										> vlTOPp->v__DOT__decode_src1))))
						      : 
						     VL_NEGATE_Q((QData)((IData)(
										VL_GTS_IQQ(1,64,64, vlTOPp->v__DOT__decode_sign_ext, vlTOPp->v__DOT__decode_src1)))));
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							(vlTOPp->v__DOT__decode_sign_ext 
							 + vlTOPp->v__DOT__decode_src1);
						}
					    }
					}
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((0x4000U 
						& vlTOPp->v__DOT__decode_insn)
					        ? (
						   (0x2000U 
						    & vlTOPp->v__DOT__decode_insn)
						    ? 
						   ((0x1000U 
						     & vlTOPp->v__DOT__decode_insn)
						     ? 
						    (vlTOPp->v__DOT__decode_sign_ext 
						     & vlTOPp->v__DOT__decode_src1)
						     : 
						    (vlTOPp->v__DOT__decode_sign_ext 
						     | vlTOPp->v__DOT__decode_src1))
						    : 
						   ((0x1000U 
						     & vlTOPp->v__DOT__decode_insn)
						     ? 
						    (vlTOPp->v__DOT__decode_src1 
						     >> 
						     (0x3fU 
						      & (vlTOPp->v__DOT__decode_insn 
							 >> 0x14U)))
						     : 
						    (vlTOPp->v__DOT__decode_sign_ext 
						     ^ vlTOPp->v__DOT__decode_src1)))
					        : (
						   (0x2000U 
						    & vlTOPp->v__DOT__decode_insn)
						    ? 
						   ((0x1000U 
						     & vlTOPp->v__DOT__decode_insn)
						     ? 
						    VL_NEGATE_Q((QData)((IData)(
										(vlTOPp->v__DOT__decode_sign_ext 
										> vlTOPp->v__DOT__decode_src1))))
						     : 
						    VL_NEGATE_Q((QData)((IData)(
										VL_GTS_IQQ(1,64,64, vlTOPp->v__DOT__decode_sign_ext, vlTOPp->v__DOT__decode_src1)))))
						    : 
						   ((0x1000U 
						     & vlTOPp->v__DOT__decode_insn)
						     ? 
						    (vlTOPp->v__DOT__decode_src1 
						     << 
						     (0x3fU 
						      & (vlTOPp->v__DOT__decode_insn 
							 >> 0x14U)))
						     : 
						    (vlTOPp->v__DOT__decode_sign_ext 
						     + vlTOPp->v__DOT__decode_src1))));
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((0x17U == (0x7fU & vlTOPp->v__DOT__decode_insn))) {
		    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
		    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 1U;
		    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 1U;
		    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
			= (vlTOPp->v__DOT__decode_sign_ext 
			   + vlTOPp->v__DOT__decode_pc);
		} else {
		    if ((0x1bU == (0x7fU & vlTOPp->v__DOT__decode_insn))) {
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 1U;
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
			vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
			if ((0x80000000U & vlTOPp->v__DOT__decode_insn)) {
			    if ((0x4000U & vlTOPp->v__DOT__decode_insn)) {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			    } else {
				if ((0x2000U & vlTOPp->v__DOT__decode_insn)) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				} else {
				    if ((0x1000U & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = (vlTOPp->v__DOT__decode_src1 
					       + vlTOPp->v__DOT__decode_sign_ext);
				    }
				}
			    }
			} else {
			    if ((0x40000000U & vlTOPp->v__DOT__decode_insn)) {
				if ((0x20000000U & vlTOPp->v__DOT__decode_insn)) {
				    if ((0x4000U & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					if ((0x2000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    if ((0x1000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    (vlTOPp->v__DOT__decode_src1 
						     + vlTOPp->v__DOT__decode_sign_ext);
					    }
					}
				    }
				} else {
				    if ((0x10000000U 
					 & vlTOPp->v__DOT__decode_insn)) {
					if ((0x4000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							(vlTOPp->v__DOT__decode_src1 
							 + vlTOPp->v__DOT__decode_sign_ext);
						}
					    }
					}
				    } else {
					if ((0x8000000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    if ((0x4000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						if (
						    (0x2000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    if (
							(0x1000U 
							 & vlTOPp->v__DOT__decode_insn)) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							    = 
							    (vlTOPp->v__DOT__decode_src1 
							     + vlTOPp->v__DOT__decode_sign_ext);
						    }
						}
					    }
					} else {
					    if ((0x4000000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						if (
						    (0x4000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    if (
							(0x2000U 
							 & vlTOPp->v__DOT__decode_insn)) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							if (
							    (0x1000U 
							     & vlTOPp->v__DOT__decode_insn)) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								= 
								(vlTOPp->v__DOT__decode_src1 
								 + vlTOPp->v__DOT__decode_sign_ext);
							}
						    }
						}
					    } else {
						if (
						    (0x2000000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    if (
							(0x4000U 
							 & vlTOPp->v__DOT__decode_insn)) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							if (
							    (0x2000U 
							     & vlTOPp->v__DOT__decode_insn)) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    if (
								(0x1000U 
								 & vlTOPp->v__DOT__decode_insn)) {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    } else {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								    = 
								    (vlTOPp->v__DOT__decode_src1 
								     + vlTOPp->v__DOT__decode_sign_ext);
							    }
							}
						    }
						} else {
						    if (
							(0x4000U 
							 & vlTOPp->v__DOT__decode_insn)) {
							if (
							    (0x2000U 
							     & vlTOPp->v__DOT__decode_insn)) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    if (
								(0x1000U 
								 & vlTOPp->v__DOT__decode_insn)) {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								    = 
								    VL_SHIFTRS_QQI(64,64,5, vlTOPp->v__DOT__decode_src1, 
										(0x1fU 
										& (vlTOPp->v__DOT__decode_insn 
										>> 0x14U)));
							    } else {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    }
							}
						    } else {
							if (
							    (0x2000U 
							     & vlTOPp->v__DOT__decode_insn)) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    if (
								(0x1000U 
								 & vlTOPp->v__DOT__decode_insn)) {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    } else {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								    = 
								    (vlTOPp->v__DOT__decode_src1 
								     + vlTOPp->v__DOT__decode_sign_ext);
							    }
							}
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if ((0x20000000U & vlTOPp->v__DOT__decode_insn)) {
				    if ((0x4000U & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					if ((0x2000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    if ((0x1000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    (vlTOPp->v__DOT__decode_src1 
						     + vlTOPp->v__DOT__decode_sign_ext);
					    }
					}
				    }
				} else {
				    if ((0x10000000U 
					 & vlTOPp->v__DOT__decode_insn)) {
					if ((0x4000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							(vlTOPp->v__DOT__decode_src1 
							 + vlTOPp->v__DOT__decode_sign_ext);
						}
					    }
					}
				    } else {
					if ((0x8000000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    if ((0x4000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						if (
						    (0x2000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    if (
							(0x1000U 
							 & vlTOPp->v__DOT__decode_insn)) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							    = 
							    (vlTOPp->v__DOT__decode_src1 
							     + vlTOPp->v__DOT__decode_sign_ext);
						    }
						}
					    }
					} else {
					    if ((0x4000000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						if (
						    (0x4000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    if (
							(0x2000U 
							 & vlTOPp->v__DOT__decode_insn)) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							if (
							    (0x1000U 
							     & vlTOPp->v__DOT__decode_insn)) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								= 
								(vlTOPp->v__DOT__decode_src1 
								 + vlTOPp->v__DOT__decode_sign_ext);
							}
						    }
						}
					    } else {
						if (
						    (0x2000000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    if (
							(0x4000U 
							 & vlTOPp->v__DOT__decode_insn)) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							if (
							    (0x2000U 
							     & vlTOPp->v__DOT__decode_insn)) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    if (
								(0x1000U 
								 & vlTOPp->v__DOT__decode_insn)) {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    } else {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								    = 
								    (vlTOPp->v__DOT__decode_src1 
								     + vlTOPp->v__DOT__decode_sign_ext);
							    }
							}
						    }
						} else {
						    if (
							(0x4000U 
							 & vlTOPp->v__DOT__decode_insn)) {
							if (
							    (0x2000U 
							     & vlTOPp->v__DOT__decode_insn)) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    if (
								(0x1000U 
								 & vlTOPp->v__DOT__decode_insn)) {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								    = 
								    (vlTOPp->v__DOT__decode_src1 
								     >> 
								     (0x1fU 
								      & (vlTOPp->v__DOT__decode_insn 
									 >> 0x14U)));
							    } else {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    }
							}
						    } else {
							if (
							    (0x2000U 
							     & vlTOPp->v__DOT__decode_insn)) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								= 
								((0x1000U 
								  & vlTOPp->v__DOT__decode_insn)
								  ? 
								 (vlTOPp->v__DOT__decode_src1 
								  << 
								  (0x1fU 
								   & (vlTOPp->v__DOT__decode_insn 
								      >> 0x14U)))
								  : 
								 (vlTOPp->v__DOT__decode_src1 
								  + vlTOPp->v__DOT__decode_sign_ext));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if ((0x3bU == (0x7fU & vlTOPp->v__DOT__decode_insn))) {
			    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 1U;
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
			    if ((0x80000000U & vlTOPp->v__DOT__decode_insn)) {
				vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			    } else {
				if ((0x40000000U & vlTOPp->v__DOT__decode_insn)) {
				    if ((0x20000000U 
					 & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					if ((0x10000000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    if ((0x8000000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						if (
						    (0x4000000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    if (
							(0x2000000U 
							 & vlTOPp->v__DOT__decode_insn)) {
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							if (
							    (0x4000U 
							     & vlTOPp->v__DOT__decode_insn)) {
							    if (
								(0x2000U 
								 & vlTOPp->v__DOT__decode_insn)) {
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    } else {
								if (
								    (0x1000U 
								     & vlTOPp->v__DOT__decode_insn)) {
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
									= 
									VL_SHIFTRS_QQI(64,64,5, vlTOPp->v__DOT__decode_src1, 
										(0x1fU 
										& (IData)(vlTOPp->v__DOT__decode_src2)));
								} else {
								    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
								}
							    }
							} else {
							    if (
								(0x2000U 
								 & vlTOPp->v__DOT__decode_insn)) {
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    } else {
								if (
								    (0x1000U 
								     & vlTOPp->v__DOT__decode_insn)) {
								    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
								} else {
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
									= 
									(vlTOPp->v__DOT__decode_src1 
									 - vlTOPp->v__DOT__decode_src2);
								}
							    }
							}
						    }
						}
					    }
					}
				    }
				} else {
				    if ((0x20000000U 
					 & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					if ((0x10000000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    if ((0x8000000U 
						 & vlTOPp->v__DOT__decode_insn)) {
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						if (
						    (0x4000000U 
						     & vlTOPp->v__DOT__decode_insn)) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    if (
							(0x2000000U 
							 & vlTOPp->v__DOT__decode_insn)) {
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							if (
							    (0x4000U 
							     & vlTOPp->v__DOT__decode_insn)) {
							    if (
								(0x2000U 
								 & vlTOPp->v__DOT__decode_insn)) {
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    } else {
								if (
								    (0x1000U 
								     & vlTOPp->v__DOT__decode_insn)) {
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
									= 
									(vlTOPp->v__DOT__decode_src1 
									 >> 
									 (0x1fU 
									  & (IData)(vlTOPp->v__DOT__decode_src2)));
								} else {
								    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
								}
							    }
							} else {
							    if (
								(0x2000U 
								 & vlTOPp->v__DOT__decode_insn)) {
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    } else {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								    = 
								    ((0x1000U 
								      & vlTOPp->v__DOT__decode_insn)
								      ? 
								     (vlTOPp->v__DOT__decode_src1 
								      << 
								      (0x1fU 
								       & (IData)(vlTOPp->v__DOT__decode_src2)))
								      : 
								     (vlTOPp->v__DOT__decode_src1 
								      + vlTOPp->v__DOT__decode_src2));
							    }
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			} else {
			    if ((0x63U == (0x7fU & vlTOPp->v__DOT__decode_insn))) {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				if ((0x4000U & vlTOPp->v__DOT__decode_insn)) {
				    if ((0x2000U & vlTOPp->v__DOT__decode_insn)) {
					if ((0x1000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next 
						= (vlTOPp->v__DOT__decode_src1 
						   >= vlTOPp->v__DOT__decode_src2);
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
						= (vlTOPp->v__DOT__decode_pc 
						   + vlTOPp->v__DOT__decode_sign_ext);
					} else {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next 
						= (vlTOPp->v__DOT__decode_src1 
						   < vlTOPp->v__DOT__decode_src2);
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
						= (vlTOPp->v__DOT__decode_pc 
						   + vlTOPp->v__DOT__decode_sign_ext);
					}
				    } else {
					if ((0x1000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next 
						= VL_GTES_IQQ(1,64,64, vlTOPp->v__DOT__decode_src1, vlTOPp->v__DOT__decode_src2);
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
						= (vlTOPp->v__DOT__decode_pc 
						   + vlTOPp->v__DOT__decode_sign_ext);
					} else {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next 
						= VL_LTS_IQQ(1,64,64, vlTOPp->v__DOT__decode_src1, vlTOPp->v__DOT__decode_src2);
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
						= (vlTOPp->v__DOT__decode_pc 
						   + vlTOPp->v__DOT__decode_sign_ext);
					}
				    }
				} else {
				    if ((0x2000U & vlTOPp->v__DOT__decode_insn)) {
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next = VL_ULL(0);
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				    } else {
					if ((0x1000U 
					     & vlTOPp->v__DOT__decode_insn)) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next 
						= (vlTOPp->v__DOT__decode_src1 
						   != vlTOPp->v__DOT__decode_src2);
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
						= (vlTOPp->v__DOT__decode_pc 
						   + vlTOPp->v__DOT__decode_sign_ext);
					} else {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next 
						= (vlTOPp->v__DOT__decode_src1 
						   == vlTOPp->v__DOT__decode_src2);
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
						= (vlTOPp->v__DOT__decode_pc 
						   + vlTOPp->v__DOT__decode_sign_ext);
					}
				    }
				}
			    } else {
				if ((0x6fU == (0x7fU 
					       & vlTOPp->v__DOT__decode_insn))) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 1U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					= (VL_ULL(4) 
					   + vlTOPp->v__DOT__decode_pc);
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 1U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 1U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
					= (vlTOPp->v__DOT__decode_pc 
					   + vlTOPp->v__DOT__decode_sign_ext);
				} else {
				    if ((0x67U == (0x7fU 
						   & vlTOPp->v__DOT__decode_insn))) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 1U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = (VL_ULL(4) 
					       + vlTOPp->v__DOT__decode_pc);
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 1U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 1U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
					    = (vlTOPp->v__DOT__decode_sign_ext 
					       + vlTOPp->v__DOT__decode_src1);
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
					    = (VL_ULL(0xfffffffffffffffe) 
					       & vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next);
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
	vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
    }
    // ALWAYS at rtl/signext.v:22
    vlTOPp->v__DOT__d__DOT__s__DOT__branchimm = ((0x1000U 
						  & (vlTOPp->v__DOT__fetch_insn 
						     >> 0x13U)) 
						 | ((0x800U 
						     & (vlTOPp->v__DOT__fetch_insn 
							<< 4U)) 
						    | ((0x7e0U 
							& (vlTOPp->v__DOT__fetch_insn 
							   >> 0x14U)) 
						       | (0x1eU 
							  & (vlTOPp->v__DOT__fetch_insn 
							     >> 7U)))));
    // ALWAYS at rtl/signext.v:23
    vlTOPp->v__DOT__d__DOT__s__DOT__jalimm = ((0x100000U 
					       & (vlTOPp->v__DOT__fetch_insn 
						  >> 0xbU)) 
					      | ((0xff000U 
						  & vlTOPp->v__DOT__fetch_insn) 
						 | ((0x800U 
						     & (vlTOPp->v__DOT__fetch_insn 
							>> 9U)) 
						    | (0x7feU 
						       & (vlTOPp->v__DOT__fetch_insn 
							  >> 0x14U)))));
    // ALWAYS at rtl/icache.v:69
    if (((IData)(vlTOPp->v__DOT__execute_valid) & (~ (IData)(vlTOPp->reset)))) {
	vlTOPp->v__DOT__f__DOT__i__DOT__pc_valid_next = 1U;
	vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset 
	    = (0x1eU & ((IData)(vlTOPp->v__DOT__execute_pc) 
			<< 1U));
	vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index 
	    = (0x3fU & (IData)((vlTOPp->v__DOT__execute_pc 
				>> 4U)));
	vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_tag 
	    = (VL_ULL(0x1fffffffffffff) & (vlTOPp->v__DOT__execute_pc 
					   >> 0xaU));
    }
}

VL_INLINE_OPT void Vcore::_combo__TOP__5(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_combo__TOP__5\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/icache.v:69
    if (((IData)(vlTOPp->v__DOT__execute_valid) & (~ (IData)(vlTOPp->reset)))) {
	vlTOPp->v__DOT__f__DOT__i__DOT__pc_valid_next = 1U;
	vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset 
	    = (0x1eU & ((IData)(vlTOPp->v__DOT__execute_pc) 
			<< 1U));
	vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index 
	    = (0x3fU & (IData)((vlTOPp->v__DOT__execute_pc 
				>> 4U)));
	vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_tag 
	    = (VL_ULL(0x1fffffffffffff) & (vlTOPp->v__DOT__execute_pc 
					   >> 0xaU));
    }
    // ALWAYS at rtl/icache.v:83
    vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_next 
	= (((((((((0U == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset)) 
		  | (2U == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))) 
		 | (4U == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))) 
		| (6U == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))) 
	       | (8U == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))) 
	      | (0xaU == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))) 
	     | (0xcU == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))) 
	    | (0xeU == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset)))
	    ? ((0U == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))
	        ? vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
	       [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][0U]
	        : ((2U == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))
		    ? ((vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
			[vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][1U] 
			<< 0x10U) | (vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
				     [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][0U] 
				     >> 0x10U)) : (
						   (4U 
						    == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))
						    ? 
						   vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
						   [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][1U]
						    : 
						   ((6U 
						     == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))
						     ? 
						    ((vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
						      [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][2U] 
						      << 0x10U) 
						     | (vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
							[vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][1U] 
							>> 0x10U))
						     : 
						    ((8U 
						      == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))
						      ? 
						     vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
						     [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][2U]
						      : 
						     ((0xaU 
						       == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))
						       ? 
						      ((vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
							[vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][3U] 
							<< 0x10U) 
						       | (vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
							  [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][2U] 
							  >> 0x10U))
						       : 
						      ((0xcU 
							== (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))
						        ? 
						       vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
						       [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][3U]
						        : 
						       ((vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
							 [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][4U] 
							 << 0x10U) 
							| (vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
							   [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][3U] 
							   >> 0x10U)))))))))
	    : ((0x10U == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))
	        ? vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
	       [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][4U]
	        : ((0x12U == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))
		    ? ((vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
			[vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][5U] 
			<< 0x10U) | (vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
				     [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][4U] 
				     >> 0x10U)) : (
						   (0x14U 
						    == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))
						    ? 
						   vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
						   [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][5U]
						    : 
						   ((0x16U 
						     == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))
						     ? 
						    ((vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
						      [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][6U] 
						      << 0x10U) 
						     | (vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
							[vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][5U] 
							>> 0x10U))
						     : 
						    ((0x18U 
						      == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))
						      ? 
						     vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
						     [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][6U]
						      : 
						     ((0x1aU 
						       == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))
						       ? 
						      ((vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
							[vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][7U] 
							<< 0x10U) 
						       | (vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
							  [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][6U] 
							  >> 0x10U))
						       : 
						      ((0x1cU 
							== (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))
						        ? 
						       vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
						       [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][7U]
						        : 0xdeaddeadU))))))));
    // ALWAYS at rtl/icache.v:104
    if (((((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->v__DOT__execute_valid) 
					 | (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_valid))) 
	  & (vlTOPp->v__DOT__f__DOT__i__DOT__ic_tag
	     [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index] 
	     == vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_tag)) 
	 & vlTOPp->v__DOT__f__DOT__i__DOT__ic_valid
	 [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index])) {
	vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_valid_next = 1U;
	vlTOPp->v__DOT__f__DOT__i__DOT__icache_req_addr_valid_next = 0U;
	vlTOPp->v__DOT__f__DOT__i__DOT__pc_valid_next = 0U;
    } else {
	if (vlTOPp->v__DOT__execute_valid) {
	    vlTOPp->v__DOT__f__DOT__i__DOT__icache_req_addr_valid_next = 1U;
	    vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_valid_next = 0U;
	} else {
	    vlTOPp->v__DOT__f__DOT__i__DOT__icache_req_addr_valid_next = 0U;
	    vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_valid_next = 0U;
	}
    }
}

void Vcore::_settle__TOP__6(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_settle__TOP__6\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/icache.v:83
    vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_next 
	= (((((((((0U == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset)) 
		  | (2U == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))) 
		 | (4U == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))) 
		| (6U == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))) 
	       | (8U == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))) 
	      | (0xaU == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))) 
	     | (0xcU == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))) 
	    | (0xeU == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset)))
	    ? ((0U == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))
	        ? vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
	       [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][0U]
	        : ((2U == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))
		    ? ((vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
			[vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][1U] 
			<< 0x10U) | (vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
				     [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][0U] 
				     >> 0x10U)) : (
						   (4U 
						    == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))
						    ? 
						   vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
						   [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][1U]
						    : 
						   ((6U 
						     == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))
						     ? 
						    ((vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
						      [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][2U] 
						      << 0x10U) 
						     | (vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
							[vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][1U] 
							>> 0x10U))
						     : 
						    ((8U 
						      == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))
						      ? 
						     vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
						     [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][2U]
						      : 
						     ((0xaU 
						       == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))
						       ? 
						      ((vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
							[vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][3U] 
							<< 0x10U) 
						       | (vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
							  [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][2U] 
							  >> 0x10U))
						       : 
						      ((0xcU 
							== (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))
						        ? 
						       vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
						       [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][3U]
						        : 
						       ((vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
							 [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][4U] 
							 << 0x10U) 
							| (vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
							   [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][3U] 
							   >> 0x10U)))))))))
	    : ((0x10U == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))
	        ? vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
	       [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][4U]
	        : ((0x12U == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))
		    ? ((vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
			[vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][5U] 
			<< 0x10U) | (vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
				     [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][4U] 
				     >> 0x10U)) : (
						   (0x14U 
						    == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))
						    ? 
						   vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
						   [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][5U]
						    : 
						   ((0x16U 
						     == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))
						     ? 
						    ((vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
						      [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][6U] 
						      << 0x10U) 
						     | (vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
							[vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][5U] 
							>> 0x10U))
						     : 
						    ((0x18U 
						      == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))
						      ? 
						     vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
						     [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][6U]
						      : 
						     ((0x1aU 
						       == (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))
						       ? 
						      ((vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
							[vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][7U] 
							<< 0x10U) 
						       | (vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
							  [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][6U] 
							  >> 0x10U))
						       : 
						      ((0x1cU 
							== (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset))
						        ? 
						       vlTOPp->v__DOT__f__DOT__i__DOT__ic_data
						       [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index][7U]
						        : 0xdeaddeadU))))))));
    // ALWAYS at rtl/icache.v:104
    if (((((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->v__DOT__execute_valid) 
					 | (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_valid))) 
	  & (vlTOPp->v__DOT__f__DOT__i__DOT__ic_tag
	     [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index] 
	     == vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_tag)) 
	 & vlTOPp->v__DOT__f__DOT__i__DOT__ic_valid
	 [vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index])) {
	vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_valid_next = 1U;
	vlTOPp->v__DOT__f__DOT__i__DOT__icache_req_addr_valid_next = 0U;
	vlTOPp->v__DOT__f__DOT__i__DOT__pc_valid_next = 0U;
    } else {
	if (vlTOPp->v__DOT__execute_valid) {
	    vlTOPp->v__DOT__f__DOT__i__DOT__icache_req_addr_valid_next = 1U;
	    vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_valid_next = 0U;
	} else {
	    vlTOPp->v__DOT__f__DOT__i__DOT__icache_req_addr_valid_next = 0U;
	    vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_valid_next = 0U;
	}
    }
}

void Vcore::_eval(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_eval\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_combo__TOP__5(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vcore::_eval_initial(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_eval_initial\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void Vcore::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::final\n"); );
    // Variables
    Vcore__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vcore::_eval_settle(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_eval_settle\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__6(vlSymsp);
}

VL_INLINE_OPT QData Vcore::_change_request(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_change_request\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
