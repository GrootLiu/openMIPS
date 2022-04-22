// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+101,"clk", false,-1);
        tracep->declBit(c+102,"rst", false,-1);
        tracep->declBit(c+101,"top clk", false,-1);
        tracep->declBit(c+102,"top rst", false,-1);
        tracep->declBus(c+1,"top inst_addr", false,-1, 31,0);
        tracep->declBus(c+2,"top inst", false,-1, 31,0);
        tracep->declBit(c+3,"top rom_ce", false,-1);
        tracep->declBit(c+101,"top openmips0 clk", false,-1);
        tracep->declBit(c+102,"top openmips0 rst", false,-1);
        tracep->declBus(c+2,"top openmips0 rom_data_i", false,-1, 31,0);
        tracep->declBus(c+1,"top openmips0 rom_addr_o", false,-1, 31,0);
        tracep->declBit(c+3,"top openmips0 rom_ce_o", false,-1);
        tracep->declBus(c+1,"top openmips0 pc", false,-1, 31,0);
        tracep->declBus(c+4,"top openmips0 id_pc_i", false,-1, 31,0);
        tracep->declBus(c+5,"top openmips0 id_inst_i", false,-1, 31,0);
        tracep->declBus(c+72,"top openmips0 id_aluop_o", false,-1, 7,0);
        tracep->declBus(c+73,"top openmips0 id_alusel_o", false,-1, 2,0);
        tracep->declBus(c+103,"top openmips0 id_reg1_o", false,-1, 31,0);
        tracep->declBus(c+74,"top openmips0 id_reg2_o", false,-1, 31,0);
        tracep->declBit(c+75,"top openmips0 id_wreg_o", false,-1);
        tracep->declBus(c+76,"top openmips0 id_wd_o", false,-1, 4,0);
        tracep->declBus(c+6,"top openmips0 ex_aluop_i", false,-1, 7,0);
        tracep->declBus(c+7,"top openmips0 ex_alusel_i", false,-1, 2,0);
        tracep->declBus(c+8,"top openmips0 ex_reg1_i", false,-1, 31,0);
        tracep->declBus(c+9,"top openmips0 ex_reg2_i", false,-1, 31,0);
        tracep->declBit(c+10,"top openmips0 ex_wreg_i", false,-1);
        tracep->declBus(c+11,"top openmips0 ex_wd_i", false,-1, 4,0);
        tracep->declBit(c+12,"top openmips0 ex_wreg_o", false,-1);
        tracep->declBus(c+11,"top openmips0 ex_wd_o", false,-1, 4,0);
        tracep->declBus(c+77,"top openmips0 ex_wdata_o", false,-1, 31,0);
        tracep->declBit(c+78,"top openmips0 ex_whilo_o", false,-1);
        tracep->declBus(c+79,"top openmips0 ex_hi_o", false,-1, 31,0);
        tracep->declBus(c+80,"top openmips0 ex_lo_o", false,-1, 31,0);
        tracep->declBit(c+13,"top openmips0 mem_wreg_i", false,-1);
        tracep->declBus(c+14,"top openmips0 mem_wd_i", false,-1, 4,0);
        tracep->declBus(c+15,"top openmips0 mem_wdata_i", false,-1, 31,0);
        tracep->declBit(c+16,"top openmips0 mem_whilo_i", false,-1);
        tracep->declBus(c+17,"top openmips0 mem_hi_i", false,-1, 31,0);
        tracep->declBus(c+18,"top openmips0 mem_lo_i", false,-1, 31,0);
        tracep->declBit(c+81,"top openmips0 mem_wreg_o", false,-1);
        tracep->declBus(c+82,"top openmips0 mem_wd_o", false,-1, 4,0);
        tracep->declBus(c+83,"top openmips0 mem_wdata_o", false,-1, 31,0);
        tracep->declBit(c+84,"top openmips0 mem_whilo_o", false,-1);
        tracep->declBus(c+85,"top openmips0 mem_hi_o", false,-1, 31,0);
        tracep->declBus(c+86,"top openmips0 mem_lo_o", false,-1, 31,0);
        tracep->declBit(c+19,"top openmips0 wb_wreg_i", false,-1);
        tracep->declBus(c+20,"top openmips0 wb_wd_i", false,-1, 4,0);
        tracep->declBus(c+21,"top openmips0 wb_wdata_i", false,-1, 31,0);
        tracep->declBit(c+22,"top openmips0 wb_whilo_i", false,-1);
        tracep->declBus(c+23,"top openmips0 wb_hi_i", false,-1, 31,0);
        tracep->declBus(c+24,"top openmips0 wb_lo_i", false,-1, 31,0);
        tracep->declBit(c+87,"top openmips0 reg1_read", false,-1);
        tracep->declBit(c+88,"top openmips0 reg2_read", false,-1);
        tracep->declBus(c+104,"top openmips0 reg1_data", false,-1, 31,0);
        tracep->declBus(c+105,"top openmips0 reg2_data", false,-1, 31,0);
        tracep->declBus(c+89,"top openmips0 reg1_addr", false,-1, 4,0);
        tracep->declBus(c+90,"top openmips0 reg2_addr", false,-1, 4,0);
        tracep->declBus(c+25,"top openmips0 hi", false,-1, 31,0);
        tracep->declBus(c+26,"top openmips0 lo", false,-1, 31,0);
        tracep->declBit(c+101,"top openmips0 pc_reg0 clk", false,-1);
        tracep->declBit(c+102,"top openmips0 pc_reg0 rst", false,-1);
        tracep->declBit(c+3,"top openmips0 pc_reg0 ce", false,-1);
        tracep->declBus(c+1,"top openmips0 pc_reg0 pc", false,-1, 31,0);
        tracep->declBit(c+101,"top openmips0 if_id0 clk", false,-1);
        tracep->declBit(c+102,"top openmips0 if_id0 rst", false,-1);
        tracep->declBus(c+1,"top openmips0 if_id0 if_pc", false,-1, 31,0);
        tracep->declBus(c+2,"top openmips0 if_id0 if_inst", false,-1, 31,0);
        tracep->declBus(c+4,"top openmips0 if_id0 id_pc", false,-1, 31,0);
        tracep->declBus(c+5,"top openmips0 if_id0 id_inst", false,-1, 31,0);
        tracep->declBit(c+102,"top openmips0 id0 rst", false,-1);
        tracep->declBus(c+4,"top openmips0 id0 pc_i", false,-1, 31,0);
        tracep->declBus(c+5,"top openmips0 id0 inst_i", false,-1, 31,0);
        tracep->declBus(c+104,"top openmips0 id0 reg1_data_i", false,-1, 31,0);
        tracep->declBus(c+105,"top openmips0 id0 reg2_data_i", false,-1, 31,0);
        tracep->declBit(c+12,"top openmips0 id0 ex_wreg_i", false,-1);
        tracep->declBus(c+11,"top openmips0 id0 ex_wd_i", false,-1, 4,0);
        tracep->declBus(c+77,"top openmips0 id0 ex_wdata_i", false,-1, 31,0);
        tracep->declBit(c+81,"top openmips0 id0 mem_wreg_i", false,-1);
        tracep->declBus(c+82,"top openmips0 id0 mem_wd_i", false,-1, 4,0);
        tracep->declBus(c+83,"top openmips0 id0 mem_wdata_i", false,-1, 31,0);
        tracep->declBit(c+87,"top openmips0 id0 reg1_read_o", false,-1);
        tracep->declBit(c+88,"top openmips0 id0 reg2_read_o", false,-1);
        tracep->declBus(c+89,"top openmips0 id0 reg1_addr_o", false,-1, 4,0);
        tracep->declBus(c+90,"top openmips0 id0 reg2_addr_o", false,-1, 4,0);
        tracep->declBus(c+72,"top openmips0 id0 aluop_o", false,-1, 7,0);
        tracep->declBus(c+73,"top openmips0 id0 alusel_o", false,-1, 2,0);
        tracep->declBus(c+103,"top openmips0 id0 reg1_o", false,-1, 31,0);
        tracep->declBus(c+74,"top openmips0 id0 reg2_o", false,-1, 31,0);
        tracep->declBus(c+76,"top openmips0 id0 wd_o", false,-1, 4,0);
        tracep->declBit(c+75,"top openmips0 id0 wreg_o", false,-1);
        tracep->declBus(c+27,"top openmips0 id0 op", false,-1, 5,0);
        tracep->declBus(c+28,"top openmips0 id0 op2", false,-1, 4,0);
        tracep->declBus(c+29,"top openmips0 id0 op3", false,-1, 5,0);
        tracep->declBus(c+30,"top openmips0 id0 op4", false,-1, 4,0);
        tracep->declBus(c+91,"top openmips0 id0 imm", false,-1, 31,0);
        tracep->declBit(c+92,"top openmips0 id0 instvalid", false,-1);
        tracep->declBit(c+101,"top openmips0 regfile1 clk", false,-1);
        tracep->declBit(c+102,"top openmips0 regfile1 rst", false,-1);
        tracep->declBit(c+19,"top openmips0 regfile1 we", false,-1);
        tracep->declBus(c+20,"top openmips0 regfile1 waddr", false,-1, 4,0);
        tracep->declBus(c+21,"top openmips0 regfile1 wdata", false,-1, 31,0);
        tracep->declBit(c+87,"top openmips0 regfile1 re1", false,-1);
        tracep->declBus(c+89,"top openmips0 regfile1 raddr1", false,-1, 4,0);
        tracep->declBus(c+104,"top openmips0 regfile1 rdata1", false,-1, 31,0);
        tracep->declBit(c+88,"top openmips0 regfile1 re2", false,-1);
        tracep->declBus(c+90,"top openmips0 regfile1 raddr2", false,-1, 4,0);
        tracep->declBus(c+105,"top openmips0 regfile1 rdata2", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+31+i*1,"top openmips0 regfile1 regs", true,(i+0), 31,0);}}
        tracep->declBit(c+101,"top openmips0 id_ex0 clk", false,-1);
        tracep->declBit(c+102,"top openmips0 id_ex0 rst", false,-1);
        tracep->declBus(c+72,"top openmips0 id_ex0 id_aluop", false,-1, 7,0);
        tracep->declBus(c+73,"top openmips0 id_ex0 id_alusel", false,-1, 2,0);
        tracep->declBus(c+103,"top openmips0 id_ex0 id_reg1", false,-1, 31,0);
        tracep->declBus(c+74,"top openmips0 id_ex0 id_reg2", false,-1, 31,0);
        tracep->declBus(c+76,"top openmips0 id_ex0 id_wd", false,-1, 4,0);
        tracep->declBit(c+75,"top openmips0 id_ex0 id_wreg", false,-1);
        tracep->declBus(c+6,"top openmips0 id_ex0 ex_aluop", false,-1, 7,0);
        tracep->declBus(c+7,"top openmips0 id_ex0 ex_alusel", false,-1, 2,0);
        tracep->declBus(c+8,"top openmips0 id_ex0 ex_reg1", false,-1, 31,0);
        tracep->declBus(c+9,"top openmips0 id_ex0 ex_reg2", false,-1, 31,0);
        tracep->declBus(c+11,"top openmips0 id_ex0 ex_wd", false,-1, 4,0);
        tracep->declBit(c+10,"top openmips0 id_ex0 ex_wreg", false,-1);
        tracep->declBit(c+102,"top openmips0 ex0 rst", false,-1);
        tracep->declBus(c+6,"top openmips0 ex0 aluop_i", false,-1, 7,0);
        tracep->declBus(c+7,"top openmips0 ex0 alusel_i", false,-1, 2,0);
        tracep->declBus(c+8,"top openmips0 ex0 reg1_i", false,-1, 31,0);
        tracep->declBus(c+9,"top openmips0 ex0 reg2_i", false,-1, 31,0);
        tracep->declBus(c+11,"top openmips0 ex0 wd_i", false,-1, 4,0);
        tracep->declBit(c+10,"top openmips0 ex0 wreg_i", false,-1);
        tracep->declBus(c+11,"top openmips0 ex0 wd_o", false,-1, 4,0);
        tracep->declBit(c+12,"top openmips0 ex0 wreg_o", false,-1);
        tracep->declBus(c+77,"top openmips0 ex0 wdata_o", false,-1, 31,0);
        tracep->declBus(c+25,"top openmips0 ex0 hi_i", false,-1, 31,0);
        tracep->declBus(c+26,"top openmips0 ex0 lo_i", false,-1, 31,0);
        tracep->declBit(c+16,"top openmips0 ex0 mem_whilo_i", false,-1);
        tracep->declBus(c+85,"top openmips0 ex0 mem_hi_i", false,-1, 31,0);
        tracep->declBus(c+86,"top openmips0 ex0 mem_lo_i", false,-1, 31,0);
        tracep->declBit(c+22,"top openmips0 ex0 wb_whilo_i", false,-1);
        tracep->declBus(c+23,"top openmips0 ex0 wb_hi_i", false,-1, 31,0);
        tracep->declBus(c+24,"top openmips0 ex0 wb_lo_i", false,-1, 31,0);
        tracep->declBit(c+78,"top openmips0 ex0 whilo_o", false,-1);
        tracep->declBus(c+79,"top openmips0 ex0 hi_o", false,-1, 31,0);
        tracep->declBus(c+80,"top openmips0 ex0 lo_o", false,-1, 31,0);
        tracep->declBus(c+93,"top openmips0 ex0 logicout", false,-1, 31,0);
        tracep->declBus(c+94,"top openmips0 ex0 shiftres", false,-1, 31,0);
        tracep->declBus(c+95,"top openmips0 ex0 movres", false,-1, 31,0);
        tracep->declBus(c+96,"top openmips0 ex0 HI", false,-1, 31,0);
        tracep->declBus(c+97,"top openmips0 ex0 LO", false,-1, 31,0);
        tracep->declBit(c+63,"top openmips0 ex0 ov_sum", false,-1);
        tracep->declBit(c+106,"top openmips0 ex0 reg1_eq_reg2", false,-1);
        tracep->declBit(c+64,"top openmips0 ex0 reg1_lt_reg2", false,-1);
        tracep->declBus(c+98,"top openmips0 ex0 arithmeticres", false,-1, 31,0);
        tracep->declBus(c+65,"top openmips0 ex0 reg2_i_mux", false,-1, 31,0);
        tracep->declBus(c+66,"top openmips0 ex0 reg1_i_not", false,-1, 31,0);
        tracep->declBus(c+67,"top openmips0 ex0 result_sum", false,-1, 31,0);
        tracep->declBus(c+68,"top openmips0 ex0 opdata1_mult", false,-1, 31,0);
        tracep->declBus(c+69,"top openmips0 ex0 opdata2_mult", false,-1, 31,0);
        tracep->declQuad(c+70,"top openmips0 ex0 hilo_temp", false,-1, 63,0);
        tracep->declQuad(c+99,"top openmips0 ex0 mulres", false,-1, 63,0);
        tracep->declBit(c+101,"top openmips0 ex_mem0 clk", false,-1);
        tracep->declBit(c+102,"top openmips0 ex_mem0 rst", false,-1);
        tracep->declBus(c+11,"top openmips0 ex_mem0 ex_wd", false,-1, 4,0);
        tracep->declBit(c+12,"top openmips0 ex_mem0 ex_wreg", false,-1);
        tracep->declBus(c+77,"top openmips0 ex_mem0 ex_wdata", false,-1, 31,0);
        tracep->declBus(c+14,"top openmips0 ex_mem0 mem_wd", false,-1, 4,0);
        tracep->declBit(c+13,"top openmips0 ex_mem0 mem_wreg", false,-1);
        tracep->declBus(c+15,"top openmips0 ex_mem0 mem_wdata", false,-1, 31,0);
        tracep->declBit(c+78,"top openmips0 ex_mem0 ex_whilo", false,-1);
        tracep->declBus(c+79,"top openmips0 ex_mem0 ex_hi", false,-1, 31,0);
        tracep->declBus(c+80,"top openmips0 ex_mem0 ex_lo", false,-1, 31,0);
        tracep->declBit(c+16,"top openmips0 ex_mem0 mem_whilo", false,-1);
        tracep->declBus(c+17,"top openmips0 ex_mem0 mem_hi", false,-1, 31,0);
        tracep->declBus(c+18,"top openmips0 ex_mem0 mem_lo", false,-1, 31,0);
        tracep->declBit(c+102,"top openmips0 mem0 rst", false,-1);
        tracep->declBus(c+14,"top openmips0 mem0 wd_i", false,-1, 4,0);
        tracep->declBit(c+13,"top openmips0 mem0 wreg_i", false,-1);
        tracep->declBus(c+15,"top openmips0 mem0 wdata_i", false,-1, 31,0);
        tracep->declBus(c+82,"top openmips0 mem0 wd_o", false,-1, 4,0);
        tracep->declBit(c+81,"top openmips0 mem0 wreg_o", false,-1);
        tracep->declBus(c+83,"top openmips0 mem0 wdata_o", false,-1, 31,0);
        tracep->declBit(c+16,"top openmips0 mem0 whilo_i", false,-1);
        tracep->declBus(c+17,"top openmips0 mem0 hi_i", false,-1, 31,0);
        tracep->declBus(c+18,"top openmips0 mem0 lo_i", false,-1, 31,0);
        tracep->declBit(c+84,"top openmips0 mem0 whilo_o", false,-1);
        tracep->declBus(c+85,"top openmips0 mem0 hi_o", false,-1, 31,0);
        tracep->declBus(c+86,"top openmips0 mem0 lo_o", false,-1, 31,0);
        tracep->declBit(c+101,"top openmips0 mem_wb0 clk", false,-1);
        tracep->declBit(c+102,"top openmips0 mem_wb0 rst", false,-1);
        tracep->declBus(c+82,"top openmips0 mem_wb0 mem_wd", false,-1, 4,0);
        tracep->declBit(c+81,"top openmips0 mem_wb0 mem_wreg", false,-1);
        tracep->declBus(c+83,"top openmips0 mem_wb0 mem_wdata", false,-1, 31,0);
        tracep->declBus(c+20,"top openmips0 mem_wb0 wb_wd", false,-1, 4,0);
        tracep->declBit(c+19,"top openmips0 mem_wb0 wb_wreg", false,-1);
        tracep->declBus(c+21,"top openmips0 mem_wb0 wb_wdata", false,-1, 31,0);
        tracep->declBit(c+84,"top openmips0 mem_wb0 mem_whilo", false,-1);
        tracep->declBus(c+85,"top openmips0 mem_wb0 mem_hi", false,-1, 31,0);
        tracep->declBus(c+86,"top openmips0 mem_wb0 mem_lo", false,-1, 31,0);
        tracep->declBit(c+22,"top openmips0 mem_wb0 wb_whilo", false,-1);
        tracep->declBus(c+23,"top openmips0 mem_wb0 wb_hi", false,-1, 31,0);
        tracep->declBus(c+24,"top openmips0 mem_wb0 wb_lo", false,-1, 31,0);
        tracep->declBit(c+102,"top openmips0 hilo_reg0 rst", false,-1);
        tracep->declBit(c+101,"top openmips0 hilo_reg0 clk", false,-1);
        tracep->declBit(c+22,"top openmips0 hilo_reg0 we", false,-1);
        tracep->declBus(c+23,"top openmips0 hilo_reg0 hi_i", false,-1, 31,0);
        tracep->declBus(c+24,"top openmips0 hilo_reg0 lo_i", false,-1, 31,0);
        tracep->declBus(c+25,"top openmips0 hilo_reg0 hi_o", false,-1, 31,0);
        tracep->declBus(c+26,"top openmips0 hilo_reg0 lo_o", false,-1, 31,0);
        tracep->declBit(c+3,"top inst_rom0 ce", false,-1);
        tracep->declBus(c+1,"top inst_rom0 addr", false,-1, 31,0);
        tracep->declBus(c+2,"top inst_rom0 inst", false,-1, 31,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->top__DOT__openmips0__DOT__pc),32);
        tracep->fullIData(oldp+2,(((IData)(vlSelf->top__DOT__rom_ce)
                                    ? ((0x1fffeU >= 
                                        (0x1ffffU & 
                                         (vlSelf->top__DOT__openmips0__DOT__pc 
                                          >> 2U))) ? 
                                       vlSelf->top__DOT__inst_rom0__DOT__inst_mem
                                       [(0x1ffffU & 
                                         (vlSelf->top__DOT__openmips0__DOT__pc 
                                          >> 2U))] : 0U)
                                    : 0U)),32);
        tracep->fullBit(oldp+3,(vlSelf->top__DOT__rom_ce));
        tracep->fullIData(oldp+4,(vlSelf->top__DOT__openmips0__DOT__id_pc_i),32);
        tracep->fullIData(oldp+5,(vlSelf->top__DOT__openmips0__DOT__id_inst_i),32);
        tracep->fullCData(oldp+6,(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i),8);
        tracep->fullCData(oldp+7,(vlSelf->top__DOT__openmips0__DOT__ex_alusel_i),3);
        tracep->fullIData(oldp+8,(vlSelf->top__DOT__openmips0__DOT__ex_reg1_i),32);
        tracep->fullIData(oldp+9,(vlSelf->top__DOT__openmips0__DOT__ex_reg2_i),32);
        tracep->fullBit(oldp+10,(vlSelf->top__DOT__openmips0__DOT__ex_wreg_i));
        tracep->fullCData(oldp+11,(vlSelf->top__DOT__openmips0__DOT__ex_wd_i),5);
        tracep->fullBit(oldp+12,(vlSelf->top__DOT__openmips0__DOT__ex_wreg_o));
        tracep->fullBit(oldp+13,(vlSelf->top__DOT__openmips0__DOT__mem_wreg_i));
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__openmips0__DOT__mem_wd_i),5);
        tracep->fullIData(oldp+15,(vlSelf->top__DOT__openmips0__DOT__mem_wdata_i),32);
        tracep->fullBit(oldp+16,(vlSelf->top__DOT__openmips0__DOT__mem_whilo_i));
        tracep->fullIData(oldp+17,(vlSelf->top__DOT__openmips0__DOT__mem_hi_i),32);
        tracep->fullIData(oldp+18,(vlSelf->top__DOT__openmips0__DOT__mem_lo_i),32);
        tracep->fullBit(oldp+19,(vlSelf->top__DOT__openmips0__DOT__wb_wreg_i));
        tracep->fullCData(oldp+20,(vlSelf->top__DOT__openmips0__DOT__wb_wd_i),5);
        tracep->fullIData(oldp+21,(vlSelf->top__DOT__openmips0__DOT__wb_wdata_i),32);
        tracep->fullBit(oldp+22,(vlSelf->top__DOT__openmips0__DOT__wb_whilo_i));
        tracep->fullIData(oldp+23,(vlSelf->top__DOT__openmips0__DOT__wb_hi_i),32);
        tracep->fullIData(oldp+24,(vlSelf->top__DOT__openmips0__DOT__wb_lo_i),32);
        tracep->fullIData(oldp+25,(vlSelf->top__DOT__openmips0__DOT__hi),32);
        tracep->fullIData(oldp+26,(vlSelf->top__DOT__openmips0__DOT__lo),32);
        tracep->fullCData(oldp+27,((vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                    >> 0x1aU)),6);
        tracep->fullCData(oldp+28,((0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                             >> 6U))),5);
        tracep->fullCData(oldp+29,((0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i)),6);
        tracep->fullCData(oldp+30,((0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x10U))),5);
        tracep->fullIData(oldp+31,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[0]),32);
        tracep->fullIData(oldp+32,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[1]),32);
        tracep->fullIData(oldp+33,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[2]),32);
        tracep->fullIData(oldp+34,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[3]),32);
        tracep->fullIData(oldp+35,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[4]),32);
        tracep->fullIData(oldp+36,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[5]),32);
        tracep->fullIData(oldp+37,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[6]),32);
        tracep->fullIData(oldp+38,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[7]),32);
        tracep->fullIData(oldp+39,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[8]),32);
        tracep->fullIData(oldp+40,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[9]),32);
        tracep->fullIData(oldp+41,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[10]),32);
        tracep->fullIData(oldp+42,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[11]),32);
        tracep->fullIData(oldp+43,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[12]),32);
        tracep->fullIData(oldp+44,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[13]),32);
        tracep->fullIData(oldp+45,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[14]),32);
        tracep->fullIData(oldp+46,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[15]),32);
        tracep->fullIData(oldp+47,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[16]),32);
        tracep->fullIData(oldp+48,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[17]),32);
        tracep->fullIData(oldp+49,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[18]),32);
        tracep->fullIData(oldp+50,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[19]),32);
        tracep->fullIData(oldp+51,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[20]),32);
        tracep->fullIData(oldp+52,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[21]),32);
        tracep->fullIData(oldp+53,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[22]),32);
        tracep->fullIData(oldp+54,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[23]),32);
        tracep->fullIData(oldp+55,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[24]),32);
        tracep->fullIData(oldp+56,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[25]),32);
        tracep->fullIData(oldp+57,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[26]),32);
        tracep->fullIData(oldp+58,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[27]),32);
        tracep->fullIData(oldp+59,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[28]),32);
        tracep->fullIData(oldp+60,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[29]),32);
        tracep->fullIData(oldp+61,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[30]),32);
        tracep->fullIData(oldp+62,(vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[31]),32);
        tracep->fullBit(oldp+63,((1U & ((((~ (vlSelf->top__DOT__openmips0__DOT__ex_reg1_i 
                                              >> 0x1fU)) 
                                          & (~ (vlSelf->top__DOT__openmips0__DOT__ex0__DOT__reg2_i_mux 
                                                >> 0x1fU))) 
                                         & (vlSelf->top__DOT__openmips0__DOT__ex0__DOT__result_sum 
                                            >> 0x1fU)) 
                                        | (((vlSelf->top__DOT__openmips0__DOT__ex_reg1_i 
                                             & vlSelf->top__DOT__openmips0__DOT__ex0__DOT__reg2_i_mux) 
                                            >> 0x1fU) 
                                           & (~ (vlSelf->top__DOT__openmips0__DOT__ex0__DOT__result_sum 
                                                 >> 0x1fU)))))));
        tracep->fullBit(oldp+64,((1U & ((0x2aU == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))
                                         ? ((((vlSelf->top__DOT__openmips0__DOT__ex_reg1_i 
                                               >> 0x1fU) 
                                              & (~ 
                                                 (vlSelf->top__DOT__openmips0__DOT__ex0__DOT__reg2_i_mux 
                                                  >> 0x1fU))) 
                                             | (((~ 
                                                  (vlSelf->top__DOT__openmips0__DOT__ex_reg1_i 
                                                   >> 0x1fU)) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__openmips0__DOT__ex0__DOT__reg2_i_mux 
                                                     >> 0x1fU))) 
                                                & (vlSelf->top__DOT__openmips0__DOT__ex0__DOT__result_sum 
                                                   >> 0x1fU))) 
                                            | (((vlSelf->top__DOT__openmips0__DOT__ex_reg1_i 
                                                 & vlSelf->top__DOT__openmips0__DOT__ex0__DOT__reg2_i_mux) 
                                                & vlSelf->top__DOT__openmips0__DOT__ex0__DOT__result_sum) 
                                               >> 0x1fU))
                                         : (vlSelf->top__DOT__openmips0__DOT__ex_reg1_i 
                                            < vlSelf->top__DOT__openmips0__DOT__ex_reg2_i)))));
        tracep->fullIData(oldp+65,(vlSelf->top__DOT__openmips0__DOT__ex0__DOT__reg2_i_mux),32);
        tracep->fullIData(oldp+66,((~ vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)),32);
        tracep->fullIData(oldp+67,(vlSelf->top__DOT__openmips0__DOT__ex0__DOT__result_sum),32);
        tracep->fullIData(oldp+68,(((((0xa9U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)) 
                                      | (0x18U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) 
                                     & (vlSelf->top__DOT__openmips0__DOT__ex_reg1_i 
                                        >> 0x1fU)) ? 
                                    ((IData)(1U) + 
                                     (~ vlSelf->top__DOT__openmips0__DOT__ex_reg1_i))
                                     : vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)),32);
        tracep->fullIData(oldp+69,(((((0xa9U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)) 
                                      | (0x18U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) 
                                     & (vlSelf->top__DOT__openmips0__DOT__ex_reg2_i 
                                        >> 0x1fU)) ? vlSelf->top__DOT__openmips0__DOT__ex0__DOT__reg2_i_mux
                                     : vlSelf->top__DOT__openmips0__DOT__ex_reg2_i)),32);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__openmips0__DOT__ex0__DOT__hilo_temp),64);
        tracep->fullCData(oldp+72,(vlSelf->top__DOT__openmips0__DOT__id_aluop_o),8);
        tracep->fullCData(oldp+73,(vlSelf->top__DOT__openmips0__DOT__id_alusel_o),3);
        tracep->fullIData(oldp+74,(vlSelf->top__DOT__openmips0__DOT__id_reg2_o),32);
        tracep->fullBit(oldp+75,(vlSelf->top__DOT__openmips0__DOT__id_wreg_o));
        tracep->fullCData(oldp+76,(vlSelf->top__DOT__openmips0__DOT__id_wd_o),5);
        tracep->fullIData(oldp+77,(vlSelf->top__DOT__openmips0__DOT__ex_wdata_o),32);
        tracep->fullBit(oldp+78,(vlSelf->top__DOT__openmips0__DOT__ex_whilo_o));
        tracep->fullIData(oldp+79,(vlSelf->top__DOT__openmips0__DOT__ex_hi_o),32);
        tracep->fullIData(oldp+80,(vlSelf->top__DOT__openmips0__DOT__ex_lo_o),32);
        tracep->fullBit(oldp+81,(vlSelf->top__DOT__openmips0__DOT__mem_wreg_o));
        tracep->fullCData(oldp+82,(vlSelf->top__DOT__openmips0__DOT__mem_wd_o),5);
        tracep->fullIData(oldp+83,(vlSelf->top__DOT__openmips0__DOT__mem_wdata_o),32);
        tracep->fullBit(oldp+84,(vlSelf->top__DOT__openmips0__DOT__mem_whilo_o));
        tracep->fullIData(oldp+85,(vlSelf->top__DOT__openmips0__DOT__mem_hi_o),32);
        tracep->fullIData(oldp+86,(vlSelf->top__DOT__openmips0__DOT__mem_lo_o),32);
        tracep->fullBit(oldp+87,(vlSelf->top__DOT__openmips0__DOT__reg1_read));
        tracep->fullBit(oldp+88,(vlSelf->top__DOT__openmips0__DOT__reg2_read));
        tracep->fullCData(oldp+89,(vlSelf->top__DOT__openmips0__DOT__reg1_addr),5);
        tracep->fullCData(oldp+90,(vlSelf->top__DOT__openmips0__DOT__reg2_addr),5);
        tracep->fullIData(oldp+91,(vlSelf->top__DOT__openmips0__DOT__id0__DOT__imm),32);
        tracep->fullBit(oldp+92,(vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid));
        tracep->fullIData(oldp+93,(vlSelf->top__DOT__openmips0__DOT__ex0__DOT__logicout),32);
        tracep->fullIData(oldp+94,(vlSelf->top__DOT__openmips0__DOT__ex0__DOT__shiftres),32);
        tracep->fullIData(oldp+95,(vlSelf->top__DOT__openmips0__DOT__ex0__DOT__movres),32);
        tracep->fullIData(oldp+96,(vlSelf->top__DOT__openmips0__DOT__ex0__DOT__HI),32);
        tracep->fullIData(oldp+97,(vlSelf->top__DOT__openmips0__DOT__ex0__DOT__LO),32);
        tracep->fullIData(oldp+98,(vlSelf->top__DOT__openmips0__DOT__ex0__DOT__arithmeticres),32);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__openmips0__DOT__ex0__DOT__mulres),64);
        tracep->fullBit(oldp+101,(vlSelf->clk));
        tracep->fullBit(oldp+102,(vlSelf->rst));
        tracep->fullIData(oldp+103,(((IData)(vlSelf->rst)
                                      ? 0U : ((((IData)(vlSelf->top__DOT__openmips0__DOT__reg1_read) 
                                                & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_wreg_o)) 
                                               & ((IData)(vlSelf->top__DOT__openmips0__DOT__reg1_addr) 
                                                  == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_wd_i)))
                                               ? vlSelf->top__DOT__openmips0__DOT__ex_wdata_o
                                               : ((
                                                   ((IData)(vlSelf->top__DOT__openmips0__DOT__reg1_read) 
                                                    & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_wreg_o)) 
                                                   & ((IData)(vlSelf->top__DOT__openmips0__DOT__reg1_addr) 
                                                      == (IData)(vlSelf->top__DOT__openmips0__DOT__mem_wd_o)))
                                                   ? vlSelf->top__DOT__openmips0__DOT__mem_wdata_o
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__openmips0__DOT__reg1_read)
                                                    ? 
                                                   ((IData)(vlSelf->rst)
                                                     ? 0U
                                                     : 
                                                    ((0U 
                                                      == (IData)(vlSelf->top__DOT__openmips0__DOT__reg1_addr))
                                                      ? 0U
                                                      : 
                                                     (((((IData)(vlSelf->top__DOT__openmips0__DOT__reg1_addr) 
                                                         == (IData)(vlSelf->top__DOT__openmips0__DOT__wb_wd_i)) 
                                                        & (IData)(vlSelf->top__DOT__openmips0__DOT__wb_wreg_i)) 
                                                       & (IData)(vlSelf->top__DOT__openmips0__DOT__reg1_read))
                                                       ? vlSelf->top__DOT__openmips0__DOT__wb_wdata_i
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__openmips0__DOT__reg1_read)
                                                        ? 
                                                       vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs
                                                       [vlSelf->top__DOT__openmips0__DOT__reg1_addr]
                                                        : 0U))))
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__openmips0__DOT__reg1_read)
                                                     ? 0U
                                                     : vlSelf->top__DOT__openmips0__DOT__id0__DOT__imm)))))),32);
        tracep->fullIData(oldp+104,(((IData)(vlSelf->rst)
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__openmips0__DOT__reg1_addr))
                                               ? 0U
                                               : ((
                                                   (((IData)(vlSelf->top__DOT__openmips0__DOT__reg1_addr) 
                                                     == (IData)(vlSelf->top__DOT__openmips0__DOT__wb_wd_i)) 
                                                    & (IData)(vlSelf->top__DOT__openmips0__DOT__wb_wreg_i)) 
                                                   & (IData)(vlSelf->top__DOT__openmips0__DOT__reg1_read))
                                                   ? vlSelf->top__DOT__openmips0__DOT__wb_wdata_i
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__openmips0__DOT__reg1_read)
                                                    ? 
                                                   vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs
                                                   [vlSelf->top__DOT__openmips0__DOT__reg1_addr]
                                                    : 0U))))),32);
        tracep->fullIData(oldp+105,(((IData)(vlSelf->rst)
                                      ? 0U : ((0U == (IData)(vlSelf->top__DOT__openmips0__DOT__reg2_addr))
                                               ? 0U
                                               : ((
                                                   (((IData)(vlSelf->top__DOT__openmips0__DOT__reg2_addr) 
                                                     == (IData)(vlSelf->top__DOT__openmips0__DOT__wb_wd_i)) 
                                                    & (IData)(vlSelf->top__DOT__openmips0__DOT__wb_wreg_i)) 
                                                   & (IData)(vlSelf->top__DOT__openmips0__DOT__reg2_read))
                                                   ? vlSelf->top__DOT__openmips0__DOT__wb_wdata_i
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__openmips0__DOT__reg2_read)
                                                    ? 
                                                   vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs
                                                   [vlSelf->top__DOT__openmips0__DOT__reg2_addr]
                                                    : 0U))))),32);
        tracep->fullBit(oldp+106,(vlSelf->top__DOT__openmips0__DOT__ex0__DOT__reg1_eq_reg2));
    }
}
