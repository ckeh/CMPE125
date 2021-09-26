// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcore__Syms.h"


//======================

void Vcore::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vcore* t=(Vcore*)userthis;
    Vcore__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void Vcore::traceChgThis(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 3U)) | (vlTOPp->__Vm_traceActivity 
					      >> 4U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 4U))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 4U)) | (vlTOPp->__Vm_traceActivity 
					      >> 0xaU))))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 5U))))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 7U))))) {
	    vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 8U)) | (vlTOPp->__Vm_traceActivity 
					      >> 0xcU))))) {
	    vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 0xbU))))) {
	    vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 0xcU))))) {
	    vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 0xdU))))) {
	    vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x20U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x40U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__16(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x80U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__17(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x100U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__18(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x200U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__19(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x400U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__20(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x800U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__21(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x2000U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__22(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x4000U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__23(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__24(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vcore::traceChgThis__2(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->v__DOT__d__DOT__r__DOT__rf_cntr),5);
	vcdp->chgBit  (c+2,(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__c2));
    }
}

void Vcore::traceChgThis__3(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp54,159,0,5);
    // Body
    {
	vcdp->chgQuad (c+3,(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_data_next),64);
	__Vtemp54[0U] = ((0xfffffe00U & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_data_next) 
					 << 9U)) | 
			 (((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_op_next) 
			   << 5U) | (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_rd_next)));
	__Vtemp54[1U] = ((0x1ffU & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_data_next) 
				    >> 0x17U)) | (0xfffffe00U 
						  & ((IData)(
							     (vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_data_next 
							      >> 0x20U)) 
						     << 9U)));
	__Vtemp54[2U] = ((0x1ffU & ((IData)((vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_data_next 
					     >> 0x20U)) 
				    >> 0x17U)) | (0xfffffe00U 
						  & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next) 
						     << 9U)));
	__Vtemp54[3U] = ((0x1ffU & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next) 
				    >> 0x17U)) | (0xfffffe00U 
						  & ((IData)(
							     (vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next 
							      >> 0x20U)) 
						     << 9U)));
	__Vtemp54[4U] = (0x1ffU & ((IData)((vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next 
					    >> 0x20U)) 
				   >> 0x17U));
	vcdp->chgArray(c+5,(__Vtemp54),137);
    }
}

