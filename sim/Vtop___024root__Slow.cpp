// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

extern const VlWide<11>/*351:0*/ Vtop__ConstPool__CONST_d96d630f_0;

void Vtop___024root___initial__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__2\n"); );
    // Body
    VL_READMEM_N(true, 32, 131071, 0, VL_CVT_PACK_STR_NW(11, Vtop__ConstPool__CONST_d96d630f_0)
                 ,  &(vlSelf->top__DOT__inst_rom0__DOT__inst_mem)
                 , 0, ~0ULL);
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vtop___024root___initial__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf);

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rom_ce = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__id_pc_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__id_inst_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__id_aluop_o = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__openmips0__DOT__id_alusel_o = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__openmips0__DOT__id_wreg_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__id_wd_o = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__openmips0__DOT__ex_aluop_i = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__openmips0__DOT__ex_alusel_i = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__openmips0__DOT__ex_reg1_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__ex_reg2_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__ex_wreg_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__ex_wd_i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__openmips0__DOT__ex_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__mem_wreg_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__mem_wd_i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__openmips0__DOT__mem_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__mem_wreg_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__mem_wd_o = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__openmips0__DOT__mem_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__wb_wreg_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__wb_wd_i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__openmips0__DOT__wb_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__reg1_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__reg2_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__reg1_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__openmips0__DOT__reg2_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__openmips0__DOT__id0__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__openmips0__DOT__ex0__DOT__logicout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__ex0__DOT__shiftres = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<131071; ++__Vi0) {
        vlSelf->top__DOT__inst_rom0__DOT__inst_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
