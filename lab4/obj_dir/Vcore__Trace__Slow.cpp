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
	vcdp->declBit  (c+318,"clk",-1);
	vcdp->declBit  (c+319,"reset",-1);
	vcdp->declBit  (c+320,"icache_ack_data_retry",-1);
	vcdp->declBit  (c+321,"icache_ack_data_valid",-1);
	vcdp->declArray(c+322,"icache_ack_data",-1,255,0);
	vcdp->declQuad (c+330,"icache_req_addr",-1,63,0);
	vcdp->declBit  (c+332,"icache_req_addr_valid",-1);
	vcdp->declBit  (c+333,"icache_req_addr_retry",-1);
	vcdp->declQuad (c+334,"dcache_req_addr",-1,63,0);
	vcdp->declQuad (c+336,"dcache_req_data",-1,63,0);
	vcdp->declBus  (c+338,"dcache_req_op",-1,3,0);
	vcdp->declBus  (c+339,"dcache_req_rd",-1,4,0);
	vcdp->declBit  (c+340,"dcache_req_valid",-1);
	vcdp->declBit  (c+341,"dcache_req_retry",-1);
	vcdp->declQuad (c+342,"dcache_ack_data",-1,63,0);
	vcdp->declBus  (c+344,"dcache_ack_rd",-1,4,0);
	vcdp->declBit  (c+345,"dcache_ack_valid",-1);
	vcdp->declBit  (c+346,"dcache_ack_retry",-1);
	vcdp->declQuad (c+347,"debug_pc_ex",-1,63,0);
	vcdp->declBit  (c+349,"debug_dest_valid",-1);
	vcdp->declQuad (c+350,"debug_dest",-1,63,0);
	vcdp->declBus  (c+352,"debug_dest_rd",-1,4,0);
	vcdp->declBit  (c+353,"debug_dest_long",-1);
	vcdp->declBit  (c+318,"v clk",-1);
	vcdp->declBit  (c+319,"v reset",-1);
	vcdp->declBit  (c+320,"v icache_ack_data_retry",-1);
	vcdp->declBit  (c+321,"v icache_ack_data_valid",-1);
	vcdp->declArray(c+322,"v icache_ack_data",-1,255,0);
	vcdp->declQuad (c+330,"v icache_req_addr",-1,63,0);
	vcdp->declBit  (c+332,"v icache_req_addr_valid",-1);
	vcdp->declBit  (c+333,"v icache_req_addr_retry",-1);
	vcdp->declQuad (c+334,"v dcache_req_addr",-1,63,0);
	vcdp->declQuad (c+336,"v dcache_req_data",-1,63,0);
	vcdp->declBus  (c+338,"v dcache_req_op",-1,3,0);
	vcdp->declBus  (c+339,"v dcache_req_rd",-1,4,0);
	vcdp->declBit  (c+340,"v dcache_req_valid",-1);
	vcdp->declBit  (c+341,"v dcache_req_retry",-1);
	vcdp->declQuad (c+342,"v dcache_ack_data",-1,63,0);
	vcdp->declBus  (c+344,"v dcache_ack_rd",-1,4,0);
	vcdp->declBit  (c+345,"v dcache_ack_valid",-1);
	vcdp->declBit  (c+346,"v dcache_ack_retry",-1);
	vcdp->declQuad (c+347,"v debug_pc_ex",-1,63,0);
	vcdp->declBit  (c+349,"v debug_dest_valid",-1);
	vcdp->declQuad (c+350,"v debug_dest",-1,63,0);
	vcdp->declBus  (c+352,"v debug_dest_rd",-1,4,0);
	vcdp->declBit  (c+353,"v debug_dest_long",-1);
	vcdp->declBit  (c+125,"v fetch_valid",-1);
	vcdp->declBit  (c+10,"v fetch_retry",-1);
	vcdp->declBus  (c+298,"v fetch_insn",-1,31,0);
	vcdp->declQuad (c+299,"v fetch_pc",-1,62,0);
	vcdp->declBit  (c+126,"v execute_valid",-1);
	vcdp->declQuad (c+96,"v execute_pc",-1,62,0);
	vcdp->declBit  (c+11,"v execute_retry",-1);
	vcdp->declBit  (c+12,"v decode_retry",-1);
	vcdp->declBit  (c+13,"v decode_valid",-1);
	vcdp->declBus  (c+273,"v decode_insn",-1,31,0);
	vcdp->declQuad (c+274,"v decode_pc",-1,63,0);
	vcdp->declQuad (c+276,"v decode_sign_ext",-1,63,0);
	vcdp->declQuad (c+98,"v decode_src1",-1,63,0);
	vcdp->declQuad (c+100,"v decode_src2",-1,63,0);
	vcdp->declBus  (c+257,"v dest_rd",-1,4,0);
	vcdp->declBit  (c+127,"v dest_valid",-1);
	vcdp->declBit  (c+258,"v dest_long",-1);
	vcdp->declBit  (c+362,"v dest_retry",-1);
	vcdp->declBit  (c+80,"v dest_clear",-1);
	vcdp->declQuad (c+259,"v dest_data",-1,63,0);
	vcdp->declQuad (c+102,"v req_addr",-1,58,0);
	vcdp->declBit  (c+318,"v f clk",-1);
	vcdp->declBit  (c+319,"v f reset",-1);
	vcdp->declBit  (c+320,"v f icache_ack_data_retry",-1);
	vcdp->declBit  (c+321,"v f icache_ack_data_valid",-1);
	vcdp->declArray(c+322,"v f icache_ack_data",-1,255,0);
	vcdp->declBit  (c+333,"v f icache_req_addr_retry",-1);
	vcdp->declBit  (c+332,"v f icache_req_addr_valid",-1);
	vcdp->declQuad (c+102,"v f icache_req_addr",-1,58,0);
	vcdp->declBit  (c+126,"v f execute_valid",-1);
	vcdp->declBit  (c+11,"v f execute_retry",-1);
	vcdp->declQuad (c+96,"v f execute_pc",-1,62,0);
	vcdp->declBit  (c+125,"v f fetch_valid",-1);
	vcdp->declBit  (c+10,"v f fetch_retry",-1);
	vcdp->declBus  (c+298,"v f fetch_insn",-1,31,0);
	vcdp->declQuad (c+299,"v f fetch_pc",-1,62,0);
	vcdp->declQuad (c+104,"v f pc",-1,62,0);
	vcdp->declQuad (c+14,"v f pc_next",-1,62,0);
	vcdp->declBit  (c+318,"v f i clk",-1);
	vcdp->declBit  (c+319,"v f i reset",-1);
	vcdp->declBit  (c+320,"v f i icache_ack_data_retry",-1);
	vcdp->declBit  (c+321,"v f i icache_ack_data_valid",-1);
	vcdp->declArray(c+322,"v f i icache_ack_data",-1,255,0);
	vcdp->declQuad (c+102,"v f i icache_req_addr",-1,58,0);
	vcdp->declBit  (c+332,"v f i icache_req_addr_valid",-1);
	vcdp->declBit  (c+333,"v f i icache_req_addr_retry",-1);
	vcdp->declQuad (c+14,"v f i core_req_pc",-1,62,0);
	vcdp->declBit  (c+16,"v f i core_req_pc_valid",-1);
	vcdp->declBit  (c+11,"v f i core_req_pc_retry",-1);
	vcdp->declQuad (c+299,"v f i next_pc",-1,62,0);
	vcdp->declBus  (c+298,"v f i core_ack_insn",-1,31,0);
	vcdp->declBit  (c+125,"v f i core_ack_insn_valid",-1);
	vcdp->declBit  (c+10,"v f i core_ack_insn_retry",-1);
	vcdp->declBit  (c+17,"v f i ic_valid_we",-1);
	vcdp->declBit  (c+18,"v f i ic_data_we",-1);
	vcdp->declBit  (c+19,"v f i ic_tag_we",-1);
	// Tracing: v f i ic_valid // Ignored: Wide memory > --trace-max-array ents at rtl/icache.v:47
	// Tracing: v f i ic_tag // Ignored: Wide memory > --trace-max-array ents at rtl/icache.v:48
	// Tracing: v f i ic_data // Ignored: Wide memory > --trace-max-array ents at rtl/icache.v:49
	vcdp->declBit  (c+20,"v f i core_ack_insn_valid_next",-1);
	vcdp->declBus  (c+21,"v f i core_ack_insn_next",-1,31,0);
	vcdp->declBit  (c+22,"v f i icache_req_addr_valid_next",-1);
	vcdp->declQuad (c+23,"v f i icache_req_addr_next",-1,58,0);
	vcdp->declBus  (c+25,"v f i pc_req_offset",-1,4,0);
	vcdp->declBus  (c+26,"v f i pc_req_index",-1,5,0);
	vcdp->declQuad (c+27,"v f i pc_req_tag",-1,52,0);
	vcdp->declBus  (c+128,"v f i clear_idx",-1,5,0);
	vcdp->declBit  (c+129,"v f i pc_valid",-1);
	vcdp->declBit  (c+29,"v f i pc_valid_next",-1);
	vcdp->declBus  (c+363,"v f i f_pc_valid Bits",-1,31,0);
	vcdp->declBit  (c+318,"v f i f_pc_valid clk",-1);
	vcdp->declBit  (c+319,"v f i f_pc_valid reset",-1);
	vcdp->declBus  (c+29,"v f i f_pc_valid d",-1,0,0);
	vcdp->declBus  (c+129,"v f i f_pc_valid q",-1,0,0);
	vcdp->declBus  (c+364,"v f i ff_req Size",-1,31,0);
	vcdp->declBit  (c+318,"v f i ff_req clk",-1);
	vcdp->declBit  (c+319,"v f i ff_req reset",-1);
	vcdp->declQuad (c+23,"v f i ff_req din",-1,58,0);
	vcdp->declBit  (c+22,"v f i ff_req dinValid",-1);
	vcdp->declBit  (c+354,"v f i ff_req dinRetry",-1);
	vcdp->declQuad (c+102,"v f i ff_req q",-1,58,0);
	vcdp->declBit  (c+333,"v f i ff_req qRetry",-1);
	vcdp->declBit  (c+332,"v f i ff_req qValid",-1);
	vcdp->declQuad (c+130,"v f i ff_req shadowq",-1,58,0);
	vcdp->declBit  (c+30,"v f i ff_req c1",-1);
	vcdp->declBit  (c+31,"v f i ff_req c2",-1);
	vcdp->declBit  (c+132,"v f i ff_req shadowValid",-1);
	vcdp->declBit  (c+133,"v f i ff_req priv_qValid",-1);
	vcdp->declBit  (c+354,"v f i ff_req priv_dinRetry",-1);
	vcdp->declBit  (c+333,"v f i ff_req priv_qRetry",-1);
	vcdp->declBit  (c+22,"v f i ff_req priv_dinValid",-1);
	vcdp->declBit  (c+134,"v f i ff_req s_enable",-1);
	vcdp->declBit  (c+106,"v f i ff_req q_enable",-1);
	vcdp->declBit  (c+133,"v f i ff_req priv_qValidla2",-1);
	vcdp->declBus  (c+365,"v f i ff_ack_insn Size",-1,31,0);
	vcdp->declBit  (c+318,"v f i ff_ack_insn clk",-1);
	vcdp->declBit  (c+319,"v f i ff_ack_insn reset",-1);
	vcdp->declArray(c+32,"v f i ff_ack_insn din",-1,94,0);
	vcdp->declBit  (c+20,"v f i ff_ack_insn dinValid",-1);
	vcdp->declBit  (c+11,"v f i ff_ack_insn dinRetry",-1);
	vcdp->declArray(c+301,"v f i ff_ack_insn q",-1,94,0);
	vcdp->declBit  (c+10,"v f i ff_ack_insn qRetry",-1);
	vcdp->declBit  (c+125,"v f i ff_ack_insn qValid",-1);
	vcdp->declArray(c+313,"v f i ff_ack_insn shadowq",-1,94,0);
	vcdp->declBit  (c+35,"v f i ff_ack_insn c1",-1);
	vcdp->declBit  (c+36,"v f i ff_ack_insn c2",-1);
	vcdp->declBit  (c+316,"v f i ff_ack_insn shadowValid",-1);
	vcdp->declBit  (c+125,"v f i ff_ack_insn priv_qValid",-1);
	vcdp->declBit  (c+355,"v f i ff_ack_insn priv_dinRetry",-1);
	vcdp->declBit  (c+10,"v f i ff_ack_insn priv_qRetry",-1);
	vcdp->declBit  (c+20,"v f i ff_ack_insn priv_dinValid",-1);
	vcdp->declBit  (c+317,"v f i ff_ack_insn s_enable",-1);
	vcdp->declBit  (c+304,"v f i ff_ack_insn q_enable",-1);
	vcdp->declBit  (c+125,"v f i ff_ack_insn priv_qValidla2",-1);
	vcdp->declBus  (c+366,"v f f_pc Size",-1,31,0);
	vcdp->declBit  (c+318,"v f f_pc clk",-1);
	vcdp->declBit  (c+319,"v f f_pc reset",-1);
	vcdp->declQuad (c+14,"v f f_pc din",-1,62,0);
	vcdp->declBit  (c+367,"v f f_pc dinValid",-1);
	vcdp->declBit  (c+356,"v f f_pc dinRetry",-1);
	vcdp->declQuad (c+104,"v f f_pc q",-1,62,0);
	vcdp->declBit  (c+362,"v f f_pc qRetry",-1);
	vcdp->declBit  (c+135,"v f f_pc qValid",-1);
	vcdp->declQuad (c+136,"v f f_pc shadowq",-1,62,0);
	vcdp->declBit  (c+362,"v f f_pc c1",-1);
	vcdp->declBit  (c+367,"v f f_pc c2",-1);
	vcdp->declBit  (c+268,"v f f_pc shadowValid",-1);
	vcdp->declBit  (c+135,"v f f_pc priv_qValid",-1);
	vcdp->declBit  (c+356,"v f f_pc priv_dinRetry",-1);
	vcdp->declBit  (c+362,"v f f_pc priv_qRetry",-1);
	vcdp->declBit  (c+367,"v f f_pc priv_dinValid",-1);
	vcdp->declBit  (c+269,"v f f_pc s_enable",-1);
	vcdp->declBit  (c+261,"v f f_pc q_enable",-1);
	vcdp->declBit  (c+135,"v f f_pc priv_qValidla2",-1);
	vcdp->declBit  (c+318,"v d clk",-1);
	vcdp->declBit  (c+319,"v d reset",-1);
	vcdp->declBit  (c+125,"v d fetch_valid",-1);
	vcdp->declBit  (c+10,"v d fetch_retry",-1);
	vcdp->declBus  (c+298,"v d fetch_insn",-1,31,0);
	vcdp->declQuad (c+305,"v d fetch_pc",-1,63,0);
	vcdp->declBit  (c+13,"v d decode_valid",-1);
	vcdp->declBit  (c+12,"v d decode_retry",-1);
	vcdp->declBus  (c+273,"v d decode_insn",-1,31,0);
	vcdp->declQuad (c+274,"v d decode_pc",-1,63,0);
	vcdp->declQuad (c+276,"v d decode_sign_ext",-1,63,0);
	vcdp->declQuad (c+98,"v d decode_src1",-1,63,0);
	vcdp->declQuad (c+100,"v d decode_src2",-1,63,0);
	vcdp->declBit  (c+127,"v d dest_valid",-1);
	vcdp->declBit  (c+362,"v d dest_retry",-1);
	vcdp->declBus  (c+257,"v d dest_rd",-1,4,0);
	vcdp->declBit  (c+258,"v d dest_long",-1);
	vcdp->declQuad (c+259,"v d dest_data",-1,63,0);
	vcdp->declBit  (c+80,"v d dest_clear",-1);
	vcdp->declQuad (c+342,"v d dcache_ack_data",-1,63,0);
	vcdp->declBus  (c+344,"v d dcache_ack_rd",-1,4,0);
	vcdp->declBit  (c+345,"v d dcache_ack_valid",-1);
	vcdp->declBit  (c+346,"v d dcache_ack_retry",-1);
	vcdp->declBus  (c+368,"v d LOAD",-1,6,0);
	vcdp->declBus  (c+369,"v d OP_IMM",-1,6,0);
	vcdp->declBus  (c+370,"v d OP_IMM_32",-1,6,0);
	vcdp->declBus  (c+371,"v d STORE",-1,6,0);
	vcdp->declBus  (c+372,"v d OP",-1,6,0);
	vcdp->declBus  (c+373,"v d OP_32",-1,6,0);
	vcdp->declBus  (c+374,"v d BRANCH",-1,6,0);
	vcdp->declBus  (c+375,"v d JALR",-1,6,0);
	vcdp->declBus  (c+138,"v d load",-1,31,0);
	vcdp->declBus  (c+37,"v d load_next",-1,31,0);
	vcdp->declBit  (c+38,"v d f1_retry",-1);
	vcdp->declBit  (c+376,"v d f_retry",-1);
	vcdp->declBit  (c+139,"v d load_valid",-1);
	vcdp->declBit  (c+39,"v d load_valid_next",-1);
	vcdp->declBit  (c+140,"v d ffdecode_valid",-1);
	vcdp->declBus  (c+307,"v d rs1",-1,4,0);
	vcdp->declBus  (c+308,"v d rs2",-1,4,0);
	vcdp->declBus  (c+309,"v d rd",-1,4,0);
	vcdp->declQuad (c+86,"v d sign_ext_next",-1,63,0);
	vcdp->declBus  (c+310,"v d imm12",-1,11,0);
	vcdp->declBus  (c+311,"v d imm20",-1,19,0);
	vcdp->declBus  (c+88,"v d branchimm",-1,12,0);
	vcdp->declBus  (c+89,"v d jalimm",-1,20,0);
	vcdp->declBus  (c+312,"v d op",-1,6,0);
	vcdp->declBus  (c+90,"v d stimm12",-1,11,0);
	vcdp->declBus  (c+363,"v d f_valid Bits",-1,31,0);
	vcdp->declBus  (c+363,"v d f_valid Reset_Value",-1,31,0);
	vcdp->declBit  (c+318,"v d f_valid clk",-1);
	vcdp->declBit  (c+319,"v d f_valid reset",-1);
	vcdp->declBus  (c+39,"v d f_valid d",-1,0,0);
	vcdp->declBus  (c+139,"v d f_valid q",-1,0,0);
	vcdp->declBus  (c+377,"v d f_load Bits",-1,31,0);
	vcdp->declBit  (c+318,"v d f_load clk",-1);
	vcdp->declBit  (c+319,"v d f_load reset",-1);
	vcdp->declBus  (c+37,"v d f_load d",-1,31,0);
	vcdp->declBus  (c+138,"v d f_load q",-1,31,0);
	vcdp->declBus  (c+378,"v d ff_pc_insn_signext Size",-1,31,0);
	vcdp->declBit  (c+318,"v d ff_pc_insn_signext clk",-1);
	vcdp->declBit  (c+319,"v d ff_pc_insn_signext reset",-1);
	vcdp->declArray(c+91,"v d ff_pc_insn_signext din",-1,159,0);
	vcdp->declBit  (c+125,"v d ff_pc_insn_signext dinValid",-1);
	vcdp->declBit  (c+10,"v d ff_pc_insn_signext dinRetry",-1);
	vcdp->declArray(c+278,"v d ff_pc_insn_signext q",-1,159,0);
	vcdp->declBit  (c+12,"v d ff_pc_insn_signext qRetry",-1);
	vcdp->declBit  (c+140,"v d ff_pc_insn_signext qValid",-1);
	vcdp->declArray(c+291,"v d ff_pc_insn_signext shadowq",-1,159,0);
	vcdp->declBit  (c+40,"v d ff_pc_insn_signext c1",-1);
	vcdp->declBit  (c+81,"v d ff_pc_insn_signext c2",-1);
	vcdp->declBit  (c+296,"v d ff_pc_insn_signext shadowValid",-1);
	vcdp->declBit  (c+140,"v d ff_pc_insn_signext priv_qValid",-1);
	vcdp->declBit  (c+357,"v d ff_pc_insn_signext priv_dinRetry",-1);
	vcdp->declBit  (c+12,"v d ff_pc_insn_signext priv_qRetry",-1);
	vcdp->declBit  (c+125,"v d ff_pc_insn_signext priv_dinValid",-1);
	vcdp->declBit  (c+297,"v d ff_pc_insn_signext s_enable",-1);
	vcdp->declBit  (c+283,"v d ff_pc_insn_signext q_enable",-1);
	vcdp->declBit  (c+140,"v d ff_pc_insn_signext priv_qValidla2",-1);
	vcdp->declBit  (c+318,"v d r clk",-1);
	vcdp->declBit  (c+319,"v d r reset",-1);
	vcdp->declBus  (c+307,"v d r rs1",-1,4,0);
	vcdp->declBus  (c+308,"v d r rs2",-1,4,0);
	vcdp->declBus  (c+257,"v d r rd",-1,4,0);
	vcdp->declBit  (c+127,"v d r we",-1);
	vcdp->declQuad (c+259,"v d r dest",-1,63,0);
	vcdp->declBit  (c+258,"v d r dest_long",-1);
	vcdp->declQuad (c+342,"v d r dcache_ack_data",-1,63,0);
	vcdp->declBus  (c+344,"v d r dcache_ack_rd",-1,4,0);
	vcdp->declBit  (c+345,"v d r dcache_ack_valid",-1);
	vcdp->declBit  (c+12,"v d r decode_retry",-1);
	vcdp->declQuad (c+98,"v d r data1",-1,63,0);
	vcdp->declQuad (c+100,"v d r data2",-1,63,0);
	{int i; for (i=0; i<32; i++) {
		vcdp->declQuad (c+141+i*2,"v d r rf",(i+0),63,0);}}
	vcdp->declBus  (c+1,"v d r rf_cntr",-1,4,0);
	vcdp->declQuad (c+41,"v d r data1_next",-1,63,0);
	vcdp->declQuad (c+43,"v d r data2_next",-1,63,0);
	vcdp->declBus  (c+379,"v d r data Size",-1,31,0);
	vcdp->declBit  (c+318,"v d r data clk",-1);
	vcdp->declBit  (c+319,"v d r data reset",-1);
	vcdp->declArray(c+45,"v d r data din",-1,127,0);
	vcdp->declBit  (c+367,"v d r data dinValid",-1);
	vcdp->declBit  (c+358,"v d r data dinRetry",-1);
	vcdp->declArray(c+107,"v d r data q",-1,127,0);
	vcdp->declBit  (c+12,"v d r data qRetry",-1);
	vcdp->declBit  (c+205,"v d r data qValid",-1);
	vcdp->declArray(c+206,"v d r data shadowq",-1,127,0);
	vcdp->declBit  (c+49,"v d r data c1",-1);
	vcdp->declBit  (c+367,"v d r data c2",-1);
	vcdp->declBit  (c+210,"v d r data shadowValid",-1);
	vcdp->declBit  (c+205,"v d r data priv_qValid",-1);
	vcdp->declBit  (c+358,"v d r data priv_dinRetry",-1);
	vcdp->declBit  (c+12,"v d r data priv_qRetry",-1);
	vcdp->declBit  (c+367,"v d r data priv_dinValid",-1);
	vcdp->declBit  (c+211,"v d r data s_enable",-1);
	vcdp->declBit  (c+111,"v d r data q_enable",-1);
	vcdp->declBit  (c+205,"v d r data priv_qValidla2",-1);
	vcdp->declBit  (c+318,"v e clk",-1);
	vcdp->declBit  (c+319,"v e reset",-1);
	vcdp->declBit  (c+13,"v e decode_valid",-1);
	vcdp->declBit  (c+12,"v e decode_retry",-1);
	vcdp->declBus  (c+273,"v e decode_insn",-1,31,0);
	vcdp->declQuad (c+274,"v e decode_pc",-1,63,0);
	vcdp->declQuad (c+276,"v e decode_sign_ext",-1,63,0);
	vcdp->declQuad (c+98,"v e decode_src1",-1,63,0);
	vcdp->declQuad (c+100,"v e decode_src2",-1,63,0);
	vcdp->declBit  (c+126,"v e execute_valid",-1);
	vcdp->declBit  (c+11,"v e execute_retry",-1);
	vcdp->declQuad (c+96,"v e execute_pc",-1,62,0);
	vcdp->declBit  (c+127,"v e dest_valid",-1);
	vcdp->declBit  (c+362,"v e dest_retry",-1);
	vcdp->declBus  (c+257,"v e dest_rd",-1,4,0);
	vcdp->declBit  (c+258,"v e dest_long",-1);
	vcdp->declQuad (c+259,"v e dest_data",-1,63,0);
	vcdp->declBit  (c+80,"v e dest_clear",-1);
	vcdp->declQuad (c+334,"v e dcache_req_addr",-1,63,0);
	vcdp->declQuad (c+336,"v e dcache_req_data",-1,63,0);
	vcdp->declBus  (c+338,"v e dcache_req_op",-1,3,0);
	vcdp->declBus  (c+339,"v e dcache_req_rd",-1,4,0);
	vcdp->declBit  (c+340,"v e dcache_req_valid",-1);
	vcdp->declBit  (c+341,"v e dcache_req_retry",-1);
	vcdp->declBus  (c+368,"v e LOAD",-1,6,0);
	vcdp->declBus  (c+369,"v e OP_IMM",-1,6,0);
	vcdp->declBus  (c+370,"v e OP_IMM_32",-1,6,0);
	vcdp->declBus  (c+371,"v e STORE",-1,6,0);
	vcdp->declBus  (c+372,"v e OP",-1,6,0);
	vcdp->declBus  (c+373,"v e OP_32",-1,6,0);
	vcdp->declBus  (c+374,"v e BRANCH",-1,6,0);
	vcdp->declBus  (c+375,"v e JALR",-1,6,0);
	vcdp->declBus  (c+284,"v e operation",-1,6,0);
	vcdp->declQuad (c+380,"v e pc",-1,63,0);
	vcdp->declBus  (c+285,"v e rs1",-1,4,0);
	vcdp->declBus  (c+286,"v e rs2",-1,4,0);
	vcdp->declBus  (c+257,"v e current_rd",-1,4,0);
	vcdp->declBus  (c+245,"v e last_rd",-1,4,0);
	vcdp->declBus  (c+233,"v e twolast_rd",-1,4,0);
	vcdp->declBus  (c+112,"v e threelast_rd",-1,4,0);
	vcdp->declBit  (c+212,"v e last_valid",-1);
	vcdp->declBit  (c+213,"v e twolast_valid",-1);
	vcdp->declBit  (c+214,"v e threelast_valid",-1);
	vcdp->declQuad (c+259,"v e current_data",-1,63,0);
	vcdp->declQuad (c+246,"v e last_data",-1,63,0);
	vcdp->declQuad (c+234,"v e twolast_data",-1,63,0);
	vcdp->declQuad (c+113,"v e threelast_data",-1,63,0);
	vcdp->declQuad (c+82,"v e rs1_data",-1,63,0);
	vcdp->declQuad (c+84,"v e rs2_data",-1,63,0);
	vcdp->declBus  (c+382,"v e rd_mem1 Size",-1,31,0);
	vcdp->declBit  (c+318,"v e rd_mem1 clk",-1);
	vcdp->declBit  (c+319,"v e rd_mem1 reset",-1);
	vcdp->declArray(c+262,"v e rd_mem1 din",-1,68,0);
	vcdp->declBit  (c+127,"v e rd_mem1 dinValid",-1);
	vcdp->declBit  (c+359,"v e rd_mem1 dinRetry",-1);
	vcdp->declArray(c+248,"v e rd_mem1 q",-1,68,0);
	vcdp->declBit  (c+341,"v e rd_mem1 qRetry",-1);
	vcdp->declBit  (c+212,"v e rd_mem1 qValid",-1);
	vcdp->declArray(c+252,"v e rd_mem1 shadowq",-1,68,0);
	vcdp->declBit  (c+50,"v e rd_mem1 c1",-1);
	vcdp->declBit  (c+79,"v e rd_mem1 c2",-1);
	vcdp->declBit  (c+255,"v e rd_mem1 shadowValid",-1);
	vcdp->declBit  (c+212,"v e rd_mem1 priv_qValid",-1);
	vcdp->declBit  (c+359,"v e rd_mem1 priv_dinRetry",-1);
	vcdp->declBit  (c+341,"v e rd_mem1 priv_qRetry",-1);
	vcdp->declBit  (c+127,"v e rd_mem1 priv_dinValid",-1);
	vcdp->declBit  (c+256,"v e rd_mem1 s_enable",-1);
	vcdp->declBit  (c+251,"v e rd_mem1 q_enable",-1);
	vcdp->declBit  (c+212,"v e rd_mem1 priv_qValidla2",-1);
	vcdp->declBus  (c+382,"v e rd_mem2 Size",-1,31,0);
	vcdp->declBit  (c+318,"v e rd_mem2 clk",-1);
	vcdp->declBit  (c+319,"v e rd_mem2 reset",-1);
	vcdp->declArray(c+248,"v e rd_mem2 din",-1,68,0);
	vcdp->declBit  (c+212,"v e rd_mem2 dinValid",-1);
	vcdp->declBit  (c+360,"v e rd_mem2 dinRetry",-1);
	vcdp->declArray(c+236,"v e rd_mem2 q",-1,68,0);
	vcdp->declBit  (c+341,"v e rd_mem2 qRetry",-1);
	vcdp->declBit  (c+213,"v e rd_mem2 qValid",-1);
	vcdp->declArray(c+240,"v e rd_mem2 shadowq",-1,68,0);
	vcdp->declBit  (c+51,"v e rd_mem2 c1",-1);
	vcdp->declBit  (c+78,"v e rd_mem2 c2",-1);
	vcdp->declBit  (c+243,"v e rd_mem2 shadowValid",-1);
	vcdp->declBit  (c+213,"v e rd_mem2 priv_qValid",-1);
	vcdp->declBit  (c+360,"v e rd_mem2 priv_dinRetry",-1);
	vcdp->declBit  (c+341,"v e rd_mem2 priv_qRetry",-1);
	vcdp->declBit  (c+212,"v e rd_mem2 priv_dinValid",-1);
	vcdp->declBit  (c+244,"v e rd_mem2 s_enable",-1);
	vcdp->declBit  (c+239,"v e rd_mem2 q_enable",-1);
	vcdp->declBit  (c+213,"v e rd_mem2 priv_qValidla2",-1);
	vcdp->declBus  (c+382,"v e rd_mem3 Size",-1,31,0);
	vcdp->declBit  (c+318,"v e rd_mem3 clk",-1);
	vcdp->declBit  (c+319,"v e rd_mem3 reset",-1);
	vcdp->declArray(c+236,"v e rd_mem3 din",-1,68,0);
	vcdp->declBit  (c+213,"v e rd_mem3 dinValid",-1);
	vcdp->declBit  (c+361,"v e rd_mem3 dinRetry",-1);
	vcdp->declArray(c+115,"v e rd_mem3 q",-1,68,0);
	vcdp->declBit  (c+341,"v e rd_mem3 qRetry",-1);
	vcdp->declBit  (c+214,"v e rd_mem3 qValid",-1);
	vcdp->declArray(c+215,"v e rd_mem3 shadowq",-1,68,0);
	vcdp->declBit  (c+52,"v e rd_mem3 c1",-1);
	vcdp->declBit  (c+2,"v e rd_mem3 c2",-1);
	vcdp->declBit  (c+218,"v e rd_mem3 shadowValid",-1);
	vcdp->declBit  (c+214,"v e rd_mem3 priv_qValid",-1);
	vcdp->declBit  (c+361,"v e rd_mem3 priv_dinRetry",-1);
	vcdp->declBit  (c+341,"v e rd_mem3 priv_qRetry",-1);
	vcdp->declBit  (c+213,"v e rd_mem3 priv_dinValid",-1);
	vcdp->declBit  (c+219,"v e rd_mem3 s_enable",-1);
	vcdp->declBit  (c+118,"v e rd_mem3 q_enable",-1);
	vcdp->declBit  (c+214,"v e rd_mem3 priv_qValidla2",-1);
	vcdp->declBit  (c+318,"v e a clk",-1);
	vcdp->declBit  (c+319,"v e a reset",-1);
	vcdp->declBit  (c+12,"v e a insn_retry",-1);
	vcdp->declBit  (c+13,"v e a insn_valid",-1);
	vcdp->declBus  (c+273,"v e a insn",-1,31,0);
	vcdp->declQuad (c+274,"v e a pc",-1,63,0);
	vcdp->declQuad (c+276,"v e a sign_ext",-1,63,0);
	vcdp->declQuad (c+82,"v e a src1",-1,63,0);
	vcdp->declQuad (c+84,"v e a src2",-1,63,0);
	vcdp->declBus  (c+287,"v e a rd",-1,4,0);
	vcdp->declBit  (c+127,"v e a dest_valid",-1);
	vcdp->declBit  (c+362,"v e a dest_retry",-1);
	vcdp->declBus  (c+257,"v e a dest_rd",-1,4,0);
	vcdp->declBit  (c+258,"v e a dest_long",-1);
	vcdp->declQuad (c+259,"v e a dest_data",-1,63,0);
	vcdp->declBit  (c+80,"v e a dest_clear",-1);
	vcdp->declBit  (c+11,"v e a branch_target_retry",-1);
	vcdp->declBit  (c+126,"v e a branch_target_valid",-1);
	vcdp->declQuad (c+96,"v e a branch_target",-1,62,0);
	vcdp->declQuad (c+334,"v e a dcache_req_addr",-1,63,0);
	vcdp->declQuad (c+336,"v e a dcache_req_data",-1,63,0);
	vcdp->declBus  (c+338,"v e a dcache_req_op",-1,3,0);
	vcdp->declBus  (c+339,"v e a dcache_req_rd",-1,4,0);
	vcdp->declBit  (c+340,"v e a dcache_req_valid",-1);
	vcdp->declBit  (c+341,"v e a dcache_req_retry",-1);
	vcdp->declBit  (c+53,"v e a dest_valid_next",-1);
	vcdp->declBit  (c+54,"v e a dest_long_next",-1);
	vcdp->declQuad (c+55,"v e a dest_next",-1,63,0);
	vcdp->declBit  (c+57,"v e a branch_target_valid_next",-1);
	vcdp->declQuad (c+58,"v e a branch_target_next",-1,63,0);
	vcdp->declQuad (c+60,"v e a dcache_req_addr_next",-1,63,0);
	vcdp->declQuad (c+3,"v e a dcache_req_data_next",-1,63,0);
	vcdp->declBus  (c+62,"v e a dcache_req_op_next",-1,3,0);
	vcdp->declBus  (c+63,"v e a dcache_req_rd_next",-1,4,0);
	vcdp->declBit  (c+64,"v e a dcache_req_valid_next",-1);
	vcdp->declBit  (c+383,"v e a dcache_req_retry_next",-1);
	vcdp->declBus  (c+368,"v e a LOAD",-1,6,0);
	vcdp->declBus  (c+369,"v e a OP_IMM",-1,6,0);
	vcdp->declBus  (c+384,"v e a AUIPC",-1,6,0);
	vcdp->declBus  (c+370,"v e a OP_IMM_32",-1,6,0);
	vcdp->declBus  (c+371,"v e a STORE",-1,6,0);
	vcdp->declBus  (c+372,"v e a OP",-1,6,0);
	vcdp->declBus  (c+373,"v e a OP_32",-1,6,0);
	vcdp->declBus  (c+374,"v e a BRANCH",-1,6,0);
	vcdp->declBus  (c+375,"v e a JALR",-1,6,0);
	vcdp->declBus  (c+385,"v e a JAL",-1,6,0);
	vcdp->declBus  (c+284,"v e a opcode",-1,6,0);
	vcdp->declBus  (c+286,"v e a shamt",-1,4,0);
	vcdp->declBus  (c+288,"v e a funct3",-1,2,0);
	vcdp->declBus  (c+289,"v e a funct7",-1,6,0);
	vcdp->declBus  (c+386,"v e a dest_reg",-1,4,0);
	vcdp->declBus  (c+290,"v e a shamt6",-1,5,0);
	vcdp->declBus  (c+387,"v e a FUNCT3_ADD",-1,2,0);
	vcdp->declBus  (c+387,"v e a FUNCT3_SUB",-1,2,0);
	vcdp->declBus  (c+388,"v e a FUNCT3_SLL",-1,2,0);
	vcdp->declBus  (c+389,"v e a FUNCT3_SLT",-1,2,0);
	vcdp->declBus  (c+390,"v e a FUNCT3_SLTU",-1,2,0);
	vcdp->declBus  (c+391,"v e a FUNCT3_XOR",-1,2,0);
	vcdp->declBus  (c+392,"v e a FUNCT3_SRL",-1,2,0);
	vcdp->declBus  (c+392,"v e a FUNCT3_SRA",-1,2,0);
	vcdp->declBus  (c+393,"v e a FUNCT3_OR",-1,2,0);
	vcdp->declBus  (c+394,"v e a FUNCT3_AND",-1,2,0);
	vcdp->declBus  (c+387,"v e a FUNCT3_ADDI",-1,2,0);
	vcdp->declBus  (c+389,"v e a FUNCT3_SLTI",-1,2,0);
	vcdp->declBus  (c+390,"v e a FUNCT3_SLTIU",-1,2,0);
	vcdp->declBus  (c+391,"v e a FUNCT3_XORI",-1,2,0);
	vcdp->declBus  (c+393,"v e a FUNCT3_ORI",-1,2,0);
	vcdp->declBus  (c+394,"v e a FUNCT3_ANDI",-1,2,0);
	vcdp->declBus  (c+388,"v e a FUNCT3_SLLI",-1,2,0);
	vcdp->declBus  (c+392,"v e a FUNCT3_SRLI",-1,2,0);
	vcdp->declBus  (c+392,"v e a FUNCT3_SRAI",-1,2,0);
	vcdp->declBus  (c+387,"v e a FUNCT3_BEQ",-1,2,0);
	vcdp->declBus  (c+388,"v e a FUNCT3_BNE",-1,2,0);
	vcdp->declBus  (c+391,"v e a FUNCT3_BLT",-1,2,0);
	vcdp->declBus  (c+392,"v e a FUNCT3_BGE",-1,2,0);
	vcdp->declBus  (c+393,"v e a FUNCT3_BLTU",-1,2,0);
	vcdp->declBus  (c+394,"v e a FUNCT3_BGEU",-1,2,0);
	vcdp->declBus  (c+395,"v e a FUNCT7_ADD",-1,6,0);
	vcdp->declBus  (c+396,"v e a FUNCT7_SUB",-1,6,0);
	vcdp->declBus  (c+395,"v e a FUNCT7_SLL",-1,6,0);
	vcdp->declBus  (c+395,"v e a FUNCT7_SLT",-1,6,0);
	vcdp->declBus  (c+395,"v e a FUNCT7_SLTU",-1,6,0);
	vcdp->declBus  (c+395,"v e a FUNCT7_XOR",-1,6,0);
	vcdp->declBus  (c+395,"v e a FUNCT7_SRL",-1,6,0);
	vcdp->declBus  (c+396,"v e a FUNCT7_SRA",-1,6,0);
	vcdp->declBus  (c+395,"v e a FUNCT7_OR",-1,6,0);
	vcdp->declBus  (c+395,"v e a FUNCT7_AND",-1,6,0);
	vcdp->declBus  (c+395,"v e a FUNCT7_SLLI",-1,6,0);
	vcdp->declBus  (c+395,"v e a FUNCT7_SRLI",-1,6,0);
	vcdp->declBus  (c+396,"v e a FUNCT7_SRAI",-1,6,0);
	vcdp->declBus  (c+397,"v e a FUNCT6_SLLI",-1,5,0);
	vcdp->declBus  (c+397,"v e a FUNCT6_SRLI",-1,5,0);
	vcdp->declBus  (c+398,"v e a FUNCT6_SRAI",-1,5,0);
	vcdp->declBus  (c+395,"v e a FUNCT7_DC",-1,6,0);
	vcdp->declBit  (c+65,"v e a dest_clear_next",-1);
	vcdp->declQuad (c+66,"v e a desired_pc_next",-1,63,0);
	vcdp->declBit  (c+68,"v e a busy_next",-1);
	vcdp->declQuad (c+220,"v e a desired_pc",-1,63,0);
	vcdp->declBit  (c+222,"v e a busy",-1);
	vcdp->declBus  (c+399,"v e a want Bits",-1,31,0);
	vcdp->declBit  (c+318,"v e a want clk",-1);
	vcdp->declBit  (c+319,"v e a want reset",-1);
	vcdp->declQuad (c+66,"v e a want d",-1,63,0);
	vcdp->declQuad (c+220,"v e a want q",-1,63,0);
	vcdp->declBus  (c+363,"v e a doing Bits",-1,31,0);
	vcdp->declBit  (c+318,"v e a doing clk",-1);
	vcdp->declBit  (c+319,"v e a doing reset",-1);
	vcdp->declBus  (c+68,"v e a doing d",-1,0,0);
	vcdp->declBus  (c+222,"v e a doing q",-1,0,0);
	vcdp->declBus  (c+366,"v e a ff1 Size",-1,31,0);
	vcdp->declBit  (c+318,"v e a ff1 clk",-1);
	vcdp->declBit  (c+319,"v e a ff1 reset",-1);
	vcdp->declQuad (c+69,"v e a ff1 din",-1,62,0);
	vcdp->declBit  (c+57,"v e a ff1 dinValid",-1);
	vcdp->declBit  (c+356,"v e a ff1 dinRetry",-1);
	vcdp->declQuad (c+96,"v e a ff1 q",-1,62,0);
	vcdp->declBit  (c+362,"v e a ff1 qRetry",-1);
	vcdp->declBit  (c+126,"v e a ff1 qValid",-1);
	vcdp->declQuad (c+223,"v e a ff1 shadowq",-1,62,0);
	vcdp->declBit  (c+362,"v e a ff1 c1",-1);
	vcdp->declBit  (c+71,"v e a ff1 c2",-1);
	vcdp->declBit  (c+268,"v e a ff1 shadowValid",-1);
	vcdp->declBit  (c+126,"v e a ff1 priv_qValid",-1);
	vcdp->declBit  (c+356,"v e a ff1 priv_dinRetry",-1);
	vcdp->declBit  (c+362,"v e a ff1 priv_qRetry",-1);
	vcdp->declBit  (c+57,"v e a ff1 priv_dinValid",-1);
	vcdp->declBit  (c+269,"v e a ff1 s_enable",-1);
	vcdp->declBit  (c+261,"v e a ff1 q_enable",-1);
	vcdp->declBit  (c+126,"v e a ff1 priv_qValidla2",-1);
	vcdp->declBus  (c+400,"v e a ff2 Size",-1,31,0);
	vcdp->declBit  (c+318,"v e a ff2 clk",-1);
	vcdp->declBit  (c+319,"v e a ff2 reset",-1);
	vcdp->declArray(c+75,"v e a ff2 din",-1,70,0);
	vcdp->declBit  (c+53,"v e a ff2 dinValid",-1);
	vcdp->declBit  (c+356,"v e a ff2 dinRetry",-1);
	vcdp->declArray(c+265,"v e a ff2 q",-1,70,0);
	vcdp->declBit  (c+362,"v e a ff2 qRetry",-1);
	vcdp->declBit  (c+127,"v e a ff2 qValid",-1);
	vcdp->declArray(c+270,"v e a ff2 shadowq",-1,70,0);
	vcdp->declBit  (c+362,"v e a ff2 c1",-1);
	vcdp->declBit  (c+72,"v e a ff2 c2",-1);
	vcdp->declBit  (c+268,"v e a ff2 shadowValid",-1);
	vcdp->declBit  (c+127,"v e a ff2 priv_qValid",-1);
	vcdp->declBit  (c+356,"v e a ff2 priv_dinRetry",-1);
	vcdp->declBit  (c+362,"v e a ff2 priv_qRetry",-1);
	vcdp->declBit  (c+53,"v e a ff2 priv_dinValid",-1);
	vcdp->declBit  (c+269,"v e a ff2 s_enable",-1);
	vcdp->declBit  (c+261,"v e a ff2 q_enable",-1);
	vcdp->declBit  (c+127,"v e a ff2 priv_qValidla2",-1);
	vcdp->declBus  (c+401,"v e a ff_dcache Size",-1,31,0);
	vcdp->declBit  (c+318,"v e a ff_dcache clk",-1);
	vcdp->declBit  (c+319,"v e a ff_dcache reset",-1);
	vcdp->declArray(c+5,"v e a ff_dcache din",-1,136,0);
	vcdp->declBit  (c+64,"v e a ff_dcache dinValid",-1);
	vcdp->declBit  (c+12,"v e a ff_dcache dinRetry",-1);
	vcdp->declArray(c+119,"v e a ff_dcache q",-1,136,0);
	vcdp->declBit  (c+341,"v e a ff_dcache qRetry",-1);
	vcdp->declBit  (c+340,"v e a ff_dcache qValid",-1);
	vcdp->declArray(c+225,"v e a ff_dcache shadowq",-1,136,0);
	vcdp->declBit  (c+73,"v e a ff_dcache c1",-1);
	vcdp->declBit  (c+74,"v e a ff_dcache c2",-1);
	vcdp->declBit  (c+230,"v e a ff_dcache shadowValid",-1);
	vcdp->declBit  (c+231,"v e a ff_dcache priv_qValid",-1);
	vcdp->declBit  (c+12,"v e a ff_dcache priv_dinRetry",-1);
	vcdp->declBit  (c+341,"v e a ff_dcache priv_qRetry",-1);
	vcdp->declBit  (c+64,"v e a ff_dcache priv_dinValid",-1);
	vcdp->declBit  (c+232,"v e a ff_dcache s_enable",-1);
	vcdp->declBit  (c+124,"v e a ff_dcache q_enable",-1);
	vcdp->declBit  (c+231,"v e a ff_dcache priv_qValidla2",-1);
    }
}