void Vcore::traceChgThis__4(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    //char	__VpadToAlign44[4];
    VL_SIGW(__Vtemp55,95,0,3);
    //char	__VpadToAlign60[4];
    VL_SIGW(__Vtemp56,127,0,4);
    // Body
    {
	vcdp->chgBit  (c+16,((1U & (~ (IData)(vlTOPp->v__DOT__fetch_retry)))));
	vcdp->chgBit  (c+17,(vlTOPp->v__DOT__f__DOT__i__DOT__ic_valid_we));
	vcdp->chgBit  (c+18,(vlTOPp->v__DOT__f__DOT__i__DOT__ic_data_we));
	vcdp->chgBit  (c+19,(vlTOPp->v__DOT__f__DOT__i__DOT__ic_tag_we));
	vcdp->chgBus  (c+21,(vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_next),32);
	vcdp->chgQuad (c+23,((VL_ULL(0x7ffffffffffffff) 
			      & (vlTOPp->v__DOT__f__DOT__pc_next 
				 >> 4U))),59);
	vcdp->chgBus  (c+25,(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset),5);
	vcdp->chgBus  (c+26,(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index),6);
	vcdp->chgQuad (c+27,(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_tag),53);
	vcdp->chgBit  (c+29,(vlTOPp->v__DOT__f__DOT__i__DOT__pc_valid_next));
	vcdp->chgBit  (c+30,(vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__c1));
	vcdp->chgBit  (c+31,(vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__c2));
	vcdp->chgBit  (c+22,(vlTOPp->v__DOT__f__DOT__i__DOT__icache_req_addr_valid_next));
	__Vtemp55[0U] = (IData)(vlTOPp->v__DOT__f__DOT__pc_next);
	__Vtemp55[1U] = ((0x80000000U & (vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_next 
					 << 0x1fU)) 
			 | (IData)((vlTOPp->v__DOT__f__DOT__pc_next 
				    >> 0x20U)));
	__Vtemp55[2U] = (0x7fffffffU & (vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_next 
					>> 1U));
	vcdp->chgArray(c+32,(__Vtemp55),95);
	vcdp->chgBit  (c+35,(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__c1));
	vcdp->chgBit  (c+36,(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__c2));
	vcdp->chgBit  (c+20,(vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_valid_next));
	vcdp->chgQuad (c+14,(vlTOPp->v__DOT__f__DOT__pc_next),63);
	vcdp->chgBus  (c+37,(vlTOPp->v__DOT__d__DOT__load_next),32);
	vcdp->chgBit  (c+38,(vlTOPp->v__DOT__d__DOT__f1_retry));
	vcdp->chgBit  (c+39,(vlTOPp->v__DOT__d__DOT__load_valid_next));
	vcdp->chgBit  (c+10,(vlTOPp->v__DOT__fetch_retry));
	vcdp->chgBit  (c+40,(vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__c1));
	vcdp->chgQuad (c+41,(vlTOPp->v__DOT__d__DOT__r__DOT__data1_next),64);
	vcdp->chgQuad (c+43,(vlTOPp->v__DOT__d__DOT__r__DOT__data2_next),64);
	__Vtemp56[0U] = (IData)(vlTOPp->v__DOT__d__DOT__r__DOT__data2_next);
	__Vtemp56[1U] = (IData)((vlTOPp->v__DOT__d__DOT__r__DOT__data2_next 
				 >> 0x20U));
	__Vtemp56[2U] = (IData)(vlTOPp->v__DOT__d__DOT__r__DOT__data1_next);
	__Vtemp56[3U] = (IData)((vlTOPp->v__DOT__d__DOT__r__DOT__data1_next 
				 >> 0x20U));
	vcdp->chgArray(c+45,(__Vtemp56),128);
	vcdp->chgBit  (c+49,(vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__c1));
	vcdp->chgBit  (c+50,(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__c1));
	vcdp->chgBit  (c+51,(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__c1));
	vcdp->chgBit  (c+52,(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__c1));
	vcdp->chgBit  (c+13,(vlTOPp->v__DOT__decode_valid));
	vcdp->chgBit  (c+11,(vlTOPp->v__DOT__execute_retry));
	vcdp->chgBit  (c+54,(vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next));
	vcdp->chgQuad (c+55,(vlTOPp->v__DOT__e__DOT__a__DOT__dest_next),64);
	vcdp->chgQuad (c+58,(vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next),64);
	vcdp->chgQuad (c+60,(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next),64);
	vcdp->chgBus  (c+62,(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_op_next),4);
	vcdp->chgBus  (c+63,(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_rd_next),5);
	vcdp->chgBit  (c+65,(vlTOPp->v__DOT__e__DOT__a__DOT__dest_clear_next));
	vcdp->chgQuad (c+66,(vlTOPp->v__DOT__e__DOT__a__DOT__desired_pc_next),64);
	vcdp->chgBit  (c+68,(vlTOPp->v__DOT__e__DOT__a__DOT__busy_next));
	vcdp->chgQuad (c+69,((VL_ULL(0x7fffffffffffffff) 
			      & (vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
				 >> 1U))),63);
	vcdp->chgBit  (c+71,(vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__c2));
	vcdp->chgBit  (c+57,(vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next));
	vcdp->chgBit  (c+72,(vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__c2));
	vcdp->chgBit  (c+53,(vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next));
	vcdp->chgBit  (c+73,(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__c1));
	vcdp->chgBit  (c+74,(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__c2));
	vcdp->chgBit  (c+12,(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__priv_dinRetry));
	vcdp->chgBit  (c+64,(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next));
    }
}

void Vcore::traceChgThis__5(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp57,95,0,3);
    // Body
    {
	__Vtemp57[0U] = ((0xffffff80U & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dest_next) 
					 << 7U)) | 
			 (((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next) 
			   << 6U) | ((0x3eU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
						<< 0x1aU) 
					       | (0x3fffffeU 
						  & (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
						     >> 6U)))) 
				     | (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dest_clear_next))));
	__Vtemp57[1U] = ((0x7fU & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dest_next) 
				   >> 0x19U)) | (0xffffff80U 
						 & ((IData)(
							    (vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							     >> 0x20U)) 
						    << 7U)));
	__Vtemp57[2U] = (0x7fU & ((IData)((vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					   >> 0x20U)) 
				  >> 0x19U));
	vcdp->chgArray(c+75,(__Vtemp57),71);
    }
}

void Vcore::traceChgThis__6(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+78,(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__c2));
    }
}

void Vcore::traceChgThis__7(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+79,(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__c2));
    }
}

void Vcore::traceChgThis__8(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+80,(vlTOPp->v__DOT__dest_clear));
    }
}

