// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcore__Syms.h"


//======================

void Vcore::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&Vcore::traceInit, &Vcore::traceFull, &Vcore::traceChg, this);
}
void Vcore::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vcore* t=(Vcore*)userthis;
    Vcore__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vcore::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vcore* t=(Vcore*)userthis;
    Vcore__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void Vcore::traceInitThis(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vcore::traceFullThis(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vcore::traceInitThis__1(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+151,"clk",-1);
	vcdp->declBit  (c+152,"reset",-1);
	vcdp->declBit  (c+153,"icache_ack_data_valid",-1);
	vcdp->declArray(c+154,"icache_ack_data",-1,255,0);
	vcdp->declQuad (c+162,"icache_req_addr",-1,63,0);
	vcdp->declBit  (c+164,"icache_req_addr_valid",-1);
	vcdp->declQuad (c+165,"debug_pc_ex",-1,63,0);
	vcdp->declBit  (c+167,"debug_dest_valid",-1);
	vcdp->declQuad (c+168,"debug_dest",-1,63,0);
	vcdp->declBus  (c+170,"debug_dest_rd",-1,4,0);
	vcdp->declBit  (c+171,"debug_dest_long",-1);
	vcdp->declBit  (c+151,"v clk",-1);
	vcdp->declBit  (c+152,"v reset",-1);
	vcdp->declBit  (c+153,"v icache_ack_data_valid",-1);
	vcdp->declArray(c+154,"v icache_ack_data",-1,255,0);
	vcdp->declQuad (c+162,"v icache_req_addr",-1,63,0);
	vcdp->declBit  (c+164,"v icache_req_addr_valid",-1);
	vcdp->declQuad (c+165,"v debug_pc_ex",-1,63,0);
	vcdp->declBit  (c+167,"v debug_dest_valid",-1);
	vcdp->declQuad (c+168,"v debug_dest",-1,63,0);
	vcdp->declBus  (c+170,"v debug_dest_rd",-1,4,0);
	vcdp->declBit  (c+171,"v debug_dest_long",-1);
	vcdp->declBit  (c+37,"v fetch_insn_valid",-1);
	vcdp->declBit  (c+1,"v fetch_insn_retry",-1);
	vcdp->declBus  (c+38,"v fetch_insn",-1,31,0);
	vcdp->declQuad (c+39,"v fetch_pc",-1,62,0);
	vcdp->declBit  (c+41,"v execute_valid",-1);
	vcdp->declQuad (c+2,"v execute_pc",-1,62,0);
	vcdp->declBit  (c+4,"v execute_retry",-1);
	vcdp->declBit  (c+5,"v decode_retry",-1);
	vcdp->declBit  (c+42,"v decode_valid",-1);
	vcdp->declBus  (c+43,"v decode_insn",-1,31,0);
	vcdp->declQuad (c+44,"v decode_pc",-1,63,0);
	vcdp->declQuad (c+46,"v decode_sign_ext",-1,63,0);
	vcdp->declQuad (c+48,"v decode_src1",-1,63,0);
	vcdp->declQuad (c+50,"v decode_src2",-1,63,0);
	vcdp->declBus  (c+52,"v dest_rd",-1,4,0);
	vcdp->declBit  (c+53,"v dest_valid",-1);
	vcdp->declBit  (c+54,"v dest_long",-1);
	vcdp->declQuad (c+55,"v dest",-1,63,0);
	vcdp->declQuad (c+57,"v req_addr",-1,58,0);
	vcdp->declBit  (c+151,"v f clk",-1);
	vcdp->declBit  (c+152,"v f reset",-1);
	vcdp->declBit  (c+153,"v f icache_ack_data_valid",-1);
	vcdp->declArray(c+154,"v f icache_ack_data",-1,255,0);
	vcdp->declQuad (c+57,"v f icache_req_addr",-1,58,0);
	vcdp->declBit  (c+164,"v f icache_req_addr_valid",-1);
	vcdp->declBit  (c+41,"v f execute_valid",-1);
	vcdp->declBit  (c+4,"v f execute_retry",-1);
	vcdp->declQuad (c+2,"v f execute_pc",-1,62,0);
	vcdp->declBit  (c+37,"v f fetch_insn_valid",-1);
	vcdp->declBit  (c+1,"v f fetch_insn_retry",-1);
	vcdp->declBus  (c+38,"v f fetch_insn",-1,31,0);
	vcdp->declQuad (c+39,"v f fetch_pc",-1,62,0);
	vcdp->declBus  (c+172,"v f f_retry Bits",-1,31,0);
	vcdp->declBit  (c+151,"v f f_retry clk",-1);
	vcdp->declBit  (c+152,"v f f_retry reset",-1);
	vcdp->declBus  (c+1,"v f f_retry d",-1,0,0);
	vcdp->declBus  (c+4,"v f f_retry q",-1,0,0);
	vcdp->declBit  (c+151,"v f i clk",-1);
	vcdp->declBit  (c+152,"v f i reset",-1);
	vcdp->declBit  (c+153,"v f i icache_ack_data_valid",-1);
	vcdp->declArray(c+154,"v f i icache_ack_data",-1,255,0);
	vcdp->declQuad (c+57,"v f i icache_req_addr",-1,58,0);
	vcdp->declBit  (c+164,"v f i icache_req_addr_valid",-1);
	vcdp->declQuad (c+2,"v f i core_req_pc",-1,62,0);
	vcdp->declBit  (c+41,"v f i core_req_pc_valid",-1);
	vcdp->declBus  (c+38,"v f i core_ack_insn",-1,31,0);
	vcdp->declBit  (c+37,"v f i core_ack_insn_valid",-1);
	vcdp->declBit  (c+26,"v f i ic_valid_we",-1);
	vcdp->declBit  (c+27,"v f i ic_data_we",-1);
	vcdp->declBit  (c+28,"v f i ic_tag_we",-1);
	// Tracing: v f i ic_valid // Ignored: Wide memory > --trace-max-array ents at rtl/icache.v:48
	// Tracing: v f i ic_tag // Ignored: Wide memory > --trace-max-array ents at rtl/icache.v:49
	// Tracing: v f i ic_data // Ignored: Wide memory > --trace-max-array ents at rtl/icache.v:50
	vcdp->declBit  (c+29,"v f i core_ack_insn_valid_next",-1);
	vcdp->declBus  (c+30,"v f i core_ack_insn_next",-1,31,0);
	vcdp->declBit  (c+31,"v f i icache_req_addr_valid_next",-1);
	vcdp->declQuad (c+6,"v f i icache_req_addr_next",-1,58,0);
	vcdp->declBus  (c+32,"v f i pc_req_offset",-1,4,0);
	vcdp->declBus  (c+33,"v f i pc_req_index",-1,5,0);
	vcdp->declQuad (c+34,"v f i pc_req_tag",-1,52,0);
	vcdp->declBus  (c+59,"v f i clear_idx",-1,5,0);
	vcdp->declBit  (c+60,"v f i pc_valid",-1);
	vcdp->declBit  (c+36,"v f i pc_valid_next",-1);
	vcdp->declBus  (c+172,"v f i f_pc_valid Bits",-1,31,0);
	vcdp->declBit  (c+151,"v f i f_pc_valid clk",-1);
	vcdp->declBit  (c+152,"v f i f_pc_valid reset",-1);
	vcdp->declBus  (c+36,"v f i f_pc_valid d",-1,0,0);
	vcdp->declBus  (c+60,"v f i f_pc_valid q",-1,0,0);
	vcdp->declBus  (c+173,"v f i f_icache_req Bits",-1,31,0);
	vcdp->declBit  (c+151,"v f i f_icache_req clk",-1);
	vcdp->declBit  (c+152,"v f i f_icache_req reset",-1);
	vcdp->declQuad (c+6,"v f i f_icache_req d",-1,58,0);
	vcdp->declQuad (c+57,"v f i f_icache_req q",-1,58,0);
	vcdp->declBus  (c+172,"v f i f_icache_valid Bits",-1,31,0);
	vcdp->declBit  (c+151,"v f i f_icache_valid clk",-1);
	vcdp->declBit  (c+152,"v f i f_icache_valid reset",-1);
	vcdp->declBus  (c+31,"v f i f_icache_valid d",-1,0,0);
	vcdp->declBus  (c+164,"v f i f_icache_valid q",-1,0,0);
	vcdp->declBus  (c+174,"v f i f_ack_insn Bits",-1,31,0);
	vcdp->declBit  (c+151,"v f i f_ack_insn clk",-1);
	vcdp->declBit  (c+152,"v f i f_ack_insn reset",-1);
	vcdp->declBus  (c+30,"v f i f_ack_insn d",-1,31,0);
	vcdp->declBus  (c+38,"v f i f_ack_insn q",-1,31,0);
	vcdp->declBus  (c+172,"v f i f_ack_insn_valid Bits",-1,31,0);
	vcdp->declBit  (c+151,"v f i f_ack_insn_valid clk",-1);
	vcdp->declBit  (c+152,"v f i f_ack_insn_valid reset",-1);
	vcdp->declBus  (c+29,"v f i f_ack_insn_valid d",-1,0,0);
	vcdp->declBus  (c+37,"v f i f_ack_insn_valid q",-1,0,0);
	vcdp->declBus  (c+175,"v f f_pc Bits",-1,31,0);
	vcdp->declBit  (c+151,"v f f_pc clk",-1);
	vcdp->declBit  (c+152,"v f f_pc reset",-1);
	vcdp->declQuad (c+2,"v f f_pc d",-1,62,0);
	vcdp->declQuad (c+39,"v f f_pc q",-1,62,0);
	vcdp->declBit  (c+151,"v d clk",-1);
	vcdp->declBit  (c+152,"v d reset",-1);
	vcdp->declBus  (c+38,"v d fetch_insn",-1,31,0);
	vcdp->declBit  (c+37,"v d fetch_insn_valid",-1);
	vcdp->declBit  (c+1,"v d fetch_insn_retry",-1);
	vcdp->declQuad (c+61,"v d fetch_pc",-1,63,0);
	vcdp->declBit  (c+5,"v d decode_retry",-1);
	vcdp->declBit  (c+42,"v d decode_valid",-1);
	vcdp->declBus  (c+43,"v d decode_insn",-1,31,0);
	vcdp->declQuad (c+44,"v d decode_pc",-1,63,0);
	vcdp->declQuad (c+46,"v d decode_sign_ext",-1,63,0);
	vcdp->declQuad (c+48,"v d decode_src1",-1,63,0);
	vcdp->declQuad (c+50,"v d decode_src2",-1,63,0);
	vcdp->declBus  (c+52,"v d dest_rd",-1,4,0);
	vcdp->declBit  (c+53,"v d dest_valid",-1);
	vcdp->declBit  (c+54,"v d dest_long",-1);
	vcdp->declQuad (c+55,"v d dest",-1,63,0);
	vcdp->declBus  (c+63,"v d rs1",-1,4,0);
	vcdp->declBus  (c+64,"v d rs2",-1,4,0);
	vcdp->declBus  (c+172,"v d f_retry Bits",-1,31,0);
	vcdp->declBit  (c+151,"v d f_retry clk",-1);
	vcdp->declBit  (c+152,"v d f_retry reset",-1);
	vcdp->declBus  (c+5,"v d f_retry d",-1,0,0);
	vcdp->declBus  (c+1,"v d f_retry q",-1,0,0);
	vcdp->declBus  (c+172,"v d d_valid Bits",-1,31,0);
	vcdp->declBit  (c+151,"v d d_valid clk",-1);
	vcdp->declBit  (c+152,"v d d_valid reset",-1);
	vcdp->declBus  (c+37,"v d d_valid d",-1,0,0);
	vcdp->declBus  (c+42,"v d d_valid q",-1,0,0);
	vcdp->declBus  (c+176,"v d d_pc Bits",-1,31,0);
	vcdp->declQuad (c+177,"v d d_pc Reset_Value",-1,63,0);
	vcdp->declBit  (c+151,"v d d_pc clk",-1);
	vcdp->declBit  (c+152,"v d d_pc reset",-1);
	vcdp->declBit  (c+37,"v d d_pc we",-1);
	vcdp->declQuad (c+61,"v d d_pc d",-1,63,0);
	vcdp->declQuad (c+44,"v d d_pc q",-1,63,0);
	vcdp->declBus  (c+174,"v d d_insn Bits",-1,31,0);
	vcdp->declBit  (c+151,"v d d_insn clk",-1);
	vcdp->declBit  (c+152,"v d d_insn reset",-1);
	vcdp->declBit  (c+37,"v d d_insn we",-1);
	vcdp->declBus  (c+38,"v d d_insn d",-1,31,0);
	vcdp->declBus  (c+43,"v d d_insn q",-1,31,0);
	vcdp->declBit  (c+151,"v d r clk",-1);
	vcdp->declBit  (c+152,"v d r reset",-1);
	vcdp->declBus  (c+63,"v d r rs1",-1,4,0);
	vcdp->declBus  (c+64,"v d r rs2",-1,4,0);
	vcdp->declBus  (c+52,"v d r rd",-1,4,0);
	vcdp->declBit  (c+53,"v d r we",-1);
	vcdp->declQuad (c+55,"v d r dest",-1,63,0);
	vcdp->declBit  (c+54,"v d r dest_long",-1);
	vcdp->declQuad (c+48,"v d r data1",-1,63,0);
	vcdp->declQuad (c+50,"v d r data2",-1,63,0);
	{int i; for (i=0; i<32; i++) {
		vcdp->declQuad (c+65+i*2,"v d r rf",(i+0),63,0);}}
	vcdp->declBus  (c+8,"v d r rf_cntr",-1,4,0);
	vcdp->declBit  (c+151,"v d s clk",-1);
	vcdp->declBit  (c+152,"v d s reset",-1);
	vcdp->declBus  (c+38,"v d s insn",-1,31,0);
	vcdp->declBit  (c+37,"v d s insn_valid",-1);
	vcdp->declQuad (c+46,"v d s sign_ext",-1,63,0);
	vcdp->declQuad (c+9,"v d s sign_ext_next",-1,63,0);
	vcdp->declBus  (c+129,"v d s imm12",-1,11,0);
	vcdp->declBus  (c+130,"v d s imm20",-1,19,0);
	vcdp->declBus  (c+11,"v d s branchimm",-1,12,0);
	vcdp->declBus  (c+12,"v d s jalimm",-1,20,0);
	vcdp->declBus  (c+131,"v d s op",-1,6,0);
	vcdp->declBus  (c+176,"v d s f_sign_ext Bits",-1,31,0);
	vcdp->declBit  (c+151,"v d s f_sign_ext clk",-1);
	vcdp->declBit  (c+152,"v d s f_sign_ext reset",-1);
	vcdp->declBit  (c+37,"v d s f_sign_ext we",-1);
	vcdp->declQuad (c+9,"v d s f_sign_ext d",-1,63,0);
	vcdp->declQuad (c+46,"v d s f_sign_ext q",-1,63,0);
	vcdp->declBit  (c+151,"v e clk",-1);
	vcdp->declBit  (c+152,"v e reset",-1);
	vcdp->declBit  (c+5,"v e decode_retry",-1);
	vcdp->declBit  (c+42,"v e decode_valid",-1);
	vcdp->declBus  (c+43,"v e decode_insn",-1,31,0);
	vcdp->declQuad (c+44,"v e decode_pc",-1,63,0);
	vcdp->declQuad (c+46,"v e decode_sign_ext",-1,63,0);
	vcdp->declQuad (c+48,"v e decode_src1",-1,63,0);
	vcdp->declQuad (c+50,"v e decode_src2",-1,63,0);
	vcdp->declBit  (c+41,"v e execute_valid",-1);
	vcdp->declBit  (c+4,"v e execute_retry",-1);
	vcdp->declQuad (c+2,"v e execute_pc",-1,62,0);
	vcdp->declBus  (c+52,"v e dest_rd",-1,4,0);
	vcdp->declBit  (c+53,"v e dest_valid",-1);
	vcdp->declBit  (c+54,"v e dest_long",-1);
	vcdp->declQuad (c+55,"v e dest",-1,63,0);
	vcdp->declBus  (c+132,"v e dest_rd_next",-1,4,0);
	vcdp->declQuad (c+133,"v e pc",-1,63,0);
	vcdp->declBit  (c+135,"v e branch_target_valid",-1);
	vcdp->declQuad (c+136,"v e branch_target_pc",-1,63,0);
	vcdp->declBus  (c+172,"v e f_valid Bits",-1,31,0);
	vcdp->declBus  (c+172,"v e f_valid Reset_Value",-1,31,0);
	vcdp->declBit  (c+151,"v e f_valid clk",-1);
	vcdp->declBit  (c+152,"v e f_valid reset",-1);
	vcdp->declBus  (c+42,"v e f_valid d",-1,0,0);
	vcdp->declBus  (c+41,"v e f_valid q",-1,0,0);
	vcdp->declBus  (c+172,"v e f_retry Bits",-1,31,0);
	vcdp->declBit  (c+151,"v e f_retry clk",-1);
	vcdp->declBit  (c+152,"v e f_retry reset",-1);
	vcdp->declBus  (c+4,"v e f_retry d",-1,0,0);
	vcdp->declBus  (c+5,"v e f_retry q",-1,0,0);
	vcdp->declBus  (c+176,"v e f_pc Bits",-1,31,0);
	vcdp->declQuad (c+177,"v e f_pc Reset_Value",-1,63,0);
	vcdp->declBit  (c+151,"v e f_pc clk",-1);
	vcdp->declBit  (c+152,"v e f_pc reset",-1);
	vcdp->declBit  (c+42,"v e f_pc we",-1);
	vcdp->declQuad (c+138,"v e f_pc d",-1,63,0);
	vcdp->declQuad (c+133,"v e f_pc q",-1,63,0);
	vcdp->declBit  (c+151,"v e a clk",-1);
	vcdp->declBit  (c+152,"v e a reset",-1);
	vcdp->declBit  (c+5,"v e a insn_retry",-1);
	vcdp->declBit  (c+42,"v e a insn_valid",-1);
	vcdp->declBus  (c+43,"v e a insn",-1,31,0);
	vcdp->declQuad (c+44,"v e a pc",-1,63,0);
	vcdp->declQuad (c+46,"v e a sign_ext",-1,63,0);
	vcdp->declQuad (c+48,"v e a src1",-1,63,0);
	vcdp->declQuad (c+50,"v e a src2",-1,63,0);
	vcdp->declBit  (c+53,"v e a dest_valid",-1);
	vcdp->declBit  (c+54,"v e a dest_long",-1);
	vcdp->declQuad (c+55,"v e a dest",-1,63,0);
	vcdp->declBit  (c+4,"v e a branch_target_retry",-1);
	vcdp->declBit  (c+135,"v e a branch_target_valid",-1);
	vcdp->declQuad (c+136,"v e a branch_target",-1,63,0);
	vcdp->declBit  (c+13,"v e a dest_valid_next",-1);
	vcdp->declBit  (c+14,"v e a dest_long_next",-1);
	vcdp->declQuad (c+15,"v e a dest_next",-1,63,0);
	vcdp->declBit  (c+17,"v e a branch_target_valid_next",-1);
	vcdp->declQuad (c+18,"v e a branch_target_next",-1,63,0);
	vcdp->declBus  (c+179,"v e a OP_IMM",-1,6,0);
	vcdp->declBus  (c+180,"v e a AUIPC",-1,6,0);
	vcdp->declBus  (c+181,"v e a OP_IMM_32",-1,6,0);
	vcdp->declBus  (c+182,"v e a OP",-1,6,0);
	vcdp->declBus  (c+183,"v e a OP_32",-1,6,0);
	vcdp->declBus  (c+184,"v e a BRANCH",-1,6,0);
	vcdp->declBus  (c+185,"v e a JALR",-1,6,0);
	vcdp->declBus  (c+186,"v e a JAL",-1,6,0);
	vcdp->declBus  (c+140,"v e a opcode",-1,6,0);
	vcdp->declBus  (c+141,"v e a shamt",-1,4,0);
	vcdp->declBus  (c+142,"v e a funct3",-1,2,0);
	vcdp->declBus  (c+143,"v e a funct7",-1,6,0);
	vcdp->declBus  (c+144,"v e a shamt6",-1,5,0);
	vcdp->declBus  (c+187,"v e a FUNCT3_ADD",-1,2,0);
	vcdp->declBus  (c+187,"v e a FUNCT3_SUB",-1,2,0);
	vcdp->declBus  (c+188,"v e a FUNCT3_SLL",-1,2,0);
	vcdp->declBus  (c+189,"v e a FUNCT3_SLT",-1,2,0);
	vcdp->declBus  (c+190,"v e a FUNCT3_SLTU",-1,2,0);
	vcdp->declBus  (c+191,"v e a FUNCT3_XOR",-1,2,0);
	vcdp->declBus  (c+192,"v e a FUNCT3_SRL",-1,2,0);
	vcdp->declBus  (c+192,"v e a FUNCT3_SRA",-1,2,0);
	vcdp->declBus  (c+193,"v e a FUNCT3_OR",-1,2,0);
	vcdp->declBus  (c+194,"v e a FUNCT3_AND",-1,2,0);
	vcdp->declBus  (c+187,"v e a FUNCT3_ADDI",-1,2,0);
	vcdp->declBus  (c+189,"v e a FUNCT3_SLTI",-1,2,0);
	vcdp->declBus  (c+190,"v e a FUNCT3_SLTIU",-1,2,0);
	vcdp->declBus  (c+191,"v e a FUNCT3_XORI",-1,2,0);
	vcdp->declBus  (c+193,"v e a FUNCT3_ORI",-1,2,0);
	vcdp->declBus  (c+194,"v e a FUNCT3_ANDI",-1,2,0);
	vcdp->declBus  (c+188,"v e a FUNCT3_SLLI",-1,2,0);
	vcdp->declBus  (c+192,"v e a FUNCT3_SRLI",-1,2,0);
	vcdp->declBus  (c+192,"v e a FUNCT3_SRAI",-1,2,0);
	vcdp->declBus  (c+187,"v e a FUNCT3_BEQ",-1,2,0);
	vcdp->declBus  (c+188,"v e a FUNCT3_BNE",-1,2,0);
	vcdp->declBus  (c+191,"v e a FUNCT3_BLT",-1,2,0);
	vcdp->declBus  (c+192,"v e a FUNCT3_BGE",-1,2,0);
	vcdp->declBus  (c+193,"v e a FUNCT3_BLTU",-1,2,0);
	vcdp->declBus  (c+194,"v e a FUNCT3_BGEU",-1,2,0);
	vcdp->declBus  (c+195,"v e a FUNCT7_ADD",-1,6,0);
	vcdp->declBus  (c+196,"v e a FUNCT7_SUB",-1,6,0);
	vcdp->declBus  (c+195,"v e a FUNCT7_SLL",-1,6,0);
	vcdp->declBus  (c+195,"v e a FUNCT7_SLT",-1,6,0);
	vcdp->declBus  (c+195,"v e a FUNCT7_SLTU",-1,6,0);
	vcdp->declBus  (c+195,"v e a FUNCT7_XOR",-1,6,0);
	vcdp->declBus  (c+195,"v e a FUNCT7_SRL",-1,6,0);
	vcdp->declBus  (c+196,"v e a FUNCT7_SRA",-1,6,0);
	vcdp->declBus  (c+195,"v e a FUNCT7_OR",-1,6,0);
	vcdp->declBus  (c+195,"v e a FUNCT7_AND",-1,6,0);
	vcdp->declBus  (c+195,"v e a FUNCT7_SLLI",-1,6,0);
	vcdp->declBus  (c+195,"v e a FUNCT7_SRLI",-1,6,0);
	vcdp->declBus  (c+196,"v e a FUNCT7_SRAI",-1,6,0);
	vcdp->declBus  (c+197,"v e a FUNCT6_SLLI",-1,5,0);
	vcdp->declBus  (c+197,"v e a FUNCT6_SRLI",-1,5,0);
	vcdp->declBus  (c+198,"v e a FUNCT6_SRAI",-1,5,0);
	vcdp->declBus  (c+195,"v e a FUNCT7_DC",-1,6,0);
	vcdp->declBus  (c+172,"v e a f_retry Bits",-1,31,0);
	vcdp->declBit  (c+151,"v e a f_retry clk",-1);
	vcdp->declBit  (c+152,"v e a f_retry reset",-1);
	vcdp->declBus  (c+4,"v e a f_retry d",-1,0,0);
	vcdp->declBus  (c+5,"v e a f_retry q",-1,0,0);
	vcdp->declBus  (c+199,"v e a f1 Bits",-1,31,0);
	vcdp->declBit  (c+151,"v e a f1 clk",-1);
	vcdp->declBit  (c+152,"v e a f1 reset",-1);
	vcdp->declBit  (c+42,"v e a f1 we",-1);
	vcdp->declArray(c+20,"v e a f1 d",-1,64,0);
	vcdp->declArray(c+145,"v e a f1 q",-1,64,0);
	vcdp->declBus  (c+200,"v e a f2 Bits",-1,31,0);
	vcdp->declBit  (c+151,"v e a f2 clk",-1);
	vcdp->declBit  (c+152,"v e a f2 reset",-1);
	vcdp->declArray(c+23,"v e a f2 d",-1,65,0);
	vcdp->declArray(c+148,"v e a f2 q",-1,65,0);
	vcdp->declBus  (c+201,"v e dregflop Bits",-1,31,0);
	vcdp->declBit  (c+151,"v e dregflop clk",-1);
	vcdp->declBit  (c+152,"v e dregflop reset",-1);
	vcdp->declBit  (c+42,"v e dregflop we",-1);
	vcdp->declBus  (c+132,"v e dregflop d",-1,4,0);
	vcdp->declBus  (c+52,"v e dregflop q",-1,4,0);
    }
}

