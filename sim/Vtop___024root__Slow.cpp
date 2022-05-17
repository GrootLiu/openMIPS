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

void Vtop___024root___settle__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__2\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->top__DOT__ram_sel_i = 0U;
    } else if ((0x80U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))) {
        if ((0x40U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))) {
            if ((0x20U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))) {
                if ((0x10U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))) {
                    vlSelf->top__DOT__ram_sel_i = 0U;
                } else if ((8U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))) {
                    vlSelf->top__DOT__ram_sel_i = (
                                                   (4U 
                                                    & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                        ? 0xfU
                                                        : 0xeU)
                                                       : 
                                                      ((1U 
                                                        & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                        ? 0xcU
                                                        : 8U)))
                                                     : 0U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))
                                                      ? 0xfU
                                                      : 
                                                     ((2U 
                                                       & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                        ? 1U
                                                        : 3U)
                                                       : 
                                                      ((1U 
                                                        & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                        ? 7U
                                                        : 0xfU)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))
                                                      ? 
                                                     ((0U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i))
                                                       ? 0xcU
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i))
                                                        ? 3U
                                                        : 0U))
                                                      : 
                                                     ((2U 
                                                       & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                        ? 1U
                                                        : 2U)
                                                       : 
                                                      ((1U 
                                                        & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                        ? 4U
                                                        : 8U)))));
                } else if ((4U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))) {
                    if ((2U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))) {
                        vlSelf->top__DOT__ram_sel_i 
                            = ((1U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))
                                ? 0U : 0xfU);
                    } else if ((1U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))) {
                        if ((0U == (3U & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i))) {
                            vlSelf->top__DOT__ram_sel_i = 0xcU;
                        } else if ((2U == (3U & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i))) {
                            vlSelf->top__DOT__ram_sel_i = 3U;
                        }
                    } else {
                        vlSelf->top__DOT__ram_sel_i 
                            = ((2U & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                ? ((1U & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                    ? 1U : 2U) : ((1U 
                                                   & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                   ? 4U
                                                   : 8U));
                    }
                } else if ((2U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))) {
                    vlSelf->top__DOT__ram_sel_i = 0xfU;
                } else if ((1U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))) {
                    if ((0U == (3U & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i))) {
                        vlSelf->top__DOT__ram_sel_i = 0xcU;
                    } else if ((2U == (3U & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i))) {
                        vlSelf->top__DOT__ram_sel_i = 3U;
                    }
                } else {
                    vlSelf->top__DOT__ram_sel_i = (
                                                   (2U 
                                                    & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                     ? 1U
                                                     : 2U)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                     ? 4U
                                                     : 8U));
                }
            } else {
                vlSelf->top__DOT__ram_sel_i = 0U;
            }
        } else {
            vlSelf->top__DOT__ram_sel_i = 0U;
        }
    } else {
        vlSelf->top__DOT__ram_sel_i = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__ram_data_i = 0U;
    } else if ((0x80U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))) {
        if ((0x40U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))) {
            if ((0x20U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))) {
                if ((0x10U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))) {
                    vlSelf->top__DOT__ram_data_i = 0U;
                } else if ((8U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))) {
                    if ((4U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))) {
                        vlSelf->top__DOT__ram_data_i 
                            = ((2U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))
                                ? ((1U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))
                                    ? 0U : ((2U & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                             ? ((1U 
                                                 & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                 ? vlSelf->top__DOT__openmips0__DOT__mem_reg2_i
                                                 : 
                                                (vlSelf->top__DOT__openmips0__DOT__mem_reg2_i 
                                                 << 8U))
                                             : ((1U 
                                                 & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                 ? 
                                                (vlSelf->top__DOT__openmips0__DOT__mem_reg2_i 
                                                 << 0x10U)
                                                 : 
                                                (vlSelf->top__DOT__openmips0__DOT__mem_reg2_i 
                                                 << 0x18U))))
                                : 0U);
                    } else if ((2U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))) {
                        vlSelf->top__DOT__ram_data_i 
                            = ((1U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))
                                ? vlSelf->top__DOT__openmips0__DOT__mem_reg2_i
                                : ((2U & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                    ? ((1U & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                        ? (vlSelf->top__DOT__openmips0__DOT__mem_reg2_i 
                                           >> 0x18U)
                                        : (vlSelf->top__DOT__openmips0__DOT__mem_reg2_i 
                                           >> 0x10U))
                                    : ((1U & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                        ? (vlSelf->top__DOT__openmips0__DOT__mem_reg2_i 
                                           >> 8U) : vlSelf->top__DOT__openmips0__DOT__mem_reg2_i)));
                    } else if ((1U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))) {
                        if ((0U == (3U & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i))) {
                            vlSelf->top__DOT__ram_data_i 
                                = (vlSelf->top__DOT__openmips0__DOT__mem_reg2_i 
                                   << 0x10U);
                        } else if ((2U == (3U & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i))) {
                            vlSelf->top__DOT__ram_data_i 
                                = (IData)((QData)((IData)(
                                                          (0x1ffffU 
                                                           & vlSelf->top__DOT__openmips0__DOT__mem_reg2_i))));
                        }
                    } else {
                        vlSelf->top__DOT__ram_data_i 
                            = ((2U & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                ? ((1U & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                    ? (0xffU & vlSelf->top__DOT__openmips0__DOT__mem_reg2_i)
                                    : (0xff00U & (vlSelf->top__DOT__openmips0__DOT__mem_reg2_i 
                                                  << 8U)))
                                : ((1U & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                    ? (0xff0000U & 
                                       (vlSelf->top__DOT__openmips0__DOT__mem_reg2_i 
                                        << 0x10U)) : 
                                   (vlSelf->top__DOT__openmips0__DOT__mem_reg2_i 
                                    << 0x18U)));
                    }
                } else if ((4U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))) {
                    if ((2U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))) {
                        if ((1U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))) {
                            vlSelf->top__DOT__ram_data_i = 0U;
                        }
                    }
                }
            } else {
                vlSelf->top__DOT__ram_data_i = 0U;
            }
        } else {
            vlSelf->top__DOT__ram_data_i = 0U;
        }
    } else {
        vlSelf->top__DOT__ram_data_i = 0U;
    }
    vlSelf->top__DOT__ram_we_i = (1U & ((~ (IData)(vlSelf->rst)) 
                                        & (IData)((
                                                   (0xe8U 
                                                    == 
                                                    (0xf8U 
                                                     & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))) 
                                                   & ((~ 
                                                       ((IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i) 
                                                        >> 2U)) 
                                                      | (IData)(
                                                                (2U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i)))))))));
    vlSelf->top__DOT__ram_ce_i = (1U & ((~ (IData)(vlSelf->rst)) 
                                        & (IData)((
                                                   (0xe0U 
                                                    == 
                                                    (0xf0U 
                                                     & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))) 
                                                   & ((8U 
                                                       & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))
                                                       ? 
                                                      ((~ 
                                                        ((IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i) 
                                                         >> 2U)) 
                                                       | (IData)(
                                                                 (2U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i)))))
                                                       : (IData)(
                                                                 (7U 
                                                                  != 
                                                                  (7U 
                                                                   & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i)))))))));
    vlSelf->top__DOT__ram_addr_i = ((IData)(vlSelf->rst)
                                     ? 0U : ((0x80U 
                                              & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))
                                              ? ((0x40U 
                                                  & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))
                                                  ? 
                                                 ((0x20U 
                                                   & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))
                                                        ? 0U
                                                        : vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                       : 0U)
                                                      : vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))
                                                        ? 0U
                                                        : 
                                                       (0xfffffffcU 
                                                        & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i))
                                                       : vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))
                                                        ? vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i
                                                        : 
                                                       (0xfffffffcU 
                                                        & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i))
                                                       : vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i))))
                                                   : 0U)
                                                  : 0U)
                                              : 0U));
    vlSelf->top__DOT__openmips0__DOT__mem_whilo_o = 
        ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_whilo_i));
    vlSelf->top__DOT__openmips0__DOT__mem_wd_o = ((IData)(vlSelf->rst)
                                                   ? 0U
                                                   : (IData)(vlSelf->top__DOT__openmips0__DOT__mem_wd_i));
    vlSelf->top__DOT__openmips0__DOT__mem_wreg_o = 
        ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_wreg_i));
    if (vlSelf->rst) {
        vlSelf->top__DOT__openmips0__DOT__mem_hi_o = 0U;
        vlSelf->top__DOT__openmips0__DOT__mem_lo_o = 0U;
    } else {
        vlSelf->top__DOT__openmips0__DOT__mem_hi_o 
            = vlSelf->top__DOT__openmips0__DOT__mem_hi_i;
        vlSelf->top__DOT__openmips0__DOT__mem_lo_o 
            = vlSelf->top__DOT__openmips0__DOT__mem_lo_i;
    }
    vlSelf->top__DOT__openmips0__DOT__ex_whilo_o = 
        ((~ (IData)(vlSelf->rst)) & (((0xa6U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)) 
                                      | (0xa8U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) 
                                     | (((0xaaU == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)) 
                                         | (0xabU == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) 
                                        | (((0x18U 
                                             == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)) 
                                            | (0x19U 
                                               == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) 
                                           | ((0x11U 
                                               == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)) 
                                              | (0x13U 
                                                 == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)))))));
    if (vlSelf->rst) {
        vlSelf->top__DOT__openmips0__DOT__cnt_o = 0U;
    } else if (((0xa6U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)) 
                | (0xa8U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)))) {
        if ((0U == (IData)(vlSelf->top__DOT__openmips0__DOT__cnt_i))) {
            vlSelf->top__DOT__openmips0__DOT__cnt_o = 1U;
        } else if ((1U == (IData)(vlSelf->top__DOT__openmips0__DOT__cnt_i))) {
            vlSelf->top__DOT__openmips0__DOT__cnt_o = 2U;
        }
    } else if (((0xaaU == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)) 
                | (0xabU == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)))) {
        if ((0U == (IData)(vlSelf->top__DOT__openmips0__DOT__cnt_i))) {
            vlSelf->top__DOT__openmips0__DOT__cnt_o = 1U;
        } else if ((1U == (IData)(vlSelf->top__DOT__openmips0__DOT__cnt_i))) {
            vlSelf->top__DOT__openmips0__DOT__cnt_o = 2U;
        }
    } else {
        vlSelf->top__DOT__openmips0__DOT__cnt_o = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__openmips0__DOT__ex0__DOT__stallreq_for_madd_msub = 0U;
    } else if (((0xa6U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)) 
                | (0xa8U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)))) {
        if ((0U == (IData)(vlSelf->top__DOT__openmips0__DOT__cnt_i))) {
            vlSelf->top__DOT__openmips0__DOT__ex0__DOT__stallreq_for_madd_msub = 1U;
        } else if ((1U == (IData)(vlSelf->top__DOT__openmips0__DOT__cnt_i))) {
            vlSelf->top__DOT__openmips0__DOT__ex0__DOT__stallreq_for_madd_msub = 0U;
        }
    } else if (((0xaaU == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)) 
                | (0xabU == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)))) {
        if ((0U == (IData)(vlSelf->top__DOT__openmips0__DOT__cnt_i))) {
            vlSelf->top__DOT__openmips0__DOT__ex0__DOT__stallreq_for_madd_msub = 1U;
        } else if ((1U == (IData)(vlSelf->top__DOT__openmips0__DOT__cnt_i))) {
            vlSelf->top__DOT__openmips0__DOT__ex0__DOT__stallreq_for_madd_msub = 0U;
        }
    } else {
        vlSelf->top__DOT__openmips0__DOT__ex0__DOT__stallreq_for_madd_msub = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__openmips0__DOT__ex0__DOT__shiftres = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i) 
                         >> 7U)))) {
        if ((0x40U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) {
            if ((0x20U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) {
                if ((0x10U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) {
                    if ((8U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) {
                        if ((4U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) {
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)))) {
                                    vlSelf->top__DOT__openmips0__DOT__ex0__DOT__shiftres 
                                        = (vlSelf->top__DOT__openmips0__DOT__ex_reg2_i 
                                           << (0x1fU 
                                               & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i));
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i) 
                             >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) {
                            vlSelf->top__DOT__openmips0__DOT__ex0__DOT__shiftres 
                                = ((1U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))
                                    ? (((0x1fU >= (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i))))
                                         ? ((- (IData)(
                                                       (vlSelf->top__DOT__openmips0__DOT__ex_reg2_i 
                                                        >> 0x1fU))) 
                                            << (0x3fU 
                                                & ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i))))
                                         : 0U) | (vlSelf->top__DOT__openmips0__DOT__ex_reg2_i 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)))
                                    : (vlSelf->top__DOT__openmips0__DOT__ex_reg2_i 
                                       >> (0x1fU & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)));
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__openmips0__DOT__ex0__DOT__logicout = 0U;
    } else if ((0x80U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) {
        vlSelf->top__DOT__openmips0__DOT__ex0__DOT__logicout = 0U;
    } else if ((0x40U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) {
        if ((0x20U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) {
            if ((0x10U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) {
                if ((8U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) {
                    if ((4U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) {
                        if ((2U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) {
                            vlSelf->top__DOT__openmips0__DOT__ex0__DOT__logicout = 0U;
                        } else if ((1U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) {
                            vlSelf->top__DOT__openmips0__DOT__ex0__DOT__logicout = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__openmips0__DOT__ex0__DOT__logicout = 0U;
                    }
                } else {
                    vlSelf->top__DOT__openmips0__DOT__ex0__DOT__logicout = 0U;
                }
            } else {
                vlSelf->top__DOT__openmips0__DOT__ex0__DOT__logicout = 0U;
            }
        } else {
            vlSelf->top__DOT__openmips0__DOT__ex0__DOT__logicout = 0U;
        }
    } else if ((0x20U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) {
        vlSelf->top__DOT__openmips0__DOT__ex0__DOT__logicout 
            = ((0x10U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))
                ? 0U : ((8U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))
                         ? 0U : ((4U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))
                                  ? ((2U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))
                                      ? ((1U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))
                                          ? (~ (vlSelf->top__DOT__openmips0__DOT__ex_reg1_i 
                                                | vlSelf->top__DOT__openmips0__DOT__ex_reg2_i))
                                          : (vlSelf->top__DOT__openmips0__DOT__ex_reg1_i 
                                             ^ vlSelf->top__DOT__openmips0__DOT__ex_reg2_i))
                                      : ((1U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))
                                          ? (vlSelf->top__DOT__openmips0__DOT__ex_reg1_i 
                                             | vlSelf->top__DOT__openmips0__DOT__ex_reg2_i)
                                          : (vlSelf->top__DOT__openmips0__DOT__ex_reg1_i 
                                             & vlSelf->top__DOT__openmips0__DOT__ex_reg2_i)))
                                  : 0U)));
    } else if ((0x10U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) {
        if ((8U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) {
            vlSelf->top__DOT__openmips0__DOT__ex0__DOT__logicout = 0U;
        } else if ((4U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) {
            vlSelf->top__DOT__openmips0__DOT__ex0__DOT__logicout = 0U;
        } else if ((2U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) {
            if ((1U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) {
                vlSelf->top__DOT__openmips0__DOT__ex0__DOT__logicout = 0U;
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) {
            vlSelf->top__DOT__openmips0__DOT__ex0__DOT__logicout = 0U;
        }
    } else if ((8U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) {
        if ((4U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) {
            vlSelf->top__DOT__openmips0__DOT__ex0__DOT__logicout = 0U;
        } else if ((1U & (~ ((IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i) 
                             >> 1U)))) {
            vlSelf->top__DOT__openmips0__DOT__ex0__DOT__logicout = 0U;
        }
    } else if ((4U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) {
        vlSelf->top__DOT__openmips0__DOT__ex0__DOT__logicout = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i) 
                         >> 1U)))) {
        vlSelf->top__DOT__openmips0__DOT__ex0__DOT__logicout = 0U;
    }
    vlSelf->top__DOT__openmips0__DOT__ex0__DOT__reg2_i_mux 
        = ((((0x22U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)) 
             | (0x2aU == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) 
            | (0x23U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)))
            ? ((IData)(1U) + (~ vlSelf->top__DOT__openmips0__DOT__ex_reg2_i))
            : vlSelf->top__DOT__openmips0__DOT__ex_reg2_i);
    if (vlSelf->rst) {
        vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
    } else {
        vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 1U;
        if ((vlSelf->top__DOT__openmips0__DOT__id_inst_i 
             >> 0x1fU)) {
            if ((0x40000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                            if ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
                            }
                        }
                    }
                }
            } else if ((0x20000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x1aU)))) {
                            vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
                        }
                    }
                } else {
                    vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
                }
            } else if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1aU)))) {
                        vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
                    }
                } else {
                    vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
                }
            } else {
                vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
            }
        } else if ((0x40000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            if ((0x20000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x1aU)))) {
                            if ((0x20U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 4U)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                     >> 1U)))) {
                                                vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                 >> 4U)))) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 3U)))) {
                                    if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                    >> 1U)))) {
                                            vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
                                        }
                                    } else if ((2U 
                                                & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                        if ((1U & (~ vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                                            vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
                                        }
                                    } else {
                                        vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x20000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
        } else if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
        } else if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
        } else if ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                          >> 0x14U)))) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0x13U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x12U)))) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x11U)))) {
                            vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
                        }
                    }
                }
            }
        } else if ((0U == (0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                    >> 6U)))) {
            if ((0x20U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 4U)))) {
                    if ((8U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 2U)))) {
                            if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
                            }
                        }
                    } else {
                        vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
                    }
                }
            } else if ((0x10U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((8U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 2U)))) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 1U)))) {
                            vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
                        }
                    }
                } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                     >> 2U)))) {
                    vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
                }
            } else if ((8U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        if ((1U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                            vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
                        }
                    }
                } else {
                    vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
                }
            } else if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
                } else if ((1U & (~ vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                    vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
                }
            }
        }
        if ((0U == (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                    >> 0x15U))) {
            if ((0U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
            } else if ((2U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
            } else if ((3U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__openmips0__DOT__id_wd_o = 0U;
    } else {
        vlSelf->top__DOT__openmips0__DOT__id_wd_o = 
            (0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                      >> 0xbU));
        if ((vlSelf->top__DOT__openmips0__DOT__id_inst_i 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                            if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                          >> 0x1aU)))) {
                                vlSelf->top__DOT__openmips0__DOT__id_wd_o 
                                    = (0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                >> 0x10U));
                            }
                        } else {
                            vlSelf->top__DOT__openmips0__DOT__id_wd_o 
                                = (0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x10U));
                        }
                    } else {
                        vlSelf->top__DOT__openmips0__DOT__id_wd_o 
                            = (0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                        >> 0x10U));
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                             >> 0x1eU)))) {
            if ((0x20000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                vlSelf->top__DOT__openmips0__DOT__id_wd_o 
                    = (0x1fU & ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                 ? ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                     ? ((0x4000000U 
                                         & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                         ? (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x10U)
                                         : (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x10U))
                                     : ((0x4000000U 
                                         & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                         ? (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x10U)
                                         : (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x10U)))
                                 : ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                     ? ((0x4000000U 
                                         & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                         ? (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x10U)
                                         : (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x10U))
                                     : ((0x4000000U 
                                         & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                         ? (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x10U)
                                         : (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                            >> 0x10U)))));
            } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                 >> 0x1cU)))) {
                if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        vlSelf->top__DOT__openmips0__DOT__id_wd_o = 0x1fU;
                    }
                } else if ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((0x100000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x13U)))) {
                            if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                          >> 0x12U)))) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 0x11U)))) {
                                    vlSelf->top__DOT__openmips0__DOT__id_wd_o = 0x1fU;
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0U == (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                    >> 0x15U))) {
            if ((0U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__id_wd_o 
                    = (0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                >> 0xbU));
            } else if ((2U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__id_wd_o 
                    = (0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                >> 0xbU));
            } else if ((3U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__id_wd_o 
                    = (0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                >> 0xbU));
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 0U;
    } else {
        vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 0U;
        if ((vlSelf->top__DOT__openmips0__DOT__id_inst_i 
             >> 0x1fU)) {
            if ((0x40000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                            if ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 0U;
                            }
                        }
                    }
                }
            } else if ((0x20000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x1aU)))) {
                            vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 7U;
                        }
                    }
                } else {
                    vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 7U;
                }
            } else if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1aU)))) {
                        vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 7U;
                    }
                } else {
                    vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 7U;
                }
            } else {
                vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 7U;
            }
        } else if ((0x40000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            if ((0x20000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x1aU)))) {
                            if ((0x20U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 4U)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                     >> 1U)))) {
                                                vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 4U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                 >> 4U)))) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 3U)))) {
                                    if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                    >> 1U)))) {
                                            vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 5U;
                                        }
                                    } else if ((2U 
                                                & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                        if ((1U & (~ vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                                            vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 5U;
                                        }
                                    } else {
                                        vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 5U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x20000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            vlSelf->top__DOT__openmips0__DOT__id_alusel_o 
                = ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                    ? 1U : 4U);
        } else if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 6U;
        } else if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 6U;
        } else if ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            if ((0x100000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0x13U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x12U)))) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x11U)))) {
                            vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 6U;
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                 >> 0x13U)))) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0x12U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x11U)))) {
                        vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 6U;
                    }
                }
            }
        } else if ((0U == (0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                    >> 6U)))) {
            if ((0x20U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 4U)))) {
                    if ((8U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 2U)))) {
                            if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 4U;
                            }
                        }
                    } else {
                        vlSelf->top__DOT__openmips0__DOT__id_alusel_o 
                            = ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                ? 1U : 4U);
                    }
                }
            } else if ((0x10U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                            if ((1U & (~ vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                                vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 3U;
                            }
                        } else if ((1U & (~ vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                            vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 3U;
                        }
                    }
                }
            } else if ((8U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        if ((1U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                            vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 0U;
                        }
                    }
                } else {
                    vlSelf->top__DOT__openmips0__DOT__id_alusel_o 
                        = ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                            ? 3U : 6U);
                }
            } else if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 2U;
                } else if ((1U & (~ vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                    vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 2U;
                }
            }
        }
        if ((0U == (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                    >> 0x15U))) {
            if ((0U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 2U;
            } else if ((2U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 2U;
            } else if ((3U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 2U;
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__openmips0__DOT__id_aluop_o = 0U;
    } else {
        vlSelf->top__DOT__openmips0__DOT__id_aluop_o = 0U;
        if ((vlSelf->top__DOT__openmips0__DOT__id_inst_i 
             >> 0x1fU)) {
            if ((0x40000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                            if ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                vlSelf->top__DOT__openmips0__DOT__id_aluop_o = 0U;
                            }
                        }
                    }
                }
            } else if ((0x20000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x1aU)))) {
                            vlSelf->top__DOT__openmips0__DOT__id_aluop_o = 0xeeU;
                        }
                    }
                } else {
                    vlSelf->top__DOT__openmips0__DOT__id_aluop_o 
                        = ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                            ? ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                ? 0xebU : 0xeaU) : 
                           ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                             ? 0xe9U : 0xe8U));
                }
            } else if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1aU)))) {
                        vlSelf->top__DOT__openmips0__DOT__id_aluop_o = 0xe6U;
                    }
                } else {
                    vlSelf->top__DOT__openmips0__DOT__id_aluop_o 
                        = ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                            ? 0xe5U : 0xe4U);
                }
            } else {
                vlSelf->top__DOT__openmips0__DOT__id_aluop_o 
                    = ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                        ? ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                            ? 0xe3U : 0xe2U) : ((0x4000000U 
                                                 & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                                 ? 0xe1U
                                                 : 0xe0U));
            }
        } else if ((0x40000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            if ((0x20000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x1aU)))) {
                            if ((0x20U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 4U)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                     >> 1U)))) {
                                                vlSelf->top__DOT__openmips0__DOT__id_aluop_o 
                                                    = 
                                                    ((1U 
                                                      & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                                      ? 0xb1U
                                                      : 0xb0U);
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                 >> 4U)))) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 3U)))) {
                                    if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                    >> 1U)))) {
                                            vlSelf->top__DOT__openmips0__DOT__id_aluop_o 
                                                = (
                                                   (1U 
                                                    & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                                    ? 0xabU
                                                    : 0xaaU);
                                        }
                                    } else if ((2U 
                                                & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                        if ((1U & (~ vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                                            vlSelf->top__DOT__openmips0__DOT__id_aluop_o = 0xa9U;
                                        }
                                    } else {
                                        vlSelf->top__DOT__openmips0__DOT__id_aluop_o 
                                            = ((1U 
                                                & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                                ? 0xa8U
                                                : 0xa6U);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x20000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            vlSelf->top__DOT__openmips0__DOT__id_aluop_o 
                = ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                    ? ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                        ? ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                            ? 0x25U : 0x26U) : ((0x4000000U 
                                                 & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                                 ? 0x25U
                                                 : 0x24U))
                    : ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                        ? ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                            ? 0x2bU : 0x2aU) : ((0x4000000U 
                                                 & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                                 ? 0x21U
                                                 : 0x20U)));
        } else if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            vlSelf->top__DOT__openmips0__DOT__id_aluop_o 
                = ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                    ? ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                        ? 0x51U : 0x53U) : ((0x4000000U 
                                             & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                             ? 0x53U
                                             : 0x51U));
        } else if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            vlSelf->top__DOT__openmips0__DOT__id_aluop_o 
                = ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                    ? 0x50U : 0x4fU);
        } else if ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            if ((0x100000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0x13U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x12U)))) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x11U)))) {
                            vlSelf->top__DOT__openmips0__DOT__id_aluop_o 
                                = ((0x10000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                    ? 0x4bU : 0x4aU);
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                 >> 0x13U)))) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0x12U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x11U)))) {
                        vlSelf->top__DOT__openmips0__DOT__id_aluop_o 
                            = ((0x10000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                ? 0x41U : 0x40U);
                    }
                }
            }
        } else if ((0U == (0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                    >> 6U)))) {
            if ((0x20U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 4U)))) {
                    if ((8U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 2U)))) {
                            if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                vlSelf->top__DOT__openmips0__DOT__id_aluop_o 
                                    = ((1U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                        ? 0x2bU : 0x2aU);
                            }
                        }
                    } else {
                        vlSelf->top__DOT__openmips0__DOT__id_aluop_o 
                            = ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                ? ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                    ? ((1U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                        ? 0x27U : 0x26U)
                                    : ((1U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                        ? 0x25U : 0x24U))
                                : ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                    ? ((1U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                        ? 0x23U : 0x22U)
                                    : ((1U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                        ? 0x21U : 0x20U)));
                    }
                }
            } else if ((0x10U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((8U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 2U)))) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 1U)))) {
                            vlSelf->top__DOT__openmips0__DOT__id_aluop_o 
                                = ((1U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                    ? 0x19U : 0x18U);
                        }
                    }
                } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                     >> 2U)))) {
                    vlSelf->top__DOT__openmips0__DOT__id_aluop_o 
                        = ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                            ? ((1U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                ? 0x13U : 0x12U) : 
                           ((1U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                             ? 0x11U : 0x10U));
                }
            } else if ((8U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        if ((1U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                            vlSelf->top__DOT__openmips0__DOT__id_aluop_o = 0U;
                        }
                    }
                } else {
                    vlSelf->top__DOT__openmips0__DOT__id_aluop_o 
                        = ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                            ? ((1U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                ? 0xbU : 0xaU) : ((1U 
                                                   & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                                   ? 9U
                                                   : 8U));
                }
            } else if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    vlSelf->top__DOT__openmips0__DOT__id_aluop_o 
                        = ((1U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                            ? 3U : 2U);
                } else if ((1U & (~ vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                    vlSelf->top__DOT__openmips0__DOT__id_aluop_o = 0x7cU;
                }
            }
        }
        if ((0U == (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                    >> 0x15U))) {
            if ((0U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__id_aluop_o = 0x7cU;
            } else if ((2U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__id_aluop_o = 2U;
            } else if ((3U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__id_aluop_o = 3U;
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__openmips0__DOT__id_link_addr_o = 0U;
    } else {
        vlSelf->top__DOT__openmips0__DOT__id_link_addr_o = 0U;
        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                            vlSelf->top__DOT__openmips0__DOT__id_link_addr_o 
                                = ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                    ? ((IData)(8U) 
                                       + vlSelf->top__DOT__openmips0__DOT__id_pc_i)
                                    : 0U);
                        } else if ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                            if ((0x100000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 0x13U)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0x12U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                    >> 0x11U)))) {
                                            vlSelf->top__DOT__openmips0__DOT__id_link_addr_o 
                                                = ((IData)(8U) 
                                                   + vlSelf->top__DOT__openmips0__DOT__id_pc_i);
                                        }
                                    }
                                }
                            }
                        } else if ((0U == (0x1fU & 
                                           (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                            >> 6U)))) {
                            if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                          >> 5U)))) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 4U)))) {
                                    if ((8U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                     >> 1U)))) {
                                                vlSelf->top__DOT__openmips0__DOT__id_link_addr_o 
                                                    = 
                                                    ((1U 
                                                      & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                                      ? 
                                                     ((IData)(8U) 
                                                      + vlSelf->top__DOT__openmips0__DOT__id_pc_i)
                                                      : 0U);
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
    }
    vlSelf->top__DOT__openmips0__DOT__id0__DOT__imm_sll2_signedext 
        = (((- (IData)((1U & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0xfU)))) << 0x12U) 
           | (0x3fffcU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                          << 2U)));
    vlSelf->top__DOT__openmips0__DOT__reg1_addr = ((IData)(vlSelf->rst)
                                                    ? 0U
                                                    : 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                       >> 0x15U)));
    if (vlSelf->rst) {
        vlSelf->top__DOT__openmips0__DOT__reg1_read = 0U;
    } else {
        vlSelf->top__DOT__openmips0__DOT__reg1_read = 0U;
        if ((vlSelf->top__DOT__openmips0__DOT__id_inst_i 
             >> 0x1fU)) {
            if ((0x40000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                            if ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                vlSelf->top__DOT__openmips0__DOT__reg1_read = 0U;
                            }
                        }
                    }
                }
            } else if ((0x20000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x1aU)))) {
                            vlSelf->top__DOT__openmips0__DOT__reg1_read = 1U;
                        }
                    }
                } else {
                    vlSelf->top__DOT__openmips0__DOT__reg1_read = 1U;
                }
            } else if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1aU)))) {
                        vlSelf->top__DOT__openmips0__DOT__reg1_read = 1U;
                    }
                } else {
                    vlSelf->top__DOT__openmips0__DOT__reg1_read = 1U;
                }
            } else {
                vlSelf->top__DOT__openmips0__DOT__reg1_read = 1U;
            }
        } else if ((0x40000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            if ((0x20000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x1aU)))) {
                            if ((0x20U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 4U)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                     >> 1U)))) {
                                                vlSelf->top__DOT__openmips0__DOT__reg1_read = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                 >> 4U)))) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 3U)))) {
                                    if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                    >> 1U)))) {
                                            vlSelf->top__DOT__openmips0__DOT__reg1_read = 1U;
                                        }
                                    } else if ((2U 
                                                & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                        if ((1U & (~ vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                                            vlSelf->top__DOT__openmips0__DOT__reg1_read = 1U;
                                        }
                                    } else {
                                        vlSelf->top__DOT__openmips0__DOT__reg1_read = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x20000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            vlSelf->top__DOT__openmips0__DOT__reg1_read = 1U;
        } else if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            vlSelf->top__DOT__openmips0__DOT__reg1_read = 1U;
        } else if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            vlSelf->top__DOT__openmips0__DOT__reg1_read = 0U;
        } else if ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            if ((0x100000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0x13U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x12U)))) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x11U)))) {
                            vlSelf->top__DOT__openmips0__DOT__reg1_read = 1U;
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                 >> 0x13U)))) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0x12U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x11U)))) {
                        vlSelf->top__DOT__openmips0__DOT__reg1_read = 1U;
                    }
                }
            }
        } else if ((0U == (0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                    >> 6U)))) {
            if ((0x20U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 4U)))) {
                    if ((8U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 2U)))) {
                            if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                vlSelf->top__DOT__openmips0__DOT__reg1_read = 1U;
                            }
                        }
                    } else {
                        vlSelf->top__DOT__openmips0__DOT__reg1_read = 1U;
                    }
                }
            } else if ((0x10U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((8U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 2U)))) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 1U)))) {
                            vlSelf->top__DOT__openmips0__DOT__reg1_read = 1U;
                        }
                    }
                } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                     >> 2U)))) {
                    vlSelf->top__DOT__openmips0__DOT__reg1_read 
                        = (1U & vlSelf->top__DOT__openmips0__DOT__id_inst_i);
                }
            } else if ((8U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        if ((1U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                            vlSelf->top__DOT__openmips0__DOT__reg1_read = 0U;
                        }
                    }
                } else {
                    vlSelf->top__DOT__openmips0__DOT__reg1_read = 1U;
                }
            } else if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    vlSelf->top__DOT__openmips0__DOT__reg1_read = 1U;
                } else if ((1U & (~ vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                    vlSelf->top__DOT__openmips0__DOT__reg1_read = 1U;
                }
            }
        }
        if ((0U == (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                    >> 0x15U))) {
            if ((0U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__reg1_read = 0U;
            } else if ((2U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__reg1_read = 0U;
            } else if ((3U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__reg1_read = 0U;
            }
        }
    }
    vlSelf->top__DOT__openmips0__DOT__reg2_addr = ((IData)(vlSelf->rst)
                                                    ? 0U
                                                    : 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                       >> 0x10U)));
    if (vlSelf->rst) {
        vlSelf->top__DOT__openmips0__DOT__reg2_read = 0U;
    } else {
        vlSelf->top__DOT__openmips0__DOT__reg2_read = 0U;
        if ((vlSelf->top__DOT__openmips0__DOT__id_inst_i 
             >> 0x1fU)) {
            if ((0x40000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                            if ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                vlSelf->top__DOT__openmips0__DOT__reg2_read = 0U;
                            }
                        }
                    }
                }
            } else if ((0x20000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x1aU)))) {
                            vlSelf->top__DOT__openmips0__DOT__reg2_read = 1U;
                        }
                    }
                } else {
                    vlSelf->top__DOT__openmips0__DOT__reg2_read = 1U;
                }
            } else if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1aU)))) {
                        vlSelf->top__DOT__openmips0__DOT__reg2_read = 1U;
                    }
                } else {
                    vlSelf->top__DOT__openmips0__DOT__reg2_read = 0U;
                }
            } else {
                vlSelf->top__DOT__openmips0__DOT__reg2_read 
                    = (IData)((0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__openmips0__DOT__id_inst_i)));
            }
        } else if ((0x40000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            if ((0x20000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x1aU)))) {
                            if ((0x20U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 4U)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                     >> 1U)))) {
                                                vlSelf->top__DOT__openmips0__DOT__reg2_read = 0U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                 >> 4U)))) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 3U)))) {
                                    if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                    >> 1U)))) {
                                            vlSelf->top__DOT__openmips0__DOT__reg2_read = 1U;
                                        }
                                    } else if ((2U 
                                                & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                        if ((1U & (~ vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                                            vlSelf->top__DOT__openmips0__DOT__reg2_read = 1U;
                                        }
                                    } else {
                                        vlSelf->top__DOT__openmips0__DOT__reg2_read = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x20000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            vlSelf->top__DOT__openmips0__DOT__reg2_read = 0U;
        } else if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            vlSelf->top__DOT__openmips0__DOT__reg2_read 
                = (1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                            >> 0x1bU)));
        } else if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            vlSelf->top__DOT__openmips0__DOT__reg2_read = 0U;
        } else if ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            if ((0x100000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0x13U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x12U)))) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x11U)))) {
                            vlSelf->top__DOT__openmips0__DOT__reg2_read = 0U;
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                 >> 0x13U)))) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0x12U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x11U)))) {
                        vlSelf->top__DOT__openmips0__DOT__reg2_read = 0U;
                    }
                }
            }
        } else if ((0U == (0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                    >> 6U)))) {
            if ((0x20U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 4U)))) {
                    if ((8U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 2U)))) {
                            if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                vlSelf->top__DOT__openmips0__DOT__reg2_read = 1U;
                            }
                        }
                    } else {
                        vlSelf->top__DOT__openmips0__DOT__reg2_read = 1U;
                    }
                }
            } else if ((0x10U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((8U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 2U)))) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 1U)))) {
                            vlSelf->top__DOT__openmips0__DOT__reg2_read = 1U;
                        }
                    }
                } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                     >> 2U)))) {
                    vlSelf->top__DOT__openmips0__DOT__reg2_read 
                        = (1U & ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                  ? (~ vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                  : (~ vlSelf->top__DOT__openmips0__DOT__id_inst_i)));
                }
            } else if ((8U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        if ((1U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                            vlSelf->top__DOT__openmips0__DOT__reg2_read = 1U;
                        }
                    }
                } else {
                    vlSelf->top__DOT__openmips0__DOT__reg2_read 
                        = (1U & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                 >> 1U));
                }
            } else if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    vlSelf->top__DOT__openmips0__DOT__reg2_read = 1U;
                } else if ((1U & (~ vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                    vlSelf->top__DOT__openmips0__DOT__reg2_read = 1U;
                }
            }
        }
        if ((0U == (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                    >> 0x15U))) {
            if ((0U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__reg2_read = 1U;
            } else if ((2U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__reg2_read = 1U;
            } else if ((3U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__reg2_read = 1U;
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__openmips0__DOT__id0__DOT__imm = 0U;
    } else {
        vlSelf->top__DOT__openmips0__DOT__id0__DOT__imm = 0U;
        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    vlSelf->top__DOT__openmips0__DOT__id0__DOT__imm 
                        = ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                            ? ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                ? ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                    ? (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                       << 0x10U) : 
                                   (0xffffU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))
                                : ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                    ? (0xffffU & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                    : (0xffffU & vlSelf->top__DOT__openmips0__DOT__id_inst_i)))
                            : ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                ? ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                       >> 0xfU)))) 
                                        << 0x10U) | 
                                       (0xffffU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))
                                    : (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                       >> 0xfU)))) 
                                        << 0x10U) | 
                                       (0xffffU & vlSelf->top__DOT__openmips0__DOT__id_inst_i)))
                                : ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                       >> 0xfU)))) 
                                        << 0x10U) | 
                                       (0xffffU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))
                                    : (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                       >> 0xfU)))) 
                                        << 0x10U) | 
                                       (0xffffU & vlSelf->top__DOT__openmips0__DOT__id_inst_i)))));
                }
            }
        }
        if ((0U == (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                    >> 0x15U))) {
            if ((0U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__id0__DOT__imm 
                    = ((0xffffffe0U & vlSelf->top__DOT__openmips0__DOT__id0__DOT__imm) 
                       | (0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                   >> 6U)));
            } else if ((2U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__id0__DOT__imm 
                    = ((0xffffffe0U & vlSelf->top__DOT__openmips0__DOT__id0__DOT__imm) 
                       | (0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                   >> 6U)));
            } else if ((3U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__id0__DOT__imm 
                    = ((0xffffffe0U & vlSelf->top__DOT__openmips0__DOT__id0__DOT__imm) 
                       | (0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                   >> 6U)));
            }
        }
    }
    vlSelf->top__DOT__ram_data_o = ((IData)(vlSelf->top__DOT__ram_ce_i)
                                     ? ((IData)(vlSelf->top__DOT__ram_we_i)
                                         ? 0U : (((
                                                   (0x1fffeU 
                                                    >= 
                                                    (0x1ffffU 
                                                     & (vlSelf->top__DOT__ram_addr_i 
                                                        >> 2U)))
                                                    ? 
                                                   vlSelf->top__DOT__data_ram0__DOT__data_mem3
                                                   [
                                                   (0x1ffffU 
                                                    & (vlSelf->top__DOT__ram_addr_i 
                                                       >> 2U))]
                                                    : 0U) 
                                                  << 0x18U) 
                                                 | ((((0x1fffeU 
                                                       >= 
                                                       (0x1ffffU 
                                                        & (vlSelf->top__DOT__ram_addr_i 
                                                           >> 2U)))
                                                       ? 
                                                      vlSelf->top__DOT__data_ram0__DOT__data_mem2
                                                      [
                                                      (0x1ffffU 
                                                       & (vlSelf->top__DOT__ram_addr_i 
                                                          >> 2U))]
                                                       : 0U) 
                                                     << 0x10U) 
                                                    | ((((0x1fffeU 
                                                          >= 
                                                          (0x1ffffU 
                                                           & (vlSelf->top__DOT__ram_addr_i 
                                                              >> 2U)))
                                                          ? 
                                                         vlSelf->top__DOT__data_ram0__DOT__data_mem1
                                                         [
                                                         (0x1ffffU 
                                                          & (vlSelf->top__DOT__ram_addr_i 
                                                             >> 2U))]
                                                          : 0U) 
                                                        << 8U) 
                                                       | ((0x1fffeU 
                                                           >= 
                                                           (0x1ffffU 
                                                            & (vlSelf->top__DOT__ram_addr_i 
                                                               >> 2U)))
                                                           ? 
                                                          vlSelf->top__DOT__data_ram0__DOT__data_mem0
                                                          [
                                                          (0x1ffffU 
                                                           & (vlSelf->top__DOT__ram_addr_i 
                                                              >> 2U))]
                                                           : 0U)))))
                                     : 0U);
    if (vlSelf->rst) {
        vlSelf->top__DOT__openmips0__DOT__ex0__DOT__HI = 0U;
    } else if (vlSelf->top__DOT__openmips0__DOT__mem_whilo_i) {
        vlSelf->top__DOT__openmips0__DOT__ex0__DOT__HI 
            = vlSelf->top__DOT__openmips0__DOT__mem_hi_o;
    } else if (vlSelf->top__DOT__openmips0__DOT__wb_whilo_i) {
        vlSelf->top__DOT__openmips0__DOT__ex0__DOT__HI 
            = vlSelf->top__DOT__openmips0__DOT__wb_hi_i;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__openmips0__DOT__ex0__DOT__LO = 0U;
    } else if (vlSelf->top__DOT__openmips0__DOT__mem_whilo_i) {
        vlSelf->top__DOT__openmips0__DOT__ex0__DOT__LO 
            = vlSelf->top__DOT__openmips0__DOT__mem_lo_o;
    } else if (vlSelf->top__DOT__openmips0__DOT__wb_whilo_i) {
        vlSelf->top__DOT__openmips0__DOT__ex0__DOT__LO 
            = vlSelf->top__DOT__openmips0__DOT__wb_lo_i;
    }
    vlSelf->top__DOT__openmips0__DOT__stall = ((IData)(vlSelf->rst)
                                                ? 0U
                                                : ((IData)(vlSelf->top__DOT__openmips0__DOT__ex0__DOT__stallreq_for_madd_msub)
                                                    ? 0xfU
                                                    : 0U));
    vlSelf->top__DOT__openmips0__DOT__ex0__DOT__hilo_temp 
        = ((QData)((IData)(((((((0xa9U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)) 
                                | (0x18U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) 
                               | (0xa6U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) 
                              | (0xaaU == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) 
                             & (vlSelf->top__DOT__openmips0__DOT__ex_reg1_i 
                                >> 0x1fU)) ? ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__openmips0__DOT__ex_reg1_i))
                             : vlSelf->top__DOT__openmips0__DOT__ex_reg1_i))) 
           * (QData)((IData)(((((((0xa9U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)) 
                                  | (0x18U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) 
                                 | (0xa6U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) 
                                | (0xaaU == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) 
                               & (vlSelf->top__DOT__openmips0__DOT__ex_reg2_i 
                                  >> 0x1fU)) ? vlSelf->top__DOT__openmips0__DOT__ex0__DOT__reg2_i_mux
                               : vlSelf->top__DOT__openmips0__DOT__ex_reg2_i))));
    vlSelf->top__DOT__openmips0__DOT__ex0__DOT__result_sum 
        = (vlSelf->top__DOT__openmips0__DOT__ex_reg1_i 
           + vlSelf->top__DOT__openmips0__DOT__ex0__DOT__reg2_i_mux);
    if (vlSelf->rst) {
        vlSelf->top__DOT__openmips0__DOT__mem_wdata_o = 0U;
    } else {
        vlSelf->top__DOT__openmips0__DOT__mem_wdata_o 
            = vlSelf->top__DOT__openmips0__DOT__mem_wdata_i;
        if ((0x80U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))) {
            if ((0x40U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))) {
                if ((0x20U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))) {
                    if ((1U & (~ ((IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))) {
                                if ((2U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))) {
                                    if ((1U & (~ (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i)))) {
                                        vlSelf->top__DOT__openmips0__DOT__mem_wdata_o 
                                            = ((2U 
                                                & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                ? (
                                                   (1U 
                                                    & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                    ? vlSelf->top__DOT__ram_data_o
                                                    : 
                                                   ((0xff000000U 
                                                     & vlSelf->top__DOT__openmips0__DOT__mem_reg2_i) 
                                                    | (vlSelf->top__DOT__ram_data_o 
                                                       >> 8U)))
                                                : (
                                                   (1U 
                                                    & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                    ? 
                                                   ((0xffff0000U 
                                                     & vlSelf->top__DOT__openmips0__DOT__mem_reg2_i) 
                                                    | (vlSelf->top__DOT__ram_data_o 
                                                       >> 0x10U))
                                                    : 
                                                   ((0xffffff00U 
                                                     & vlSelf->top__DOT__openmips0__DOT__mem_reg2_i) 
                                                    | (vlSelf->top__DOT__ram_data_o 
                                                       >> 0x18U))));
                                    }
                                } else {
                                    vlSelf->top__DOT__openmips0__DOT__mem_wdata_o 
                                        = ((1U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))
                                            ? ((0U 
                                                == 
                                                (3U 
                                                 & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i))
                                                ? (vlSelf->top__DOT__ram_data_o 
                                                   >> 0x10U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i))
                                                    ? 
                                                   (0xffffU 
                                                    & vlSelf->top__DOT__ram_data_o)
                                                    : 0U))
                                            : ((2U 
                                                & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                ? (
                                                   (1U 
                                                    & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                    ? 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__ram_data_o)
                                                    : 
                                                   (0xffU 
                                                    & (vlSelf->top__DOT__ram_data_o 
                                                       >> 8U)))
                                                : (
                                                   (1U 
                                                    & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                    ? 
                                                   (0xffU 
                                                    & (vlSelf->top__DOT__ram_data_o 
                                                       >> 0x10U))
                                                    : 
                                                   (vlSelf->top__DOT__ram_data_o 
                                                    >> 0x18U))));
                                }
                            } else {
                                vlSelf->top__DOT__openmips0__DOT__mem_wdata_o 
                                    = ((2U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))
                                        ? ((1U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))
                                            ? vlSelf->top__DOT__ram_data_o
                                            : ((2U 
                                                & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                ? (
                                                   (1U 
                                                    & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                    ? 
                                                   ((vlSelf->top__DOT__ram_data_o 
                                                     << 0x18U) 
                                                    | (0xffffffU 
                                                       & vlSelf->top__DOT__openmips0__DOT__mem_reg2_i))
                                                    : 
                                                   ((vlSelf->top__DOT__ram_data_o 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & vlSelf->top__DOT__openmips0__DOT__mem_reg2_i)))
                                                : (
                                                   (1U 
                                                    & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                    ? 
                                                   ((vlSelf->top__DOT__ram_data_o 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & vlSelf->top__DOT__openmips0__DOT__mem_reg2_i))
                                                    : vlSelf->top__DOT__ram_data_o)))
                                        : ((1U & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_aluop_i))
                                            ? ((0U 
                                                == 
                                                (3U 
                                                 & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i))
                                                ? (
                                                   ((- (IData)(
                                                               (vlSelf->top__DOT__ram_data_o 
                                                                >> 0x1fU))) 
                                                    << 0x10U) 
                                                   | (vlSelf->top__DOT__ram_data_o 
                                                      >> 0x10U))
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i))
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__ram_data_o 
                                                                    >> 0xfU)))) 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & vlSelf->top__DOT__ram_data_o))
                                                    : 0U))
                                            : ((2U 
                                                & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                ? (
                                                   (1U 
                                                    & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__ram_data_o 
                                                                    >> 7U)))) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & vlSelf->top__DOT__ram_data_o))
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__ram_data_o 
                                                                    >> 0xfU)))) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & (vlSelf->top__DOT__ram_data_o 
                                                          >> 8U))))
                                                : (
                                                   (1U 
                                                    & vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i)
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__ram_data_o 
                                                                    >> 0x17U)))) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & (vlSelf->top__DOT__ram_data_o 
                                                          >> 0x10U)))
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelf->top__DOT__ram_data_o 
                                                                 >> 0x1fU))) 
                                                     << 8U) 
                                                    | (vlSelf->top__DOT__ram_data_o 
                                                       >> 0x18U))))));
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (((0xa6U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)) 
             | (0xa8U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)))) {
            if ((0U == (IData)(vlSelf->top__DOT__openmips0__DOT__cnt_i))) {
                vlSelf->top__DOT__openmips0__DOT__ex0__DOT__hilo_temp1 = 0ULL;
            } else if ((1U == (IData)(vlSelf->top__DOT__openmips0__DOT__cnt_i))) {
                vlSelf->top__DOT__openmips0__DOT__ex0__DOT__hilo_temp1 
                    = (vlSelf->top__DOT__openmips0__DOT__hilo_temp_i 
                       + (((QData)((IData)(vlSelf->top__DOT__openmips0__DOT__ex0__DOT__HI)) 
                           << 0x20U) | (QData)((IData)(vlSelf->top__DOT__openmips0__DOT__ex0__DOT__LO))));
            }
        } else if (((0xaaU == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)) 
                    | (0xabU == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)))) {
            if ((0U == (IData)(vlSelf->top__DOT__openmips0__DOT__cnt_i))) {
                vlSelf->top__DOT__openmips0__DOT__ex0__DOT__hilo_temp1 = 0ULL;
            } else if ((1U == (IData)(vlSelf->top__DOT__openmips0__DOT__cnt_i))) {
                vlSelf->top__DOT__openmips0__DOT__ex0__DOT__hilo_temp1 
                    = (vlSelf->top__DOT__openmips0__DOT__hilo_temp_i 
                       + (((QData)((IData)(vlSelf->top__DOT__openmips0__DOT__ex0__DOT__HI)) 
                           << 0x20U) | (QData)((IData)(vlSelf->top__DOT__openmips0__DOT__ex0__DOT__LO))));
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__openmips0__DOT__ex0__DOT__movres = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i) 
                         >> 7U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) {
                    if ((1U & (~ ((IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) {
                                if ((1U & (~ (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)))) {
                                    vlSelf->top__DOT__openmips0__DOT__ex0__DOT__movres 
                                        = vlSelf->top__DOT__openmips0__DOT__ex0__DOT__LO;
                                }
                            } else if ((1U & (~ (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)))) {
                                vlSelf->top__DOT__openmips0__DOT__ex0__DOT__movres 
                                    = vlSelf->top__DOT__openmips0__DOT__ex0__DOT__HI;
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) {
                    if ((1U & (~ ((IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) {
                            vlSelf->top__DOT__openmips0__DOT__ex0__DOT__movres 
                                = vlSelf->top__DOT__openmips0__DOT__ex_reg1_i;
                        }
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__openmips0__DOT__ex0__DOT__mulres 
        = ((IData)(vlSelf->rst) ? 0ULL : ((((((0xa9U 
                                               == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)) 
                                              | (0x18U 
                                                 == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) 
                                             | (0xa6U 
                                                == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) 
                                            | (0xaaU 
                                               == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) 
                                           & ((vlSelf->top__DOT__openmips0__DOT__ex_reg1_i 
                                               ^ vlSelf->top__DOT__openmips0__DOT__ex_reg2_i) 
                                              >> 0x1fU))
                                           ? (1ULL 
                                              + (~ vlSelf->top__DOT__openmips0__DOT__ex0__DOT__hilo_temp))
                                           : vlSelf->top__DOT__openmips0__DOT__ex0__DOT__hilo_temp));
    vlSelf->top__DOT__openmips0__DOT__ex_wreg_o = (
                                                   (~ 
                                                    (((0x20U 
                                                       == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)) 
                                                      | (0x22U 
                                                         == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))) 
                                                     & ((((~ 
                                                           (vlSelf->top__DOT__openmips0__DOT__ex_reg1_i 
                                                            >> 0x1fU)) 
                                                          & (~ 
                                                             (vlSelf->top__DOT__openmips0__DOT__ex0__DOT__reg2_i_mux 
                                                              >> 0x1fU))) 
                                                         & (vlSelf->top__DOT__openmips0__DOT__ex0__DOT__result_sum 
                                                            >> 0x1fU)) 
                                                        | (((vlSelf->top__DOT__openmips0__DOT__ex_reg1_i 
                                                             & vlSelf->top__DOT__openmips0__DOT__ex0__DOT__reg2_i_mux) 
                                                            >> 0x1fU) 
                                                           & (~ 
                                                              (vlSelf->top__DOT__openmips0__DOT__ex0__DOT__result_sum 
                                                               >> 0x1fU)))))) 
                                                   & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_wreg_i));
    vlSelf->top__DOT__openmips0__DOT__ex0__DOT__arithmeticres 
        = ((IData)(vlSelf->rst) ? 0U : (((0x2aU == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)) 
                                         | (0x2bU == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)))
                                         ? (1U & ((0x2aU 
                                                   == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))
                                                   ? 
                                                  ((((vlSelf->top__DOT__openmips0__DOT__ex_reg1_i 
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
                                                   : 
                                                  (vlSelf->top__DOT__openmips0__DOT__ex_reg1_i 
                                                   < vlSelf->top__DOT__openmips0__DOT__ex_reg2_i)))
                                         : (((0x20U 
                                              == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)) 
                                             | (0x21U 
                                                == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)))
                                             ? vlSelf->top__DOT__openmips0__DOT__ex0__DOT__result_sum
                                             : (((0x22U 
                                                  == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)) 
                                                 | (0x23U 
                                                    == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)))
                                                 ? vlSelf->top__DOT__openmips0__DOT__ex0__DOT__result_sum
                                                 : 
                                                ((0xb1U 
                                                  == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))
                                                  ? 
                                                 ((vlSelf->top__DOT__openmips0__DOT__ex_reg1_i 
                                                   >> 0x1fU)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                    ? 
                                                   ((0x20000000U 
                                                     & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                     ? 
                                                    ((0x10000000U 
                                                      & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                      ? 
                                                     ((0x8000000U 
                                                       & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                       ? 
                                                      ((0x4000000U 
                                                        & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                        ? 
                                                       ((0x2000000U 
                                                         & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                         ? 
                                                        ((0x1000000U 
                                                          & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                          ? 
                                                         ((0x800000U 
                                                           & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                           ? 
                                                          ((0x400000U 
                                                            & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                            ? 
                                                           ((0x200000U 
                                                             & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                             ? 
                                                            ((0x100000U 
                                                              & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                              ? 
                                                             ((0x80000U 
                                                               & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                               ? 
                                                              ((0x40000U 
                                                                & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                ? 
                                                               ((0x20000U 
                                                                 & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                 ? 
                                                                ((0x10000U 
                                                                  & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                  ? 
                                                                 ((0x8000U 
                                                                   & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                   ? 
                                                                  ((0x4000U 
                                                                    & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                    ? 
                                                                   ((0x2000U 
                                                                     & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                     ? 
                                                                    ((0x1000U 
                                                                      & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                      ? 
                                                                     ((0x800U 
                                                                       & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                       ? 
                                                                      ((0x400U 
                                                                        & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                        ? 
                                                                       ((0x200U 
                                                                         & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                         ? 
                                                                        ((0x100U 
                                                                          & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                          ? 
                                                                         ((0x80U 
                                                                           & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                           ? 
                                                                          ((0x40U 
                                                                            & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                            ? 
                                                                           ((0x20U 
                                                                             & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                             ? 
                                                                            ((0x10U 
                                                                              & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                              ? 
                                                                             ((8U 
                                                                               & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                               ? 
                                                                              ((4U 
                                                                                & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                                ? 
                                                                               ((2U 
                                                                                & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                                 ? 0x20U
                                                                                 : 0x1fU)
                                                                                 : 0x1eU)
                                                                                : 0x1dU)
                                                                               : 0x1cU)
                                                                              : 0x1bU)
                                                                             : 0x1aU)
                                                                            : 0x19U)
                                                                           : 0x18U)
                                                                          : 0x17U)
                                                                         : 0x16U)
                                                                        : 0x15U)
                                                                       : 0x14U)
                                                                      : 0x13U)
                                                                     : 0x12U)
                                                                    : 0x11U)
                                                                   : 0x10U)
                                                                  : 0xfU)
                                                                 : 0xeU)
                                                                : 0xdU)
                                                               : 0xcU)
                                                              : 0xbU)
                                                             : 0xaU)
                                                            : 9U)
                                                           : 8U)
                                                          : 7U)
                                                         : 6U)
                                                        : 5U)
                                                       : 4U)
                                                      : 3U)
                                                     : 2U)
                                                    : 1U)
                                                   : 0U)
                                                  : 
                                                 ((0xb0U 
                                                   == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))
                                                   ? 
                                                  ((vlSelf->top__DOT__openmips0__DOT__ex_reg1_i 
                                                    >> 0x1fU)
                                                    ? 0U
                                                    : 
                                                   ((0x40000000U 
                                                     & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                     ? 1U
                                                     : 
                                                    ((0x20000000U 
                                                      & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                      ? 2U
                                                      : 
                                                     ((0x10000000U 
                                                       & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                       ? 3U
                                                       : 
                                                      ((0x8000000U 
                                                        & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                        ? 4U
                                                        : 
                                                       ((0x4000000U 
                                                         & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                         ? 5U
                                                         : 
                                                        ((0x2000000U 
                                                          & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                          ? 6U
                                                          : 
                                                         ((0x1000000U 
                                                           & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                           ? 7U
                                                           : 
                                                          ((0x800000U 
                                                            & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                            ? 8U
                                                            : 
                                                           ((0x400000U 
                                                             & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                             ? 9U
                                                             : 
                                                            ((0x200000U 
                                                              & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                              ? 0xaU
                                                              : 
                                                             ((0x100000U 
                                                               & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                               ? 0xbU
                                                               : 
                                                              ((0x80000U 
                                                                & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                ? 0xcU
                                                                : 
                                                               ((0x40000U 
                                                                 & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                 ? 0xdU
                                                                 : 
                                                                ((0x20000U 
                                                                  & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                  ? 0xeU
                                                                  : 
                                                                 ((0x10000U 
                                                                   & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                   ? 0xfU
                                                                   : 
                                                                  ((0x8000U 
                                                                    & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                    ? 0x10U
                                                                    : 
                                                                   ((0x4000U 
                                                                     & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                     ? 0x11U
                                                                     : 
                                                                    ((0x2000U 
                                                                      & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                      ? 0x12U
                                                                      : 
                                                                     ((0x1000U 
                                                                       & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                       ? 0x13U
                                                                       : 
                                                                      ((0x800U 
                                                                        & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                        ? 0x14U
                                                                        : 
                                                                       ((0x400U 
                                                                         & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                         ? 0x15U
                                                                         : 
                                                                        ((0x200U 
                                                                          & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                          ? 0x16U
                                                                          : 
                                                                         ((0x100U 
                                                                           & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                           ? 0x17U
                                                                           : 
                                                                          ((0x80U 
                                                                            & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                            ? 0x18U
                                                                            : 
                                                                           ((0x40U 
                                                                             & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                             ? 0x19U
                                                                             : 
                                                                            ((0x20U 
                                                                              & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                              ? 0x1aU
                                                                              : 
                                                                             ((0x10U 
                                                                               & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                               ? 0x1bU
                                                                               : 
                                                                              ((8U 
                                                                                & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                                ? 0x1cU
                                                                                : 
                                                                               ((4U 
                                                                                & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                                 ? 0x1dU
                                                                                 : 
                                                                                ((2U 
                                                                                & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                                 ? 0x1eU
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->top__DOT__openmips0__DOT__ex_reg1_i)
                                                                                 ? 0x1fU
                                                                                 : 0x20U))))))))))))))))))))))))))))))))
                                                   : 0U))))));
    if (vlSelf->rst) {
        vlSelf->top__DOT__openmips0__DOT__hilo_temp_o = 0ULL;
    } else if (((0xa6U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)) 
                | (0xa8U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)))) {
        if ((0U == (IData)(vlSelf->top__DOT__openmips0__DOT__cnt_i))) {
            vlSelf->top__DOT__openmips0__DOT__hilo_temp_o 
                = vlSelf->top__DOT__openmips0__DOT__ex0__DOT__mulres;
        } else if ((1U == (IData)(vlSelf->top__DOT__openmips0__DOT__cnt_i))) {
            vlSelf->top__DOT__openmips0__DOT__hilo_temp_o = 0ULL;
        }
    } else if (((0xaaU == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)) 
                | (0xabU == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)))) {
        if ((0U == (IData)(vlSelf->top__DOT__openmips0__DOT__cnt_i))) {
            vlSelf->top__DOT__openmips0__DOT__hilo_temp_o 
                = (1ULL + (~ vlSelf->top__DOT__openmips0__DOT__ex0__DOT__mulres));
        } else if ((1U == (IData)(vlSelf->top__DOT__openmips0__DOT__cnt_i))) {
            vlSelf->top__DOT__openmips0__DOT__hilo_temp_o = 0ULL;
        }
    } else {
        vlSelf->top__DOT__openmips0__DOT__hilo_temp_o = 0ULL;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__openmips0__DOT__ex_hi_o = 0U;
        vlSelf->top__DOT__openmips0__DOT__ex_lo_o = 0U;
    } else {
        vlSelf->top__DOT__openmips0__DOT__ex_hi_o = 
            (((0xa6U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)) 
              | (0xa8U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)))
              ? (IData)((vlSelf->top__DOT__openmips0__DOT__ex0__DOT__hilo_temp1 
                         >> 0x20U)) : (((0xaaU == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)) 
                                        | (0xabU == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)))
                                        ? (IData)((vlSelf->top__DOT__openmips0__DOT__ex0__DOT__hilo_temp1 
                                                   >> 0x20U))
                                        : (((0x18U 
                                             == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)) 
                                            | (0x19U 
                                               == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)))
                                            ? (IData)(
                                                      (vlSelf->top__DOT__openmips0__DOT__ex0__DOT__mulres 
                                                       >> 0x20U))
                                            : ((0x11U 
                                                == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))
                                                ? vlSelf->top__DOT__openmips0__DOT__ex_reg1_i
                                                : (
                                                   (0x13U 
                                                    == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))
                                                    ? vlSelf->top__DOT__openmips0__DOT__ex0__DOT__HI
                                                    : 0U)))));
        vlSelf->top__DOT__openmips0__DOT__ex_lo_o = 
            (((0xa6U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)) 
              | (0xa8U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)))
              ? (IData)(vlSelf->top__DOT__openmips0__DOT__ex0__DOT__hilo_temp1)
              : (((0xaaU == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)) 
                  | (0xabU == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)))
                  ? (IData)(vlSelf->top__DOT__openmips0__DOT__ex0__DOT__hilo_temp1)
                  : (((0x18U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)) 
                      | (0x19U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)))
                      ? (IData)(vlSelf->top__DOT__openmips0__DOT__ex0__DOT__mulres)
                      : ((0x11U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))
                          ? vlSelf->top__DOT__openmips0__DOT__ex0__DOT__LO
                          : ((0x13U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))
                              ? vlSelf->top__DOT__openmips0__DOT__ex_reg1_i
                              : 0U)))));
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if ((((IData)(vlSelf->top__DOT__openmips0__DOT__reg2_read) 
              & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_wreg_o)) 
             & ((IData)(vlSelf->top__DOT__openmips0__DOT__reg2_addr) 
                == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_wd_i)))) {
            vlSelf->top__DOT__openmips0__DOT__id0__DOT__text = 1U;
        } else if ((((IData)(vlSelf->top__DOT__openmips0__DOT__reg2_read) 
                     & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_wreg_o)) 
                    & ((IData)(vlSelf->top__DOT__openmips0__DOT__reg2_addr) 
                       == (IData)(vlSelf->top__DOT__openmips0__DOT__mem_wd_o)))) {
            vlSelf->top__DOT__openmips0__DOT__id0__DOT__text = 0U;
        } else if (vlSelf->top__DOT__openmips0__DOT__reg2_read) {
            vlSelf->top__DOT__openmips0__DOT__id0__DOT__text = 1U;
        } else if ((1U & (~ (IData)(vlSelf->top__DOT__openmips0__DOT__reg2_read)))) {
            vlSelf->top__DOT__openmips0__DOT__id0__DOT__text = 0U;
        }
    }
    vlSelf->top__DOT__openmips0__DOT__ex_wdata_o = 
        ((4U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_alusel_i))
          ? ((2U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_alusel_i))
              ? ((1U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_alusel_i))
                  ? 0U : vlSelf->top__DOT__openmips0__DOT__ex_link_address_i)
              : ((1U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_alusel_i))
                  ? (IData)(vlSelf->top__DOT__openmips0__DOT__ex0__DOT__mulres)
                  : vlSelf->top__DOT__openmips0__DOT__ex0__DOT__arithmeticres))
          : ((2U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_alusel_i))
              ? ((1U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_alusel_i))
                  ? vlSelf->top__DOT__openmips0__DOT__ex0__DOT__movres
                  : vlSelf->top__DOT__openmips0__DOT__ex0__DOT__shiftres)
              : ((1U & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_alusel_i))
                  ? vlSelf->top__DOT__openmips0__DOT__ex0__DOT__logicout
                  : 0U)));
    if (vlSelf->rst) {
        vlSelf->top__DOT__openmips0__DOT__id_reg1_o = 0U;
        vlSelf->top__DOT__openmips0__DOT__id_reg2_o = 0U;
    } else {
        vlSelf->top__DOT__openmips0__DOT__id_reg1_o 
            = ((((IData)(vlSelf->top__DOT__openmips0__DOT__reg1_read) 
                 & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_wreg_o)) 
                & ((IData)(vlSelf->top__DOT__openmips0__DOT__reg1_addr) 
                   == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_wd_i)))
                ? vlSelf->top__DOT__openmips0__DOT__ex_wdata_o
                : ((((IData)(vlSelf->top__DOT__openmips0__DOT__reg1_read) 
                     & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_wreg_o)) 
                    & ((IData)(vlSelf->top__DOT__openmips0__DOT__reg1_addr) 
                       == (IData)(vlSelf->top__DOT__openmips0__DOT__mem_wd_o)))
                    ? vlSelf->top__DOT__openmips0__DOT__mem_wdata_o
                    : ((IData)(vlSelf->top__DOT__openmips0__DOT__reg1_read)
                        ? ((IData)(vlSelf->rst) ? 0U
                            : ((0U == (IData)(vlSelf->top__DOT__openmips0__DOT__reg1_addr))
                                ? 0U : (((((IData)(vlSelf->top__DOT__openmips0__DOT__reg1_addr) 
                                           == (IData)(vlSelf->top__DOT__openmips0__DOT__wb_wd_i)) 
                                          & (IData)(vlSelf->top__DOT__openmips0__DOT__wb_wreg_i)) 
                                         & (IData)(vlSelf->top__DOT__openmips0__DOT__reg1_read))
                                         ? vlSelf->top__DOT__openmips0__DOT__wb_wdata_i
                                         : ((IData)(vlSelf->top__DOT__openmips0__DOT__reg1_read)
                                             ? vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs
                                            [vlSelf->top__DOT__openmips0__DOT__reg1_addr]
                                             : 0U))))
                        : ((IData)(vlSelf->top__DOT__openmips0__DOT__reg1_read)
                            ? 0U : vlSelf->top__DOT__openmips0__DOT__id0__DOT__imm))));
        vlSelf->top__DOT__openmips0__DOT__id_reg2_o 
            = ((((IData)(vlSelf->top__DOT__openmips0__DOT__reg2_read) 
                 & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_wreg_o)) 
                & ((IData)(vlSelf->top__DOT__openmips0__DOT__reg2_addr) 
                   == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_wd_i)))
                ? vlSelf->top__DOT__openmips0__DOT__ex_wdata_o
                : ((((IData)(vlSelf->top__DOT__openmips0__DOT__reg2_read) 
                     & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_wreg_o)) 
                    & ((IData)(vlSelf->top__DOT__openmips0__DOT__reg2_addr) 
                       == (IData)(vlSelf->top__DOT__openmips0__DOT__mem_wd_o)))
                    ? vlSelf->top__DOT__openmips0__DOT__mem_wdata_o
                    : ((IData)(vlSelf->top__DOT__openmips0__DOT__reg2_read)
                        ? ((IData)(vlSelf->rst) ? 0U
                            : ((0U == (IData)(vlSelf->top__DOT__openmips0__DOT__reg2_addr))
                                ? 0U : (((((IData)(vlSelf->top__DOT__openmips0__DOT__reg2_addr) 
                                           == (IData)(vlSelf->top__DOT__openmips0__DOT__wb_wd_i)) 
                                          & (IData)(vlSelf->top__DOT__openmips0__DOT__wb_wreg_i)) 
                                         & (IData)(vlSelf->top__DOT__openmips0__DOT__reg2_read))
                                         ? vlSelf->top__DOT__openmips0__DOT__wb_wdata_i
                                         : ((IData)(vlSelf->top__DOT__openmips0__DOT__reg2_read)
                                             ? vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs
                                            [vlSelf->top__DOT__openmips0__DOT__reg2_addr]
                                             : 0U))))
                        : ((IData)(vlSelf->top__DOT__openmips0__DOT__reg2_read)
                            ? 0U : vlSelf->top__DOT__openmips0__DOT__id0__DOT__imm))));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 0U;
    } else {
        vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 0U;
        if ((vlSelf->top__DOT__openmips0__DOT__id_inst_i 
             >> 0x1fU)) {
            if ((0x40000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                            if ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 1U;
                            }
                        }
                    }
                }
            } else if ((0x20000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x1aU)))) {
                            vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 0U;
                        }
                    }
                } else {
                    vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 0U;
                }
            } else if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1aU)))) {
                        vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 1U;
                    }
                } else {
                    vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 1U;
                }
            } else {
                vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 1U;
            }
        } else if ((0x40000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            if ((0x20000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x1aU)))) {
                            if ((0x20U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 4U)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                     >> 1U)))) {
                                                vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                 >> 4U)))) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 3U)))) {
                                    if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                    >> 1U)))) {
                                            vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 0U;
                                        }
                                    } else if ((2U 
                                                & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                        if ((1U & (~ vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                                            vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 1U;
                                        }
                                    } else {
                                        vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x20000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 1U;
        } else if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 0U;
        } else if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            vlSelf->top__DOT__openmips0__DOT__id_wreg_o 
                = (1U & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                         >> 0x1aU));
        } else if ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
            if ((0x100000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0x13U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x12U)))) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x11U)))) {
                            vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 1U;
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                 >> 0x13U)))) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0x12U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x11U)))) {
                        vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 0U;
                    }
                }
            }
        } else if ((0U == (0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                    >> 6U)))) {
            if ((0x20U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 4U)))) {
                    if ((8U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 2U)))) {
                            if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 1U;
                            }
                        }
                    } else {
                        vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 1U;
                    }
                }
            } else if ((0x10U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((8U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 2U)))) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 1U)))) {
                            vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 0U;
                        }
                    }
                } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                     >> 2U)))) {
                    vlSelf->top__DOT__openmips0__DOT__id_wreg_o 
                        = (1U & ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                  ? (~ vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                  : (~ vlSelf->top__DOT__openmips0__DOT__id_inst_i)));
                }
            } else if ((8U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        if ((1U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                            vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 1U;
                        }
                    }
                } else {
                    vlSelf->top__DOT__openmips0__DOT__id_wreg_o 
                        = (1U & ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                  ? ((1U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                      ? (0U != vlSelf->top__DOT__openmips0__DOT__id_reg2_o)
                                      : (0U == vlSelf->top__DOT__openmips0__DOT__id_reg2_o))
                                  : vlSelf->top__DOT__openmips0__DOT__id_inst_i));
                }
            } else if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 1U;
                } else if ((1U & (~ vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                    vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 1U;
                }
            }
        }
        if ((0U == (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                    >> 0x15U))) {
            if ((0U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 1U;
            } else if ((2U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 1U;
            } else if ((3U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 1U;
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__openmips0__DOT__id_branch_flag_o = 0U;
    } else {
        vlSelf->top__DOT__openmips0__DOT__id_branch_flag_o = 0U;
        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                            if ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if (((~ (vlSelf->top__DOT__openmips0__DOT__id_reg1_o 
                                         >> 0x1fU)) 
                                     & (0U != vlSelf->top__DOT__openmips0__DOT__id_reg1_o))) {
                                    vlSelf->top__DOT__openmips0__DOT__id_branch_flag_o = 1U;
                                }
                            } else if ((1U & ((vlSelf->top__DOT__openmips0__DOT__id_reg1_o 
                                               >> 0x1fU) 
                                              | (0U 
                                                 == vlSelf->top__DOT__openmips0__DOT__id_reg1_o)))) {
                                vlSelf->top__DOT__openmips0__DOT__id_branch_flag_o = 1U;
                            }
                        } else if ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                            if ((vlSelf->top__DOT__openmips0__DOT__id_reg1_o 
                                 != vlSelf->top__DOT__openmips0__DOT__id_reg2_o)) {
                                vlSelf->top__DOT__openmips0__DOT__id_branch_flag_o = 1U;
                            }
                        } else if ((vlSelf->top__DOT__openmips0__DOT__id_reg1_o 
                                    == vlSelf->top__DOT__openmips0__DOT__id_reg2_o)) {
                            vlSelf->top__DOT__openmips0__DOT__id_branch_flag_o = 1U;
                        }
                    } else if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        vlSelf->top__DOT__openmips0__DOT__id_branch_flag_o = 1U;
                    } else if ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        if ((0x100000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                            if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                          >> 0x13U)))) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 0x12U)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0x11U)))) {
                                        if ((0x10000U 
                                             & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top__DOT__openmips0__DOT__id_reg1_o 
                                                     >> 0x1fU)))) {
                                                vlSelf->top__DOT__openmips0__DOT__id_branch_flag_o = 1U;
                                            }
                                        } else if (
                                                   (vlSelf->top__DOT__openmips0__DOT__id_reg1_o 
                                                    >> 0x1fU)) {
                                            vlSelf->top__DOT__openmips0__DOT__id_branch_flag_o = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x13U)))) {
                            if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                          >> 0x12U)))) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 0x11U)))) {
                                    if ((0x10000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__openmips0__DOT__id_reg1_o 
                                                    >> 0x1fU)))) {
                                            vlSelf->top__DOT__openmips0__DOT__id_branch_flag_o = 1U;
                                        }
                                    } else if ((vlSelf->top__DOT__openmips0__DOT__id_reg1_o 
                                                >> 0x1fU)) {
                                        vlSelf->top__DOT__openmips0__DOT__id_branch_flag_o = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((0U == (0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                >> 6U)))) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 5U)))) {
                            if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                          >> 4U)))) {
                                if ((8U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                    >> 1U)))) {
                                            vlSelf->top__DOT__openmips0__DOT__id_branch_flag_o = 1U;
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
    if (vlSelf->rst) {
        vlSelf->top__DOT__openmips0__DOT__id_next_inst_in_delayslot_o = 0U;
    } else {
        vlSelf->top__DOT__openmips0__DOT__id_next_inst_in_delayslot_o = 0U;
        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                            if ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if (((~ (vlSelf->top__DOT__openmips0__DOT__id_reg1_o 
                                         >> 0x1fU)) 
                                     & (0U != vlSelf->top__DOT__openmips0__DOT__id_reg1_o))) {
                                    vlSelf->top__DOT__openmips0__DOT__id_next_inst_in_delayslot_o = 1U;
                                }
                            } else if ((1U & ((vlSelf->top__DOT__openmips0__DOT__id_reg1_o 
                                               >> 0x1fU) 
                                              | (0U 
                                                 == vlSelf->top__DOT__openmips0__DOT__id_reg1_o)))) {
                                vlSelf->top__DOT__openmips0__DOT__id_next_inst_in_delayslot_o = 1U;
                            }
                        } else if ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                            if ((vlSelf->top__DOT__openmips0__DOT__id_reg1_o 
                                 != vlSelf->top__DOT__openmips0__DOT__id_reg2_o)) {
                                vlSelf->top__DOT__openmips0__DOT__id_next_inst_in_delayslot_o = 1U;
                            }
                        } else if ((vlSelf->top__DOT__openmips0__DOT__id_reg1_o 
                                    == vlSelf->top__DOT__openmips0__DOT__id_reg2_o)) {
                            vlSelf->top__DOT__openmips0__DOT__id_next_inst_in_delayslot_o = 1U;
                        }
                    } else if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        vlSelf->top__DOT__openmips0__DOT__id_next_inst_in_delayslot_o = 1U;
                    } else if ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        if ((0x100000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                            if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                          >> 0x13U)))) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 0x12U)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0x11U)))) {
                                        if ((0x10000U 
                                             & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top__DOT__openmips0__DOT__id_reg1_o 
                                                     >> 0x1fU)))) {
                                                vlSelf->top__DOT__openmips0__DOT__id_next_inst_in_delayslot_o = 1U;
                                            }
                                        } else if (
                                                   (vlSelf->top__DOT__openmips0__DOT__id_reg1_o 
                                                    >> 0x1fU)) {
                                            vlSelf->top__DOT__openmips0__DOT__id_next_inst_in_delayslot_o = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x13U)))) {
                            if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                          >> 0x12U)))) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 0x11U)))) {
                                    if ((0x10000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__openmips0__DOT__id_reg1_o 
                                                    >> 0x1fU)))) {
                                            vlSelf->top__DOT__openmips0__DOT__id_next_inst_in_delayslot_o = 1U;
                                        }
                                    } else if ((vlSelf->top__DOT__openmips0__DOT__id_reg1_o 
                                                >> 0x1fU)) {
                                        vlSelf->top__DOT__openmips0__DOT__id_next_inst_in_delayslot_o = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((0U == (0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                >> 6U)))) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 5U)))) {
                            if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                          >> 4U)))) {
                                if ((8U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                    >> 1U)))) {
                                            vlSelf->top__DOT__openmips0__DOT__id_next_inst_in_delayslot_o = 1U;
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
    if (vlSelf->rst) {
        vlSelf->top__DOT__openmips0__DOT__branch_target_address = 0U;
    } else {
        vlSelf->top__DOT__openmips0__DOT__branch_target_address = 0U;
        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                            if ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if (((~ (vlSelf->top__DOT__openmips0__DOT__id_reg1_o 
                                         >> 0x1fU)) 
                                     & (0U != vlSelf->top__DOT__openmips0__DOT__id_reg1_o))) {
                                    vlSelf->top__DOT__openmips0__DOT__branch_target_address 
                                        = ((IData)(4U) 
                                           + (vlSelf->top__DOT__openmips0__DOT__id_pc_i 
                                              + vlSelf->top__DOT__openmips0__DOT__id0__DOT__imm_sll2_signedext));
                                }
                            } else if ((1U & ((vlSelf->top__DOT__openmips0__DOT__id_reg1_o 
                                               >> 0x1fU) 
                                              | (0U 
                                                 == vlSelf->top__DOT__openmips0__DOT__id_reg1_o)))) {
                                vlSelf->top__DOT__openmips0__DOT__branch_target_address 
                                    = ((IData)(4U) 
                                       + (vlSelf->top__DOT__openmips0__DOT__id_pc_i 
                                          + vlSelf->top__DOT__openmips0__DOT__id0__DOT__imm_sll2_signedext));
                            }
                        } else if ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                            if ((vlSelf->top__DOT__openmips0__DOT__id_reg1_o 
                                 != vlSelf->top__DOT__openmips0__DOT__id_reg2_o)) {
                                vlSelf->top__DOT__openmips0__DOT__branch_target_address 
                                    = ((IData)(4U) 
                                       + (vlSelf->top__DOT__openmips0__DOT__id_pc_i 
                                          + vlSelf->top__DOT__openmips0__DOT__id0__DOT__imm_sll2_signedext));
                            }
                        } else if ((vlSelf->top__DOT__openmips0__DOT__id_reg1_o 
                                    == vlSelf->top__DOT__openmips0__DOT__id_reg2_o)) {
                            vlSelf->top__DOT__openmips0__DOT__branch_target_address 
                                = ((IData)(4U) + (vlSelf->top__DOT__openmips0__DOT__id_pc_i 
                                                  + vlSelf->top__DOT__openmips0__DOT__id0__DOT__imm_sll2_signedext));
                        }
                    } else if ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        vlSelf->top__DOT__openmips0__DOT__branch_target_address 
                            = ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                ? ((0xf0000000U & ((IData)(4U) 
                                                   + vlSelf->top__DOT__openmips0__DOT__id_pc_i)) 
                                   | (0xffffffcU & 
                                      (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                       << 2U))) : (
                                                   (0xf0000000U 
                                                    & ((IData)(4U) 
                                                       + vlSelf->top__DOT__openmips0__DOT__id_pc_i)) 
                                                   | (0xffffffcU 
                                                      & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                         << 2U))));
                    } else if ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        if ((0x100000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                            if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                          >> 0x13U)))) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 0x12U)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                  >> 0x11U)))) {
                                        if ((0x10000U 
                                             & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top__DOT__openmips0__DOT__id_reg1_o 
                                                     >> 0x1fU)))) {
                                                vlSelf->top__DOT__openmips0__DOT__branch_target_address 
                                                    = 
                                                    ((IData)(4U) 
                                                     + 
                                                     (vlSelf->top__DOT__openmips0__DOT__id_pc_i 
                                                      + vlSelf->top__DOT__openmips0__DOT__id0__DOT__imm_sll2_signedext));
                                            }
                                        } else if (
                                                   (vlSelf->top__DOT__openmips0__DOT__id_reg1_o 
                                                    >> 0x1fU)) {
                                            vlSelf->top__DOT__openmips0__DOT__branch_target_address 
                                                = ((IData)(4U) 
                                                   + 
                                                   (vlSelf->top__DOT__openmips0__DOT__id_pc_i 
                                                    + vlSelf->top__DOT__openmips0__DOT__id0__DOT__imm_sll2_signedext));
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                             >> 0x13U)))) {
                            if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                          >> 0x12U)))) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 0x11U)))) {
                                    if ((0x10000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__openmips0__DOT__id_reg1_o 
                                                    >> 0x1fU)))) {
                                            vlSelf->top__DOT__openmips0__DOT__branch_target_address 
                                                = ((IData)(4U) 
                                                   + 
                                                   (vlSelf->top__DOT__openmips0__DOT__id_pc_i 
                                                    + vlSelf->top__DOT__openmips0__DOT__id0__DOT__imm_sll2_signedext));
                                        }
                                    } else if ((vlSelf->top__DOT__openmips0__DOT__id_reg1_o 
                                                >> 0x1fU)) {
                                        vlSelf->top__DOT__openmips0__DOT__branch_target_address 
                                            = ((IData)(4U) 
                                               + (vlSelf->top__DOT__openmips0__DOT__id_pc_i 
                                                  + vlSelf->top__DOT__openmips0__DOT__id0__DOT__imm_sll2_signedext));
                                    }
                                }
                            }
                        }
                    } else if ((0U == (0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                >> 6U)))) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 5U)))) {
                            if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                          >> 4U)))) {
                                if ((8U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                    >> 1U)))) {
                                            vlSelf->top__DOT__openmips0__DOT__branch_target_address 
                                                = vlSelf->top__DOT__openmips0__DOT__id_reg1_o;
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
}