void Vcore::traceChgThis__9(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+81,(vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__c2));
    }
}

void Vcore::traceChgThis__10(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+82,(vlTOPp->v__DOT__e__DOT__rs1_data),64);
	vcdp->chgQuad (c+84,(vlTOPp->v__DOT__e__DOT__rs2_data),64);
    }
}

void Vcore::traceChgThis__11(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    //char	__VpadToAlign148[4];
    VL_SIGW(__Vtemp59,159,0,5);
    // Body
    {
	vcdp->chgQuad (c+86,(((0x20U & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
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
					   ? ((2U & 
					       vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
					       ? ((1U 
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
					   : ((2U & 
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
					       : ((1U 
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
					   : ((2U & 
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
					       : ((1U 
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
					   : ((2U & 
					       vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
					       ? ((1U 
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
					       : ((VL_ULL(0xfffffffffffff000) 
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
								>> 0x13U))))))))),64);
	vcdp->chgBus  (c+88,(vlTOPp->v__DOT__d__DOT__branchimm),13);
	vcdp->chgBus  (c+89,(vlTOPp->v__DOT__d__DOT__jalimm),21);
	vcdp->chgBus  (c+90,(vlTOPp->v__DOT__d__DOT__stimm12),12);
	__Vtemp59[0U] = (IData)(((0x20U & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
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
								   >> 0x13U)))))))));
	__Vtemp59[1U] = (IData)((((0x20U & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
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
	__Vtemp59[2U] = ((vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
			  << 1U) | (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[1U] 
				    >> 0x1fU));
	__Vtemp59[3U] = (IData)((VL_ULL(0xfffffffffffffffe) 
				 & (((QData)((IData)(
						     vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[1U])) 
				     << 0x21U) | ((QData)((IData)(
								  vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[0U])) 
						  << 1U))));
	__Vtemp59[4U] = (IData)(((VL_ULL(0xfffffffffffffffe) 
				  & (((QData)((IData)(
						      vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[1U])) 
				      << 0x21U) | ((QData)((IData)(
								   vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[0U])) 
						   << 1U))) 
				 >> 0x20U));
	vcdp->chgArray(c+91,(__Vtemp59),160);
    }
}

void Vcore::traceChgThis__12(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+104,(vlTOPp->v__DOT__f__DOT__pc),63);
	vcdp->chgQuad (c+102,(vlTOPp->v__DOT__req_addr),59);
	vcdp->chgBit  (c+106,(vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__q_enable));
	vcdp->chgArray(c+107,(vlTOPp->v__DOT__d__DOT__r__DOT____Vcellout__data__q),128);
	vcdp->chgBit  (c+111,(vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__q_enable));
	vcdp->chgQuad (c+98,((((QData)((IData)(vlTOPp->v__DOT__d__DOT__r__DOT____Vcellout__data__q[3U])) 
			       << 0x20U) | (QData)((IData)(
							   vlTOPp->v__DOT__d__DOT__r__DOT____Vcellout__data__q[2U])))),64);
	vcdp->chgQuad (c+100,((((QData)((IData)(vlTOPp->v__DOT__d__DOT__r__DOT____Vcellout__data__q[1U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->v__DOT__d__DOT__r__DOT____Vcellout__data__q[0U])))),64);
	vcdp->chgBus  (c+112,((0x1fU & vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem3__q[2U])),5);
	vcdp->chgQuad (c+113,((((QData)((IData)(vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem3__q[1U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem3__q[0U])))),64);
	vcdp->chgArray(c+115,(vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem3__q),69);
	vcdp->chgBit  (c+118,(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__q_enable));
	vcdp->chgQuad (c+96,(vlTOPp->v__DOT__execute_pc),63);
	vcdp->chgArray(c+119,(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff_dcache__q),137);
	vcdp->chgBit  (c+124,(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__q_enable));
    }
}

void Vcore::traceChgThis__13(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+128,(vlTOPp->v__DOT__f__DOT__i__DOT__clear_idx),6);
	vcdp->chgBit  (c+129,(vlTOPp->v__DOT__f__DOT__i__DOT__pc_valid));
	vcdp->chgQuad (c+130,(vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__shadowq),59);
	vcdp->chgBit  (c+132,(vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__shadowValid));
	vcdp->chgBit  (c+133,(vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__priv_qValidla2));
	vcdp->chgBit  (c+134,((1U & (~ (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__shadowValid)))));
	vcdp->chgQuad (c+136,(vlTOPp->v__DOT__f__DOT__f_pc__DOT__shadowq),63);
	vcdp->chgBit  (c+135,(vlTOPp->v__DOT__f__DOT__f_pc__DOT__priv_qValidla2));
	vcdp->chgBus  (c+138,(vlTOPp->v__DOT__d__DOT__load),32);
	vcdp->chgBit  (c+139,(vlTOPp->v__DOT__d__DOT__load_valid));
	vcdp->chgBit  (c+125,(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__priv_qValidla2));
	vcdp->chgBit  (c+140,(vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__priv_qValidla2));
	vcdp->chgQuad (c+141,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[0]),64);
	vcdp->chgQuad (c+143,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[1]),64);
	vcdp->chgQuad (c+145,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[2]),64);
	vcdp->chgQuad (c+147,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[3]),64);
	vcdp->chgQuad (c+149,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[4]),64);
	vcdp->chgQuad (c+151,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[5]),64);
	vcdp->chgQuad (c+153,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[6]),64);
	vcdp->chgQuad (c+155,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[7]),64);
	vcdp->chgQuad (c+157,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[8]),64);
	vcdp->chgQuad (c+159,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[9]),64);
	vcdp->chgQuad (c+161,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[10]),64);
	vcdp->chgQuad (c+163,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[11]),64);
	vcdp->chgQuad (c+165,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[12]),64);
	vcdp->chgQuad (c+167,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[13]),64);
	vcdp->chgQuad (c+169,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[14]),64);
	vcdp->chgQuad (c+171,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[15]),64);
	vcdp->chgQuad (c+173,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[16]),64);
	vcdp->chgQuad (c+175,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[17]),64);
	vcdp->chgQuad (c+177,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[18]),64);
	vcdp->chgQuad (c+179,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[19]),64);
	vcdp->chgQuad (c+181,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[20]),64);
	vcdp->chgQuad (c+183,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[21]),64);
	vcdp->chgQuad (c+185,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[22]),64);
	vcdp->chgQuad (c+187,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[23]),64);
	vcdp->chgQuad (c+189,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[24]),64);
	vcdp->chgQuad (c+191,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[25]),64);
	vcdp->chgQuad (c+193,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[26]),64);
	vcdp->chgQuad (c+195,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[27]),64);
	vcdp->chgQuad (c+197,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[28]),64);
	vcdp->chgQuad (c+199,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[29]),64);
	vcdp->chgQuad (c+201,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[30]),64);
	vcdp->chgQuad (c+203,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[31]),64);
	vcdp->chgArray(c+206,(vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__shadowq),128);
	vcdp->chgBit  (c+210,(vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__shadowValid));
	vcdp->chgBit  (c+211,((1U & (~ (IData)(vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__shadowValid)))));
	vcdp->chgBit  (c+205,(vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__priv_qValidla2));
	vcdp->chgBit  (c+212,(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__priv_qValidla2));
	vcdp->chgArray(c+215,(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__shadowq),69);
	vcdp->chgBit  (c+218,(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__shadowValid));
	vcdp->chgBit  (c+213,(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__priv_qValidla2));
	vcdp->chgBit  (c+219,((1U & (~ (IData)(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__shadowValid)))));
	vcdp->chgBit  (c+214,(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__priv_qValidla2));
	vcdp->chgQuad (c+220,(vlTOPp->v__DOT__e__DOT__a__DOT__desired_pc),64);
	vcdp->chgBit  (c+222,(vlTOPp->v__DOT__e__DOT__a__DOT__busy));
	vcdp->chgQuad (c+223,(vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__shadowq),63);
	vcdp->chgBit  (c+126,(vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__priv_qValidla2));
	vcdp->chgBit  (c+127,(vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__priv_qValidla2));
	vcdp->chgArray(c+225,(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__shadowq),137);
	vcdp->chgBit  (c+230,(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__shadowValid));
	vcdp->chgBit  (c+231,(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__priv_qValidla2));
	vcdp->chgBit  (c+232,((1U & (~ (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__shadowValid)))));
    }
}

