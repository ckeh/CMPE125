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
    icache_ack_data_retry = VL_RAND_RESET_I(1);
    icache_ack_data_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256,icache_ack_data);
    icache_req_addr = VL_RAND_RESET_Q(64);
    icache_req_addr_valid = VL_RAND_RESET_I(1);
    icache_req_addr_retry = VL_RAND_RESET_I(1);
    dcache_req_addr = VL_RAND_RESET_Q(64);
    dcache_req_data = VL_RAND_RESET_Q(64);
    dcache_req_op = VL_RAND_RESET_I(4);
    dcache_req_rd = VL_RAND_RESET_I(5);
    dcache_req_valid = VL_RAND_RESET_I(1);
    dcache_req_retry = VL_RAND_RESET_I(1);
    dcache_ack_data = VL_RAND_RESET_Q(64);
    dcache_ack_rd = VL_RAND_RESET_I(5);
    dcache_ack_valid = VL_RAND_RESET_I(1);
    dcache_ack_retry = VL_RAND_RESET_I(1);
    debug_pc_ex = VL_RAND_RESET_Q(64);
    debug_dest_valid = VL_RAND_RESET_I(1);
    debug_dest = VL_RAND_RESET_Q(64);
    debug_dest_rd = VL_RAND_RESET_I(5);
    debug_dest_long = VL_RAND_RESET_I(1);
    v__DOT__fetch_retry = VL_RAND_RESET_I(1);
    v__DOT__execute_pc = VL_RAND_RESET_Q(63);
    v__DOT__execute_retry = VL_RAND_RESET_I(1);
    v__DOT__decode_valid = VL_RAND_RESET_I(1);
    v__DOT__dest_clear = VL_RAND_RESET_I(1);
    v__DOT__req_addr = VL_RAND_RESET_Q(59);
    v__DOT__f__DOT__pc = VL_RAND_RESET_Q(63);
    v__DOT__f__DOT__pc_next = VL_RAND_RESET_Q(63);
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
    VL_RAND_RESET_W(95,v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q);
    v__DOT__f__DOT__i__DOT__ff_req__DOT__shadowq = VL_RAND_RESET_Q(59);
    v__DOT__f__DOT__i__DOT__ff_req__DOT__c1 = VL_RAND_RESET_I(1);
    v__DOT__f__DOT__i__DOT__ff_req__DOT__c2 = VL_RAND_RESET_I(1);
    v__DOT__f__DOT__i__DOT__ff_req__DOT__shadowValid = VL_RAND_RESET_I(1);
    v__DOT__f__DOT__i__DOT__ff_req__DOT__q_enable = VL_RAND_RESET_I(1);
    v__DOT__f__DOT__i__DOT__ff_req__DOT__priv_qValidla2 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(95,v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__shadowq);
    v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__c1 = VL_RAND_RESET_I(1);
    v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__c2 = VL_RAND_RESET_I(1);
    v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__shadowValid = VL_RAND_RESET_I(1);
    v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__q_enable = VL_RAND_RESET_I(1);
    v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__priv_qValidla2 = VL_RAND_RESET_I(1);
    v__DOT__f__DOT__f_pc__DOT__shadowq = VL_RAND_RESET_Q(63);
    v__DOT__f__DOT__f_pc__DOT__priv_qValidla2 = VL_RAND_RESET_I(1);
    v__DOT__d__DOT__load = VL_RAND_RESET_I(32);
    v__DOT__d__DOT__load_next = VL_RAND_RESET_I(32);
    v__DOT__d__DOT__f1_retry = VL_RAND_RESET_I(1);
    v__DOT__d__DOT__f_retry = VL_RAND_RESET_I(1);
    v__DOT__d__DOT__load_valid = VL_RAND_RESET_I(1);
    v__DOT__d__DOT__load_valid_next = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(160,v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q);
    v__DOT__d__DOT__branchimm = VL_RAND_RESET_I(13);
    v__DOT__d__DOT__jalimm = VL_RAND_RESET_I(21);
    v__DOT__d__DOT__stimm12 = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(160,v__DOT__d__DOT__ff_pc_insn_signext__DOT__shadowq);
    v__DOT__d__DOT__ff_pc_insn_signext__DOT__c1 = VL_RAND_RESET_I(1);
    v__DOT__d__DOT__ff_pc_insn_signext__DOT__c2 = VL_RAND_RESET_I(1);
    v__DOT__d__DOT__ff_pc_insn_signext__DOT__shadowValid = VL_RAND_RESET_I(1);
    v__DOT__d__DOT__ff_pc_insn_signext__DOT__q_enable = VL_RAND_RESET_I(1);
    v__DOT__d__DOT__ff_pc_insn_signext__DOT__priv_qValidla2 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    v__DOT__d__DOT__r__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    v__DOT__d__DOT__r__DOT__rf_cntr = VL_RAND_RESET_I(5);
    v__DOT__d__DOT__r__DOT__data1_next = VL_RAND_RESET_Q(64);
    v__DOT__d__DOT__r__DOT__data2_next = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128,v__DOT__d__DOT__r__DOT____Vcellout__data__q);
    VL_RAND_RESET_W(128,v__DOT__d__DOT__r__DOT__data__DOT__shadowq);
    v__DOT__d__DOT__r__DOT__data__DOT__c1 = VL_RAND_RESET_I(1);
    v__DOT__d__DOT__r__DOT__data__DOT__shadowValid = VL_RAND_RESET_I(1);
    v__DOT__d__DOT__r__DOT__data__DOT__q_enable = VL_RAND_RESET_I(1);
    v__DOT__d__DOT__r__DOT__data__DOT__priv_qValidla2 = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__pc = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(69,v__DOT__e__DOT____Vcellout__rd_mem1__q);
    VL_RAND_RESET_W(69,v__DOT__e__DOT____Vcellout__rd_mem2__q);
    VL_RAND_RESET_W(69,v__DOT__e__DOT____Vcellout__rd_mem3__q);
    v__DOT__e__DOT__rs1_data = VL_RAND_RESET_Q(64);
    v__DOT__e__DOT__rs2_data = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(69,v__DOT__e__DOT__rd_mem1__DOT__shadowq);
    v__DOT__e__DOT__rd_mem1__DOT__c1 = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__rd_mem1__DOT__c2 = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__rd_mem1__DOT__shadowValid = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__rd_mem1__DOT__q_enable = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__rd_mem1__DOT__priv_qValidla2 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(69,v__DOT__e__DOT__rd_mem2__DOT__shadowq);
    v__DOT__e__DOT__rd_mem2__DOT__c1 = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__rd_mem2__DOT__c2 = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__rd_mem2__DOT__shadowValid = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__rd_mem2__DOT__q_enable = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__rd_mem2__DOT__priv_qValidla2 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(69,v__DOT__e__DOT__rd_mem3__DOT__shadowq);
    v__DOT__e__DOT__rd_mem3__DOT__c1 = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__rd_mem3__DOT__c2 = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__rd_mem3__DOT__shadowValid = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__rd_mem3__DOT__q_enable = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__rd_mem3__DOT__priv_qValidla2 = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__a__DOT__dest_valid_next = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__a__DOT__dest_long_next = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__a__DOT__dest_next = VL_RAND_RESET_Q(64);
    v__DOT__e__DOT__a__DOT__branch_target_valid_next = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__a__DOT__branch_target_next = VL_RAND_RESET_Q(64);
    v__DOT__e__DOT__a__DOT__dcache_req_addr_next = VL_RAND_RESET_Q(64);
    v__DOT__e__DOT__a__DOT__dcache_req_data_next = VL_RAND_RESET_Q(64);
    v__DOT__e__DOT__a__DOT__dcache_req_op_next = VL_RAND_RESET_I(4);
    v__DOT__e__DOT__a__DOT__dcache_req_rd_next = VL_RAND_RESET_I(5);
    v__DOT__e__DOT__a__DOT__dcache_req_valid_next = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__a__DOT__dcache_req_retry_next = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__a__DOT__dest_reg = VL_RAND_RESET_I(5);
    v__DOT__e__DOT__a__DOT__dest_clear_next = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__a__DOT__desired_pc_next = VL_RAND_RESET_Q(64);
    v__DOT__e__DOT__a__DOT__busy_next = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__a__DOT__desired_pc = VL_RAND_RESET_Q(64);
    v__DOT__e__DOT__a__DOT__busy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(71,v__DOT__e__DOT__a__DOT____Vcellout__ff2__q);
    VL_RAND_RESET_W(137,v__DOT__e__DOT__a__DOT____Vcellout__ff_dcache__q);
    v__DOT__e__DOT__a__DOT__ff1__DOT__shadowq = VL_RAND_RESET_Q(63);
    v__DOT__e__DOT__a__DOT__ff1__DOT__c2 = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__a__DOT__ff1__DOT__shadowValid = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__a__DOT__ff1__DOT__priv_qValidla2 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(71,v__DOT__e__DOT__a__DOT__ff2__DOT__shadowq);
    v__DOT__e__DOT__a__DOT__ff2__DOT__c2 = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__a__DOT__ff2__DOT__q_enable = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__a__DOT__ff2__DOT__priv_qValidla2 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(137,v__DOT__e__DOT__a__DOT__ff_dcache__DOT__shadowq);
    v__DOT__e__DOT__a__DOT__ff_dcache__DOT__c1 = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__a__DOT__ff_dcache__DOT__c2 = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__a__DOT__ff_dcache__DOT__shadowValid = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__a__DOT__ff_dcache__DOT__priv_dinRetry = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__a__DOT__ff_dcache__DOT__q_enable = VL_RAND_RESET_I(1);
    v__DOT__e__DOT__a__DOT__ff_dcache__DOT__priv_qValidla2 = VL_RAND_RESET_I(1);
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

void Vcore::_initial__TOP__1(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_initial__TOP__1\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at rtl/fetch.v:28
    vlTOPp->icache_ack_data_retry = 0U;
    // INITIAL at rtl/decode.v:47
    vlTOPp->dcache_ack_retry = 0U;
    // INITIAL at rtl/fetch.v:29
    vlTOPp->v__DOT__execute_retry = 0U;
}

VL_INLINE_OPT void Vcore::_sequent__TOP__2(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_sequent__TOP__2\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/fflop.v:150
    if (vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__q_enable) {
	vlTOPp->v__DOT__req_addr = vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__shadowq;
    }
    // ALWAYS at rtl/fflop.v:150
    if (vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__q_enable) {
	vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff_dcache__q[0U] 
	    = vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__shadowq[0U];
	vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff_dcache__q[1U] 
	    = vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__shadowq[1U];
	vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff_dcache__q[2U] 
	    = vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__shadowq[2U];
	vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff_dcache__q[3U] 
	    = vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__shadowq[3U];
	vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff_dcache__q[4U] 
	    = vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__shadowq[4U];
    }
    // ALWAYS at rtl/fflop.v:150
    if (vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__q_enable) {
	vlTOPp->v__DOT__d__DOT__r__DOT____Vcellout__data__q[0U] 
	    = vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__shadowq[0U];
	vlTOPp->v__DOT__d__DOT__r__DOT____Vcellout__data__q[1U] 
	    = vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__shadowq[1U];
	vlTOPp->v__DOT__d__DOT__r__DOT____Vcellout__data__q[2U] 
	    = vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__shadowq[2U];
	vlTOPp->v__DOT__d__DOT__r__DOT____Vcellout__data__q[3U] 
	    = vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__shadowq[3U];
    }
    // ALWAYS at rtl/fflop.v:150
    if (vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__q_enable) {
	vlTOPp->v__DOT__execute_pc = vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__shadowq;
    }
    // ALWAYS at rtl/fflop.v:150
    if (vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__q_enable) {
	vlTOPp->v__DOT__f__DOT__pc = vlTOPp->v__DOT__f__DOT__f_pc__DOT__shadowq;
    }
    // ALWAYS at rtl/fflop.v:150
    if (vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__q_enable) {
	vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem3__q[0U] 
	    = vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__shadowq[0U];
	vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem3__q[1U] 
	    = vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__shadowq[1U];
	vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem3__q[2U] 
	    = vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__shadowq[2U];
    }
    vlTOPp->icache_req_addr = (vlTOPp->v__DOT__req_addr 
			       << 5U);
    // ALWAYS at rtl/fflop.v:139
    vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__q_enable 
	= (1U & (~ (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__c1)));
    // ALWAYS at rtl/fflop.v:139
    vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__q_enable 
	= (1U & (~ (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__c1)));
    vlTOPp->dcache_req_addr = (((QData)((IData)(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff_dcache__q[4U])) 
				<< 0x37U) | (((QData)((IData)(
							      vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff_dcache__q[3U])) 
					      << 0x17U) 
					     | ((QData)((IData)(
								vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff_dcache__q[2U])) 
						>> 9U)));
    vlTOPp->dcache_req_op = (0xfU & ((vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff_dcache__q[1U] 
				      << 0x1bU) | (
						   vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff_dcache__q[0U] 
						   >> 5U)));
    vlTOPp->dcache_req_rd = (0x1fU & vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff_dcache__q[0U]);
    // ALWAYS at rtl/fflop.v:139
    vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__q_enable 
	= (1U & (~ (IData)(vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__c1)));
    // ALWAYS at rtl/fflop.v:139
    vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__q_enable 
	= (1U & (~ (IData)(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__c1)));
}

