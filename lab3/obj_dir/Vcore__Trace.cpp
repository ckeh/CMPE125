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
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vcore::traceChgThis__2(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp37,95,0,3);
    //char	__VpadToAlign20[4];
    VL_SIGW(__Vtemp38,95,0,3);
    // Body
    {
	vcdp->chgQuad (c+6,((VL_ULL(0x7ffffffffffffff) 
			     & (vlTOPp->v__DOT__execute_pc 
				>> 4U))),59);
	vcdp->chgBus  (c+1,(vlTOPp->v__DOT__fetch_insn_retry),1);
	vcdp->chgBus  (c+8,(vlTOPp->v__DOT__d__DOT__r__DOT__rf_cntr),5);
	vcdp->chgQuad (c+9,(((0x63U == (0x7fU & vlTOPp->v__DOT__fetch_insn))
			      ? ((VL_ULL(0xffffffffffffe000) 
				  & (VL_NEGATE_Q((QData)((IData)(
								 (1U 
								  & ((IData)(vlTOPp->v__DOT__d__DOT__s__DOT__branchimm) 
								     >> 0xcU))))) 
				     << 0xdU)) | (QData)((IData)(vlTOPp->v__DOT__d__DOT__s__DOT__branchimm)))
			      : ((0x6fU == (0x7fU & vlTOPp->v__DOT__fetch_insn))
				  ? ((VL_ULL(0xffffffffffe00000) 
				      & (VL_NEGATE_Q((QData)((IData)(
								     (1U 
								      & (vlTOPp->v__DOT__d__DOT__s__DOT__jalimm 
									 >> 0x14U))))) 
					 << 0x15U)) 
				     | (QData)((IData)(vlTOPp->v__DOT__d__DOT__s__DOT__jalimm)))
				  : ((0x17U == (0x7fU 
						& vlTOPp->v__DOT__fetch_insn))
				      ? (((QData)((IData)(
							  VL_NEGATE_I((IData)(
									      (1U 
									       & (vlTOPp->v__DOT__fetch_insn 
										>> 0x1fU)))))) 
					  << 0x20U) 
					 | (QData)((IData)(
							   (0xfffff000U 
							    & vlTOPp->v__DOT__fetch_insn))))
				      : ((VL_ULL(0xfffffffffffff000) 
					  & (VL_NEGATE_Q((QData)((IData)(
									 (1U 
									  & (vlTOPp->v__DOT__fetch_insn 
									     >> 0x1fU))))) 
					     << 0xcU)) 
					 | (QData)((IData)(
							   (0xfffU 
							    & (vlTOPp->v__DOT__fetch_insn 
							       >> 0x14U))))))))),64);
	vcdp->chgBus  (c+11,(vlTOPp->v__DOT__d__DOT__s__DOT__branchimm),13);
	vcdp->chgBus  (c+12,(vlTOPp->v__DOT__d__DOT__s__DOT__jalimm),21);
	vcdp->chgQuad (c+2,(vlTOPp->v__DOT__execute_pc),63);
	vcdp->chgBit  (c+13,(vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next));
	vcdp->chgBit  (c+14,(vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next));
	vcdp->chgQuad (c+15,(vlTOPp->v__DOT__e__DOT__a__DOT__dest_next),64);
	vcdp->chgBit  (c+17,(vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next));
	vcdp->chgQuad (c+18,(vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next),64);
	vcdp->chgBus  (c+4,(vlTOPp->v__DOT__execute_retry),1);
	vcdp->chgBus  (c+5,(vlTOPp->v__DOT__decode_retry),1);
	__Vtemp37[0U] = ((0xfffffffeU & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next) 
					 << 1U)) | (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next));
	__Vtemp37[1U] = ((1U & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next) 
				>> 0x1fU)) | (0xfffffffeU 
					      & ((IData)(
							 (vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
							  >> 0x20U)) 
						 << 1U)));
	__Vtemp37[2U] = (1U & ((IData)((vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
					>> 0x20U)) 
			       >> 0x1fU));
	vcdp->chgArray(c+20,(__Vtemp37),65);
	__Vtemp38[0U] = ((0xfffffffcU & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dest_next) 
					 << 2U)) | 
			 (((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next) 
			   << 1U) | (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next)));
	__Vtemp38[1U] = ((3U & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dest_next) 
				>> 0x1eU)) | (0xfffffffcU 
					      & ((IData)(
							 (vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							  >> 0x20U)) 
						 << 2U)));
	__Vtemp38[2U] = (3U & ((IData)((vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					>> 0x20U)) 
			       >> 0x1eU));
	vcdp->chgArray(c+23,(__Vtemp38),66);
    }
}