extern const VlWide<11>/*351:0*/ Vtop__ConstPool__CONST_d96d630f_0;

void Vtop___024root___initial__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__3\n"); );
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
    Vtop___024root___initial__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__2(vlSelf);
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
    vlSelf->top__DOT__ram_addr_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ram_data_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ram_sel_i = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__ram_ce_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ram_we_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ram_data_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__id_pc_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__id_inst_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__id_aluop_o = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__openmips0__DOT__id_alusel_o = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__openmips0__DOT__id_reg1_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__id_reg2_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__id_wreg_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__id_wd_o = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__openmips0__DOT__id_link_addr_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__id_next_inst_in_delayslot_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__ex_aluop_i = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__openmips0__DOT__ex_alusel_i = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__openmips0__DOT__ex_reg1_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__ex_reg2_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__ex_wreg_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__ex_wd_i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__openmips0__DOT__ex_inst_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__ex_wreg_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__ex_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__ex_whilo_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__ex_hi_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__ex_lo_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__ex_is_in_delayslot_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__ex_link_address_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__mem_wreg_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__mem_wd_i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__openmips0__DOT__mem_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__mem_whilo_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__mem_hi_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__mem_lo_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__mem_aluop_i = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__openmips0__DOT__mem_mem_addr_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__mem_reg2_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__mem_wreg_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__mem_wd_o = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__openmips0__DOT__mem_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__mem_whilo_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__mem_hi_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__mem_lo_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__wb_wreg_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__wb_wd_i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__openmips0__DOT__wb_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__wb_whilo_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__wb_hi_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__wb_lo_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__reg1_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__reg2_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__reg1_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__openmips0__DOT__reg2_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__openmips0__DOT__hi = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__lo = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__stall = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__openmips0__DOT__cnt_i = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__openmips0__DOT__hilo_temp_i = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__openmips0__DOT__cnt_o = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__openmips0__DOT__hilo_temp_o = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__openmips0__DOT__is_in_delayslot_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__is_in_delayslot_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__branch_target_address = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__id_branch_flag_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__id0__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__id0__DOT__text = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__id0__DOT__imm_sll2_signedext = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__id0__DOT__pre_inst_is_load = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__openmips0__DOT__ex0__DOT__logicout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__ex0__DOT__shiftres = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__ex0__DOT__movres = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__ex0__DOT__HI = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__ex0__DOT__LO = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__ex0__DOT__reg1_eq_reg2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__ex0__DOT__arithmeticres = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__ex0__DOT__reg2_i_mux = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__ex0__DOT__result_sum = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__ex0__DOT__hilo_temp = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__openmips0__DOT__ex0__DOT__hilo_temp1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__openmips0__DOT__ex0__DOT__stallreq_for_madd_msub = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__ex0__DOT__mulres = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<131071; ++__Vi0) {
        vlSelf->top__DOT__inst_rom0__DOT__inst_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<131071; ++__Vi0) {
        vlSelf->top__DOT__data_ram0__DOT__data_mem0[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<131071; ++__Vi0) {
        vlSelf->top__DOT__data_ram0__DOT__data_mem1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<131071; ++__Vi0) {
        vlSelf->top__DOT__data_ram0__DOT__data_mem2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<131071; ++__Vi0) {
        vlSelf->top__DOT__data_ram0__DOT__data_mem3[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__data_ram0__DOT____Vlvbound1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_ram0__DOT____Vlvbound2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_ram0__DOT____Vlvbound3 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_ram0__DOT____Vlvbound4 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