VL_INLINE_OPT void Vcore::_sequent__TOP__3(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_sequent__TOP__3\n"); );
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
    VL_SIG8(__Vdlyvdim0__v__DOT__d__DOT__r__DOT__rf__v3,4,0);
    VL_SIG8(__Vdlyvset__v__DOT__d__DOT__r__DOT__rf__v3,0,0);
    //char	__VpadToAlign63[1];
    VL_SIGW(__Vdlyvval__v__DOT__f__DOT__i__DOT__ic_data__v0,255,0,8);
    VL_SIG(__Vdlyvval__v__DOT__d__DOT__r__DOT__rf__v2,31,0);
    //char	__VpadToAlign100[4];
    VL_SIG64(__Vdlyvval__v__DOT__f__DOT__i__DOT__ic_tag__v0,52,0);
    VL_SIG64(__Vdlyvval__v__DOT__d__DOT__r__DOT__rf__v1,63,0);
    VL_SIG64(__Vdlyvval__v__DOT__d__DOT__r__DOT__rf__v3,63,0);
    // Body
    __Vdly__v__DOT__f__DOT__i__DOT__clear_idx = vlTOPp->v__DOT__f__DOT__i__DOT__clear_idx;
    __Vdlyvset__v__DOT__f__DOT__i__DOT__ic_data__v0 = 0U;
    __Vdlyvset__v__DOT__f__DOT__i__DOT__ic_tag__v0 = 0U;
    __Vdlyvset__v__DOT__f__DOT__i__DOT__ic_valid__v0 = 0U;
    __Vdlyvset__v__DOT__f__DOT__i__DOT__ic_valid__v1 = 0U;
    __Vdly__v__DOT__d__DOT__r__DOT__rf_cntr = vlTOPp->v__DOT__d__DOT__r__DOT__rf_cntr;
    __Vdlyvset__v__DOT__d__DOT__r__DOT__rf__v0 = 0U;
    __Vdlyvset__v__DOT__d__DOT__r__DOT__rf__v1 = 0U;
    __Vdlyvset__v__DOT__d__DOT__r__DOT__rf__v2 = 0U;
    __Vdlyvset__v__DOT__d__DOT__r__DOT__rf__v3 = 0U;
    // ALWAYS at rtl/fflop.v:160
    vlTOPp->v__DOT__f__DOT__f_pc__DOT__priv_qValidla2 
	= (1U & (~ (IData)(vlTOPp->reset)));
    // ALWAYS at rtl/fflop.v:160
    vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__priv_qValidla2 
	= (1U & (~ (IData)(vlTOPp->reset)));
    // ALWAYS at rtl/fflop.v:160
    vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__priv_qValidla2 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__c1) 
					 | (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__c2)));
    // ALWAYS at rtl/fflop.v:129
    if ((1U & (~ (IData)(vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__shadowValid)))) {
	vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__shadowq[0U] 
	    = (IData)(vlTOPp->v__DOT__d__DOT__r__DOT__data2_next);
	vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__shadowq[1U] 
	    = (IData)((vlTOPp->v__DOT__d__DOT__r__DOT__data2_next 
		       >> 0x20U));
	vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__shadowq[2U] 
	    = (IData)(vlTOPp->v__DOT__d__DOT__r__DOT__data1_next);
	vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__shadowq[3U] 
	    = (IData)((vlTOPp->v__DOT__d__DOT__r__DOT__data1_next 
		       >> 0x20U));
    }
    // ALWAYS at rtl/fflop.v:160
    vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__priv_qValidla2 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__c1) 
					 | (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__c2)));
    // ALWAYS at rtl/fflop.v:129
    if ((1U & (~ (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__shadowValid)))) {
	vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__shadowq 
	    = (VL_ULL(0x7fffffffffffffff) & (vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
					     >> 1U));
    }
    // ALWAYS at rtl/flop.v:11
    vlTOPp->v__DOT__f__DOT__i__DOT__pc_valid = ((~ (IData)(vlTOPp->reset)) 
						& (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__pc_valid_next));
    // ALWAYS at rtl/flop.v:11
    vlTOPp->v__DOT__e__DOT__a__DOT__desired_pc = ((IData)(vlTOPp->reset)
						   ? VL_ULL(0)
						   : vlTOPp->v__DOT__e__DOT__a__DOT__desired_pc_next);
    // ALWAYS at rtl/fflop.v:129
    if ((1U & (~ (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__shadowValid)))) {
	vlTOPp->v__DOT__f__DOT__f_pc__DOT__shadowq 
	    = vlTOPp->v__DOT__f__DOT__pc_next;
    }
    // ALWAYS at rtl/fflop.v:129
    if ((1U & (~ (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__shadowValid)))) {
	vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__shadowq 
	    = (VL_ULL(0x7ffffffffffffff) & (vlTOPp->v__DOT__f__DOT__pc_next 
					    >> 4U));
    }
    // ALWAYS at rtl/fflop.v:129
    if ((1U & (~ (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__shadowValid)))) {
	vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__shadowq[0U] 
	    = ((0xfffffe00U & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_data_next) 
			       << 9U)) | (((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_op_next) 
					   << 5U) | (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_rd_next)));
	vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__shadowq[1U] 
	    = ((0x1ffU & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_data_next) 
			  >> 0x17U)) | (0xfffffe00U 
					& ((IData)(
						   (vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_data_next 
						    >> 0x20U)) 
					   << 9U)));
	vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__shadowq[2U] 
	    = ((0x1ffU & ((IData)((vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_data_next 
				   >> 0x20U)) >> 0x17U)) 
	       | (0xfffffe00U & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next) 
				 << 9U)));
	vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__shadowq[3U] 
	    = ((0x1ffU & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next) 
			  >> 0x17U)) | (0xfffffe00U 
					& ((IData)(
						   (vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next 
						    >> 0x20U)) 
					   << 9U)));
	vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__shadowq[4U] 
	    = (0x1ffU & ((IData)((vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next 
				  >> 0x20U)) >> 0x17U));
    }
    // ALWAYS at rtl/fflop.v:160
    vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__priv_qValidla2 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__c1) 
					 | (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__c2)));
    // ALWAYS at rtl/fflop.v:160
    vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__priv_qValidla2 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__c1) 
					 | (IData)(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__c2)));
    // ALWAYS at rtl/fflop.v:160
    vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__priv_qValidla2 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__c1) 
					 | (IData)(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__c2)));
    // ALWAYS at rtl/fflop.v:160
    vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__priv_qValidla2 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__c1) 
					 | (IData)(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__c2)));
    // ALWAYS at rtl/fflop.v:160
    vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__priv_qValidla2 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__c2));
    // ALWAYS at rtl/icache.v:129
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
    // ALWAYS at rtl/fflop.v:160
    vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__priv_qValidla2 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__c1) 
					 | (IData)(vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__c2)));
    // ALWAYS at rtl/flop_r.v:7
    vlTOPp->v__DOT__d__DOT__load_valid = ((IData)(vlTOPp->reset) 
					  | (IData)(vlTOPp->v__DOT__d__DOT__load_valid_next));
    // ALWAYS at rtl/flop.v:11
    vlTOPp->v__DOT__d__DOT__load = ((IData)(vlTOPp->reset)
				     ? 0U : vlTOPp->v__DOT__d__DOT__load_next);
    // ALWAYS at rtl/flop.v:11
    vlTOPp->v__DOT__e__DOT__a__DOT__busy = ((~ (IData)(vlTOPp->reset)) 
					    & (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__busy_next));
    // ALWAYS at rtl/fflop.v:129
    if ((1U & (~ (IData)(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__shadowValid)))) {
	vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__shadowq[0U] 
	    = vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem2__q[0U];
	vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__shadowq[1U] 
	    = vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem2__q[1U];
	vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__shadowq[2U] 
	    = vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem2__q[2U];
    }
    // ALWAYS at rtl/regfile.v:34
    if (vlTOPp->reset) {
	__Vdlyvset__v__DOT__d__DOT__r__DOT__rf__v0 = 1U;
	__Vdlyvdim0__v__DOT__d__DOT__r__DOT__rf__v0 
	    = vlTOPp->v__DOT__d__DOT__r__DOT__rf_cntr;
	__Vdly__v__DOT__d__DOT__r__DOT__rf_cntr = (0x1fU 
						   & ((IData)(1U) 
						      + (IData)(vlTOPp->v__DOT__d__DOT__r__DOT__rf_cntr)));
    } else {
	if (vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__priv_qValidla2) {
	    if ((0x40U & vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U])) {
		__Vdlyvval__v__DOT__d__DOT__r__DOT__rf__v1 
		    = (((QData)((IData)(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[2U])) 
			<< 0x39U) | (((QData)((IData)(
						      vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U])) 
				      << 0x19U) | ((QData)((IData)(
								   vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U])) 
						   >> 7U)));
		__Vdlyvset__v__DOT__d__DOT__r__DOT__rf__v1 = 1U;
		__Vdlyvdim0__v__DOT__d__DOT__r__DOT__rf__v1 
		    = (0x1fU & ((vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U] 
				 << 0x1fU) | (vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U] 
					      >> 1U)));
	    } else {
		__Vdlyvval__v__DOT__d__DOT__r__DOT__rf__v2 
		    = ((vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U] 
			<< 0x19U) | (vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U] 
				     >> 7U));
		__Vdlyvset__v__DOT__d__DOT__r__DOT__rf__v2 = 1U;
		__Vdlyvlsb__v__DOT__d__DOT__r__DOT__rf__v2 = 0U;
		__Vdlyvdim0__v__DOT__d__DOT__r__DOT__rf__v2 
		    = (0x1fU & ((vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U] 
				 << 0x1fU) | (vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U] 
					      >> 1U)));
	    }
	}
	if (vlTOPp->dcache_ack_valid) {
	    __Vdlyvval__v__DOT__d__DOT__r__DOT__rf__v3 
		= vlTOPp->dcache_ack_data;
	    __Vdlyvset__v__DOT__d__DOT__r__DOT__rf__v3 = 1U;
	    __Vdlyvdim0__v__DOT__d__DOT__r__DOT__rf__v3 
		= vlTOPp->dcache_ack_rd;
	}
    }
    vlTOPp->v__DOT__f__DOT__i__DOT__clear_idx = __Vdly__v__DOT__f__DOT__i__DOT__clear_idx;
    // ALWAYSPOST at rtl/icache.v:135
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
    // ALWAYSPOST at rtl/icache.v:137
    if (__Vdlyvset__v__DOT__f__DOT__i__DOT__ic_tag__v0) {
	vlTOPp->v__DOT__f__DOT__i__DOT__ic_tag[__Vdlyvdim0__v__DOT__f__DOT__i__DOT__ic_tag__v0] 
	    = __Vdlyvval__v__DOT__f__DOT__i__DOT__ic_tag__v0;
    }
    // ALWAYSPOST at rtl/icache.v:131
    if (__Vdlyvset__v__DOT__f__DOT__i__DOT__ic_valid__v0) {
	vlTOPp->v__DOT__f__DOT__i__DOT__ic_valid[__Vdlyvdim0__v__DOT__f__DOT__i__DOT__ic_valid__v0] = 0U;
    }
    if (__Vdlyvset__v__DOT__f__DOT__i__DOT__ic_valid__v1) {
	vlTOPp->v__DOT__f__DOT__i__DOT__ic_valid[__Vdlyvdim0__v__DOT__f__DOT__i__DOT__ic_valid__v1] = 1U;
    }
    vlTOPp->v__DOT__d__DOT__r__DOT__rf_cntr = __Vdly__v__DOT__d__DOT__r__DOT__rf_cntr;
    // ALWAYSPOST at rtl/regfile.v:36
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
    if (__Vdlyvset__v__DOT__d__DOT__r__DOT__rf__v3) {
	vlTOPp->v__DOT__d__DOT__r__DOT__rf[__Vdlyvdim0__v__DOT__d__DOT__r__DOT__rf__v3] 
	    = __Vdlyvval__v__DOT__d__DOT__r__DOT__rf__v3;
    }
    // ALWAYS at rtl/fflop.v:69
    vlTOPp->icache_req_addr_valid = vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__priv_qValidla2;
    // ALWAYS at rtl/fflop.v:97
    vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__shadowValid 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__c1));
    // ALWAYS at rtl/fflop.v:69
    vlTOPp->dcache_req_valid = vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__priv_qValidla2;
    // ALWAYS at rtl/fflop.v:97
    vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__shadowValid 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__c1) 
					 & (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__c2)));
    // ALWAYS at rtl/fflop.v:97
    vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__shadowValid 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__c1) 
					 & (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__c2)));
    // ALWAYS at rtl/fflop.v:97
    vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__shadowValid 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__c1) 
					 & (IData)(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__c2)));
    // ALWAYS at rtl/fflop.v:160
    vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__priv_qValidla2 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__c2));
    // ALWAYS at rtl/fflop.v:91
    vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__c2 = ((IData)(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__priv_qValidla2) 
						| (IData)(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__shadowValid));
    vlTOPp->debug_dest_valid = vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__priv_qValidla2;
}

void Vcore::_settle__TOP__4(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_settle__TOP__4\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->icache_req_addr = (vlTOPp->v__DOT__req_addr 
			       << 5U);
    vlTOPp->dcache_req_addr = (((QData)((IData)(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff_dcache__q[4U])) 
				<< 0x37U) | (((QData)((IData)(
							      vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff_dcache__q[3U])) 
					      << 0x17U) 
					     | ((QData)((IData)(
								vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff_dcache__q[2U])) 
						>> 9U)));
    vlTOPp->dcache_req_op = (0xfU & ((vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff_dcache__q[1U] 
				      << 0x1bU) | (
						   vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff_dcache__q[0U] 
						   >> 5U)));
    vlTOPp->dcache_req_rd = (0x1fU & vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff_dcache__q[0U]);
    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_data_next 
	= (((QData)((IData)(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff_dcache__q[2U])) 
	    << 0x37U) | (((QData)((IData)(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff_dcache__q[1U])) 
			  << 0x17U) | ((QData)((IData)(
						       vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff_dcache__q[0U])) 
				       >> 9U)));
    // ALWAYS at rtl/icache.v:117
    vlTOPp->v__DOT__f__DOT__i__DOT__ic_data_we = 0U;
    vlTOPp->v__DOT__f__DOT__i__DOT__ic_tag_we = 0U;
    vlTOPp->v__DOT__f__DOT__i__DOT__ic_valid_we = 0U;
    if (vlTOPp->icache_ack_data_valid) {
	vlTOPp->v__DOT__f__DOT__i__DOT__ic_data_we = 1U;
	vlTOPp->v__DOT__f__DOT__i__DOT__ic_tag_we = 1U;
	vlTOPp->v__DOT__f__DOT__i__DOT__ic_valid_we = 1U;
    }
    // ALWAYS at rtl/fflop.v:69
    vlTOPp->icache_req_addr_valid = vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__priv_qValidla2;
    // ALWAYS at rtl/fflop.v:69
    vlTOPp->dcache_req_valid = vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__priv_qValidla2;
    // ALWAYS at rtl/fflop.v:90
    vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__c1 
	= ((IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__priv_qValidla2) 
	   & (IData)(vlTOPp->icache_req_addr_retry));
    // ALWAYS at rtl/fflop.v:90
    vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__c1 
	= ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__priv_qValidla2) 
	   & (IData)(vlTOPp->dcache_req_retry));
    // ALWAYS at rtl/fflop.v:90
    vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__c1 = ((IData)(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__priv_qValidla2) 
						& (IData)(vlTOPp->dcache_req_retry));
    // ALWAYS at rtl/fflop.v:194
    vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__priv_dinRetry 
	= ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__shadowValid) 
	   | (IData)(vlTOPp->reset));
    // ALWAYS at rtl/fflop.v:91
    vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__c2 = ((IData)(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__priv_qValidla2) 
						| (IData)(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__shadowValid));
    vlTOPp->debug_dest_valid = vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__priv_qValidla2;
}

VL_INLINE_OPT void Vcore::_sequent__TOP__5(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_sequent__TOP__5\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_data_next 
	= (((QData)((IData)(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff_dcache__q[2U])) 
	    << 0x37U) | (((QData)((IData)(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff_dcache__q[1U])) 
			  << 0x17U) | ((QData)((IData)(
						       vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff_dcache__q[0U])) 
				       >> 9U)));
    // ALWAYS at rtl/fflop.v:150
    if (vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__q_enable) {
	vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem2__q[0U] 
	    = vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__shadowq[0U];
	vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem2__q[1U] 
	    = vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__shadowq[1U];
	vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem2__q[2U] 
	    = vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__shadowq[2U];
    }
    // ALWAYS at rtl/fflop.v:139
    vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__q_enable 
	= (1U & (~ (IData)(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__c1)));
}

VL_INLINE_OPT void Vcore::_combo__TOP__6(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_combo__TOP__6\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/icache.v:117
    vlTOPp->v__DOT__f__DOT__i__DOT__ic_data_we = 0U;
    vlTOPp->v__DOT__f__DOT__i__DOT__ic_tag_we = 0U;
    vlTOPp->v__DOT__f__DOT__i__DOT__ic_valid_we = 0U;
    if (vlTOPp->icache_ack_data_valid) {
	vlTOPp->v__DOT__f__DOT__i__DOT__ic_data_we = 1U;
	vlTOPp->v__DOT__f__DOT__i__DOT__ic_tag_we = 1U;
	vlTOPp->v__DOT__f__DOT__i__DOT__ic_valid_we = 1U;
    }
    // ALWAYS at rtl/fflop.v:90
    vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__c1 
	= ((IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__priv_qValidla2) 
	   & (IData)(vlTOPp->icache_req_addr_retry));
    // ALWAYS at rtl/fflop.v:90
    vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__c1 
	= ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__priv_qValidla2) 
	   & (IData)(vlTOPp->dcache_req_retry));
    // ALWAYS at rtl/fflop.v:90
    vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__c1 = ((IData)(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__priv_qValidla2) 
						& (IData)(vlTOPp->dcache_req_retry));
    // ALWAYS at rtl/fflop.v:194
    vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__priv_dinRetry 
	= ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__shadowValid) 
	   | (IData)(vlTOPp->reset));
    // ALWAYS at rtl/fflop.v:90
    vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__c1 = 
	((IData)(vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__priv_qValidla2) 
	 & (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__priv_dinRetry));
}

void Vcore::_initial__TOP__7(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_initial__TOP__7\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at rtl/regfile.v:27
    vlTOPp->v__DOT__d__DOT__r__DOT__rf_cntr = 0U;
}

VL_INLINE_OPT void Vcore::_sequent__TOP__8(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_sequent__TOP__8\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/fflop.v:129
    if ((1U & (~ (IData)(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__shadowValid)))) {
	vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__shadowq[0U] 
	    = vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem1__q[0U];
	vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__shadowq[1U] 
	    = vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem1__q[1U];
	vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__shadowq[2U] 
	    = vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem1__q[2U];
    }
    // ALWAYS at rtl/fflop.v:97
    vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__shadowValid 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__c1) 
					 & (IData)(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__c2)));
    // ALWAYS at rtl/fflop.v:91
    vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__c2 = ((IData)(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__priv_qValidla2) 
						| (IData)(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__shadowValid));
}

void Vcore::_settle__TOP__9(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_settle__TOP__9\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/fflop.v:90
    vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__c1 = 
	((IData)(vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__priv_qValidla2) 
	 & (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__priv_dinRetry));
    // ALWAYS at rtl/fflop.v:90
    vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__c1 = ((IData)(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__priv_qValidla2) 
						& (IData)(vlTOPp->dcache_req_retry));
    // ALWAYS at rtl/fflop.v:91
    vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__c2 = ((IData)(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__priv_qValidla2) 
						| (IData)(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__shadowValid));
}

VL_INLINE_OPT void Vcore::_sequent__TOP__10(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_sequent__TOP__10\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/fflop.v:150
    if (vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__q_enable) {
	vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem1__q[0U] 
	    = vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__shadowq[0U];
	vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem1__q[1U] 
	    = vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__shadowq[1U];
	vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem1__q[2U] 
	    = vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__shadowq[2U];
    }
    // ALWAYS at rtl/fflop.v:139
    vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__q_enable 
	= (1U & (~ (IData)(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__c1)));
}

VL_INLINE_OPT void Vcore::_combo__TOP__11(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_combo__TOP__11\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/fflop.v:90
    vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__c1 = ((IData)(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__priv_qValidla2) 
						& (IData)(vlTOPp->dcache_req_retry));
}

VL_INLINE_OPT void Vcore::_sequent__TOP__12(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_sequent__TOP__12\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/fflop.v:129
    if ((1U & (~ (IData)(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__shadowValid)))) {
	vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__shadowq[0U] 
	    = (IData)((((QData)((IData)(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[2U])) 
			<< 0x39U) | (((QData)((IData)(
						      vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U])) 
				      << 0x19U) | ((QData)((IData)(
								   vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U])) 
						   >> 7U))));
	vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__shadowq[1U] 
	    = (IData)(((((QData)((IData)(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[2U])) 
			 << 0x39U) | (((QData)((IData)(
						       vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U])) 
				       << 0x19U) | 
				      ((QData)((IData)(
						       vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U])) 
				       >> 7U))) >> 0x20U));
	vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__shadowq[2U] 
	    = (0x1fU & ((vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U] 
			 << 0x1fU) | (vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U] 
				      >> 1U)));
    }
    // ALWAYS at rtl/fflop.v:97
    vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__shadowValid 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__c1) 
					 & (IData)(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__c2)));
    // ALWAYS at rtl/fflop.v:91
    vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__c2 = ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__priv_qValidla2) 
						| (IData)(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__shadowValid));
}

VL_INLINE_OPT void Vcore::_sequent__TOP__13(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_sequent__TOP__13\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/fflop.v:150
    if (vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__q_enable) {
	vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U] 
	    = vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__shadowq[0U];
	vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U] 
	    = vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__shadowq[1U];
	vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[2U] 
	    = vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__shadowq[2U];
    }
    // ALWAYS at rtl/fflop.v:139
    vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__q_enable = 1U;
    vlTOPp->debug_dest = (((QData)((IData)(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[2U])) 
			   << 0x39U) | (((QData)((IData)(
							 vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U])) 
					 << 0x19U) 
					| ((QData)((IData)(
							   vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U])) 
					   >> 7U)));
    vlTOPp->debug_dest_rd = (0x1fU & ((vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U] 
				       << 0x1fU) | 
				      (vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U] 
				       >> 1U)));
    vlTOPp->debug_dest_long = (1U & (vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U] 
				     >> 6U));
    vlTOPp->v__DOT__dest_clear = (1U & vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U]);
}

VL_INLINE_OPT void Vcore::_combo__TOP__14(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_combo__TOP__14\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/fflop.v:90
    vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__c1 = ((IData)(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__priv_qValidla2) 
						& (IData)(vlTOPp->dcache_req_retry));
}

void Vcore::_settle__TOP__15(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_settle__TOP__15\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/fflop.v:90
    vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__c1 = ((IData)(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__priv_qValidla2) 
						& (IData)(vlTOPp->dcache_req_retry));
    // ALWAYS at rtl/fflop.v:91
    vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__c2 = ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__priv_qValidla2) 
						| (IData)(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__shadowValid));
    vlTOPp->debug_dest = (((QData)((IData)(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[2U])) 
			   << 0x39U) | (((QData)((IData)(
							 vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U])) 
					 << 0x19U) 
					| ((QData)((IData)(
							   vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U])) 
					   >> 7U)));
    vlTOPp->debug_dest_rd = (0x1fU & ((vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U] 
				       << 0x1fU) | 
				      (vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U] 
				       >> 1U)));
    vlTOPp->debug_dest_long = (1U & (vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U] 
				     >> 6U));
}