void Vcore::traceChgThis__14(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+233,((0x1fU & vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem2__q[2U])),5);
	vcdp->chgQuad (c+234,((((QData)((IData)(vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem2__q[1U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem2__q[0U])))),64);
	vcdp->chgArray(c+236,(vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem2__q),69);
	vcdp->chgBit  (c+239,(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__q_enable));
    }
}

void Vcore::traceChgThis__15(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+240,(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__shadowq),69);
	vcdp->chgBit  (c+243,(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__shadowValid));
	vcdp->chgBit  (c+244,((1U & (~ (IData)(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__shadowValid)))));
    }
}

void Vcore::traceChgThis__16(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+245,((0x1fU & vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem1__q[2U])),5);
	vcdp->chgQuad (c+246,((((QData)((IData)(vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem1__q[1U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem1__q[0U])))),64);
	vcdp->chgArray(c+248,(vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem1__q),69);
	vcdp->chgBit  (c+251,(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__q_enable));
    }
}

void Vcore::traceChgThis__17(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+252,(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__shadowq),69);
	vcdp->chgBit  (c+255,(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__shadowValid));
	vcdp->chgBit  (c+256,((1U & (~ (IData)(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__shadowValid)))));
    }
}

void Vcore::traceChgThis__18(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    //char	__VpadToAlign228[4];
    VL_SIGW(__Vtemp60,95,0,3);
    // Body
    {
	__Vtemp60[0U] = (IData)((((QData)((IData)(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[2U])) 
				  << 0x39U) | (((QData)((IData)(
								vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U])) 
						<< 0x19U) 
					       | ((QData)((IData)(
								  vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U])) 
						  >> 7U))));
	__Vtemp60[1U] = (IData)(((((QData)((IData)(
						   vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[2U])) 
				   << 0x39U) | (((QData)((IData)(
								 vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U])) 
						 << 0x19U) 
						| ((QData)((IData)(
								   vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U])) 
						   >> 7U))) 
				 >> 0x20U));
	__Vtemp60[2U] = (0x1fU & ((vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U] 
				   << 0x1fU) | (vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U] 
						>> 1U)));
	vcdp->chgArray(c+262,(__Vtemp60),69);
	vcdp->chgBus  (c+257,((0x1fU & ((vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U] 
					 << 0x1fU) 
					| (vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U] 
					   >> 1U)))),5);
	vcdp->chgBit  (c+258,((1U & (vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U] 
				     >> 6U))));
	vcdp->chgQuad (c+259,((((QData)((IData)(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[2U])) 
				<< 0x39U) | (((QData)((IData)(
							      vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U])) 
					      << 0x19U) 
					     | ((QData)((IData)(
								vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U])) 
						>> 7U)))),64);
	vcdp->chgArray(c+265,(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q),71);
	vcdp->chgBit  (c+261,(vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__q_enable));
    }
}