void Vcore::traceFullThis__1(Vcore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp46,159,0,5);
    //char	__VpadToAlign44[4];
    VL_SIGW(__Vtemp47,95,0,3);
    //char	__VpadToAlign60[4];
    VL_SIGW(__Vtemp48,127,0,4);
    VL_SIGW(__Vtemp49,95,0,3);
    //char	__VpadToAlign92[4];
    VL_SIGW(__Vtemp51,159,0,5);
    //char	__VpadToAlign116[4];
    VL_SIGW(__Vtemp52,95,0,3);
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->v__DOT__d__DOT__r__DOT__rf_cntr),5);
	vcdp->fullBit  (c+2,(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__c2));
	vcdp->fullQuad (c+3,(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_data_next),64);
	__Vtemp46[0U] = ((0xfffffe00U & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_data_next) 
					 << 9U)) | 
			 (((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_op_next) 
			   << 5U) | (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_rd_next)));
	__Vtemp46[1U] = ((0x1ffU & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_data_next) 
				    >> 0x17U)) | (0xfffffe00U 
						  & ((IData)(
							     (vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_data_next 
							      >> 0x20U)) 
						     << 9U)));
	__Vtemp46[2U] = ((0x1ffU & ((IData)((vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_data_next 
					     >> 0x20U)) 
				    >> 0x17U)) | (0xfffffe00U 
						  & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next) 
						     << 9U)));
	__Vtemp46[3U] = ((0x1ffU & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next) 
				    >> 0x17U)) | (0xfffffe00U 
						  & ((IData)(
							     (vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next 
							      >> 0x20U)) 
						     << 9U)));
	__Vtemp46[4U] = (0x1ffU & ((IData)((vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next 
					    >> 0x20U)) 
				   >> 0x17U));
	vcdp->fullArray(c+5,(__Vtemp46),137);
	vcdp->fullBit  (c+16,((1U & (~ (IData)(vlTOPp->v__DOT__fetch_retry)))));
	vcdp->fullBit  (c+17,(vlTOPp->v__DOT__f__DOT__i__DOT__ic_valid_we));
	vcdp->fullBit  (c+18,(vlTOPp->v__DOT__f__DOT__i__DOT__ic_data_we));
	vcdp->fullBit  (c+19,(vlTOPp->v__DOT__f__DOT__i__DOT__ic_tag_we));
	vcdp->fullBus  (c+21,(vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_next),32);
	vcdp->fullQuad (c+23,((VL_ULL(0x7ffffffffffffff) 
			       & (vlTOPp->v__DOT__f__DOT__pc_next 
				  >> 4U))),59);
	vcdp->fullBus  (c+25,(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_offset),5);
	vcdp->fullBus  (c+26,(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_index),6);
	vcdp->fullQuad (c+27,(vlTOPp->v__DOT__f__DOT__i__DOT__pc_req_tag),53);
	vcdp->fullBit  (c+29,(vlTOPp->v__DOT__f__DOT__i__DOT__pc_valid_next));
	vcdp->fullBit  (c+30,(vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__c1));
	vcdp->fullBit  (c+31,(vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__c2));
	vcdp->fullBit  (c+22,(vlTOPp->v__DOT__f__DOT__i__DOT__icache_req_addr_valid_next));
	__Vtemp47[0U] = (IData)(vlTOPp->v__DOT__f__DOT__pc_next);
	__Vtemp47[1U] = ((0x80000000U & (vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_next 
					 << 0x1fU)) 
			 | (IData)((vlTOPp->v__DOT__f__DOT__pc_next 
				    >> 0x20U)));
	__Vtemp47[2U] = (0x7fffffffU & (vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_next 
					>> 1U));
	vcdp->fullArray(c+32,(__Vtemp47),95);
	vcdp->fullBit  (c+35,(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__c1));
	vcdp->fullBit  (c+36,(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__c2));
	vcdp->fullBit  (c+20,(vlTOPp->v__DOT__f__DOT__i__DOT__core_ack_insn_valid_next));
	vcdp->fullQuad (c+14,(vlTOPp->v__DOT__f__DOT__pc_next),63);
	vcdp->fullBus  (c+37,(vlTOPp->v__DOT__d__DOT__load_next),32);
	vcdp->fullBit  (c+38,(vlTOPp->v__DOT__d__DOT__f1_retry));
	vcdp->fullBit  (c+39,(vlTOPp->v__DOT__d__DOT__load_valid_next));
	vcdp->fullBit  (c+10,(vlTOPp->v__DOT__fetch_retry));
	vcdp->fullBit  (c+40,(vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__c1));
	vcdp->fullQuad (c+41,(vlTOPp->v__DOT__d__DOT__r__DOT__data1_next),64);
	vcdp->fullQuad (c+43,(vlTOPp->v__DOT__d__DOT__r__DOT__data2_next),64);
	__Vtemp48[0U] = (IData)(vlTOPp->v__DOT__d__DOT__r__DOT__data2_next);
	__Vtemp48[1U] = (IData)((vlTOPp->v__DOT__d__DOT__r__DOT__data2_next 
				 >> 0x20U));
	__Vtemp48[2U] = (IData)(vlTOPp->v__DOT__d__DOT__r__DOT__data1_next);
	__Vtemp48[3U] = (IData)((vlTOPp->v__DOT__d__DOT__r__DOT__data1_next 
				 >> 0x20U));
	vcdp->fullArray(c+45,(__Vtemp48),128);
	vcdp->fullBit  (c+49,(vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__c1));
	vcdp->fullBit  (c+50,(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__c1));
	vcdp->fullBit  (c+51,(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__c1));
	vcdp->fullBit  (c+52,(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__c1));
	vcdp->fullBit  (c+13,(vlTOPp->v__DOT__decode_valid));
	vcdp->fullBit  (c+11,(vlTOPp->v__DOT__execute_retry));
	vcdp->fullBit  (c+54,(vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next));
	vcdp->fullQuad (c+55,(vlTOPp->v__DOT__e__DOT__a__DOT__dest_next),64);
	vcdp->fullQuad (c+58,(vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next),64);
	vcdp->fullQuad (c+60,(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_addr_next),64);
	vcdp->fullBus  (c+62,(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_op_next),4);
	vcdp->fullBus  (c+63,(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_rd_next),5);
	vcdp->fullBit  (c+65,(vlTOPp->v__DOT__e__DOT__a__DOT__dest_clear_next));
	vcdp->fullQuad (c+66,(vlTOPp->v__DOT__e__DOT__a__DOT__desired_pc_next),64);
	vcdp->fullBit  (c+68,(vlTOPp->v__DOT__e__DOT__a__DOT__busy_next));
	vcdp->fullQuad (c+69,((VL_ULL(0x7fffffffffffffff) 
			       & (vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_next 
				  >> 1U))),63);
	vcdp->fullBit  (c+71,(vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__c2));
	vcdp->fullBit  (c+57,(vlTOPp->v__DOT__e__DOT__a__DOT__branch_target_valid_next));
	vcdp->fullBit  (c+72,(vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__c2));
	vcdp->fullBit  (c+53,(vlTOPp->v__DOT__e__DOT__a__DOT__dest_valid_next));
	vcdp->fullBit  (c+73,(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__c1));
	vcdp->fullBit  (c+74,(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__c2));
	vcdp->fullBit  (c+12,(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__priv_dinRetry));
	vcdp->fullBit  (c+64,(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_valid_next));
	__Vtemp49[0U] = ((0xffffff80U & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dest_next) 
					 << 7U)) | 
			 (((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dest_long_next) 
			   << 6U) | ((0x3eU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
						<< 0x1aU) 
					       | (0x3fffffeU 
						  & (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
						     >> 6U)))) 
				     | (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dest_clear_next))));
	__Vtemp49[1U] = ((0x7fU & ((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__dest_next) 
				   >> 0x19U)) | (0xffffff80U 
						 & ((IData)(
							    (vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
							     >> 0x20U)) 
						    << 7U)));
	__Vtemp49[2U] = (0x7fU & ((IData)((vlTOPp->v__DOT__e__DOT__a__DOT__dest_next 
					   >> 0x20U)) 
				  >> 0x19U));
	vcdp->fullArray(c+75,(__Vtemp49),71);
	vcdp->fullBit  (c+78,(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__c2));
	vcdp->fullBit  (c+79,(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__c2));
	vcdp->fullBit  (c+80,(vlTOPp->v__DOT__dest_clear));
	vcdp->fullBit  (c+81,(vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__c2));
	vcdp->fullQuad (c+82,(vlTOPp->v__DOT__e__DOT__rs1_data),64);
	vcdp->fullQuad (c+84,(vlTOPp->v__DOT__e__DOT__rs2_data),64);
	vcdp->fullQuad (c+86,(((0x20U & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
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
					        ? (
						   (1U 
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
					        : (
						   (VL_ULL(0xfffffffffffff000) 
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
					        ? (
						   (VL_ULL(0xfffffffffffff000) 
						    & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						       << 0xcU)) 
						   | (QData)((IData)(
								     (0xfffU 
								      & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
									 >> 0x13U)))))
					        : (
						   (1U 
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
					        ? (
						   (VL_ULL(0xfffffffffffff000) 
						    & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
										>> 0x1eU))))) 
						       << 0xcU)) 
						   | (QData)((IData)(
								     (0xfffU 
								      & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
									 >> 0x13U)))))
					        : (
						   (1U 
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
					        ? (
						   (1U 
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
					        : (
						   (VL_ULL(0xfffffffffffff000) 
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
	vcdp->fullBus  (c+88,(vlTOPp->v__DOT__d__DOT__branchimm),13);
	vcdp->fullBus  (c+89,(vlTOPp->v__DOT__d__DOT__jalimm),21);
	vcdp->fullBus  (c+90,(vlTOPp->v__DOT__d__DOT__stimm12),12);
	__Vtemp51[0U] = (IData)(((0x20U & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
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
	__Vtemp51[1U] = (IData)((((0x20U & vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U])
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
	__Vtemp51[2U] = ((vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
			  << 1U) | (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[1U] 
				    >> 0x1fU));
	__Vtemp51[3U] = (IData)((VL_ULL(0xfffffffffffffffe) 
				 & (((QData)((IData)(
						     vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[1U])) 
				     << 0x21U) | ((QData)((IData)(
								  vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[0U])) 
						  << 1U))));
	__Vtemp51[4U] = (IData)(((VL_ULL(0xfffffffffffffffe) 
				  & (((QData)((IData)(
						      vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[1U])) 
				      << 0x21U) | ((QData)((IData)(
								   vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[0U])) 
						   << 1U))) 
				 >> 0x20U));
	vcdp->fullArray(c+91,(__Vtemp51),160);
	vcdp->fullQuad (c+104,(vlTOPp->v__DOT__f__DOT__pc),63);
	vcdp->fullQuad (c+102,(vlTOPp->v__DOT__req_addr),59);
	vcdp->fullBit  (c+106,(vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__q_enable));
	vcdp->fullArray(c+107,(vlTOPp->v__DOT__d__DOT__r__DOT____Vcellout__data__q),128);
	vcdp->fullBit  (c+111,(vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__q_enable));
	vcdp->fullQuad (c+98,((((QData)((IData)(vlTOPp->v__DOT__d__DOT__r__DOT____Vcellout__data__q[3U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->v__DOT__d__DOT__r__DOT____Vcellout__data__q[2U])))),64);
	vcdp->fullQuad (c+100,((((QData)((IData)(vlTOPp->v__DOT__d__DOT__r__DOT____Vcellout__data__q[1U])) 
				 << 0x20U) | (QData)((IData)(
							     vlTOPp->v__DOT__d__DOT__r__DOT____Vcellout__data__q[0U])))),64);
	vcdp->fullBus  (c+112,((0x1fU & vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem3__q[2U])),5);
	vcdp->fullQuad (c+113,((((QData)((IData)(vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem3__q[1U])) 
				 << 0x20U) | (QData)((IData)(
							     vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem3__q[0U])))),64);
	vcdp->fullArray(c+115,(vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem3__q),69);
	vcdp->fullBit  (c+118,(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__q_enable));
	vcdp->fullQuad (c+96,(vlTOPp->v__DOT__execute_pc),63);
	vcdp->fullArray(c+119,(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff_dcache__q),137);
	vcdp->fullBit  (c+124,(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__q_enable));
	vcdp->fullBus  (c+128,(vlTOPp->v__DOT__f__DOT__i__DOT__clear_idx),6);
	vcdp->fullBit  (c+129,(vlTOPp->v__DOT__f__DOT__i__DOT__pc_valid));
	vcdp->fullQuad (c+130,(vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__shadowq),59);
	vcdp->fullBit  (c+132,(vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__shadowValid));
	vcdp->fullBit  (c+133,(vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__priv_qValidla2));
	vcdp->fullBit  (c+134,((1U & (~ (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__shadowValid)))));
	vcdp->fullQuad (c+136,(vlTOPp->v__DOT__f__DOT__f_pc__DOT__shadowq),63);
	vcdp->fullBit  (c+135,(vlTOPp->v__DOT__f__DOT__f_pc__DOT__priv_qValidla2));
	vcdp->fullBus  (c+138,(vlTOPp->v__DOT__d__DOT__load),32);
	vcdp->fullBit  (c+139,(vlTOPp->v__DOT__d__DOT__load_valid));
	vcdp->fullBit  (c+125,(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__priv_qValidla2));
	vcdp->fullBit  (c+140,(vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__priv_qValidla2));
	vcdp->fullQuad (c+141,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[0]),64);
	vcdp->fullQuad (c+143,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[1]),64);
	vcdp->fullQuad (c+145,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[2]),64);
	vcdp->fullQuad (c+147,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[3]),64);
	vcdp->fullQuad (c+149,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[4]),64);
	vcdp->fullQuad (c+151,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[5]),64);
	vcdp->fullQuad (c+153,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[6]),64);
	vcdp->fullQuad (c+155,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[7]),64);
	vcdp->fullQuad (c+157,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[8]),64);
	vcdp->fullQuad (c+159,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[9]),64);
	vcdp->fullQuad (c+161,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[10]),64);
	vcdp->fullQuad (c+163,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[11]),64);
	vcdp->fullQuad (c+165,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[12]),64);
	vcdp->fullQuad (c+167,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[13]),64);
	vcdp->fullQuad (c+169,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[14]),64);
	vcdp->fullQuad (c+171,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[15]),64);
	vcdp->fullQuad (c+173,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[16]),64);
	vcdp->fullQuad (c+175,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[17]),64);
	vcdp->fullQuad (c+177,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[18]),64);
	vcdp->fullQuad (c+179,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[19]),64);
	vcdp->fullQuad (c+181,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[20]),64);
	vcdp->fullQuad (c+183,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[21]),64);
	vcdp->fullQuad (c+185,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[22]),64);
	vcdp->fullQuad (c+187,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[23]),64);
	vcdp->fullQuad (c+189,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[24]),64);
	vcdp->fullQuad (c+191,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[25]),64);
	vcdp->fullQuad (c+193,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[26]),64);
	vcdp->fullQuad (c+195,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[27]),64);
	vcdp->fullQuad (c+197,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[28]),64);
	vcdp->fullQuad (c+199,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[29]),64);
	vcdp->fullQuad (c+201,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[30]),64);
	vcdp->fullQuad (c+203,(vlTOPp->v__DOT__d__DOT__r__DOT__rf[31]),64);
	vcdp->fullArray(c+206,(vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__shadowq),128);
	vcdp->fullBit  (c+210,(vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__shadowValid));
	vcdp->fullBit  (c+211,((1U & (~ (IData)(vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__shadowValid)))));
	vcdp->fullBit  (c+205,(vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__priv_qValidla2));
	vcdp->fullBit  (c+212,(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__priv_qValidla2));
	vcdp->fullArray(c+215,(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__shadowq),69);
	vcdp->fullBit  (c+218,(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__shadowValid));
	vcdp->fullBit  (c+213,(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__priv_qValidla2));
	vcdp->fullBit  (c+219,((1U & (~ (IData)(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__shadowValid)))));
	vcdp->fullBit  (c+214,(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__priv_qValidla2));
	vcdp->fullQuad (c+220,(vlTOPp->v__DOT__e__DOT__a__DOT__desired_pc),64);
	vcdp->fullBit  (c+222,(vlTOPp->v__DOT__e__DOT__a__DOT__busy));
	vcdp->fullQuad (c+223,(vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__shadowq),63);
	vcdp->fullBit  (c+126,(vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__priv_qValidla2));
	vcdp->fullBit  (c+127,(vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__priv_qValidla2));
	vcdp->fullArray(c+225,(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__shadowq),137);
	vcdp->fullBit  (c+230,(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__shadowValid));
	vcdp->fullBit  (c+231,(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__priv_qValidla2));
	vcdp->fullBit  (c+232,((1U & (~ (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff_dcache__DOT__shadowValid)))));
	vcdp->fullBus  (c+233,((0x1fU & vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem2__q[2U])),5);
	vcdp->fullQuad (c+234,((((QData)((IData)(vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem2__q[1U])) 
				 << 0x20U) | (QData)((IData)(
							     vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem2__q[0U])))),64);
	vcdp->fullArray(c+236,(vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem2__q),69);
	vcdp->fullBit  (c+239,(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__q_enable));
	vcdp->fullArray(c+240,(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__shadowq),69);
	vcdp->fullBit  (c+243,(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__shadowValid));
	vcdp->fullBit  (c+244,((1U & (~ (IData)(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__shadowValid)))));
	vcdp->fullBus  (c+245,((0x1fU & vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem1__q[2U])),5);
	vcdp->fullQuad (c+246,((((QData)((IData)(vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem1__q[1U])) 
				 << 0x20U) | (QData)((IData)(
							     vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem1__q[0U])))),64);
	vcdp->fullArray(c+248,(vlTOPp->v__DOT__e__DOT____Vcellout__rd_mem1__q),69);
	vcdp->fullBit  (c+251,(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__q_enable));
	vcdp->fullArray(c+252,(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__shadowq),69);
	vcdp->fullBit  (c+255,(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__shadowValid));
	vcdp->fullBit  (c+256,((1U & (~ (IData)(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__shadowValid)))));
	__Vtemp52[0U] = (IData)((((QData)((IData)(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[2U])) 
				  << 0x39U) | (((QData)((IData)(
								vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U])) 
						<< 0x19U) 
					       | ((QData)((IData)(
								  vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U])) 
						  >> 7U))));
	__Vtemp52[1U] = (IData)(((((QData)((IData)(
						   vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[2U])) 
				   << 0x39U) | (((QData)((IData)(
								 vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U])) 
						 << 0x19U) 
						| ((QData)((IData)(
								   vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U])) 
						   >> 7U))) 
				 >> 0x20U));
	__Vtemp52[2U] = (0x1fU & ((vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U] 
				   << 0x1fU) | (vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U] 
						>> 1U)));
	vcdp->fullArray(c+262,(__Vtemp52),69);
	vcdp->fullBus  (c+257,((0x1fU & ((vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U] 
					  << 0x1fU) 
					 | (vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U] 
					    >> 1U)))),5);
	vcdp->fullBit  (c+258,((1U & (vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U] 
				      >> 6U))));
	vcdp->fullQuad (c+259,((((QData)((IData)(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[2U])) 
				 << 0x39U) | (((QData)((IData)(
							       vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[1U])) 
					       << 0x19U) 
					      | ((QData)((IData)(
								 vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q[0U])) 
						 >> 7U)))),64);
	vcdp->fullArray(c+265,(vlTOPp->v__DOT__e__DOT__a__DOT____Vcellout__ff2__q),71);
	vcdp->fullBit  (c+261,(vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__q_enable));
	vcdp->fullArray(c+270,(vlTOPp->v__DOT__e__DOT__a__DOT__ff2__DOT__shadowq),71);
	vcdp->fullBit  (c+268,(vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__shadowValid));
	vcdp->fullBit  (c+269,((1U & (~ (IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__shadowValid)))));
	vcdp->fullArray(c+278,(vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q),160);
	vcdp->fullBit  (c+283,(vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__q_enable));
	vcdp->fullBus  (c+284,((0x7fU & vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U])),7);
	vcdp->fullBus  (c+285,((0x1fU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
					  << 0x11U) 
					 | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
					    >> 0xfU)))),5);
	vcdp->fullBus  (c+286,((0x1fU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
					  << 0xcU) 
					 | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
					    >> 0x14U)))),5);
	vcdp->fullBus  (c+273,(vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U]),32);
	vcdp->fullQuad (c+274,((((QData)((IData)(vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[4U])) 
				 << 0x20U) | (QData)((IData)(
							     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U])))),64);
	vcdp->fullQuad (c+276,((((QData)((IData)(vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[1U])) 
				 << 0x20U) | (QData)((IData)(
							     vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[0U])))),64);
	vcdp->fullBus  (c+287,((0x1fU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
					  << 0x19U) 
					 | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
					    >> 7U)))),5);
	vcdp->fullBus  (c+288,((7U & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
				       << 0x14U) | 
				      (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
				       >> 0xcU)))),3);
	vcdp->fullBus  (c+289,((0x7fU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
					  << 7U) | 
					 (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
					  >> 0x19U)))),7);
	vcdp->fullBus  (c+290,((0x3fU & ((vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[3U] 
					  << 0xcU) 
					 | (vlTOPp->v__DOT__d__DOT____Vcellout__ff_pc_insn_signext__q[2U] 
					    >> 0x14U)))),6);
	vcdp->fullArray(c+291,(vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__shadowq),160);
	vcdp->fullBit  (c+296,(vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__shadowValid));
	vcdp->fullBit  (c+297,((1U & (~ (IData)(vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__shadowValid)))));
	vcdp->fullQuad (c+299,((VL_ULL(0x7fffffffffffffff) 
				& (((QData)((IData)(
						    vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[1U])) 
				    << 0x20U) | (QData)((IData)(
								vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[0U]))))),63);
	vcdp->fullArray(c+301,(vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q),95);
	vcdp->fullBit  (c+304,(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__q_enable));
	vcdp->fullBus  (c+298,(((vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
				 << 1U) | (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[1U] 
					   >> 0x1fU))),32);
	vcdp->fullQuad (c+305,((VL_ULL(0xfffffffffffffffe) 
				& (((QData)((IData)(
						    vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[1U])) 
				    << 0x21U) | ((QData)((IData)(
								 vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[0U])) 
						 << 1U)))),64);
	vcdp->fullBus  (c+307,((0x1fU & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
					 >> 0xeU))),5);
	vcdp->fullBus  (c+308,((0x1fU & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
					 >> 0x13U))),5);
	vcdp->fullBus  (c+309,((0x1fU & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
					 >> 6U))),5);
	vcdp->fullBus  (c+310,((0xfffU & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
					  >> 0x13U))),12);
	vcdp->fullBus  (c+311,((0xfffffU & (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
					    >> 0xbU))),20);
	vcdp->fullBus  (c+312,((0x7fU & ((vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[2U] 
					  << 1U) | 
					 (vlTOPp->v__DOT__f__DOT__i__DOT____Vcellout__ff_ack_insn__q[1U] 
					  >> 0x1fU)))),7);
	vcdp->fullArray(c+313,(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__shadowq),95);
	vcdp->fullBit  (c+316,(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__shadowValid));
	vcdp->fullBit  (c+317,((1U & (~ (IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__shadowValid)))));
	vcdp->fullQuad (c+330,(vlTOPp->icache_req_addr),64);
	vcdp->fullQuad (c+347,(vlTOPp->debug_pc_ex),64);
	vcdp->fullBit  (c+349,(vlTOPp->debug_dest_valid));
	vcdp->fullQuad (c+350,(vlTOPp->debug_dest),64);
	vcdp->fullBus  (c+352,(vlTOPp->debug_dest_rd),5);
	vcdp->fullBit  (c+353,(vlTOPp->debug_dest_long));
	vcdp->fullBit  (c+320,(vlTOPp->icache_ack_data_retry));
	vcdp->fullBit  (c+321,(vlTOPp->icache_ack_data_valid));
	vcdp->fullArray(c+322,(vlTOPp->icache_ack_data),256);
	vcdp->fullBit  (c+354,(((IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_req__DOT__shadowValid) 
				| (IData)(vlTOPp->reset))));
	vcdp->fullBit  (c+332,(vlTOPp->icache_req_addr_valid));
	vcdp->fullBit  (c+333,(vlTOPp->icache_req_addr_retry));
	vcdp->fullBit  (c+355,(((IData)(vlTOPp->v__DOT__f__DOT__i__DOT__ff_ack_insn__DOT__shadowValid) 
				| (IData)(vlTOPp->reset))));
	vcdp->fullBit  (c+346,(vlTOPp->dcache_ack_retry));
	vcdp->fullBit  (c+357,(((IData)(vlTOPp->v__DOT__d__DOT__ff_pc_insn_signext__DOT__shadowValid) 
				| (IData)(vlTOPp->reset))));
	vcdp->fullQuad (c+342,(vlTOPp->dcache_ack_data),64);
	vcdp->fullBus  (c+344,(vlTOPp->dcache_ack_rd),5);
	vcdp->fullBit  (c+345,(vlTOPp->dcache_ack_valid));
	vcdp->fullBit  (c+358,(((IData)(vlTOPp->v__DOT__d__DOT__r__DOT__data__DOT__shadowValid) 
				| (IData)(vlTOPp->reset))));
	vcdp->fullBit  (c+359,(((IData)(vlTOPp->v__DOT__e__DOT__rd_mem1__DOT__shadowValid) 
				| (IData)(vlTOPp->reset))));
	vcdp->fullBit  (c+360,(((IData)(vlTOPp->v__DOT__e__DOT__rd_mem2__DOT__shadowValid) 
				| (IData)(vlTOPp->reset))));
	vcdp->fullBit  (c+361,(((IData)(vlTOPp->v__DOT__e__DOT__rd_mem3__DOT__shadowValid) 
				| (IData)(vlTOPp->reset))));
	vcdp->fullQuad (c+334,(vlTOPp->dcache_req_addr),64);
	vcdp->fullQuad (c+336,(vlTOPp->dcache_req_data),64);
	vcdp->fullBus  (c+338,(vlTOPp->dcache_req_op),4);
	vcdp->fullBus  (c+339,(vlTOPp->dcache_req_rd),5);
	vcdp->fullBit  (c+356,(((IData)(vlTOPp->v__DOT__e__DOT__a__DOT__ff1__DOT__shadowValid) 
				| (IData)(vlTOPp->reset))));
	vcdp->fullBit  (c+318,(vlTOPp->clk));
	vcdp->fullBit  (c+319,(vlTOPp->reset));
	vcdp->fullBit  (c+340,(vlTOPp->dcache_req_valid));
	vcdp->fullBit  (c+341,(vlTOPp->dcache_req_retry));
	vcdp->fullBus  (c+364,(0x3bU),32);
	vcdp->fullBus  (c+365,(0x5fU),32);
	vcdp->fullBus  (c+366,(0x3fU),32);
	vcdp->fullBit  (c+376,(vlTOPp->v__DOT__d__DOT__f_retry));
	vcdp->fullBus  (c+377,(0x20U),32);
	vcdp->fullBus  (c+378,(0xa0U),32);
	vcdp->fullBus  (c+379,(0x80U),32);
	vcdp->fullBit  (c+367,(1U));
	vcdp->fullQuad (c+380,(vlTOPp->v__DOT__e__DOT__pc),64);
	vcdp->fullBus  (c+382,(0x45U),32);
	vcdp->fullBit  (c+383,(vlTOPp->v__DOT__e__DOT__a__DOT__dcache_req_retry_next));
	vcdp->fullBus  (c+368,(3U),7);
	vcdp->fullBus  (c+369,(0x13U),7);
	vcdp->fullBus  (c+384,(0x17U),7);
	vcdp->fullBus  (c+370,(0x1bU),7);
	vcdp->fullBus  (c+371,(0x23U),7);
	vcdp->fullBus  (c+372,(0x33U),7);
	vcdp->fullBus  (c+373,(0x3bU),7);
	vcdp->fullBus  (c+374,(0x63U),7);
	vcdp->fullBus  (c+375,(0x67U),7);
	vcdp->fullBus  (c+385,(0x6fU),7);
	vcdp->fullBus  (c+386,(vlTOPp->v__DOT__e__DOT__a__DOT__dest_reg),5);
	vcdp->fullBus  (c+389,(2U),3);
	vcdp->fullBus  (c+390,(3U),3);
	vcdp->fullBus  (c+387,(0U),3);
	vcdp->fullBus  (c+388,(1U),3);
	vcdp->fullBus  (c+391,(4U),3);
	vcdp->fullBus  (c+392,(5U),3);
	vcdp->fullBus  (c+393,(6U),3);
	vcdp->fullBus  (c+394,(7U),3);
	vcdp->fullBus  (c+396,(0x20U),7);
	vcdp->fullBus  (c+397,(0U),6);
	vcdp->fullBus  (c+398,(0x10U),6);
	vcdp->fullBus  (c+395,(0U),7);
	vcdp->fullBus  (c+399,(0x40U),32);
	vcdp->fullBus  (c+363,(1U),32);
	vcdp->fullBus  (c+400,(0x47U),32);
	vcdp->fullBit  (c+362,(0U));
	vcdp->fullBus  (c+401,(0x89U),32);
    }
}