VL_INLINE_OPT void Vcore::_sequent__TOP__16(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_sequent__TOP__16\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/fflop.v:129
    if ((1U & (~ (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__shadowValid)))) {
	vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__shadowq[0U] 
	    = ((0xffffff80U & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dest_next) 
			       << 7U)) | (((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next) 
					   << 6U) | 
					  ((0x3eU & 
					    ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
					      << 0x1aU) 
					     | (0x3fffffeU 
						& (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
						   >> 6U)))) 
					   | (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dest_clear_next))));
	vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__shadowq[1U] 
	    = ((0x7fU & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dest_next) 
			 >> 0x19U)) | (0xffffff80U 
				       & ((IData)((vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						   >> 0x20U)) 
					  << 7U)));
	vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__shadowq[2U] 
	    = (0x7fU & ((IData)((vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
				 >> 0x20U)) >> 0x19U));
    }
    // ALWAYS at rtl/fflop.v:97
    vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__shadowValid = 0U;
}

VL_INLINE_OPT void Vcore::_sequent__TOP__17(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_sequent__TOP__17\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/fflop.v:150
    if (vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__q_enable) {
	vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U] 
	    = vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__shadowq[0U];
	vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U] 
	    = vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__shadowq[1U];
	vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
	    = vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__shadowq[2U];
	vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
	    = vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__shadowq[3U];
	vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U] 
	    = vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__shadowq[4U];
    }
    // ALWAYS at rtl/fflop.v:139
    vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__q_enable 
	= (1U & (~ (IData)(vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__c1)));
    vlTOPp->debug_pc_ex = (((QData)((IData)(vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
			    << 0x20U) | (QData)((IData)(
							vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U])));
}

VL_INLINE_OPT void Vcore::_sequent__TOP__18(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_sequent__TOP__18\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign428[4];
    VL_SIGW(__Vtemp7,159,0,5);
    // Body
    // ALWAYS at rtl/fflop.v:129
    if ((1U & (~ (IData)(vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__shadowValid)))) {
	__Vtemp7[0U] = (IData)(((0x20U & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
				 ? ((0x10U & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
				     ? ((8U & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
					 ? ((VL_ULL(0xfffffffffffff000) 
					     & (VL_NEGATE_Q((QData)((IData)(
									    (1U 
									     & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						<< 0xcU)) 
					    | (QData)((IData)(
							      (0xfffU 
							       & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
								  >> 0x13U)))))
					 : ((4U & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
					     ? ((2U 
						 & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
						 ? 
						((1U 
						  & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
						  ? 
						 ((0x80000000U 
						   & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[1U])
						   ? 
						  ((VL_ULL(0xffffffffffe00000) 
						    & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__d__DOT__jalimm 
										>> 0x14U))))) 
						       << 0x15U)) 
						   | (QData)((IData)(vlTOPp->v__DOT__d__DOT__jalimm)))
						   : 
						  ((VL_ULL(0xfffffffffffff000) 
						    & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						       << 0xcU)) 
						   | (QData)((IData)(
								     (0xfffU 
								      & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
									 >> 0x13U))))))
						  : 
						 ((VL_ULL(0xfffffffffffff000) 
						   & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						      << 0xcU)) 
						  | (QData)((IData)(
								    (0xfffU 
								     & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
									>> 0x13U))))))
						 : 
						((VL_ULL(0xfffffffffffff000) 
						  & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						     << 0xcU)) 
						 | (QData)((IData)(
								   (0xfffU 
								    & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
								       >> 0x13U))))))
					     : ((2U 
						 & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
						 ? 
						((VL_ULL(0xfffffffffffff000) 
						  & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						     << 0xcU)) 
						 | (QData)((IData)(
								   (0xfffU 
								    & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
								       >> 0x13U)))))
						 : 
						((1U 
						  & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
						  ? 
						 ((0x80000000U 
						   & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[1U])
						   ? 
						  ((VL_ULL(0xffffffffffffe000) 
						    & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& ((IData)(vlTOPp->v__DOT__d__DOT__branchimm) 
										>> 0xcU))))) 
						       << 0xdU)) 
						   | (QData)((IData)(vlTOPp->v__DOT__d__DOT__branchimm)))
						   : 
						  ((VL_ULL(0xfffffffffffff000) 
						    & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						       << 0xcU)) 
						   | (QData)((IData)(
								     (0xfffU 
								      & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
									 >> 0x13U))))))
						  : 
						 ((VL_ULL(0xfffffffffffff000) 
						   & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						      << 0xcU)) 
						  | (QData)((IData)(
								    (0xfffU 
								     & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
									>> 0x13U)))))))))
				     : ((VL_ULL(0xfffffffffffff000) 
					 & (VL_NEGATE_Q((QData)((IData)(
									(1U 
									 & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
									    >> 0x1eU))))) 
					    << 0xcU)) 
					| (QData)((IData)(
							  (0xfffU 
							   & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
							      >> 0x13U))))))
				 : ((0x10U & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
				     ? ((8U & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
					 ? ((VL_ULL(0xfffffffffffff000) 
					     & (VL_NEGATE_Q((QData)((IData)(
									    (1U 
									     & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						<< 0xcU)) 
					    | (QData)((IData)(
							      (0xfffU 
							       & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
								  >> 0x13U)))))
					 : ((4U & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
					     ? ((VL_ULL(0xfffffffffffff000) 
						 & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						    << 0xcU)) 
						| (QData)((IData)(
								  (0xfffU 
								   & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
								      >> 0x13U)))))
					     : ((2U 
						 & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
						 ? 
						((VL_ULL(0xfffffffffffff000) 
						  & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						     << 0xcU)) 
						 | (QData)((IData)(
								   (0xfffU 
								    & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
								       >> 0x13U)))))
						 : 
						((1U 
						  & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
						  ? 
						 ((0x80000000U 
						   & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[1U])
						   ? 
						  ((VL_ULL(0xfffffffffffff000) 
						    & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& ((IData)(vlTOPp->v__DOT__d__DOT__stimm12) 
										>> 0xbU))))) 
						       << 0xcU)) 
						   | (QData)((IData)(vlTOPp->v__DOT__d__DOT__stimm12)))
						   : 
						  ((VL_ULL(0xfffffffffffff000) 
						    & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						       << 0xcU)) 
						   | (QData)((IData)(
								     (0xfffU 
								      & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
									 >> 0x13U))))))
						  : 
						 ((VL_ULL(0xfffffffffffff000) 
						   & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						      << 0xcU)) 
						  | (QData)((IData)(
								    (0xfffU 
								     & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
									>> 0x13U)))))))))
				     : ((8U & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
					 ? ((4U & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
					     ? ((VL_ULL(0xfffffffffffff000) 
						 & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						    << 0xcU)) 
						| (QData)((IData)(
								  (0xfffU 
								   & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
								      >> 0x13U)))))
					     : ((2U 
						 & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
						 ? 
						((1U 
						  & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
						  ? 
						 ((0x80000000U 
						   & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[1U])
						   ? 
						  (((QData)((IData)(
								    VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU)))))) 
						    << 0x20U) 
						   | (QData)((IData)(
								     (0xfffff000U 
								      & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
									 << 1U)))))
						   : 
						  ((VL_ULL(0xfffffffffffff000) 
						    & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						       << 0xcU)) 
						   | (QData)((IData)(
								     (0xfffU 
								      & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
									 >> 0x13U))))))
						  : 
						 ((VL_ULL(0xfffffffffffff000) 
						   & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						      << 0xcU)) 
						  | (QData)((IData)(
								    (0xfffU 
								     & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
									>> 0x13U))))))
						 : 
						((VL_ULL(0xfffffffffffff000) 
						  & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						     << 0xcU)) 
						 | (QData)((IData)(
								   (0xfffU 
								    & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
								       >> 0x13U)))))))
					 : ((VL_ULL(0xfffffffffffff000) 
					     & (VL_NEGATE_Q((QData)((IData)(
									    (1U 
									     & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						<< 0xcU)) 
					    | (QData)((IData)(
							      (0xfffU 
							       & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
								  >> 0x13U)))))))));
	__Vtemp7[1U] = (IData)((((0x20U & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
				  ? ((0x10U & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
				      ? ((8U & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
					  ? ((VL_ULL(0xfffffffffffff000) 
					      & (VL_NEGATE_Q((QData)((IData)(
									     (1U 
									      & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						 << 0xcU)) 
					     | (QData)((IData)(
							       (0xfffU 
								& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
								   >> 0x13U)))))
					  : ((4U & 
					      vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
					      ? ((2U 
						  & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
						  ? 
						 ((1U 
						   & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
						   ? 
						  ((0x80000000U 
						    & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[1U])
						    ? 
						   ((VL_ULL(0xffffffffffe00000) 
						     & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__d__DOT__jalimm 
										>> 0x14U))))) 
							<< 0x15U)) 
						    | (QData)((IData)(vlTOPp->v__DOT__d__DOT__jalimm)))
						    : 
						   ((VL_ULL(0xfffffffffffff000) 
						     & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
							<< 0xcU)) 
						    | (QData)((IData)(
								      (0xfffU 
								       & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
									  >> 0x13U))))))
						   : 
						  ((VL_ULL(0xfffffffffffff000) 
						    & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						       << 0xcU)) 
						   | (QData)((IData)(
								     (0xfffU 
								      & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
									 >> 0x13U))))))
						  : 
						 ((VL_ULL(0xfffffffffffff000) 
						   & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						      << 0xcU)) 
						  | (QData)((IData)(
								    (0xfffU 
								     & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
									>> 0x13U))))))
					      : ((2U 
						  & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
						  ? 
						 ((VL_ULL(0xfffffffffffff000) 
						   & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						      << 0xcU)) 
						  | (QData)((IData)(
								    (0xfffU 
								     & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
									>> 0x13U)))))
						  : 
						 ((1U 
						   & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
						   ? 
						  ((0x80000000U 
						    & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[1U])
						    ? 
						   ((VL_ULL(0xffffffffffffe000) 
						     & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& ((IData)(vlTOPp->v__DOT__d__DOT__branchimm) 
										>> 0xcU))))) 
							<< 0xdU)) 
						    | (QData)((IData)(vlTOPp->v__DOT__d__DOT__branchimm)))
						    : 
						   ((VL_ULL(0xfffffffffffff000) 
						     & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
							<< 0xcU)) 
						    | (QData)((IData)(
								      (0xfffU 
								       & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
									  >> 0x13U))))))
						   : 
						  ((VL_ULL(0xfffffffffffff000) 
						    & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						       << 0xcU)) 
						   | (QData)((IData)(
								     (0xfffU 
								      & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
									 >> 0x13U)))))))))
				      : ((VL_ULL(0xfffffffffffff000) 
					  & (VL_NEGATE_Q((QData)((IData)(
									 (1U 
									  & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
									     >> 0x1eU))))) 
					     << 0xcU)) 
					 | (QData)((IData)(
							   (0xfffU 
							    & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
							       >> 0x13U))))))
				  : ((0x10U & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
				      ? ((8U & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
					  ? ((VL_ULL(0xfffffffffffff000) 
					      & (VL_NEGATE_Q((QData)((IData)(
									     (1U 
									      & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						 << 0xcU)) 
					     | (QData)((IData)(
							       (0xfffU 
								& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
								   >> 0x13U)))))
					  : ((4U & 
					      vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
					      ? ((VL_ULL(0xfffffffffffff000) 
						  & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						     << 0xcU)) 
						 | (QData)((IData)(
								   (0xfffU 
								    & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
								       >> 0x13U)))))
					      : ((2U 
						  & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
						  ? 
						 ((VL_ULL(0xfffffffffffff000) 
						   & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						      << 0xcU)) 
						  | (QData)((IData)(
								    (0xfffU 
								     & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
									>> 0x13U)))))
						  : 
						 ((1U 
						   & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
						   ? 
						  ((0x80000000U 
						    & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[1U])
						    ? 
						   ((VL_ULL(0xfffffffffffff000) 
						     & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& ((IData)(vlTOPp->v__DOT__d__DOT__stimm12) 
										>> 0xbU))))) 
							<< 0xcU)) 
						    | (QData)((IData)(vlTOPp->v__DOT__d__DOT__stimm12)))
						    : 
						   ((VL_ULL(0xfffffffffffff000) 
						     & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
							<< 0xcU)) 
						    | (QData)((IData)(
								      (0xfffU 
								       & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
									  >> 0x13U))))))
						   : 
						  ((VL_ULL(0xfffffffffffff000) 
						    & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						       << 0xcU)) 
						   | (QData)((IData)(
								     (0xfffU 
								      & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
									 >> 0x13U)))))))))
				      : ((8U & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
					  ? ((4U & 
					      vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
					      ? ((VL_ULL(0xfffffffffffff000) 
						  & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						     << 0xcU)) 
						 | (QData)((IData)(
								   (0xfffU 
								    & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
								       >> 0x13U)))))
					      : ((2U 
						  & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
						  ? 
						 ((1U 
						   & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
						   ? 
						  ((0x80000000U 
						    & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[1U])
						    ? 
						   (((QData)((IData)(
								     VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU)))))) 
						     << 0x20U) 
						    | (QData)((IData)(
								      (0xfffff000U 
								       & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
									  << 1U)))))
						    : 
						   ((VL_ULL(0xfffffffffffff000) 
						     & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
							<< 0xcU)) 
						    | (QData)((IData)(
								      (0xfffU 
								       & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
									  >> 0x13U))))))
						   : 
						  ((VL_ULL(0xfffffffffffff000) 
						    & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						       << 0xcU)) 
						   | (QData)((IData)(
								     (0xfffU 
								      & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
									 >> 0x13U))))))
						  : 
						 ((VL_ULL(0xfffffffffffff000) 
						   & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						      << 0xcU)) 
						  | (QData)((IData)(
								    (0xfffU 
								     & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
									>> 0x13U)))))))
					  : ((VL_ULL(0xfffffffffffff000) 
					      & (VL_NEGATE_Q((QData)((IData)(
									     (1U 
									      & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						 << 0xcU)) 
					     | (QData)((IData)(
							       (0xfffU 
								& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
								   >> 0x13U)))))))) 
				>> 0x20U));
	vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__shadowq[0U] 
	    = __Vtemp7[0U];
	vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__shadowq[1U] 
	    = __Vtemp7[1U];
	vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__shadowq[2U] 
	    = ((vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
		<< 1U) | (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[1U] 
			  >> 0x1fU));
	vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__shadowq[3U] 
	    = (IData)((VL_ULL(0xfffffffffffffffe) & 
		       (((QData)((IData)(vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[1U])) 
			 << 0x21U) | ((QData)((IData)(
						      vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[0U])) 
				      << 1U))));
	vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__shadowq[4U] 
	    = (IData)(((VL_ULL(0xfffffffffffffffe) 
			& (((QData)((IData)(vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[1U])) 
			    << 0x21U) | ((QData)((IData)(
							 vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[0U])) 
					 << 1U))) >> 0x20U));
    }
    // ALWAYS at rtl/fflop.v:97
    vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__shadowValid 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__c1) 
					 & (IData)(vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__c2)));
    // ALWAYS at rtl/fflop.v:91
    vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__c2 
	= ((IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__priv_qValidla2) 
	   | (IData)(vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__shadowValid));
}

void Vcore::_settle__TOP__19(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_settle__TOP__19\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->debug_pc_ex = (((QData)((IData)(vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
			    << 0x20U) | (QData)((IData)(
							vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U])));
    // ALWAYS at rtl/execute.v:182
    if (((((((((0x33U == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) 
	       | (0x13U == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) 
	      | (0x1bU == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) 
	     | (0x3bU == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) 
	    | (0x63U == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) 
	   | (0x67U == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) 
	  | (3U == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) 
	 | (0x23U == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])))) {
	if ((((0x1fU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
			 << 0x11U) | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
				      >> 0xfU))) == 
	      (0x1fU & ((vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U] 
			 << 0x1fU) | (vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U] 
				      >> 1U)))) & (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__priv_qValidla2))) {
	    vlTOPp->v__DOT__e__DOT__rs1_data = (((QData)((IData)(
								 vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[2U])) 
						 << 0x39U) 
						| (((QData)((IData)(
								    vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U])) 
						    << 0x19U) 
						   | ((QData)((IData)(
								      vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U])) 
						      >> 7U)));
	} else {
	    if ((((0x1fU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
			     << 0x11U) | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
					  >> 0xfU))) 
		  == (0x1fU & vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem1__q[2U])) 
		 & (IData)(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__priv_qValidla2))) {
		vlTOPp->v__DOT__e__DOT__rs1_data = 
		    (((QData)((IData)(vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem1__q[1U])) 
		      << 0x20U) | (QData)((IData)(vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem1__q[0U])));
	    } else {
		if ((((0x1fU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
				 << 0x11U) | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
					      >> 0xfU))) 
		      == (0x1fU & vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem2__q[2U])) 
		     & (IData)(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__priv_qValidla2))) {
		    vlTOPp->v__DOT__e__DOT__rs1_data 
			= (((QData)((IData)(vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem2__q[1U])) 
			    << 0x20U) | (QData)((IData)(
							vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem2__q[0U])));
		} else {
		    if (VL_LIKELY((((0x1fU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
					       << 0x11U) 
					      | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
						 >> 0xfU))) 
				    == (0x1fU & vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem3__q[2U])) 
				   & (IData)(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__priv_qValidla2)))) {
			vlTOPp->v__DOT__e__DOT__rs1_data 
			    = (((QData)((IData)(vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem3__q[1U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem3__q[0U])));
		    } else {
			VL_WRITEF("1NONE\n");
			vlTOPp->v__DOT__e__DOT__rs1_data 
			    = (((QData)((IData)(vlTOPp->v__DOT__d__DOT__r__DOT____Vcellout__data__q[3U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->v__DOT__d__DOT__r__DOT____Vcellout__data__q[2U])));
		    }
		}
	    }
	}
    }
    if (((((0x33U == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) 
	   | (0x3bU == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) 
	  | (0x63U == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) 
	 | (0x23U == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])))) {
	if ((((0x1fU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
			 << 0xcU) | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
				     >> 0x14U))) == 
	      (0x1fU & ((vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U] 
			 << 0x1fU) | (vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U] 
				      >> 1U)))) & (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__priv_qValidla2))) {
	    vlTOPp->v__DOT__e__DOT__rs2_data = (((QData)((IData)(
								 vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[2U])) 
						 << 0x39U) 
						| (((QData)((IData)(
								    vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U])) 
						    << 0x19U) 
						   | ((QData)((IData)(
								      vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U])) 
						      >> 7U)));
	} else {
	    if ((((0x1fU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
			     << 0xcU) | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
					 >> 0x14U))) 
		  == (0x1fU & vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem1__q[2U])) 
		 & (IData)(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__priv_qValidla2))) {
		vlTOPp->v__DOT__e__DOT__rs2_data = 
		    (((QData)((IData)(vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem1__q[1U])) 
		      << 0x20U) | (QData)((IData)(vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem1__q[0U])));
	    } else {
		if ((((0x1fU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
				 << 0xcU) | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
					     >> 0x14U))) 
		      == (0x1fU & vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem2__q[2U])) 
		     & (IData)(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__priv_qValidla2))) {
		    vlTOPp->v__DOT__e__DOT__rs2_data 
			= (((QData)((IData)(vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem2__q[1U])) 
			    << 0x20U) | (QData)((IData)(
							vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem2__q[0U])));
		} else {
		    if (VL_LIKELY((((0x1fU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
					       << 0xcU) 
					      | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
						 >> 0x14U))) 
				    == (0x1fU & vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem3__q[2U])) 
				   & (IData)(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__priv_qValidla2)))) {
			vlTOPp->v__DOT__e__DOT__rs2_data 
			    = (((QData)((IData)(vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem3__q[1U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem3__q[0U])));
		    } else {
			VL_WRITEF("2NONE\n");
			vlTOPp->v__DOT__e__DOT__rs2_data 
			    = (((QData)((IData)(vlTOPp->v__DOT__d__DOT__r__DOT____Vcellout__data__q[1U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->v__DOT__d__DOT__r__DOT____Vcellout__data__q[0U])));
		    }
		}
	    }
	}
    }
    vlTOPp->v__DOT__dest_clear = (1U & (((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__busy) 
					 & (3U == (0x7fU 
						   & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])))
					 ? 1U : 0U));
    // ALWAYS at rtl/fflop.v:90
    vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__c1 
	= ((IData)(vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__priv_qValidla2) 
	   & (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__priv_dinRetry));
    // ALWAYS at rtl/fflop.v:91
    vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__c2 
	= ((IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__priv_qValidla2) 
	   | (IData)(vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__shadowValid));
    // ALWAYS at rtl/fflop.v:73
}