void Vcore::traceChgThis__19(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+270,(vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__shadowq),71);
	vcdp->chgBit  (c+268,(vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__shadowValid));
	vcdp->chgBit  (c+269,((1U & (~ (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__shadowValid)))));
    }
}

void Vcore::traceChgThis__20(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+278,(vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q),160);
	vcdp->chgBit  (c+283,(vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__q_enable));
	vcdp->chgBus  (c+284,((0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])),7);
	vcdp->chgBus  (c+285,((0x1fU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
					 << 0x11U) 
					| (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
					   >> 0xfU)))),5);
	vcdp->chgBus  (c+286,((0x1fU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
					 << 0xcU) | 
					(vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
					 >> 0x14U)))),5);
	vcdp->chgBus  (c+273,(vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]),32);
	vcdp->chgQuad (c+274,((((QData)((IData)(vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U])))),64);
	vcdp->chgQuad (c+276,((((QData)((IData)(vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U])))),64);
	vcdp->chgBus  (c+287,((0x1fU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
					 << 0x19U) 
					| (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
					   >> 7U)))),5);
	vcdp->chgBus  (c+288,((7U & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
				      << 0x14U) | (
						   vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
						   >> 0xcU)))),3);
	vcdp->chgBus  (c+289,((0x7fU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
					 << 7U) | (
						   vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
						   >> 0x19U)))),7);
	vcdp->chgBus  (c+290,((0x3fU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
					 << 0xcU) | 
					(vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
					 >> 0x14U)))),6);
    }
}

void Vcore::traceChgThis__21(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+291,(vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__shadowq),160);
	vcdp->chgBit  (c+296,(vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__shadowValid));
	vcdp->chgBit  (c+297,((1U & (~ (IData)(vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__shadowValid)))));
    }
}