void Vcore::traceChgThis__3(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+26,(vlTOPp->v__DOT__f__DOT__i__DOT__ic_valid_we));
	vcdp->chgBit  (c+27,(vlTOPp->v__DOT__f__DOT__i__DOT__ic_data_we));
	vcdp->chgBit  (c+28,(vlTOPp->v__DOT__f__DOT__i__DOT__ic_tag_we));
	vcdp->chgBit  (c+29,(vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_valid_next));
	vcdp->chgBus  (c+30,(vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_next),32);
	vcdp->chgBit  (c+31,(vlTOPp->v__DOT__f__DOT__i__DOT__icache_req_addr_valid_next));
	vcdp->chgBus  (c+32,(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset),5);
	vcdp->chgBus  (c+33,(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index),6);
	vcdp->chgQuad (c+34,(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_tag),53);
	vcdp->chgBit  (c+36,(vlTOPp->v__DOT__f__DOT__i__DOT__pc_valid_next));
    }
}

void Vcore::traceChgThis__4(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+59,(vlTOPp->v__DOT__f__DOT__i__DOT__clear_idx),6);
	vcdp->chgBit  (c+60,(vlTOPp->v__DOT__f__DOT__i__DOT__pc_valid));
	vcdp->chgQuad (c+57,(vlTOPp->v__DOT__req_addr),59);
	vcdp->chgQuad (c+39,(vlTOPp->v__DOT__fetch_pc),63);
	vcdp->chgQuad (c+61,((vlTOPp->v__DOT__fetch_pc 
			      << 1U)),64);
	vcdp->chgBus  (c+63,((0x1fU & (vlTOPp->v__DOT__fetch_insn 
				       >> 0xfU))),5);
	vcdp->chgBus  (c+64,((0x1fU & (vlTOPp->v__DOT__fetch_insn 
				       >> 0x14U))),5);
	vcdp->chgQuad (c+65,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[0]),64);
	vcdp->chgQuad (c+67,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[1]),64);
	vcdp->chgQuad (c+69,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[2]),64);
	vcdp->chgQuad (c+71,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[3]),64);
	vcdp->chgQuad (c+73,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[4]),64);
	vcdp->chgQuad (c+75,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[5]),64);
	vcdp->chgQuad (c+77,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[6]),64);
	vcdp->chgQuad (c+79,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[7]),64);
	vcdp->chgQuad (c+81,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[8]),64);
	vcdp->chgQuad (c+83,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[9]),64);
	vcdp->chgQuad (c+85,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[10]),64);
	vcdp->chgQuad (c+87,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[11]),64);
	vcdp->chgQuad (c+89,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[12]),64);
	vcdp->chgQuad (c+91,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[13]),64);
	vcdp->chgQuad (c+93,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[14]),64);
	vcdp->chgQuad (c+95,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[15]),64);
	vcdp->chgQuad (c+97,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[16]),64);
	vcdp->chgQuad (c+99,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[17]),64);
	vcdp->chgQuad (c+101,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[18]),64);
	vcdp->chgQuad (c+103,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[19]),64);
	vcdp->chgQuad (c+105,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[20]),64);
	vcdp->chgQuad (c+107,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[21]),64);
	vcdp->chgQuad (c+109,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[22]),64);
	vcdp->chgQuad (c+111,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[23]),64);
	vcdp->chgQuad (c+113,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[24]),64);
	vcdp->chgQuad (c+115,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[25]),64);
	vcdp->chgQuad (c+117,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[26]),64);
	vcdp->chgQuad (c+119,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[27]),64);
	vcdp->chgQuad (c+121,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[28]),64);
	vcdp->chgQuad (c+123,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[29]),64);
	vcdp->chgQuad (c+125,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[30]),64);
	vcdp->chgQuad (c+127,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[31]),64);
	vcdp->chgBus  (c+38,(vlTOPp->v__DOT__fetch_insn),32);
	vcdp->chgBus  (c+129,((0xfffU & (vlTOPp->v__DOT__fetch_insn 
					 >> 0x14U))),12);
	vcdp->chgBus  (c+130,((0xfffffU & (vlTOPp->v__DOT__fetch_insn 
					   >> 0xcU))),20);
	vcdp->chgBus  (c+131,((0x7fU & vlTOPp->v__DOT__fetch_insn)),7);
	vcdp->chgBit  (c+37,(vlTOPp->v__DOT__fetch_insn_valid));
	vcdp->chgBus  (c+132,((0x1fU & (vlTOPp->v__DOT__decode_insn 
					>> 7U))),5);
	vcdp->chgQuad (c+133,(vlTOPp->v__DOT__e__DOT__pc),64);
	vcdp->chgBit  (c+135,((1U & vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f1__q[0U])));
	vcdp->chgQuad (c+136,((((QData)((IData)(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f1__q[2U])) 
				<< 0x3fU) | (((QData)((IData)(
							      vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f1__q[1U])) 
					      << 0x1fU) 
					     | ((QData)((IData)(
								vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f1__q[0U])) 
						>> 1U)))),64);
	vcdp->chgBus  (c+41,(vlTOPp->v__DOT__execute_valid),1);
	vcdp->chgQuad (c+138,((VL_ULL(4) + vlTOPp->v__DOT__decode_pc)),64);
	vcdp->chgBus  (c+43,(vlTOPp->v__DOT__decode_insn),32);
	vcdp->chgQuad (c+44,(vlTOPp->v__DOT__decode_pc),64);
	vcdp->chgQuad (c+46,(vlTOPp->v__DOT__decode_sign_ext),64);
	vcdp->chgQuad (c+48,(vlTOPp->v__DOT__decode_src1),64);
	vcdp->chgQuad (c+50,(vlTOPp->v__DOT__decode_src2),64);
	vcdp->chgBit  (c+53,((1U & vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[0U])));
	vcdp->chgBit  (c+54,((1U & (vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[0U] 
				    >> 1U))));
	vcdp->chgQuad (c+55,((((QData)((IData)(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[2U])) 
			       << 0x3eU) | (((QData)((IData)(
							     vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[1U])) 
					     << 0x1eU) 
					    | ((QData)((IData)(
							       vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[0U])) 
					       >> 2U)))),64);
	vcdp->chgBus  (c+140,((0x7fU & vlTOPp->v__DOT__decode_insn)),7);
	vcdp->chgBus  (c+141,((0x1fU & (vlTOPp->v__DOT__decode_insn 
					>> 0x14U))),5);
	vcdp->chgBus  (c+142,((7U & (vlTOPp->v__DOT__decode_insn 
				     >> 0xcU))),3);
	vcdp->chgBus  (c+143,((0x7fU & (vlTOPp->v__DOT__decode_insn 
					>> 0x19U))),7);
	vcdp->chgBus  (c+144,((0x3fU & (vlTOPp->v__DOT__decode_insn 
					>> 0x14U))),6);
	vcdp->chgArray(c+145,(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f1__q),65);
	vcdp->chgArray(c+148,(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q),66);
	vcdp->chgBit  (c+42,(vlTOPp->v__DOT__decode_valid));
	vcdp->chgBus  (c+52,(vlTOPp->v__DOT__dest_rd),5);
    }
}

void Vcore::traceChgThis__5(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+162,(vlTOPp->icache_req_addr),64);
	vcdp->chgQuad (c+165,(vlTOPp->debug_pc_ex),64);
	vcdp->chgBit  (c+167,(vlTOPp->debug_dest_valid));
	vcdp->chgQuad (c+168,(vlTOPp->debug_dest),64);
	vcdp->chgBus  (c+170,(vlTOPp->debug_dest_rd),5);
	vcdp->chgBit  (c+171,(vlTOPp->debug_dest_long));
	vcdp->chgBit  (c+153,(vlTOPp->icache_ack_data_valid));
	vcdp->chgArray(c+154,(vlTOPp->icache_ack_data),256);
	vcdp->chgBus  (c+164,(vlTOPp->icache_req_addr_valid),1);
	vcdp->chgBit  (c+151,(vlTOPp->clk));
	vcdp->chgBit  (c+152,(vlTOPp->reset));
    }
}