VL_INLINE_OPT void Vcore::_multiclk__TOP__20(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_multiclk__TOP__20\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/execute.v:182
    if (((((((((0x33U == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) 
	       | (0x13U == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) 
	      | (0x1bU == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) 
	     | (0x3bU == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) 
	    | (0x63U == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) 
	   | (0x67U == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) 
	  | (3U == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) 
	 | (0x23U == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])))) {
	if ((((0x1fU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
			 << 0x11U) | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
				      >> 0xfU))) == 
	      (0x1fU & ((vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U] 
			 << 0x1fU) | (vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U] 
				      >> 1U)))) & (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__priv_qValidla2))) {
	    vlTOPp->v__DOT__e__DOT__rs1_data = (((QData)((IData)(
								 vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[2U])) 
						 << 0x39U) 
						| (((QData)((IData)(
								    vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U])) 
						    << 0x19U) 
						   | ((QData)((IData)(
								      vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U])) 
						      >> 7U)));
	} else {
	    if ((((0x1fU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
			     << 0x11U) | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
					  >> 0xfU))) 
		  == (0x1fU & vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem1__q[2U])) 
		 & (IData)(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__priv_qValidla2))) {
		vlTOPp->v__DOT__e__DOT__rs1_data = 
		    (((QData)((IData)(vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem1__q[1U])) 
		      << 0x20U) | (QData)((IData)(vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem1__q[0U])));
	    } else {
		if ((((0x1fU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
				 << 0x11U) | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
					      >> 0xfU))) 
		      == (0x1fU & vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem2__q[2U])) 
		     & (IData)(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__priv_qValidla2))) {
		    vlTOPp->v__DOT__e__DOT__rs1_data 
			= (((QData)((IData)(vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem2__q[1U])) 
			    << 0x20U) | (QData)((IData)(
							vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem2__q[0U])));
		} else {
		    if (VL_LIKELY((((0x1fU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
					       << 0x11U) 
					      | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
						 >> 0xfU))) 
				    == (0x1fU & vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem3__q[2U])) 
				   & (IData)(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__priv_qValidla2)))) {
			vlTOPp->v__DOT__e__DOT__rs1_data 
			    = (((QData)((IData)(vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem3__q[1U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem3__q[0U])));
		    } else {
			VL_WRITEF("1NONE\n");
			vlTOPp->v__DOT__e__DOT__rs1_data 
			    = (((QData)((IData)(vlTOPp->v__DOT__d__DOT__r__DOT____Vcellout__data__q[3U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->v__DOT__d__DOT__r__DOT____Vcellout__data__q[2U])));
		    }
		}
	    }
	}
    }
    if (((((0x33U == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) 
	   | (0x3bU == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) 
	  | (0x63U == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) 
	 | (0x23U == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])))) {
	if ((((0x1fU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
			 << 0xcU) | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
				     >> 0x14U))) == 
	      (0x1fU & ((vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U] 
			 << 0x1fU) | (vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U] 
				      >> 1U)))) & (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__priv_qValidla2))) {
	    vlTOPp->v__DOT__e__DOT__rs2_data = (((QData)((IData)(
								 vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[2U])) 
						 << 0x39U) 
						| (((QData)((IData)(
								    vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U])) 
						    << 0x19U) 
						   | ((QData)((IData)(
								      vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U])) 
						      >> 7U)));
	} else {
	    if ((((0x1fU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
			     << 0xcU) | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
					 >> 0x14U))) 
		  == (0x1fU & vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem1__q[2U])) 
		 & (IData)(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__priv_qValidla2))) {
		vlTOPp->v__DOT__e__DOT__rs2_data = 
		    (((QData)((IData)(vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem1__q[1U])) 
		      << 0x20U) | (QData)((IData)(vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem1__q[0U])));
	    } else {
		if ((((0x1fU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
				 << 0xcU) | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
					     >> 0x14U))) 
		      == (0x1fU & vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem2__q[2U])) 
		     & (IData)(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__priv_qValidla2))) {
		    vlTOPp->v__DOT__e__DOT__rs2_data 
			= (((QData)((IData)(vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem2__q[1U])) 
			    << 0x20U) | (QData)((IData)(
							vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem2__q[0U])));
		} else {
		    if (VL_LIKELY((((0x1fU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
					       << 0xcU) 
					      | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
						 >> 0x14U))) 
				    == (0x1fU & vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem3__q[2U])) 
				   & (IData)(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__priv_qValidla2)))) {
			vlTOPp->v__DOT__e__DOT__rs2_data 
			    = (((QData)((IData)(vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem3__q[1U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem3__q[0U])));
		    } else {
			VL_WRITEF("2NONE\n");
			vlTOPp->v__DOT__e__DOT__rs2_data 
			    = (((QData)((IData)(vlTOPp->v__DOT__d__DOT__r__DOT____Vcellout__data__q[1U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->v__DOT__d__DOT__r__DOT____Vcellout__data__q[0U])));
		    }
		}
	    }
	}
    }
    vlTOPp->v__DOT__dest_clear = (1U & (((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__busy) 
					 & (3U == (0x7fU 
						   & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])))
					 ? 1U : 0U));
}

VL_INLINE_OPT void Vcore::_sequent__TOP__21(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_sequent__TOP__21\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/fflop.v:150
    if (vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__q_enable) {
	vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[0U] 
	    = vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__shadowq[0U];
	vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[1U] 
	    = vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__shadowq[1U];
	vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
	    = vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__shadowq[2U];
    }
    // ALWAYS at rtl/fflop.v:139
    vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__q_enable 
	= (1U & (~ (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__c1)));
    // ALWAYS at rtl/decode.v:183
    vlTOPp->v__DOT__d__DOT__branchimm = ((0x1000U & 
					  (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
					   >> 0x12U)) 
					 | ((0x800U 
					     & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
						<< 5U)) 
					    | ((0x7e0U 
						& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
						   >> 0x13U)) 
					       | (0x1eU 
						  & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
						     >> 6U)))));
    // ALWAYS at rtl/decode.v:184
    vlTOPp->v__DOT__d__DOT__jalimm = ((0x100000U & 
				       (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
					>> 0xaU)) | 
				      ((0xff000U & 
					(vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
					 << 1U)) | 
				       ((0x800U & (
						   vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
						   >> 8U)) 
					| (0x7feU & 
					   (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
					    >> 0x13U)))));
    // ALWAYS at rtl/decode.v:186
    vlTOPp->v__DOT__d__DOT__stimm12 = ((0xfe0U & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
						  >> 0x13U)) 
				       | (0x1fU & (
						   vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
						   >> 6U)));
}

VL_INLINE_OPT void Vcore::_combo__TOP__22(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_combo__TOP__22\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/fflop.v:90
    vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__c1 
	= ((IData)(vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__priv_qValidla2) 
	   & (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__priv_dinRetry));
    // ALWAYS at rtl/fflop.v:73
    // ALWAYS at rtl/regfile.v:57
    vlTOPp->v__DOT__d__DOT__r__DOT__data1_next = vlTOPp->v__DOT__d__DOT__r__DOT__rf
	[(0x1fU & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
		   >> 0xeU))];
    vlTOPp->v__DOT__d__DOT__r__DOT__data2_next = vlTOPp->v__DOT__d__DOT__r__DOT__rf
	[(0x1fU & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
		   >> 0x13U))];
    if (vlTOPp->dcache_ack_valid) {
	if (((IData)(vlTOPp->dcache_ack_rd) == (0x1fU 
						& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
						   >> 0xeU)))) {
	    vlTOPp->v__DOT__d__DOT__r__DOT__data1_next 
		= vlTOPp->dcache_ack_data;
	}
	if (((IData)(vlTOPp->dcache_ack_rd) == (0x1fU 
						& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
						   >> 0x13U)))) {
	    vlTOPp->v__DOT__d__DOT__r__DOT__data2_next 
		= vlTOPp->dcache_ack_data;
	}
    }
    // ALWAYS at rtl/decode.v:70
    if ((3U == (0x7fU & ((vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
			  << 1U) | (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[1U] 
				    >> 0x1fU))))) {
	vlTOPp->v__DOT__d__DOT__load_next = (vlTOPp->v__DOT__d__DOT__load_next 
					     | ((IData)(1U) 
						<< 
						(0x1fU 
						 & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
						    >> 6U))));
    } else {
	if ((1U & (((vlTOPp->v__DOT__d__DOT__load >> 
		     (0x1fU & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
			       >> 6U))) | (vlTOPp->v__DOT__d__DOT__load 
					   >> (0x1fU 
					       & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
						  >> 0xeU)))) 
		   | (vlTOPp->v__DOT__d__DOT__load 
		      >> (0x1fU & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
				   >> 0x13U)))))) {
	    vlTOPp->v__DOT__d__DOT__f1_retry = 1U;
	    vlTOPp->v__DOT__d__DOT__load_valid_next = 0U;
	}
    }
    vlTOPp->v__DOT__decode_valid = ((IData)(vlTOPp->v__DOT__d__DOT__f1_retry)
				     ? (IData)(vlTOPp->v__DOT__d__DOT__load_valid)
				     : (IData)(vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__priv_qValidla2));
    if ((((IData)(vlTOPp->v__DOT__d__DOT__f1_retry) 
	  & (0U != vlTOPp->v__DOT__d__DOT__load)) & (IData)(vlTOPp->dcache_ack_valid))) {
	if ((1U & (vlTOPp->v__DOT__d__DOT__load >> (IData)(vlTOPp->dcache_ack_rd)))) {
	    vlTOPp->v__DOT__d__DOT__load_next = ((~ 
						  ((IData)(1U) 
						   << (IData)(vlTOPp->dcache_ack_rd))) 
						 & vlTOPp->v__DOT__d__DOT__load_next);
	    vlTOPp->v__DOT__d__DOT__f1_retry = 0U;
	}
    }
    if (vlTOPp->v__DOT__dest_clear) {
	vlTOPp->v__DOT__d__DOT__load_next = 0U;
	vlTOPp->v__DOT__d__DOT__f1_retry = 0U;
    }
}

VL_INLINE_OPT void Vcore::_sequent__TOP__23(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_sequent__TOP__23\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/fflop.v:129
    if ((1U & (~ (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__shadowValid)))) {
	vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__shadowq[0U] 
	    = (IData)(vlTOPp->v__DOT__f__DOT__pc_next);
	vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__shadowq[1U] 
	    = ((0x80000000U & (vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_next 
			       << 0x1fU)) | (IData)(
						    (vlTOPp->v__DOT__f__DOT__pc_next 
						     >> 0x20U)));
	vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__shadowq[2U] 
	    = (0x7fffffffU & (vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_next 
			      >> 1U));
    }
    // ALWAYS at rtl/fflop.v:97
    vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__shadowValid 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__c1) 
					 & (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__c2)));
}