void Vcore::traceChgThis__22(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+299,((VL_ULL(0x7fffffffffffffff) 
			       & (((QData)((IData)(
						   vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[1U])) 
				   << 0x20U) | (QData)((IData)(
							       vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[0U]))))),63);
	vcdp->chgArray(c+301,(vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q),95);
	vcdp->chgBit  (c+304,(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__q_enable));
	vcdp->chgBus  (c+298,(((vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
				<< 1U) | (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[1U] 
					  >> 0x1fU))),32);
	vcdp->chgQuad (c+305,((VL_ULL(0xfffffffffffffffe) 
			       & (((QData)((IData)(
						   vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[1U])) 
				   << 0x21U) | ((QData)((IData)(
								vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[0U])) 
						<< 1U)))),64);
	vcdp->chgBus  (c+307,((0x1fU & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
					>> 0xeU))),5);
	vcdp->chgBus  (c+308,((0x1fU & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
					>> 0x13U))),5);
	vcdp->chgBus  (c+309,((0x1fU & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
					>> 6U))),5);
	vcdp->chgBus  (c+310,((0xfffU & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
					 >> 0x13U))),12);
	vcdp->chgBus  (c+311,((0xfffffU & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
					   >> 0xbU))),20);
	vcdp->chgBus  (c+312,((0x7fU & ((vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
					 << 1U) | (
						   vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[1U] 
						   >> 0x1fU)))),7);
    }
}

void Vcore::traceChgThis__23(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+313,(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__shadowq),95);
	vcdp->chgBit  (c+316,(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__shadowValid));
	vcdp->chgBit  (c+317,((1U & (~ (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__shadowValid)))));
    }
}

void Vcore::traceChgThis__24(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+330,(vlTOPp->icache_req_addr),64);
	vcdp->chgQuad (c+347,(vlTOPp->debug_pc_ex),64);
	vcdp->chgBit  (c+349,(vlTOPp->debug_dest_valid));
	vcdp->chgQuad (c+350,(vlTOPp->debug_dest),64);
	vcdp->chgBus  (c+352,(vlTOPp->debug_dest_rd),5);
	vcdp->chgBit  (c+353,(vlTOPp->debug_dest_long));
	vcdp->chgBit  (c+320,(vlTOPp->icache_ack_data_retry));
	vcdp->chgBit  (c+321,(vlTOPp->icache_ack_data_valid));
	vcdp->chgArray(c+322,(vlTOPp->icache_ack_data),256);
	vcdp->chgBit  (c+354,(((IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__shadowValid) 
			       | (IData)(vlTOPp->reset))));
	vcdp->chgBit  (c+332,(vlTOPp->icache_req_addr_valid));
	vcdp->chgBit  (c+333,(vlTOPp->icache_req_addr_retry));
	vcdp->chgBit  (c+355,(((IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__shadowValid) 
			       | (IData)(vlTOPp->reset))));
	vcdp->chgBit  (c+346,(vlTOPp->dcache_ack_retry));
	vcdp->chgBit  (c+357,(((IData)(vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__shadowValid) 
			       | (IData)(vlTOPp->reset))));
	vcdp->chgQuad (c+342,(vlTOPp->dcache_ack_data),64);
	vcdp->chgBus  (c+344,(vlTOPp->dcache_ack_rd),5);
	vcdp->chgBit  (c+345,(vlTOPp->dcache_ack_valid));
	vcdp->chgBit  (c+358,(((IData)(vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__shadowValid) 
			       | (IData)(vlTOPp->reset))));
	vcdp->chgBit  (c+359,(((IData)(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__shadowValid) 
			       | (IData)(vlTOPp->reset))));
	vcdp->chgBit  (c+360,(((IData)(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__shadowValid) 
			       | (IData)(vlTOPp->reset))));
	vcdp->chgBit  (c+361,(((IData)(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__shadowValid) 
			       | (IData)(vlTOPp->reset))));
	vcdp->chgQuad (c+334,(vlTOPp->dcache_req_addr),64);
	vcdp->chgQuad (c+336,(vlTOPp->dcache_req_data),64);
	vcdp->chgBus  (c+338,(vlTOPp->dcache_req_op),4);
	vcdp->chgBus  (c+339,(vlTOPp->dcache_req_rd),5);
	vcdp->chgBit  (c+356,(((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__shadowValid) 
			       | (IData)(vlTOPp->reset))));
	vcdp->chgBit  (c+318,(vlTOPp->clk));
	vcdp->chgBit  (c+319,(vlTOPp->reset));
	vcdp->chgBit  (c+340,(vlTOPp->dcache_req_valid));
	vcdp->chgBit  (c+341,(vlTOPp->dcache_req_retry));
    }
}