void Vcore::traceFullThis__1(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp35,95,0,3);
    //char	__VpadToAlign36[4];
    VL_SIGW(__Vtemp36,95,0,3);
    // Body
    {
	vcdp->fullQuad (c+6,((VL_ULL(0x7ffffffffffffff) 
			      & (vlTOPp->v__DOT__execute_pc 
				 >> 4U))),59);
	vcdp->fullBus  (c+1,(vlTOPp->v__DOT__fetch_insn_retry),1);
	vcdp->fullBus  (c+8,(vlTOPp->v__DOT__d__DOT__r__DOT__rf_cntr),5);
	vcdp->fullQuad (c+9,(((0x63U == (0x7fU & vlTOPp->v__DOT__fetch_insn))
			       ? ((VL_ULL(0xffffffffffffe000) 
				   & (VL_NEGATE_Q((QData)((IData)(
								  (1U 
								   & ((IData)(vlTOPp->v__DOT__d__DOT__s__DOT__branchimm) 
								      >> 0xcU))))) 
				      << 0xdU)) | (QData)((IData)(vlTOPp->v__DOT__d__DOT__s__DOT__branchimm)))
			       : ((0x6fU == (0x7fU 
					     & vlTOPp->v__DOT__fetch_insn))
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
	vcdp->fullBus  (c+11,(vlTOPp->v__DOT__d__DOT__s__DOT__branchimm),13);
	vcdp->fullBus  (c+12,(vlTOPp->v__DOT__d__DOT__s__DOT__jalimm),21);
	vcdp->fullQuad (c+2,(vlTOPp->v__DOT__execute_pc),63);
	vcdp->fullBit  (c+13,(vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next));
	vcdp->fullBit  (c+14,(vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next));
	vcdp->fullQuad (c+15,(vlTOPp->v__DOT__e__DOT__a__DOT__dest_next),64);
	vcdp->fullBit  (c+17,(vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next));
	vcdp->fullQuad (c+18,(vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next),64);
	vcdp->fullBus  (c+4,(vlTOPp->v__DOT__execute_retry),1);
	vcdp->fullBus  (c+5,(vlTOPp->v__DOT__decode_retry),1);
	__Vtemp35[0U] = ((0xfffffffeU & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next) 
					 << 1U)) | (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next));
	__Vtemp35[1U] = ((1U & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next) 
				>> 0x1fU)) | (0xfffffffeU 
					      & ((IData)(
							 (vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
							  >> 0x20U)) 
						 << 1U)));
	__Vtemp35[2U] = (1U & ((IData)((vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
					>> 0x20U)) 
			       >> 0x1fU));
	vcdp->fullArray(c+20,(__Vtemp35),65);
	__Vtemp36[0U] = ((0xfffffffcU & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dest_next) 
					 << 2U)) | 
			 (((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next) 
			   << 1U) | (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next)));
	__Vtemp36[1U] = ((3U & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dest_next) 
				>> 0x1eU)) | (0xfffffffcU 
					      & ((IData)(
							 (vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							  >> 0x20U)) 
						 << 2U)));
	__Vtemp36[2U] = (3U & ((IData)((vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					>> 0x20U)) 
			       >> 0x1eU));
	vcdp->fullArray(c+23,(__Vtemp36),66);
	vcdp->fullBit  (c+26,(vlTOPp->v__DOT__f__DOT__i__DOT__ic_valid_we));
	vcdp->fullBit  (c+27,(vlTOPp->v__DOT__f__DOT__i__DOT__ic_data_we));
	vcdp->fullBit  (c+28,(vlTOPp->v__DOT__f__DOT__i__DOT__ic_tag_we));
	vcdp->fullBit  (c+29,(vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_valid_next));
	vcdp->fullBus  (c+30,(vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_next),32);
	vcdp->fullBit  (c+31,(vlTOPp->v__DOT__f__DOT__i__DOT__icache_req_addr_valid_next));
	vcdp->fullBus  (c+32,(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset),5);
	vcdp->fullBus  (c+33,(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index),6);
	vcdp->fullQuad (c+34,(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_tag),53);
	vcdp->fullBit  (c+36,(vlTOPp->v__DOT__f__DOT__i__DOT__pc_valid_next));
	vcdp->fullBus  (c+59,(vlTOPp->v__DOT__f__DOT__i__DOT__clear_idx),6);
	vcdp->fullBit  (c+60,(vlTOPp->v__DOT__f__DOT__i__DOT__pc_valid));
	vcdp->fullQuad (c+57,(vlTOPp->v__DOT__req_addr),59);
	vcdp->fullQuad (c+39,(vlTOPp->v__DOT__fetch_pc),63);
	vcdp->fullQuad (c+61,((vlTOPp->v__DOT__fetch_pc 
			       << 1U)),64);
	vcdp->fullBus  (c+63,((0x1fU & (vlTOPp->v__DOT__fetch_insn 
					>> 0xfU))),5);
	vcdp->fullBus  (c+64,((0x1fU & (vlTOPp->v__DOT__fetch_insn 
					>> 0x14U))),5);
	vcdp->fullQuad (c+65,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[0]),64);
	vcdp->fullQuad (c+67,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[1]),64);
	vcdp->fullQuad (c+69,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[2]),64);
	vcdp->fullQuad (c+71,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[3]),64);
	vcdp->fullQuad (c+73,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[4]),64);
	vcdp->fullQuad (c+75,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[5]),64);
	vcdp->fullQuad (c+77,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[6]),64);
	vcdp->fullQuad (c+79,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[7]),64);
	vcdp->fullQuad (c+81,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[8]),64);
	vcdp->fullQuad (c+83,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[9]),64);
	vcdp->fullQuad (c+85,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[10]),64);
	vcdp->fullQuad (c+87,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[11]),64);
	vcdp->fullQuad (c+89,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[12]),64);
	vcdp->fullQuad (c+91,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[13]),64);
	vcdp->fullQuad (c+93,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[14]),64);
	vcdp->fullQuad (c+95,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[15]),64);
	vcdp->fullQuad (c+97,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[16]),64);
	vcdp->fullQuad (c+99,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[17]),64);
	vcdp->fullQuad (c+101,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[18]),64);
	vcdp->fullQuad (c+103,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[19]),64);
	vcdp->fullQuad (c+105,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[20]),64);
	vcdp->fullQuad (c+107,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[21]),64);
	vcdp->fullQuad (c+109,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[22]),64);
	vcdp->fullQuad (c+111,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[23]),64);
	vcdp->fullQuad (c+113,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[24]),64);
	vcdp->fullQuad (c+115,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[25]),64);
	vcdp->fullQuad (c+117,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[26]),64);
	vcdp->fullQuad (c+119,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[27]),64);
	vcdp->fullQuad (c+121,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[28]),64);
	vcdp->fullQuad (c+123,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[29]),64);
	vcdp->fullQuad (c+125,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[30]),64);
	vcdp->fullQuad (c+127,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[31]),64);
	vcdp->fullBus  (c+38,(vlTOPp->v__DOT__fetch_insn),32);
	vcdp->fullBus  (c+129,((0xfffU & (vlTOPp->v__DOT__fetch_insn 
					  >> 0x14U))),12);
	vcdp->fullBus  (c+130,((0xfffffU & (vlTOPp->v__DOT__fetch_insn 
					    >> 0xcU))),20);
	vcdp->fullBus  (c+131,((0x7fU & vlTOPp->v__DOT__fetch_insn)),7);
	vcdp->fullBit  (c+37,(vlTOPp->v__DOT__fetch_insn_valid));
	vcdp->fullBus  (c+132,((0x1fU & (vlTOPp->v__DOT__decode_insn 
					 >> 7U))),5);
	vcdp->fullQuad (c+133,(vlTOPp->v__DOT__e__DOT__pc),64);
	vcdp->fullBit  (c+135,((1U & vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f1__q[0U])));
	vcdp->fullQuad (c+136,((((QData)((IData)(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f1__q[2U])) 
				 << 0x3fU) | (((QData)((IData)(
							       vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f1__q[1U])) 
					       << 0x1fU) 
					      | ((QData)((IData)(
								 vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f1__q[0U])) 
						 >> 1U)))),64);
	vcdp->fullBus  (c+41,(vlTOPp->v__DOT__execute_valid),1);
	vcdp->fullQuad (c+138,((VL_ULL(4) + vlTOPp->v__DOT__decode_pc)),64);
	vcdp->fullBus  (c+43,(vlTOPp->v__DOT__decode_insn),32);
	vcdp->fullQuad (c+44,(vlTOPp->v__DOT__decode_pc),64);
	vcdp->fullQuad (c+46,(vlTOPp->v__DOT__decode_sign_ext),64);
	vcdp->fullQuad (c+48,(vlTOPp->v__DOT__decode_src1),64);
	vcdp->fullQuad (c+50,(vlTOPp->v__DOT__decode_src2),64);
	vcdp->fullBit  (c+53,((1U & vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[0U])));
	vcdp->fullBit  (c+54,((1U & (vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[0U] 
				     >> 1U))));
	vcdp->fullQuad (c+55,((((QData)((IData)(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[2U])) 
				<< 0x3eU) | (((QData)((IData)(
							      vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[1U])) 
					      << 0x1eU) 
					     | ((QData)((IData)(
								vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q[0U])) 
						>> 2U)))),64);
	vcdp->fullBus  (c+140,((0x7fU & vlTOPp->v__DOT__decode_insn)),7);
	vcdp->fullBus  (c+141,((0x1fU & (vlTOPp->v__DOT__decode_insn 
					 >> 0x14U))),5);
	vcdp->fullBus  (c+142,((7U & (vlTOPp->v__DOT__decode_insn 
				      >> 0xcU))),3);
	vcdp->fullBus  (c+143,((0x7fU & (vlTOPp->v__DOT__decode_insn 
					 >> 0x19U))),7);
	vcdp->fullBus  (c+144,((0x3fU & (vlTOPp->v__DOT__decode_insn 
					 >> 0x14U))),6);
	vcdp->fullArray(c+145,(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f1__q),65);
	vcdp->fullArray(c+148,(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__f2__q),66);
	vcdp->fullBit  (c+42,(vlTOPp->v__DOT__decode_valid));
	vcdp->fullBus  (c+52,(vlTOPp->v__DOT__dest_rd),5);
	vcdp->fullQuad (c+162,(vlTOPp->icache_req_addr),64);
	vcdp->fullQuad (c+165,(vlTOPp->debug_pc_ex),64);
	vcdp->fullBit  (c+167,(vlTOPp->debug_dest_valid));
	vcdp->fullQuad (c+168,(vlTOPp->debug_dest),64);
	vcdp->fullBus  (c+170,(vlTOPp->debug_dest_rd),5);
	vcdp->fullBit  (c+171,(vlTOPp->debug_dest_long));
	vcdp->fullBit  (c+153,(vlTOPp->icache_ack_data_valid));
	vcdp->fullArray(c+154,(vlTOPp->icache_ack_data),256);
	vcdp->fullBus  (c+164,(vlTOPp->icache_req_addr_valid),1);
	vcdp->fullBit  (c+151,(vlTOPp->clk));
	vcdp->fullBit  (c+152,(vlTOPp->reset));
	vcdp->fullBus  (c+173,(0x3bU),32);
	vcdp->fullBus  (c+174,(0x20U),32);
	vcdp->fullBus  (c+175,(0x3fU),32);
	vcdp->fullQuad (c+177,(VL_ULL(0)),64);
	vcdp->fullBus  (c+176,(0x40U),32);
	vcdp->fullBus  (c+179,(0x13U),7);
	vcdp->fullBus  (c+180,(0x17U),7);
	vcdp->fullBus  (c+181,(0x1bU),7);
	vcdp->fullBus  (c+182,(0x33U),7);
	vcdp->fullBus  (c+183,(0x3bU),7);
	vcdp->fullBus  (c+184,(0x63U),7);
	vcdp->fullBus  (c+185,(0x67U),7);
	vcdp->fullBus  (c+186,(0x6fU),7);
	vcdp->fullBus  (c+189,(2U),3);
	vcdp->fullBus  (c+190,(3U),3);
	vcdp->fullBus  (c+187,(0U),3);
	vcdp->fullBus  (c+188,(1U),3);
	vcdp->fullBus  (c+191,(4U),3);
	vcdp->fullBus  (c+192,(5U),3);
	vcdp->fullBus  (c+193,(6U),3);
	vcdp->fullBus  (c+194,(7U),3);
	vcdp->fullBus  (c+196,(0x20U),7);
	vcdp->fullBus  (c+197,(0U),6);
	vcdp->fullBus  (c+198,(0x10U),6);
	vcdp->fullBus  (c+195,(0U),7);
	vcdp->fullBus  (c+172,(1U),32);
	vcdp->fullBus  (c+199,(0x41U),32);
	vcdp->fullBus  (c+200,(0x42U),32);
	vcdp->fullBus  (c+201,(5U),32);
    }
}