void Vcore::_settle__TOP__24(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_settle__TOP__24\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/decode.v:183
    vlTOPp->v__DOT__d__DOT__branchimm = ((0x1000U & 
					  (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
					   >> 0x12U)) 
					 | ((0x800U 
					     & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
						<< 5U)) 
					    | ((0x7e0U 
						& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
						   >> 0x13U)) 
					       | (0x1eU 
						  & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
						     >> 6U)))));
    // ALWAYS at rtl/decode.v:184
    vlTOPp->v__DOT__d__DOT__jalimm = ((0x100000U & 
				       (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
					>> 0xaU)) | 
				      ((0xff000U & 
					(vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
					 << 1U)) | 
				       ((0x800U & (
						   vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
						   >> 8U)) 
					| (0x7feU & 
					   (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
					    >> 0x13U)))));
    // ALWAYS at rtl/decode.v:186
    vlTOPp->v__DOT__d__DOT__stimm12 = ((0xfe0U & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
						  >> 0x13U)) 
				       | (0x1fU & (
						   vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
						   >> 6U)));
    // ALWAYS at rtl/regfile.v:57
    vlTOPp->v__DOT__d__DOT__r__DOT__data1_next = vlTOPp->v__DOT__d__DOT__r__DOT__rf
	[(0x1fU & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
		   >> 0xeU))];
    vlTOPp->v__DOT__d__DOT__r__DOT__data2_next = vlTOPp->v__DOT__d__DOT__r__DOT__rf
	[(0x1fU & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
		   >> 0x13U))];
    if (vlTOPp->dcache_ack_valid) {
	if (((IData)(vlTOPp->dcache_ack_rd) == (0x1fU 
						& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
						   >> 0xeU)))) {
	    vlTOPp->v__DOT__d__DOT__r__DOT__data1_next 
		= vlTOPp->dcache_ack_data;
	}
	if (((IData)(vlTOPp->dcache_ack_rd) == (0x1fU 
						& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
						   >> 0x13U)))) {
	    vlTOPp->v__DOT__d__DOT__r__DOT__data2_next 
		= vlTOPp->dcache_ack_data;
	}
    }
    // ALWAYS at rtl/decode.v:70
    if ((3U == (0x7fU & ((vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
			  << 1U) | (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[1U] 
				    >> 0x1fU))))) {
	vlTOPp->v__DOT__d__DOT__load_next = (vlTOPp->v__DOT__d__DOT__load_next 
					     | ((IData)(1U) 
						<< 
						(0x1fU 
						 & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
						    >> 6U))));
    } else {
	if ((1U & (((vlTOPp->v__DOT__d__DOT__load >> 
		     (0x1fU & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
			       >> 6U))) | (vlTOPp->v__DOT__d__DOT__load 
					   >> (0x1fU 
					       & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
						  >> 0xeU)))) 
		   | (vlTOPp->v__DOT__d__DOT__load 
		      >> (0x1fU & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
				   >> 0x13U)))))) {
	    vlTOPp->v__DOT__d__DOT__f1_retry = 1U;
	    vlTOPp->v__DOT__d__DOT__load_valid_next = 0U;
	}
    }
    vlTOPp->v__DOT__decode_valid = ((IData)(vlTOPp->v__DOT__d__DOT__f1_retry)
				     ? (IData)(vlTOPp->v__DOT__d__DOT__load_valid)
				     : (IData)(vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__priv_qValidla2));
    if ((((IData)(vlTOPp->v__DOT__d__DOT__f1_retry) 
	  & (0U != vlTOPp->v__DOT__d__DOT__load)) & (IData)(vlTOPp->dcache_ack_valid))) {
	if ((1U & (vlTOPp->v__DOT__d__DOT__load >> (IData)(vlTOPp->dcache_ack_rd)))) {
	    vlTOPp->v__DOT__d__DOT__load_next = ((~ 
						  ((IData)(1U) 
						   << (IData)(vlTOPp->dcache_ack_rd))) 
						 & vlTOPp->v__DOT__d__DOT__load_next);
	    vlTOPp->v__DOT__d__DOT__f1_retry = 0U;
	}
    }
    if (vlTOPp->v__DOT__dest_clear) {
	vlTOPp->v__DOT__d__DOT__load_next = 0U;
	vlTOPp->v__DOT__d__DOT__f1_retry = 0U;
    }
    // ALWAYS at rtl/fflop.v:73
    vlTOPp->v__DOT__execute_retry = ((IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__shadowValid) 
				     | (IData)(vlTOPp->reset));
    // ALWAYS at rtl/alu.v:174
    if (((IData)(vlTOPp->v__DOT__decode_valid) & ((
						   ((QData)((IData)(
								    vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
						    << 0x20U) 
						   | (QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U]))) 
						  == vlTOPp->v__DOT__e__DOT__a__DOT__desired_pc))) {
	vlTOPp->v__DOT__e__DOT__a__DOT__desired_pc_next 
	    = (VL_ULL(4) + (((QData)((IData)(vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
			     << 0x20U) | (QData)((IData)(
							 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U]))));
	if ((0x33U == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) {
	    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 1U;
	    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 0U;
	    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 1U;
	    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
	    if ((0x80000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
		vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
		vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
		vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
		vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
	    } else {
		if ((0x40000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
		    if ((0x20000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
			vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
		    } else {
			if ((0x10000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
			    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
			} else {
			    if ((0x8000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
			    } else {
				if ((0x4000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				} else {
				    if ((0x2000000U 
					 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				    } else {
					if ((0x4000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							VL_SHIFTRS_QQI(64,64,6, vlTOPp->v__DOT__e__DOT__rs1_data, 
								       (0x3fU 
									& (IData)(vlTOPp->v__DOT__e__DOT__rs2_data)));
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						}
					    }
					} else {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							(vlTOPp->v__DOT__e__DOT__rs1_data 
							 - vlTOPp->v__DOT__e__DOT__rs2_data);
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x20000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
			vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
		    } else {
			if ((0x10000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
			    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
			} else {
			    if ((0x8000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
			    } else {
				if ((0x4000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				} else {
				    if ((0x2000000U 
					 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((0x4000U 
						& vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
					        ? (
						   (0x2000U 
						    & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						    ? 
						   ((0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						     ? 
						    (vlTOPp->v__DOT__e__DOT__rs1_data 
						     & vlTOPp->v__DOT__e__DOT__rs2_data)
						     : 
						    (vlTOPp->v__DOT__e__DOT__rs1_data 
						     | vlTOPp->v__DOT__e__DOT__rs2_data))
						    : 
						   ((0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						     ? 
						    (vlTOPp->v__DOT__e__DOT__rs1_data 
						     >> 
						     (0x3fU 
						      & (IData)(vlTOPp->v__DOT__e__DOT__rs2_data)))
						     : 
						    (vlTOPp->v__DOT__e__DOT__rs1_data 
						     ^ vlTOPp->v__DOT__e__DOT__rs2_data)))
					        : (
						   (0x2000U 
						    & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						    ? 
						   ((0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						     ? 
						    VL_NEGATE_Q((QData)((IData)(
										(vlTOPp->v__DOT__e__DOT__rs1_data 
										< vlTOPp->v__DOT__e__DOT__rs2_data))))
						     : 
						    VL_NEGATE_Q((QData)((IData)(
										VL_LTS_IQQ(1,64,64, vlTOPp->v__DOT__e__DOT__rs1_data, vlTOPp->v__DOT__e__DOT__rs2_data)))))
						    : 
						   ((0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						     ? 
						    (vlTOPp->v__DOT__e__DOT__rs1_data 
						     << 
						     (0x3fU 
						      & (IData)(vlTOPp->v__DOT__e__DOT__rs2_data)))
						     : 
						    (vlTOPp->v__DOT__e__DOT__rs1_data 
						     + vlTOPp->v__DOT__e__DOT__rs2_data))));
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if ((0x13U == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) {
		vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 1U;
		vlTOPp->dcache_req_valid = 0U;
		vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 1U;
		vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
		if ((0x80000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
		    if ((0x4000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
			if ((0x2000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
				= ((0x1000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
				    ? ((((QData)((IData)(
							 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
					 << 0x20U) 
					| (QData)((IData)(
							  vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
				       & vlTOPp->v__DOT__e__DOT__rs1_data)
				    : ((((QData)((IData)(
							 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
					 << 0x20U) 
					| (QData)((IData)(
							  vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
				       | vlTOPp->v__DOT__e__DOT__rs1_data));
			} else {
			    if ((0x1000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			    } else {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
				    = ((((QData)((IData)(
							 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
					 << 0x20U) 
					| (QData)((IData)(
							  vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
				       ^ vlTOPp->v__DOT__e__DOT__rs1_data);
			    }
			}
		    } else {
			if ((0x2000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
				= ((0x1000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
				    ? VL_NEGATE_Q((QData)((IData)(
								  ((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
								     << 0x20U) 
								    | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
								   > vlTOPp->v__DOT__e__DOT__rs1_data))))
				    : VL_NEGATE_Q((QData)((IData)(
								  VL_GTS_IQQ(1,64,64, 
									     (((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
									       << 0x20U) 
									      | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))), vlTOPp->v__DOT__e__DOT__rs1_data)))));
			} else {
			    if ((0x1000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			    } else {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
				    = ((((QData)((IData)(
							 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
					 << 0x20U) 
					| (QData)((IData)(
							  vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
				       + vlTOPp->v__DOT__e__DOT__rs1_data);
			    }
			}
		    }
		} else {
		    if ((0x40000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
			if ((0x20000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
			    if ((0x4000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				if ((0x2000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					= ((0x1000U 
					    & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
					    ? ((((QData)((IData)(
								 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						 << 0x20U) 
						| (QData)((IData)(
								  vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
					       & vlTOPp->v__DOT__e__DOT__rs1_data)
					    : ((((QData)((IData)(
								 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						 << 0x20U) 
						| (QData)((IData)(
								  vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
					       | vlTOPp->v__DOT__e__DOT__rs1_data));
				} else {
				    if ((0x1000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((((QData)((IData)(
								 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						 << 0x20U) 
						| (QData)((IData)(
								  vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
					       ^ vlTOPp->v__DOT__e__DOT__rs1_data);
				    }
				}
			    } else {
				if ((0x2000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					= ((0x1000U 
					    & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
					    ? VL_NEGATE_Q((QData)((IData)(
									  ((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
									     << 0x20U) 
									    | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
									   > vlTOPp->v__DOT__e__DOT__rs1_data))))
					    : VL_NEGATE_Q((QData)((IData)(
									  VL_GTS_IQQ(1,64,64, 
										(((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))), vlTOPp->v__DOT__e__DOT__rs1_data)))));
				} else {
				    if ((0x1000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((((QData)((IData)(
								 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						 << 0x20U) 
						| (QData)((IData)(
								  vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
					       + vlTOPp->v__DOT__e__DOT__rs1_data);
				    }
				}
			    }
			} else {
			    if ((0x10000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				if ((0x4000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    if ((0x2000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((0x1000U 
						& vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
					        ? (
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						   & vlTOPp->v__DOT__e__DOT__rs1_data)
					        : (
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						   | vlTOPp->v__DOT__e__DOT__rs1_data));
				    } else {
					if ((0x1000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						   ^ vlTOPp->v__DOT__e__DOT__rs1_data);
					}
				    }
				} else {
				    if ((0x2000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((0x1000U 
						& vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
					        ? VL_NEGATE_Q((QData)((IData)(
									      ((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
									       > vlTOPp->v__DOT__e__DOT__rs1_data))))
					        : VL_NEGATE_Q((QData)((IData)(
									      VL_GTS_IQQ(1,64,64, 
										(((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))), vlTOPp->v__DOT__e__DOT__rs1_data)))));
				    } else {
					if ((0x1000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						   + vlTOPp->v__DOT__e__DOT__rs1_data);
					}
				    }
				}
			    } else {
				if ((0x8000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    if ((0x4000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					if ((0x2000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (
						   (0x1000U 
						    & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						    ? 
						   ((((QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						      << 0x20U) 
						     | (QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						    & vlTOPp->v__DOT__e__DOT__rs1_data)
						    : 
						   ((((QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						      << 0x20U) 
						     | (QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						    | vlTOPp->v__DOT__e__DOT__rs1_data));
					} else {
					    if ((0x1000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    ((((QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						       << 0x20U) 
						      | (QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						     ^ vlTOPp->v__DOT__e__DOT__rs1_data);
					    }
					}
				    } else {
					if ((0x2000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (
						   (0x1000U 
						    & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						    ? 
						   VL_NEGATE_Q((QData)((IData)(
									       ((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
										> vlTOPp->v__DOT__e__DOT__rs1_data))))
						    : 
						   VL_NEGATE_Q((QData)((IData)(
									       VL_GTS_IQQ(1,64,64, 
										(((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))), vlTOPp->v__DOT__e__DOT__rs1_data)))));
					} else {
					    if ((0x1000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    ((((QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						       << 0x20U) 
						      | (QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						     + vlTOPp->v__DOT__e__DOT__rs1_data);
					    }
					}
				    }
				} else {
				    if ((0x4000000U 
					 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					if ((0x4000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    ((0x1000U 
						      & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						      ? 
						     ((((QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							<< 0x20U) 
						       | (QData)((IData)(
									 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						      & vlTOPp->v__DOT__e__DOT__rs1_data)
						      : 
						     ((((QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							<< 0x20U) 
						       | (QData)((IData)(
									 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						      | vlTOPp->v__DOT__e__DOT__rs1_data));
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							((((QData)((IData)(
									   vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							   << 0x20U) 
							  | (QData)((IData)(
									    vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
							 ^ vlTOPp->v__DOT__e__DOT__rs1_data);
						}
					    }
					} else {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    ((0x1000U 
						      & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						      ? 
						     VL_NEGATE_Q((QData)((IData)(
										((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
										> vlTOPp->v__DOT__e__DOT__rs1_data))))
						      : 
						     VL_NEGATE_Q((QData)((IData)(
										VL_GTS_IQQ(1,64,64, 
										(((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))), vlTOPp->v__DOT__e__DOT__rs1_data)))));
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							((((QData)((IData)(
									   vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							   << 0x20U) 
							  | (QData)((IData)(
									    vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
							 + vlTOPp->v__DOT__e__DOT__rs1_data);
						}
					    }
					}
				    } else {
					if ((0x4000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (
						   (0x2000U 
						    & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						    ? 
						   ((0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						     ? 
						    ((((QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						       << 0x20U) 
						      | (QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						     & vlTOPp->v__DOT__e__DOT__rs1_data)
						     : 
						    ((((QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						       << 0x20U) 
						      | (QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						     | vlTOPp->v__DOT__e__DOT__rs1_data))
						    : 
						   ((0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						     ? 
						    VL_SHIFTRS_QQI(64,64,6, vlTOPp->v__DOT__e__DOT__rs1_data, 
								   (0x3fU 
								    & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
									<< 0xcU) 
								       | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
									  >> 0x14U))))
						     : 
						    ((((QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						       << 0x20U) 
						      | (QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						     ^ vlTOPp->v__DOT__e__DOT__rs1_data)));
					} else {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    ((0x1000U 
						      & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						      ? 
						     VL_NEGATE_Q((QData)((IData)(
										((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
										> vlTOPp->v__DOT__e__DOT__rs1_data))))
						      : 
						     VL_NEGATE_Q((QData)((IData)(
										VL_GTS_IQQ(1,64,64, 
										(((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))), vlTOPp->v__DOT__e__DOT__rs1_data)))));
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							((((QData)((IData)(
									   vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							   << 0x20U) 
							  | (QData)((IData)(
									    vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
							 + vlTOPp->v__DOT__e__DOT__rs1_data);
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if ((0x20000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
			    if ((0x4000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				if ((0x2000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					= ((0x1000U 
					    & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
					    ? ((((QData)((IData)(
								 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						 << 0x20U) 
						| (QData)((IData)(
								  vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
					       & vlTOPp->v__DOT__e__DOT__rs1_data)
					    : ((((QData)((IData)(
								 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						 << 0x20U) 
						| (QData)((IData)(
								  vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
					       | vlTOPp->v__DOT__e__DOT__rs1_data));
				} else {
				    if ((0x1000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((((QData)((IData)(
								 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						 << 0x20U) 
						| (QData)((IData)(
								  vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
					       ^ vlTOPp->v__DOT__e__DOT__rs1_data);
				    }
				}
			    } else {
				if ((0x2000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					= ((0x1000U 
					    & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
					    ? VL_NEGATE_Q((QData)((IData)(
									  ((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
									     << 0x20U) 
									    | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
									   > vlTOPp->v__DOT__e__DOT__rs1_data))))
					    : VL_NEGATE_Q((QData)((IData)(
									  VL_GTS_IQQ(1,64,64, 
										(((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))), vlTOPp->v__DOT__e__DOT__rs1_data)))));
				} else {
				    if ((0x1000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((((QData)((IData)(
								 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						 << 0x20U) 
						| (QData)((IData)(
								  vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
					       + vlTOPp->v__DOT__e__DOT__rs1_data);
				    }
				}
			    }
			} else {
			    if ((0x10000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				if ((0x4000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    if ((0x2000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((0x1000U 
						& vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
					        ? (
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						   & vlTOPp->v__DOT__e__DOT__rs1_data)
					        : (
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						   | vlTOPp->v__DOT__e__DOT__rs1_data));
				    } else {
					if ((0x1000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						   ^ vlTOPp->v__DOT__e__DOT__rs1_data);
					}
				    }
				} else {
				    if ((0x2000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((0x1000U 
						& vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
					        ? VL_NEGATE_Q((QData)((IData)(
									      ((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
									       > vlTOPp->v__DOT__e__DOT__rs1_data))))
					        : VL_NEGATE_Q((QData)((IData)(
									      VL_GTS_IQQ(1,64,64, 
										(((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))), vlTOPp->v__DOT__e__DOT__rs1_data)))));
				    } else {
					if ((0x1000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						   + vlTOPp->v__DOT__e__DOT__rs1_data);
					}
				    }
				}
			    } else {
				if ((0x8000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    if ((0x4000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					if ((0x2000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (
						   (0x1000U 
						    & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						    ? 
						   ((((QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						      << 0x20U) 
						     | (QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						    & vlTOPp->v__DOT__e__DOT__rs1_data)
						    : 
						   ((((QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						      << 0x20U) 
						     | (QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						    | vlTOPp->v__DOT__e__DOT__rs1_data));
					} else {
					    if ((0x1000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    ((((QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						       << 0x20U) 
						      | (QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						     ^ vlTOPp->v__DOT__e__DOT__rs1_data);
					    }
					}
				    } else {
					if ((0x2000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (
						   (0x1000U 
						    & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						    ? 
						   VL_NEGATE_Q((QData)((IData)(
									       ((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
										> vlTOPp->v__DOT__e__DOT__rs1_data))))
						    : 
						   VL_NEGATE_Q((QData)((IData)(
									       VL_GTS_IQQ(1,64,64, 
										(((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))), vlTOPp->v__DOT__e__DOT__rs1_data)))));
					} else {
					    if ((0x1000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    ((((QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						       << 0x20U) 
						      | (QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						     + vlTOPp->v__DOT__e__DOT__rs1_data);
					    }
					}
				    }
				} else {
				    if ((0x4000000U 
					 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					if ((0x4000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    ((0x1000U 
						      & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						      ? 
						     ((((QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							<< 0x20U) 
						       | (QData)((IData)(
									 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						      & vlTOPp->v__DOT__e__DOT__rs1_data)
						      : 
						     ((((QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							<< 0x20U) 
						       | (QData)((IData)(
									 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						      | vlTOPp->v__DOT__e__DOT__rs1_data));
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							((((QData)((IData)(
									   vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							   << 0x20U) 
							  | (QData)((IData)(
									    vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
							 ^ vlTOPp->v__DOT__e__DOT__rs1_data);
						}
					    }
					} else {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    ((0x1000U 
						      & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						      ? 
						     VL_NEGATE_Q((QData)((IData)(
										((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
										> vlTOPp->v__DOT__e__DOT__rs1_data))))
						      : 
						     VL_NEGATE_Q((QData)((IData)(
										VL_GTS_IQQ(1,64,64, 
										(((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))), vlTOPp->v__DOT__e__DOT__rs1_data)))));
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							((((QData)((IData)(
									   vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							   << 0x20U) 
							  | (QData)((IData)(
									    vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
							 + vlTOPp->v__DOT__e__DOT__rs1_data);
						}
					    }
					}
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((0x4000U 
						& vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
					        ? (
						   (0x2000U 
						    & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						    ? 
						   ((0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						     ? 
						    ((((QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						       << 0x20U) 
						      | (QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						     & vlTOPp->v__DOT__e__DOT__rs1_data)
						     : 
						    ((((QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						       << 0x20U) 
						      | (QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						     | vlTOPp->v__DOT__e__DOT__rs1_data))
						    : 
						   ((0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						     ? 
						    (vlTOPp->v__DOT__e__DOT__rs1_data 
						     >> 
						     (0x3fU 
						      & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
							  << 0xcU) 
							 | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
							    >> 0x14U))))
						     : 
						    ((((QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						       << 0x20U) 
						      | (QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						     ^ vlTOPp->v__DOT__e__DOT__rs1_data)))
					        : (
						   (0x2000U 
						    & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						    ? 
						   ((0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						     ? 
						    VL_NEGATE_Q((QData)((IData)(
										((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
										> vlTOPp->v__DOT__e__DOT__rs1_data))))
						     : 
						    VL_NEGATE_Q((QData)((IData)(
										VL_GTS_IQQ(1,64,64, 
										(((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))), vlTOPp->v__DOT__e__DOT__rs1_data)))))
						    : 
						   ((0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						     ? 
						    (vlTOPp->v__DOT__e__DOT__rs1_data 
						     << 
						     (0x3fU 
						      & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
							  << 0xcU) 
							 | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
							    >> 0x14U))))
						     : 
						    ((((QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						       << 0x20U) 
						      | (QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						     + vlTOPp->v__DOT__e__DOT__rs1_data))));
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((0x17U == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) {
		    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
		    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 0U;
		    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 1U;
		    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 1U;
		    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
			= ((((QData)((IData)(vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
			     << 0x20U) | (QData)((IData)(
							 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
			   + (((QData)((IData)(vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
			       << 0x20U) | (QData)((IData)(
							   vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U]))));
		} else {
		    if ((0x1bU == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) {
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 1U;
			vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 0U;
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
			vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
			if ((0x80000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
			    if ((0x4000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			    } else {
				if ((0x2000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				} else {
				    if ((0x1000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = (vlTOPp->v__DOT__e__DOT__rs1_data 
					       + (((QData)((IData)(
								   vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						   << 0x20U) 
						  | (QData)((IData)(
								    vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
				    }
				}
			    }
			} else {
			    if ((0x40000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				if ((0x20000000U & 
				     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    if ((0x4000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					if ((0x2000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    if ((0x1000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    (vlTOPp->v__DOT__e__DOT__rs1_data 
						     + 
						     (((QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						       << 0x20U) 
						      | (QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
					    }
					}
				    }
				} else {
				    if ((0x10000000U 
					 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					if ((0x4000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							(vlTOPp->v__DOT__e__DOT__rs1_data 
							 + 
							 (((QData)((IData)(
									   vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							   << 0x20U) 
							  | (QData)((IData)(
									    vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
						}
					    }
					}
				    } else {
					if ((0x8000000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    if ((0x4000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						if (
						    (0x2000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    if (
							(0x1000U 
							 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							    = 
							    (vlTOPp->v__DOT__e__DOT__rs1_data 
							     + 
							     (((QData)((IData)(
									       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							       << 0x20U) 
							      | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
						    }
						}
					    }
					} else {
					    if ((0x4000000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						if (
						    (0x4000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    if (
							(0x2000U 
							 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							if (
							    (0x1000U 
							     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								= 
								(vlTOPp->v__DOT__e__DOT__rs1_data 
								 + 
								 (((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
								   << 0x20U) 
								  | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
							}
						    }
						}
					    } else {
						if (
						    (0x2000000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    if (
							(0x4000U 
							 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							if (
							    (0x2000U 
							     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    if (
								(0x1000U 
								 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    } else {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								    = 
								    (vlTOPp->v__DOT__e__DOT__rs1_data 
								     + 
								     (((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
								       << 0x20U) 
								      | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
							    }
							}
						    }
						} else {
						    if (
							(0x4000U 
							 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							if (
							    (0x2000U 
							     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    if (
								(0x1000U 
								 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								    = 
								    VL_SHIFTRS_QQI(64,64,5, vlTOPp->v__DOT__e__DOT__rs1_data, 
										(0x1fU 
										& ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
										<< 0xcU) 
										| (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
										>> 0x14U))));
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
							     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    if (
								(0x1000U 
								 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    } else {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								    = 
								    (vlTOPp->v__DOT__e__DOT__rs1_data 
								     + 
								     (((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
								       << 0x20U) 
								      | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
							    }
							}
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if ((0x20000000U & 
				     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    if ((0x4000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					if ((0x2000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    if ((0x1000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    (vlTOPp->v__DOT__e__DOT__rs1_data 
						     + 
						     (((QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						       << 0x20U) 
						      | (QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
					    }
					}
				    }
				} else {
				    if ((0x10000000U 
					 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					if ((0x4000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							(vlTOPp->v__DOT__e__DOT__rs1_data 
							 + 
							 (((QData)((IData)(
									   vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							   << 0x20U) 
							  | (QData)((IData)(
									    vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
						}
					    }
					}
				    } else {
					if ((0x8000000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    if ((0x4000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						if (
						    (0x2000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    if (
							(0x1000U 
							 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							    = 
							    (vlTOPp->v__DOT__e__DOT__rs1_data 
							     + 
							     (((QData)((IData)(
									       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							       << 0x20U) 
							      | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
						    }
						}
					    }
					} else {
					    if ((0x4000000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						if (
						    (0x4000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    if (
							(0x2000U 
							 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							if (
							    (0x1000U 
							     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								= 
								(vlTOPp->v__DOT__e__DOT__rs1_data 
								 + 
								 (((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
								   << 0x20U) 
								  | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
							}
						    }
						}
					    } else {
						if (
						    (0x2000000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    if (
							(0x4000U 
							 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							if (
							    (0x2000U 
							     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    if (
								(0x1000U 
								 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    } else {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								    = 
								    (vlTOPp->v__DOT__e__DOT__rs1_data 
								     + 
								     (((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
								       << 0x20U) 
								      | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
							    }
							}
						    }
						} else {
						    if (
							(0x4000U 
							 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							if (
							    (0x2000U 
							     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    if (
								(0x1000U 
								 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								    = 
								    (vlTOPp->v__DOT__e__DOT__rs1_data 
								     >> 
								     (0x1fU 
								      & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
									  << 0xcU) 
									 | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
									    >> 0x14U))));
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
							     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								= 
								((0x1000U 
								  & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
								  ? 
								 (vlTOPp->v__DOT__e__DOT__rs1_data 
								  << 
								  (0x1fU 
								   & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
								       << 0xcU) 
								      | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
									 >> 0x14U))))
								  : 
								 (vlTOPp->v__DOT__e__DOT__rs1_data 
								  + 
								  (((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
								    << 0x20U) 
								   | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U])))));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
			    = (VL_ULL(0xffffffff) & vlTOPp->v__DOT__e__DOT__a__DOT__dest_next);
		    } else {
			if ((0x3bU == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) {
			    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 0U;
			    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 1U;
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
			    if ((0x80000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			    } else {
				if ((0x40000000U & 
				     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    if ((0x20000000U 
					 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					if ((0x10000000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    if ((0x8000000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						if (
						    (0x4000000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    if (
							(0x2000000U 
							 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							if (
							    (0x4000U 
							     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							    if (
								(0x2000U 
								 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    } else {
								if (
								    (0x1000U 
								     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
									= 
									VL_SHIFTRS_QQI(64,64,5, vlTOPp->v__DOT__e__DOT__rs1_data, 
										(0x1fU 
										& (IData)(vlTOPp->v__DOT__e__DOT__rs2_data)));
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
								 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    } else {
								if (
								    (0x1000U 
								     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
								    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
								} else {
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
									= 
									(vlTOPp->v__DOT__e__DOT__rs1_data 
									 - vlTOPp->v__DOT__e__DOT__rs2_data);
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
					 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					if ((0x10000000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    if ((0x8000000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						if (
						    (0x4000000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    if (
							(0x2000000U 
							 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							if (
							    (0x4000U 
							     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							    if (
								(0x2000U 
								 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    } else {
								if (
								    (0x1000U 
								     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
									= 
									(vlTOPp->v__DOT__e__DOT__rs1_data 
									 >> 
									 (0x1fU 
									  & (IData)(vlTOPp->v__DOT__e__DOT__rs2_data)));
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
								 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    } else {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								    = 
								    ((0x1000U 
								      & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
								      ? 
								     (vlTOPp->v__DOT__e__DOT__rs1_data 
								      << 
								      (0x1fU 
								       & (IData)(vlTOPp->v__DOT__e__DOT__rs2_data)))
								      : 
								     (vlTOPp->v__DOT__e__DOT__rs1_data 
								      + vlTOPp->v__DOT__e__DOT__rs2_data));
							    }
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
				= (VL_ULL(0xffffffff) 
				   & vlTOPp->v__DOT__e__DOT__a__DOT__dest_next);
			} else {
			    if ((0x63U == (0x7fU & 
					   vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) {
				vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				if ((0x4000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    if ((0x2000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					if ((0x1000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next 
						= (vlTOPp->v__DOT__e__DOT__rs1_data 
						   >= vlTOPp->v__DOT__e__DOT__rs2_data);
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
						= (
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U]))) 
						   + 
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
					} else {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next 
						= (vlTOPp->v__DOT__e__DOT__rs1_data 
						   < vlTOPp->v__DOT__e__DOT__rs2_data);
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
						= (
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U]))) 
						   + 
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
					}
				    } else {
					if ((0x1000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next 
						= VL_GTES_IQQ(1,64,64, vlTOPp->v__DOT__e__DOT__rs1_data, vlTOPp->v__DOT__e__DOT__rs2_data);
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
						= (
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U]))) 
						   + 
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
					} else {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next 
						= VL_LTS_IQQ(1,64,64, vlTOPp->v__DOT__e__DOT__rs1_data, vlTOPp->v__DOT__e__DOT__rs2_data);
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
						= (
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U]))) 
						   + 
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
					}
				    }
				} else {
				    if ((0x2000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next = VL_ULL(0);
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				    } else {
					if ((0x1000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next 
						= (vlTOPp->v__DOT__e__DOT__rs1_data 
						   != vlTOPp->v__DOT__e__DOT__rs2_data);
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
						= (
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U]))) 
						   + 
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
					} else {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next 
						= (vlTOPp->v__DOT__e__DOT__rs1_data 
						   == vlTOPp->v__DOT__e__DOT__rs2_data);
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
						= (
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U]))) 
						   + 
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
					}
				    }
				}
				if (vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__desired_pc_next 
					= vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next;
				}
				vlTOPp->v__DOT__e__DOT__a__DOT__busy_next 
				    = vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next;
			    } else {
				if ((0x6fU == (0x7fU 
					       & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
					= ((((QData)((IData)(
							     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
					     << 0x20U) 
					    | (QData)((IData)(
							      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U]))) 
					   + (((QData)((IData)(
							       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
					       << 0x20U) 
					      | (QData)((IData)(
								vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 1U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					= (VL_ULL(4) 
					   + (((QData)((IData)(
							       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
					       << 0x20U) 
					      | (QData)((IData)(
								vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U]))));
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 1U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 1U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__desired_pc_next 
					= vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next;
				    vlTOPp->v__DOT__e__DOT__a__DOT__busy_next = 1U;
				} else {
				    if ((0x67U == (0x7fU 
						   & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) {
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
					    = ((((QData)((IData)(
								 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						 << 0x20U) 
						| (QData)((IData)(
								  vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
					       + vlTOPp->v__DOT__e__DOT__rs1_data);
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 1U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = (VL_ULL(4) 
					       + (((QData)((IData)(
								   vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
						   << 0x20U) 
						  | (QData)((IData)(
								    vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U]))));
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 1U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 1U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
					    = (VL_ULL(0xfffffffffffffffe) 
					       & vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next);
					vlTOPp->v__DOT__e__DOT__a__DOT__busy_next 
					    = vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__priv_qValidla2;
					vlTOPp->v__DOT__e__DOT__a__DOT__desired_pc_next 
					    = vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next;
				    } else {
					if ((3U == 
					     (0x7fU 
					      & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) {
					    if ((0x4000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						if (
						    (0x2000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    if (
							(0x1000U 
							 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    } else {
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next 
							    = 
							    ((((QData)((IData)(
									       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							       << 0x20U) 
							      | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
							     + vlTOPp->v__DOT__e__DOT__rs1_data);
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_op_next = 6U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_rd_next 
							    = 
							    (0x1fU 
							     & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
								 << 0x19U) 
								| (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
								   >> 7U)));
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 1U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    }
						} else {
						    if (
							(0x1000U 
							 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next 
							    = 
							    ((((QData)((IData)(
									       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							       << 0x20U) 
							      | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
							     + vlTOPp->v__DOT__e__DOT__rs1_data);
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_op_next = 5U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_rd_next 
							    = 
							    (0x1fU 
							     & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
								 << 0x19U) 
								| (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
								   >> 7U)));
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 1U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    } else {
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next 
							    = 
							    ((((QData)((IData)(
									       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							       << 0x20U) 
							      | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
							     + vlTOPp->v__DOT__e__DOT__rs1_data);
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_op_next = 4U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_rd_next 
							    = 
							    (0x1fU 
							     & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
								 << 0x19U) 
								| (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
								   >> 7U)));
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 1U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    }
						}
					    } else {
						if (
						    (0x2000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    if (VL_UNLIKELY(
								    (0x1000U 
								     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) {
							VL_WRITEF("LOAD DESTR = %2u\n",
								  5,
								  (0x1fU 
								   & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
								       << 0x19U) 
								      | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
									 >> 7U))));
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next 
							    = 
							    ((((QData)((IData)(
									       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							       << 0x20U) 
							      | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
							     + vlTOPp->v__DOT__e__DOT__rs1_data);
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_op_next = 3U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_rd_next 
							    = 
							    (0x1fU 
							     & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
								 << 0x19U) 
								| (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
								   >> 7U)));
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 1U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    } else {
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next 
							    = 
							    ((((QData)((IData)(
									       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							       << 0x20U) 
							      | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
							     + vlTOPp->v__DOT__e__DOT__rs1_data);
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_op_next = 2U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_rd_next 
							    = 
							    (0x1fU 
							     & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
								 << 0x19U) 
								| (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
								   >> 7U)));
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 1U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    }
						} else {
						    if (
							(0x1000U 
							 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next 
							    = 
							    ((((QData)((IData)(
									       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							       << 0x20U) 
							      | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
							     + vlTOPp->v__DOT__e__DOT__rs1_data);
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_op_next = 1U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_rd_next 
							    = 
							    (0x1fU 
							     & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
								 << 0x19U) 
								| (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
								   >> 7U)));
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 1U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    } else {
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next 
							    = 
							    ((((QData)((IData)(
									       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							       << 0x20U) 
							      | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
							     + vlTOPp->v__DOT__e__DOT__rs1_data);
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_op_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_rd_next 
							    = 
							    (0x1fU 
							     & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
								 << 0x19U) 
								| (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
								   >> 7U)));
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 1U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    }
						}
					    }
					} else {
					    if ((0x23U 
						 == 
						 (0x7fU 
						  & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) {
						if (
						    (0x4000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						} else {
						    if (
							(0x2000U 
							 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							if (
							    (0x1000U 
							     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next 
								= 
								((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
								   << 0x20U) 
								  | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
								 + vlTOPp->v__DOT__e__DOT__rs1_data);
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_op_next = 0xbU;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_data_next 
								= vlTOPp->v__DOT__e__DOT__rs2_data;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 1U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							} else {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next 
								= 
								((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
								   << 0x20U) 
								  | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
								 + vlTOPp->v__DOT__e__DOT__rs1_data);
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_op_next = 0xaU;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_data_next 
								= vlTOPp->v__DOT__e__DOT__rs2_data;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 1U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							}
						    } else {
							if (
							    (0x1000U 
							     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next 
								= 
								((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
								   << 0x20U) 
								  | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
								 + vlTOPp->v__DOT__e__DOT__rs1_data);
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_op_next = 9U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_data_next 
								= vlTOPp->v__DOT__e__DOT__rs2_data;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 1U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							} else {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next 
								= 
								((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
								   << 0x20U) 
								  | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
								 + vlTOPp->v__DOT__e__DOT__rs1_data);
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_op_next = 8U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_data_next 
								= vlTOPp->v__DOT__e__DOT__rs2_data;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 1U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							}
						    }
						}
					    } else {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 0U;
					    }
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
	vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
	vlTOPp->v__DOT__e__DOT__a__DOT__dest_clear_next = 0U;
	vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
	vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 0U;
    }
    VL_WRITEF("dest_valid = %1u, dest_data = %20u, dest_rd = %2u\n",
	      1,vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next,
	      64,vlTOPp->v__DOT__e__DOT__a__DOT__dest_next,
	      5,(0x1fU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
			   << 0x19U) | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
					>> 7U))));
    // ALWAYS at rtl/decode.v:98
    if ((0U != vlTOPp->v__DOT__d__DOT__load)) {
	vlTOPp->v__DOT__fetch_retry = vlTOPp->v__DOT__d__DOT__f1_retry;
    } else {
	vlTOPp->v__DOT__fetch_retry = vlTOPp->v__DOT__d__DOT__f_retry;
	vlTOPp->v__DOT__d__DOT__load_valid_next = 1U;
    }
}

VL_INLINE_OPT void Vcore::_combo__TOP__25(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_combo__TOP__25\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/fflop.v:73
    vlTOPp->v__DOT__execute_retry = ((IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__shadowValid) 
				     | (IData)(vlTOPp->reset));
    // ALWAYS at rtl/alu.v:174
    if (((IData)(vlTOPp->v__DOT__decode_valid) & ((
						   ((QData)((IData)(
								    vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
						    << 0x20U) 
						   | (QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U]))) 
						  == vlTOPp->v__DOT__e__DOT__a__DOT__desired_pc))) {
	vlTOPp->v__DOT__e__DOT__a__DOT__desired_pc_next 
	    = (VL_ULL(4) + (((QData)((IData)(vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
			     << 0x20U) | (QData)((IData)(
							 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U]))));
	if ((0x33U == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) {
	    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 1U;
	    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 0U;
	    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 1U;
	    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
	    if ((0x80000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
		vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
		vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
		vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
		vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
	    } else {
		if ((0x40000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
		    if ((0x20000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
			vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
		    } else {
			if ((0x10000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
			    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
			} else {
			    if ((0x8000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
			    } else {
				if ((0x4000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				} else {
				    if ((0x2000000U 
					 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				    } else {
					if ((0x4000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							VL_SHIFTRS_QQI(64,64,6, vlTOPp->v__DOT__e__DOT__rs1_data, 
								       (0x3fU 
									& (IData)(vlTOPp->v__DOT__e__DOT__rs2_data)));
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						}
					    }
					} else {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							(vlTOPp->v__DOT__e__DOT__rs1_data 
							 - vlTOPp->v__DOT__e__DOT__rs2_data);
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x20000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
			vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
		    } else {
			if ((0x10000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
			    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
			} else {
			    if ((0x8000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
			    } else {
				if ((0x4000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				} else {
				    if ((0x2000000U 
					 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((0x4000U 
						& vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
					        ? (
						   (0x2000U 
						    & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						    ? 
						   ((0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						     ? 
						    (vlTOPp->v__DOT__e__DOT__rs1_data 
						     & vlTOPp->v__DOT__e__DOT__rs2_data)
						     : 
						    (vlTOPp->v__DOT__e__DOT__rs1_data 
						     | vlTOPp->v__DOT__e__DOT__rs2_data))
						    : 
						   ((0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						     ? 
						    (vlTOPp->v__DOT__e__DOT__rs1_data 
						     >> 
						     (0x3fU 
						      & (IData)(vlTOPp->v__DOT__e__DOT__rs2_data)))
						     : 
						    (vlTOPp->v__DOT__e__DOT__rs1_data 
						     ^ vlTOPp->v__DOT__e__DOT__rs2_data)))
					        : (
						   (0x2000U 
						    & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						    ? 
						   ((0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						     ? 
						    VL_NEGATE_Q((QData)((IData)(
										(vlTOPp->v__DOT__e__DOT__rs1_data 
										< vlTOPp->v__DOT__e__DOT__rs2_data))))
						     : 
						    VL_NEGATE_Q((QData)((IData)(
										VL_LTS_IQQ(1,64,64, vlTOPp->v__DOT__e__DOT__rs1_data, vlTOPp->v__DOT__e__DOT__rs2_data)))))
						    : 
						   ((0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						     ? 
						    (vlTOPp->v__DOT__e__DOT__rs1_data 
						     << 
						     (0x3fU 
						      & (IData)(vlTOPp->v__DOT__e__DOT__rs2_data)))
						     : 
						    (vlTOPp->v__DOT__e__DOT__rs1_data 
						     + vlTOPp->v__DOT__e__DOT__rs2_data))));
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if ((0x13U == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) {
		vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 1U;
		vlTOPp->dcache_req_valid = 0U;
		vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 1U;
		vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
		if ((0x80000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
		    if ((0x4000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
			if ((0x2000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
				= ((0x1000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
				    ? ((((QData)((IData)(
							 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
					 << 0x20U) 
					| (QData)((IData)(
							  vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
				       & vlTOPp->v__DOT__e__DOT__rs1_data)
				    : ((((QData)((IData)(
							 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
					 << 0x20U) 
					| (QData)((IData)(
							  vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
				       | vlTOPp->v__DOT__e__DOT__rs1_data));
			} else {
			    if ((0x1000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			    } else {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
				    = ((((QData)((IData)(
							 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
					 << 0x20U) 
					| (QData)((IData)(
							  vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
				       ^ vlTOPp->v__DOT__e__DOT__rs1_data);
			    }
			}
		    } else {
			if ((0x2000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
				= ((0x1000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
				    ? VL_NEGATE_Q((QData)((IData)(
								  ((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
								     << 0x20U) 
								    | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
								   > vlTOPp->v__DOT__e__DOT__rs1_data))))
				    : VL_NEGATE_Q((QData)((IData)(
								  VL_GTS_IQQ(1,64,64, 
									     (((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
									       << 0x20U) 
									      | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))), vlTOPp->v__DOT__e__DOT__rs1_data)))));
			} else {
			    if ((0x1000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			    } else {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
				    = ((((QData)((IData)(
							 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
					 << 0x20U) 
					| (QData)((IData)(
							  vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
				       + vlTOPp->v__DOT__e__DOT__rs1_data);
			    }
			}
		    }
		} else {
		    if ((0x40000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
			if ((0x20000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
			    if ((0x4000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				if ((0x2000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					= ((0x1000U 
					    & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
					    ? ((((QData)((IData)(
								 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						 << 0x20U) 
						| (QData)((IData)(
								  vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
					       & vlTOPp->v__DOT__e__DOT__rs1_data)
					    : ((((QData)((IData)(
								 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						 << 0x20U) 
						| (QData)((IData)(
								  vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
					       | vlTOPp->v__DOT__e__DOT__rs1_data));
				} else {
				    if ((0x1000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((((QData)((IData)(
								 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						 << 0x20U) 
						| (QData)((IData)(
								  vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
					       ^ vlTOPp->v__DOT__e__DOT__rs1_data);
				    }
				}
			    } else {
				if ((0x2000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					= ((0x1000U 
					    & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
					    ? VL_NEGATE_Q((QData)((IData)(
									  ((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
									     << 0x20U) 
									    | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
									   > vlTOPp->v__DOT__e__DOT__rs1_data))))
					    : VL_NEGATE_Q((QData)((IData)(
									  VL_GTS_IQQ(1,64,64, 
										(((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))), vlTOPp->v__DOT__e__DOT__rs1_data)))));
				} else {
				    if ((0x1000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((((QData)((IData)(
								 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						 << 0x20U) 
						| (QData)((IData)(
								  vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
					       + vlTOPp->v__DOT__e__DOT__rs1_data);
				    }
				}
			    }
			} else {
			    if ((0x10000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				if ((0x4000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    if ((0x2000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((0x1000U 
						& vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
					        ? (
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						   & vlTOPp->v__DOT__e__DOT__rs1_data)
					        : (
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						   | vlTOPp->v__DOT__e__DOT__rs1_data));
				    } else {
					if ((0x1000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						   ^ vlTOPp->v__DOT__e__DOT__rs1_data);
					}
				    }
				} else {
				    if ((0x2000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((0x1000U 
						& vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
					        ? VL_NEGATE_Q((QData)((IData)(
									      ((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
									       > vlTOPp->v__DOT__e__DOT__rs1_data))))
					        : VL_NEGATE_Q((QData)((IData)(
									      VL_GTS_IQQ(1,64,64, 
										(((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))), vlTOPp->v__DOT__e__DOT__rs1_data)))));
				    } else {
					if ((0x1000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						   + vlTOPp->v__DOT__e__DOT__rs1_data);
					}
				    }
				}
			    } else {
				if ((0x8000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    if ((0x4000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					if ((0x2000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (
						   (0x1000U 
						    & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						    ? 
						   ((((QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						      << 0x20U) 
						     | (QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						    & vlTOPp->v__DOT__e__DOT__rs1_data)
						    : 
						   ((((QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						      << 0x20U) 
						     | (QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						    | vlTOPp->v__DOT__e__DOT__rs1_data));
					} else {
					    if ((0x1000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    ((((QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						       << 0x20U) 
						      | (QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						     ^ vlTOPp->v__DOT__e__DOT__rs1_data);
					    }
					}
				    } else {
					if ((0x2000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (
						   (0x1000U 
						    & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						    ? 
						   VL_NEGATE_Q((QData)((IData)(
									       ((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
										> vlTOPp->v__DOT__e__DOT__rs1_data))))
						    : 
						   VL_NEGATE_Q((QData)((IData)(
									       VL_GTS_IQQ(1,64,64, 
										(((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))), vlTOPp->v__DOT__e__DOT__rs1_data)))));
					} else {
					    if ((0x1000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    ((((QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						       << 0x20U) 
						      | (QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						     + vlTOPp->v__DOT__e__DOT__rs1_data);
					    }
					}
				    }
				} else {
				    if ((0x4000000U 
					 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					if ((0x4000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    ((0x1000U 
						      & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						      ? 
						     ((((QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							<< 0x20U) 
						       | (QData)((IData)(
									 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						      & vlTOPp->v__DOT__e__DOT__rs1_data)
						      : 
						     ((((QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							<< 0x20U) 
						       | (QData)((IData)(
									 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						      | vlTOPp->v__DOT__e__DOT__rs1_data));
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							((((QData)((IData)(
									   vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							   << 0x20U) 
							  | (QData)((IData)(
									    vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
							 ^ vlTOPp->v__DOT__e__DOT__rs1_data);
						}
					    }
					} else {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    ((0x1000U 
						      & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						      ? 
						     VL_NEGATE_Q((QData)((IData)(
										((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
										> vlTOPp->v__DOT__e__DOT__rs1_data))))
						      : 
						     VL_NEGATE_Q((QData)((IData)(
										VL_GTS_IQQ(1,64,64, 
										(((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))), vlTOPp->v__DOT__e__DOT__rs1_data)))));
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							((((QData)((IData)(
									   vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							   << 0x20U) 
							  | (QData)((IData)(
									    vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
							 + vlTOPp->v__DOT__e__DOT__rs1_data);
						}
					    }
					}
				    } else {
					if ((0x4000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (
						   (0x2000U 
						    & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						    ? 
						   ((0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						     ? 
						    ((((QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						       << 0x20U) 
						      | (QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						     & vlTOPp->v__DOT__e__DOT__rs1_data)
						     : 
						    ((((QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						       << 0x20U) 
						      | (QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						     | vlTOPp->v__DOT__e__DOT__rs1_data))
						    : 
						   ((0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						     ? 
						    VL_SHIFTRS_QQI(64,64,6, vlTOPp->v__DOT__e__DOT__rs1_data, 
								   (0x3fU 
								    & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
									<< 0xcU) 
								       | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
									  >> 0x14U))))
						     : 
						    ((((QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						       << 0x20U) 
						      | (QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						     ^ vlTOPp->v__DOT__e__DOT__rs1_data)));
					} else {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    ((0x1000U 
						      & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						      ? 
						     VL_NEGATE_Q((QData)((IData)(
										((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
										> vlTOPp->v__DOT__e__DOT__rs1_data))))
						      : 
						     VL_NEGATE_Q((QData)((IData)(
										VL_GTS_IQQ(1,64,64, 
										(((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))), vlTOPp->v__DOT__e__DOT__rs1_data)))));
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							((((QData)((IData)(
									   vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							   << 0x20U) 
							  | (QData)((IData)(
									    vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
							 + vlTOPp->v__DOT__e__DOT__rs1_data);
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if ((0x20000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
			    if ((0x4000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				if ((0x2000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					= ((0x1000U 
					    & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
					    ? ((((QData)((IData)(
								 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						 << 0x20U) 
						| (QData)((IData)(
								  vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
					       & vlTOPp->v__DOT__e__DOT__rs1_data)
					    : ((((QData)((IData)(
								 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						 << 0x20U) 
						| (QData)((IData)(
								  vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
					       | vlTOPp->v__DOT__e__DOT__rs1_data));
				} else {
				    if ((0x1000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((((QData)((IData)(
								 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						 << 0x20U) 
						| (QData)((IData)(
								  vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
					       ^ vlTOPp->v__DOT__e__DOT__rs1_data);
				    }
				}
			    } else {
				if ((0x2000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					= ((0x1000U 
					    & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
					    ? VL_NEGATE_Q((QData)((IData)(
									  ((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
									     << 0x20U) 
									    | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
									   > vlTOPp->v__DOT__e__DOT__rs1_data))))
					    : VL_NEGATE_Q((QData)((IData)(
									  VL_GTS_IQQ(1,64,64, 
										(((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))), vlTOPp->v__DOT__e__DOT__rs1_data)))));
				} else {
				    if ((0x1000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((((QData)((IData)(
								 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						 << 0x20U) 
						| (QData)((IData)(
								  vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
					       + vlTOPp->v__DOT__e__DOT__rs1_data);
				    }
				}
			    }
			} else {
			    if ((0x10000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				if ((0x4000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    if ((0x2000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((0x1000U 
						& vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
					        ? (
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						   & vlTOPp->v__DOT__e__DOT__rs1_data)
					        : (
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						   | vlTOPp->v__DOT__e__DOT__rs1_data));
				    } else {
					if ((0x1000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						   ^ vlTOPp->v__DOT__e__DOT__rs1_data);
					}
				    }
				} else {
				    if ((0x2000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((0x1000U 
						& vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
					        ? VL_NEGATE_Q((QData)((IData)(
									      ((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
									       > vlTOPp->v__DOT__e__DOT__rs1_data))))
					        : VL_NEGATE_Q((QData)((IData)(
									      VL_GTS_IQQ(1,64,64, 
										(((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))), vlTOPp->v__DOT__e__DOT__rs1_data)))));
				    } else {
					if ((0x1000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						   + vlTOPp->v__DOT__e__DOT__rs1_data);
					}
				    }
				}
			    } else {
				if ((0x8000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    if ((0x4000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					if ((0x2000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (
						   (0x1000U 
						    & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						    ? 
						   ((((QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						      << 0x20U) 
						     | (QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						    & vlTOPp->v__DOT__e__DOT__rs1_data)
						    : 
						   ((((QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						      << 0x20U) 
						     | (QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						    | vlTOPp->v__DOT__e__DOT__rs1_data));
					} else {
					    if ((0x1000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    ((((QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						       << 0x20U) 
						      | (QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						     ^ vlTOPp->v__DOT__e__DOT__rs1_data);
					    }
					}
				    } else {
					if ((0x2000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						= (
						   (0x1000U 
						    & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						    ? 
						   VL_NEGATE_Q((QData)((IData)(
									       ((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
										> vlTOPp->v__DOT__e__DOT__rs1_data))))
						    : 
						   VL_NEGATE_Q((QData)((IData)(
									       VL_GTS_IQQ(1,64,64, 
										(((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))), vlTOPp->v__DOT__e__DOT__rs1_data)))));
					} else {
					    if ((0x1000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    ((((QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						       << 0x20U) 
						      | (QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						     + vlTOPp->v__DOT__e__DOT__rs1_data);
					    }
					}
				    }
				} else {
				    if ((0x4000000U 
					 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					if ((0x4000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    ((0x1000U 
						      & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						      ? 
						     ((((QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							<< 0x20U) 
						       | (QData)((IData)(
									 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						      & vlTOPp->v__DOT__e__DOT__rs1_data)
						      : 
						     ((((QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							<< 0x20U) 
						       | (QData)((IData)(
									 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						      | vlTOPp->v__DOT__e__DOT__rs1_data));
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							((((QData)((IData)(
									   vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							   << 0x20U) 
							  | (QData)((IData)(
									    vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
							 ^ vlTOPp->v__DOT__e__DOT__rs1_data);
						}
					    }
					} else {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    ((0x1000U 
						      & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						      ? 
						     VL_NEGATE_Q((QData)((IData)(
										((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
										> vlTOPp->v__DOT__e__DOT__rs1_data))))
						      : 
						     VL_NEGATE_Q((QData)((IData)(
										VL_GTS_IQQ(1,64,64, 
										(((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))), vlTOPp->v__DOT__e__DOT__rs1_data)))));
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							((((QData)((IData)(
									   vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							   << 0x20U) 
							  | (QData)((IData)(
									    vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
							 + vlTOPp->v__DOT__e__DOT__rs1_data);
						}
					    }
					}
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = ((0x4000U 
						& vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
					        ? (
						   (0x2000U 
						    & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						    ? 
						   ((0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						     ? 
						    ((((QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						       << 0x20U) 
						      | (QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						     & vlTOPp->v__DOT__e__DOT__rs1_data)
						     : 
						    ((((QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						       << 0x20U) 
						      | (QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						     | vlTOPp->v__DOT__e__DOT__rs1_data))
						    : 
						   ((0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						     ? 
						    (vlTOPp->v__DOT__e__DOT__rs1_data 
						     >> 
						     (0x3fU 
						      & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
							  << 0xcU) 
							 | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
							    >> 0x14U))))
						     : 
						    ((((QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						       << 0x20U) 
						      | (QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						     ^ vlTOPp->v__DOT__e__DOT__rs1_data)))
					        : (
						   (0x2000U 
						    & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						    ? 
						   ((0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						     ? 
						    VL_NEGATE_Q((QData)((IData)(
										((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
										> vlTOPp->v__DOT__e__DOT__rs1_data))))
						     : 
						    VL_NEGATE_Q((QData)((IData)(
										VL_GTS_IQQ(1,64,64, 
										(((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))), vlTOPp->v__DOT__e__DOT__rs1_data)))))
						    : 
						   ((0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
						     ? 
						    (vlTOPp->v__DOT__e__DOT__rs1_data 
						     << 
						     (0x3fU 
						      & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
							  << 0xcU) 
							 | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
							    >> 0x14U))))
						     : 
						    ((((QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						       << 0x20U) 
						      | (QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
						     + vlTOPp->v__DOT__e__DOT__rs1_data))));
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((0x17U == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) {
		    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
		    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 0U;
		    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 1U;
		    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 1U;
		    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
			= ((((QData)((IData)(vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
			     << 0x20U) | (QData)((IData)(
							 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
			   + (((QData)((IData)(vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
			       << 0x20U) | (QData)((IData)(
							   vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U]))));
		} else {
		    if ((0x1bU == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) {
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 1U;
			vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 0U;
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
			vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
			if ((0x80000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
			    if ((0x4000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			    } else {
				if ((0x2000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				} else {
				    if ((0x1000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = (vlTOPp->v__DOT__e__DOT__rs1_data 
					       + (((QData)((IData)(
								   vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						   << 0x20U) 
						  | (QData)((IData)(
								    vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
				    }
				}
			    }
			} else {
			    if ((0x40000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				if ((0x20000000U & 
				     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    if ((0x4000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					if ((0x2000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    if ((0x1000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    (vlTOPp->v__DOT__e__DOT__rs1_data 
						     + 
						     (((QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						       << 0x20U) 
						      | (QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
					    }
					}
				    }
				} else {
				    if ((0x10000000U 
					 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					if ((0x4000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							(vlTOPp->v__DOT__e__DOT__rs1_data 
							 + 
							 (((QData)((IData)(
									   vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							   << 0x20U) 
							  | (QData)((IData)(
									    vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
						}
					    }
					}
				    } else {
					if ((0x8000000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    if ((0x4000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						if (
						    (0x2000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    if (
							(0x1000U 
							 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							    = 
							    (vlTOPp->v__DOT__e__DOT__rs1_data 
							     + 
							     (((QData)((IData)(
									       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							       << 0x20U) 
							      | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
						    }
						}
					    }
					} else {
					    if ((0x4000000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						if (
						    (0x4000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    if (
							(0x2000U 
							 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							if (
							    (0x1000U 
							     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								= 
								(vlTOPp->v__DOT__e__DOT__rs1_data 
								 + 
								 (((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
								   << 0x20U) 
								  | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
							}
						    }
						}
					    } else {
						if (
						    (0x2000000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    if (
							(0x4000U 
							 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							if (
							    (0x2000U 
							     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    if (
								(0x1000U 
								 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    } else {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								    = 
								    (vlTOPp->v__DOT__e__DOT__rs1_data 
								     + 
								     (((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
								       << 0x20U) 
								      | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
							    }
							}
						    }
						} else {
						    if (
							(0x4000U 
							 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							if (
							    (0x2000U 
							     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    if (
								(0x1000U 
								 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								    = 
								    VL_SHIFTRS_QQI(64,64,5, vlTOPp->v__DOT__e__DOT__rs1_data, 
										(0x1fU 
										& ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
										<< 0xcU) 
										| (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
										>> 0x14U))));
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
							     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    if (
								(0x1000U 
								 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    } else {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								    = 
								    (vlTOPp->v__DOT__e__DOT__rs1_data 
								     + 
								     (((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
								       << 0x20U) 
								      | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
							    }
							}
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if ((0x20000000U & 
				     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    if ((0x4000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					if ((0x2000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    if ((0x1000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
						    = 
						    (vlTOPp->v__DOT__e__DOT__rs1_data 
						     + 
						     (((QData)((IData)(
								       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						       << 0x20U) 
						      | (QData)((IData)(
									vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
					    }
					}
				    }
				} else {
				    if ((0x10000000U 
					 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					if ((0x4000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    if ((0x2000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						if (
						    (0x1000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							= 
							(vlTOPp->v__DOT__e__DOT__rs1_data 
							 + 
							 (((QData)((IData)(
									   vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							   << 0x20U) 
							  | (QData)((IData)(
									    vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
						}
					    }
					}
				    } else {
					if ((0x8000000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    if ((0x4000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						if (
						    (0x2000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    if (
							(0x1000U 
							 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							    = 
							    (vlTOPp->v__DOT__e__DOT__rs1_data 
							     + 
							     (((QData)((IData)(
									       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							       << 0x20U) 
							      | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
						    }
						}
					    }
					} else {
					    if ((0x4000000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						if (
						    (0x4000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    if (
							(0x2000U 
							 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							if (
							    (0x1000U 
							     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								= 
								(vlTOPp->v__DOT__e__DOT__rs1_data 
								 + 
								 (((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
								   << 0x20U) 
								  | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
							}
						    }
						}
					    } else {
						if (
						    (0x2000000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    if (
							(0x4000U 
							 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							if (
							    (0x2000U 
							     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    if (
								(0x1000U 
								 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    } else {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								    = 
								    (vlTOPp->v__DOT__e__DOT__rs1_data 
								     + 
								     (((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
								       << 0x20U) 
								      | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
							    }
							}
						    }
						} else {
						    if (
							(0x4000U 
							 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							if (
							    (0x2000U 
							     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    if (
								(0x1000U 
								 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								    = 
								    (vlTOPp->v__DOT__e__DOT__rs1_data 
								     >> 
								     (0x1fU 
								      & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
									  << 0xcU) 
									 | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
									    >> 0x14U))));
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
							     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							} else {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								= 
								((0x1000U 
								  & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
								  ? 
								 (vlTOPp->v__DOT__e__DOT__rs1_data 
								  << 
								  (0x1fU 
								   & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
								       << 0xcU) 
								      | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
									 >> 0x14U))))
								  : 
								 (vlTOPp->v__DOT__e__DOT__rs1_data 
								  + 
								  (((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
								    << 0x20U) 
								   | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U])))));
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
			vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
			    = (VL_ULL(0xffffffff) & vlTOPp->v__DOT__e__DOT__a__DOT__dest_next);
		    } else {
			if ((0x3bU == (0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) {
			    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 0U;
			    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 1U;
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
			    if ((0x80000000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
			    } else {
				if ((0x40000000U & 
				     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    if ((0x20000000U 
					 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					if ((0x10000000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    if ((0x8000000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						if (
						    (0x4000000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    if (
							(0x2000000U 
							 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							if (
							    (0x4000U 
							     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							    if (
								(0x2000U 
								 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    } else {
								if (
								    (0x1000U 
								     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
									= 
									VL_SHIFTRS_QQI(64,64,5, vlTOPp->v__DOT__e__DOT__rs1_data, 
										(0x1fU 
										& (IData)(vlTOPp->v__DOT__e__DOT__rs2_data)));
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
								 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    } else {
								if (
								    (0x1000U 
								     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
								    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
								} else {
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
									= 
									(vlTOPp->v__DOT__e__DOT__rs1_data 
									 - vlTOPp->v__DOT__e__DOT__rs2_data);
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
					 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
				    } else {
					if ((0x10000000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
					    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					} else {
					    if ((0x8000000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
					    } else {
						if (
						    (0x4000000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						} else {
						    if (
							(0x2000000U 
							 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
						    } else {
							if (
							    (0x4000U 
							     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							    if (
								(0x2000U 
								 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    } else {
								if (
								    (0x1000U 
								     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
								    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
									= 
									(vlTOPp->v__DOT__e__DOT__rs1_data 
									 >> 
									 (0x1fU 
									  & (IData)(vlTOPp->v__DOT__e__DOT__rs2_data)));
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
								 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
								vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 0U;
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next = VL_ULL(0);
							    } else {
								vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
								    = 
								    ((0x1000U 
								      & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])
								      ? 
								     (vlTOPp->v__DOT__e__DOT__rs1_data 
								      << 
								      (0x1fU 
								       & (IData)(vlTOPp->v__DOT__e__DOT__rs2_data)))
								      : 
								     (vlTOPp->v__DOT__e__DOT__rs1_data 
								      + vlTOPp->v__DOT__e__DOT__rs2_data));
							    }
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
				= (VL_ULL(0xffffffff) 
				   & vlTOPp->v__DOT__e__DOT__a__DOT__dest_next);
			} else {
			    if ((0x63U == (0x7fU & 
					   vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) {
				vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 0U;
				vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				if ((0x4000U & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
				    if ((0x2000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					if ((0x1000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next 
						= (vlTOPp->v__DOT__e__DOT__rs1_data 
						   >= vlTOPp->v__DOT__e__DOT__rs2_data);
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
						= (
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U]))) 
						   + 
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
					} else {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next 
						= (vlTOPp->v__DOT__e__DOT__rs1_data 
						   < vlTOPp->v__DOT__e__DOT__rs2_data);
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
						= (
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U]))) 
						   + 
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
					}
				    } else {
					if ((0x1000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next 
						= VL_GTES_IQQ(1,64,64, vlTOPp->v__DOT__e__DOT__rs1_data, vlTOPp->v__DOT__e__DOT__rs2_data);
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
						= (
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U]))) 
						   + 
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
					} else {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next 
						= VL_LTS_IQQ(1,64,64, vlTOPp->v__DOT__e__DOT__rs1_data, vlTOPp->v__DOT__e__DOT__rs2_data);
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
						= (
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U]))) 
						   + 
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
					}
				    }
				} else {
				    if ((0x2000U & 
					 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next = VL_ULL(0);
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
				    } else {
					if ((0x1000U 
					     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next 
						= (vlTOPp->v__DOT__e__DOT__rs1_data 
						   != vlTOPp->v__DOT__e__DOT__rs2_data);
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
						= (
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U]))) 
						   + 
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
					} else {
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next 
						= (vlTOPp->v__DOT__e__DOT__rs1_data 
						   == vlTOPp->v__DOT__e__DOT__rs2_data);
					    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
						= (
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U]))) 
						   + 
						   (((QData)((IData)(
								     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						     << 0x20U) 
						    | (QData)((IData)(
								      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
					}
				    }
				}
				if (vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__desired_pc_next 
					= vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next;
				}
				vlTOPp->v__DOT__e__DOT__a__DOT__busy_next 
				    = vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next;
			    } else {
				if ((0x6fU == (0x7fU 
					       & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) {
				    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
					= ((((QData)((IData)(
							     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
					     << 0x20U) 
					    | (QData)((IData)(
							      vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U]))) 
					   + (((QData)((IData)(
							       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
					       << 0x20U) 
					      | (QData)((IData)(
								vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))));
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 1U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					= (VL_ULL(4) 
					   + (((QData)((IData)(
							       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
					       << 0x20U) 
					      | (QData)((IData)(
								vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U]))));
				    vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 1U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 1U;
				    vlTOPp->v__DOT__e__DOT__a__DOT__desired_pc_next 
					= vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next;
				    vlTOPp->v__DOT__e__DOT__a__DOT__busy_next = 1U;
				} else {
				    if ((0x67U == (0x7fU 
						   & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) {
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
					    = ((((QData)((IData)(
								 vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
						 << 0x20U) 
						| (QData)((IData)(
								  vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
					       + vlTOPp->v__DOT__e__DOT__rs1_data);
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 1U;
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					    = (VL_ULL(4) 
					       + (((QData)((IData)(
								   vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
						   << 0x20U) 
						  | (QData)((IData)(
								    vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U]))));
					vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next = 1U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 1U;
					vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
					    = (VL_ULL(0xfffffffffffffffe) 
					       & vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next);
					vlTOPp->v__DOT__e__DOT__a__DOT__busy_next 
					    = vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__priv_qValidla2;
					vlTOPp->v__DOT__e__DOT__a__DOT__desired_pc_next 
					    = vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next;
				    } else {
					if ((3U == 
					     (0x7fU 
					      & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) {
					    if ((0x4000U 
						 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						if (
						    (0x2000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    if (
							(0x1000U 
							 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    } else {
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next 
							    = 
							    ((((QData)((IData)(
									       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							       << 0x20U) 
							      | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
							     + vlTOPp->v__DOT__e__DOT__rs1_data);
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_op_next = 6U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_rd_next 
							    = 
							    (0x1fU 
							     & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
								 << 0x19U) 
								| (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
								   >> 7U)));
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 1U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    }
						} else {
						    if (
							(0x1000U 
							 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next 
							    = 
							    ((((QData)((IData)(
									       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							       << 0x20U) 
							      | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
							     + vlTOPp->v__DOT__e__DOT__rs1_data);
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_op_next = 5U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_rd_next 
							    = 
							    (0x1fU 
							     & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
								 << 0x19U) 
								| (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
								   >> 7U)));
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 1U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    } else {
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next 
							    = 
							    ((((QData)((IData)(
									       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							       << 0x20U) 
							      | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
							     + vlTOPp->v__DOT__e__DOT__rs1_data);
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_op_next = 4U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_rd_next 
							    = 
							    (0x1fU 
							     & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
								 << 0x19U) 
								| (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
								   >> 7U)));
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 1U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    }
						}
					    } else {
						if (
						    (0x2000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    if (VL_UNLIKELY(
								    (0x1000U 
								     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) {
							VL_WRITEF("LOAD DESTR = %2u\n",
								  5,
								  (0x1fU 
								   & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
								       << 0x19U) 
								      | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
									 >> 7U))));
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next 
							    = 
							    ((((QData)((IData)(
									       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							       << 0x20U) 
							      | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
							     + vlTOPp->v__DOT__e__DOT__rs1_data);
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_op_next = 3U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_rd_next 
							    = 
							    (0x1fU 
							     & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
								 << 0x19U) 
								| (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
								   >> 7U)));
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 1U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    } else {
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next 
							    = 
							    ((((QData)((IData)(
									       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							       << 0x20U) 
							      | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
							     + vlTOPp->v__DOT__e__DOT__rs1_data);
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_op_next = 2U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_rd_next 
							    = 
							    (0x1fU 
							     & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
								 << 0x19U) 
								| (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
								   >> 7U)));
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 1U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    }
						} else {
						    if (
							(0x1000U 
							 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next 
							    = 
							    ((((QData)((IData)(
									       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							       << 0x20U) 
							      | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
							     + vlTOPp->v__DOT__e__DOT__rs1_data);
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_op_next = 1U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_rd_next 
							    = 
							    (0x1fU 
							     & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
								 << 0x19U) 
								| (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
								   >> 7U)));
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 1U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    } else {
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next 
							    = 
							    ((((QData)((IData)(
									       vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
							       << 0x20U) 
							      | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
							     + vlTOPp->v__DOT__e__DOT__rs1_data);
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_op_next = 0U;
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_rd_next 
							    = 
							    (0x1fU 
							     & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
								 << 0x19U) 
								| (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
								   >> 7U)));
							vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 1U;
							vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						    }
						}
					    }
					} else {
					    if ((0x23U 
						 == 
						 (0x7fU 
						  & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]))) {
						if (
						    (0x4000U 
						     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
						    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						} else {
						    if (
							(0x2000U 
							 & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							if (
							    (0x1000U 
							     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next 
								= 
								((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
								   << 0x20U) 
								  | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
								 + vlTOPp->v__DOT__e__DOT__rs1_data);
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_op_next = 0xbU;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_data_next 
								= vlTOPp->v__DOT__e__DOT__rs2_data;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 1U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							} else {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next 
								= 
								((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
								   << 0x20U) 
								  | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
								 + vlTOPp->v__DOT__e__DOT__rs1_data);
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_op_next = 0xaU;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_data_next 
								= vlTOPp->v__DOT__e__DOT__rs2_data;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 1U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							}
						    } else {
							if (
							    (0x1000U 
							     & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])) {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next 
								= 
								((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
								   << 0x20U) 
								  | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
								 + vlTOPp->v__DOT__e__DOT__rs1_data);
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_op_next = 9U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_data_next 
								= vlTOPp->v__DOT__e__DOT__rs2_data;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 1U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							} else {
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next 
								= 
								((((QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
								   << 0x20U) 
								  | (QData)((IData)(
										vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U]))) 
								 + vlTOPp->v__DOT__e__DOT__rs1_data);
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_op_next = 8U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_data_next 
								= vlTOPp->v__DOT__e__DOT__rs2_data;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 1U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
							    vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
							}
						    }
						}
					    } else {
						vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
						vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 0U;
					    }
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
	vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next = 0U;
	vlTOPp->v__DOT__e__DOT__a__DOT__dest_clear_next = 0U;
	vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next = 0U;
	vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next = 0U;
    }
    VL_WRITEF("dest_valid = %1u, dest_data = %20u, dest_rd = %2u\n",
	      1,vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next,
	      64,vlTOPp->v__DOT__e__DOT__a__DOT__dest_next,
	      5,(0x1fU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
			   << 0x19U) | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
					>> 7U))));
    // ALWAYS at rtl/decode.v:98
    if ((0U != vlTOPp->v__DOT__d__DOT__load)) {
	vlTOPp->v__DOT__fetch_retry = vlTOPp->v__DOT__d__DOT__f1_retry;
    } else {
	vlTOPp->v__DOT__fetch_retry = vlTOPp->v__DOT__d__DOT__f_retry;
	vlTOPp->v__DOT__d__DOT__load_valid_next = 1U;
    }
    // ALWAYS at rtl/fflop.v:91
    vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__c2 = 
	((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next) 
	 | (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__shadowValid));
    // ALWAYS at rtl/fflop.v:91
    vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__c2 
	= ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next) 
	   | (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__shadowValid));
    // ALWAYS at rtl/fflop.v:91
    vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__c2 = 
	((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next) 
	 | (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__shadowValid));
    // ALWAYS at rtl/alu.v:166
    if ((vlTOPp->v__DOT__e__DOT__a__DOT__desired_pc_next 
	 == (((QData)((IData)(vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
	      << 0x20U) | (QData)((IData)(vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U]))))) {
	vlTOPp->v__DOT__e__DOT__a__DOT__busy_next = 0U;
    }
    // ALWAYS at rtl/fetch.v:70
    if ((1U & (~ (IData)(vlTOPp->v__DOT__fetch_retry)))) {
	vlTOPp->v__DOT__f__DOT__pc_next = (VL_ULL(0x7fffffffffffffff) 
					   & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__priv_qValidla2)
					       ? vlTOPp->v__DOT__execute_pc
					       : ((IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__priv_qValidla2)
						   ? 
						  (VL_ULL(2) 
						   + vlTOPp->v__DOT__f__DOT__pc)
						   : vlTOPp->v__DOT__f__DOT__pc)));
    }
    // ALWAYS at rtl/fflop.v:90
    vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__c1 
	= ((IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__priv_qValidla2) 
	   & (IData)(vlTOPp->v__DOT__fetch_retry));
}

void Vcore::_settle__TOP__26(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_settle__TOP__26\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/fflop.v:91
    vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__c2 = 
	((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next) 
	 | (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__shadowValid));
    // ALWAYS at rtl/fflop.v:91
    vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__c2 
	= ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next) 
	   | (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__shadowValid));
    // ALWAYS at rtl/fflop.v:91
    vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__c2 = 
	((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next) 
	 | (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__shadowValid));
    // ALWAYS at rtl/alu.v:166
    if ((vlTOPp->v__DOT__e__DOT__a__DOT__desired_pc_next 
	 == (((QData)((IData)(vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
	      << 0x20U) | (QData)((IData)(vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U]))))) {
	vlTOPp->v__DOT__e__DOT__a__DOT__busy_next = 0U;
    }
    // ALWAYS at rtl/fetch.v:70
    if ((1U & (~ (IData)(vlTOPp->v__DOT__fetch_retry)))) {
	vlTOPp->v__DOT__f__DOT__pc_next = (VL_ULL(0x7fffffffffffffff) 
					   & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__priv_qValidla2)
					       ? vlTOPp->v__DOT__execute_pc
					       : ((IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__priv_qValidla2)
						   ? 
						  (VL_ULL(2) 
						   + vlTOPp->v__DOT__f__DOT__pc)
						   : vlTOPp->v__DOT__f__DOT__pc)));
    }
    // ALWAYS at rtl/fflop.v:90
    vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__c1 
	= ((IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__priv_qValidla2) 
	   & (IData)(vlTOPp->v__DOT__fetch_retry));
    // ALWAYS at rtl/icache.v:68
    if ((1U & ((~ (IData)(vlTOPp->v__DOT__fetch_retry)) 
	       & (~ (IData)(vlTOPp->reset))))) {
	vlTOPp->v__DOT__f__DOT__i__DOT__pc_valid_next = 1U;
	vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset 
	    = (0x1eU & ((IData)(vlTOPp->v__DOT__f__DOT__pc_next) 
			<< 1U));
	vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index 
	    = (0x3fU & (IData)((vlTOPp->v__DOT__f__DOT__pc_next 
				>> 4U)));
	vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_tag 
	    = (VL_ULL(0x1fffffffffffff) & (vlTOPp->v__DOT__f__DOT__pc_next 
					   >> 0xaU));
    }
}

VL_INLINE_OPT void Vcore::_combo__TOP__27(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_combo__TOP__27\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/icache.v:68
    if ((1U & ((~ (IData)(vlTOPp->v__DOT__fetch_retry)) 
	       & (~ (IData)(vlTOPp->reset))))) {
	vlTOPp->v__DOT__f__DOT__i__DOT__pc_valid_next = 1U;
	vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset 
	    = (0x1eU & ((IData)(vlTOPp->v__DOT__f__DOT__pc_next) 
			<< 1U));
	vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index 
	    = (0x3fU & (IData)((vlTOPp->v__DOT__f__DOT__pc_next 
				>> 4U)));
	vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_tag 
	    = (VL_ULL(0x1fffffffffffff) & (vlTOPp->v__DOT__f__DOT__pc_next 
					   >> 0xaU));
    }
    // ALWAYS at rtl/icache.v:80
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
    // ALWAYS at rtl/icache.v:100
    if (((((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->v__DOT__fetch_retry)) 
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
	if (vlTOPp->v__DOT__fetch_retry) {
	    vlTOPp->v__DOT__f__DOT__i__DOT__icache_req_addr_valid_next = 0U;
	    vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_valid_next = 0U;
	} else {
	    vlTOPp->v__DOT__f__DOT__i__DOT__icache_req_addr_valid_next = 1U;
	    vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_valid_next = 0U;
	}
    }
}

void Vcore::_settle__TOP__28(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_settle__TOP__28\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/icache.v:80
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
    // ALWAYS at rtl/icache.v:100
    if (((((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->v__DOT__fetch_retry)) 
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
	if (vlTOPp->v__DOT__fetch_retry) {
	    vlTOPp->v__DOT__f__DOT__i__DOT__icache_req_addr_valid_next = 0U;
	    vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_valid_next = 0U;
	} else {
	    vlTOPp->v__DOT__f__DOT__i__DOT__icache_req_addr_valid_next = 1U;
	    vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_valid_next = 0U;
	}
    }
    // ALWAYS at rtl/fflop.v:91
    vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__c2 
	= ((IData)(vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_valid_next) 
	   | (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__shadowValid));
    // ALWAYS at rtl/fflop.v:91
    vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__c2 
	= ((IData)(vlTOPp->v__DOT__f__DOT__i__DOT__icache_req_addr_valid_next) 
	   | (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__shadowValid));
}

VL_INLINE_OPT void Vcore::_combo__TOP__29(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_combo__TOP__29\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/fflop.v:91
    vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__c2 
	= ((IData)(vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_valid_next) 
	   | (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__shadowValid));
    // ALWAYS at rtl/fflop.v:91
    vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__c2 
	= ((IData)(vlTOPp->v__DOT__f__DOT__i__DOT__icache_req_addr_valid_next) 
	   | (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__shadowValid));
}

void Vcore::_eval(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_eval\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if (((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk))) {
	vlTOPp->_sequent__TOP__5(vlSymsp);
	vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__8(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
    }
    if (((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk))) {
	vlTOPp->_sequent__TOP__10(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x40U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__11(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__12(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x80U | vlTOPp->__Vm_traceActivity);
    }
    if (((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk))) {
	vlTOPp->_sequent__TOP__13(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x100U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__14(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__16(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x200U | vlTOPp->__Vm_traceActivity);
    }
    if (((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk))) {
	vlTOPp->_sequent__TOP__17(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x400U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__18(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x800U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) ^ (IData)(vlTOPp->__Vclklast__TOP__clk))) {
	vlTOPp->_multiclk__TOP__20(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x1000U | vlTOPp->__Vm_traceActivity);
    }
    if (((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk))) {
	vlTOPp->_sequent__TOP__21(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x2000U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__22(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__23(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x4000U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__25(vlSymsp);
    vlTOPp->_combo__TOP__27(vlSymsp);
    vlTOPp->_combo__TOP__29(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vcore::_eval_initial(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_eval_initial\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_initial__TOP__7(vlSymsp);
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
    vlTOPp->_settle__TOP__9(vlSymsp);
    vlTOPp->_settle__TOP__15(vlSymsp);
    vlTOPp->_settle__TOP__19(vlSymsp);
    vlTOPp->_settle__TOP__24(vlSymsp);
    vlTOPp->_settle__TOP__26(vlSymsp);
    vlTOPp->_settle__TOP__28(vlSymsp);
}

VL_INLINE_OPT QData Vcore::_change_request(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcore::_change_request\n"); );
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
