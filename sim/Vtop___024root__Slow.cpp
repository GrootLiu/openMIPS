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

void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Body
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
            }
        } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                             >> 0x1eU)))) {
            if ((0x20000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    vlSelf->top__DOT__openmips0__DOT__id_aluop_o 
                        = ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                            ? ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                ? 0x25U : 0x26U) : 
                           ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                             ? 0x25U : 0x24U));
                }
            } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                 >> 0x1cU)))) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0x1bU)))) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1aU)))) {
                        if ((0U == (0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                             >> 6U)))) {
                            if ((0x20U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 4U)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                  >> 3U)))) {
                                        if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                            vlSelf->top__DOT__openmips0__DOT__id_aluop_o 
                                                = (
                                                   (2U 
                                                    & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                                     ? 0x27U
                                                     : 0x26U)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                                     ? 0x25U
                                                     : 0x24U));
                                        }
                                    }
                                }
                            } else if ((0x10U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 3U)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                  >> 2U)))) {
                                        vlSelf->top__DOT__openmips0__DOT__id_aluop_o 
                                            = ((2U 
                                                & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                                ? (
                                                   (1U 
                                                    & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                                    ? 0x13U
                                                    : 0x12U)
                                                : (
                                                   (1U 
                                                    & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                                    ? 0x11U
                                                    : 0x10U));
                                    }
                                }
                            } else if ((8U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                    if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                        if ((1U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                            vlSelf->top__DOT__openmips0__DOT__id_aluop_o = 0U;
                                        }
                                    }
                                } else if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                    vlSelf->top__DOT__openmips0__DOT__id_aluop_o 
                                        = ((1U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                            ? 0xbU : 0xaU);
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
                    }
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
            }
        } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                             >> 0x1eU)))) {
            if ((0x20000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
                }
            } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                 >> 0x1cU)))) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0x1bU)))) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1aU)))) {
                        if ((0U == (0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                             >> 6U)))) {
                            if ((0x20U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 4U)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                  >> 3U)))) {
                                        if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                            vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
                                        }
                                    }
                                }
                            } else if ((0x10U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 3U)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                  >> 2U)))) {
                                        vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
                                    }
                                }
                            } else if ((8U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                    if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                        if ((1U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                            vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = 0U;
                                        }
                                    }
                                } else if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
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
                    }
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
            }
        } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                             >> 0x1eU)))) {
            if ((0x20000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 1U;
                }
            } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                 >> 0x1cU)))) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0x1bU)))) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1aU)))) {
                        if ((0U == (0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                             >> 6U)))) {
                            if ((0x20U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 4U)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                  >> 3U)))) {
                                        if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                            vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 1U;
                                        }
                                    }
                                }
                            } else if ((0x10U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 3U)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                  >> 2U)))) {
                                        if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                            if ((1U 
                                                 & (~ vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                                                vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 3U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
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
                                } else if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                    vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 3U;
                                }
                            } else if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                    vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 2U;
                                } else if ((1U & (~ vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                                    vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 2U;
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
                vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 2U;
            } else if ((2U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 2U;
            } else if ((3U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__id_alusel_o = 2U;
            }
        }
    }
    vlSelf->top__DOT__openmips0__DOT__ex_whilo_o = 
        ((~ (IData)(vlSelf->rst)) & ((0x11U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i)) 
                                     | (0x13U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))));
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                          >> 0x1aU)))) {
                                if ((0U == (0x1fU & 
                                            (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                             >> 6U)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                  >> 5U)))) {
                                        if ((0x10U 
                                             & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                                        if (
                                                            (1U 
                                                             & (~ vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                                                            vlSelf->top__DOT__openmips0__DOT__id_reg1_o = 0U;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                                                        vlSelf->top__DOT__openmips0__DOT__id_reg1_o = 0U;
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
        }
    }
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
            }
        } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                             >> 0x1eU)))) {
            if ((0x20000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    vlSelf->top__DOT__openmips0__DOT__reg1_read = 1U;
                }
            } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                 >> 0x1cU)))) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0x1bU)))) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1aU)))) {
                        if ((0U == (0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                             >> 6U)))) {
                            if ((0x20U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 4U)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                  >> 3U)))) {
                                        if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                            vlSelf->top__DOT__openmips0__DOT__reg1_read = 1U;
                                        }
                                    }
                                }
                            } else if ((0x10U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 3U)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                  >> 2U)))) {
                                        if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                            if ((1U 
                                                 & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                                vlSelf->top__DOT__openmips0__DOT__reg1_read = 1U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                            vlSelf->top__DOT__openmips0__DOT__reg1_read = 1U;
                                        }
                                    }
                                }
                            } else if ((8U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                    if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                        if ((1U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                            vlSelf->top__DOT__openmips0__DOT__reg1_read = 0U;
                                        }
                                    }
                                } else if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
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
                    }
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
            }
        } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                             >> 0x1eU)))) {
            if ((0x20000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    vlSelf->top__DOT__openmips0__DOT__reg2_read = 0U;
                }
            } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                 >> 0x1cU)))) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0x1bU)))) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1aU)))) {
                        if ((0U == (0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                             >> 6U)))) {
                            if ((0x20U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 4U)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                  >> 3U)))) {
                                        if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                            vlSelf->top__DOT__openmips0__DOT__reg2_read = 1U;
                                        }
                                    }
                                }
                            } else if ((0x10U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 3U)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                  >> 2U)))) {
                                        if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                            if ((1U 
                                                 & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                                vlSelf->top__DOT__openmips0__DOT__reg2_read = 0U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                            vlSelf->top__DOT__openmips0__DOT__reg2_read = 0U;
                                        }
                                    }
                                }
                            } else if ((8U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                    if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                        if ((1U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                            vlSelf->top__DOT__openmips0__DOT__reg2_read = 1U;
                                        }
                                    }
                                } else if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                    vlSelf->top__DOT__openmips0__DOT__reg2_read = 1U;
                                }
                            } else if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                    vlSelf->top__DOT__openmips0__DOT__reg2_read = 1U;
                                } else if ((1U & (~ vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                                    vlSelf->top__DOT__openmips0__DOT__reg2_read = 1U;
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
                vlSelf->top__DOT__openmips0__DOT__reg2_read = 1U;
            } else if ((2U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__reg2_read = 1U;
            } else if ((3U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__reg2_read = 1U;
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__openmips0__DOT__reg1_addr = 0U;
        vlSelf->top__DOT__openmips0__DOT__reg2_addr = 0U;
    } else {
        vlSelf->top__DOT__openmips0__DOT__reg1_addr 
            = (0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                        >> 0x15U));
        vlSelf->top__DOT__openmips0__DOT__reg2_addr 
            = (0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                        >> 0x10U));
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
                    if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        vlSelf->top__DOT__openmips0__DOT__id0__DOT__imm 
                            = ((0x8000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                ? ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                    ? (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                       << 0x10U) : 
                                   (0xffffU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))
                                : ((0x4000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                    ? (0xffffU & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                    : (0xffffU & vlSelf->top__DOT__openmips0__DOT__id_inst_i)));
                    }
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
    if (vlSelf->rst) {
        vlSelf->top__DOT__openmips0__DOT__id_wd_o = 0U;
    } else {
        vlSelf->top__DOT__openmips0__DOT__id_wd_o = 
            (0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                      >> 0xbU));
        if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                        vlSelf->top__DOT__openmips0__DOT__id_wd_o 
                            = (0x1fU & ((0x8000000U 
                                         & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
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
                                                >> 0x10U))));
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
    vlSelf->top__DOT__openmips0__DOT__mem_whilo_o = 
        ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_whilo_i));
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
            }
        } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                             >> 0x1eU)))) {
            if ((0x20000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                if ((0x10000000U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                    vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 1U;
                }
            } else if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                 >> 0x1cU)))) {
                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                              >> 0x1bU)))) {
                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                  >> 0x1aU)))) {
                        if ((0U == (0x1fU & (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                             >> 6U)))) {
                            if ((0x20U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 4U)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                  >> 3U)))) {
                                        if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                            vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 1U;
                                        }
                                    }
                                }
                            } else if ((0x10U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                              >> 3U)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__openmips0__DOT__id_inst_i 
                                                  >> 2U)))) {
                                        if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                            if ((1U 
                                                 & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                                vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 0U;
                                            } else {
                                                vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 1U;
                                                vlSelf->top__DOT__openmips0__DOT__id_reg2_o = 1U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                            vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 0U;
                                        } else {
                                            vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 1U;
                                            vlSelf->top__DOT__openmips0__DOT__id_reg2_o = 1U;
                                        }
                                    }
                                }
                            } else if ((8U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                    if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                        if ((1U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                            vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 1U;
                                        }
                                    }
                                } else if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                    vlSelf->top__DOT__openmips0__DOT__id_wreg_o 
                                        = ((1U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)
                                            ? (0U != vlSelf->top__DOT__openmips0__DOT__id_reg2_o)
                                            : (0U == vlSelf->top__DOT__openmips0__DOT__id_reg2_o));
                                }
                            } else if ((4U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                if ((2U & vlSelf->top__DOT__openmips0__DOT__id_inst_i)) {
                                    vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 1U;
                                } else if ((1U & (~ vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                                    vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 1U;
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
                vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 1U;
            } else if ((2U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 1U;
            } else if ((3U == (0x3fU & vlSelf->top__DOT__openmips0__DOT__id_inst_i))) {
                vlSelf->top__DOT__openmips0__DOT__id_wreg_o = 1U;
            }
        }
    }
    vlSelf->top__DOT__openmips0__DOT__mem_wd_o = ((IData)(vlSelf->rst)
                                                   ? 0U
                                                   : (IData)(vlSelf->top__DOT__openmips0__DOT__mem_wd_i));
    vlSelf->top__DOT__openmips0__DOT__mem_wreg_o = 
        ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->top__DOT__openmips0__DOT__mem_wreg_i));
    if (vlSelf->rst) {
        vlSelf->top__DOT__openmips0__DOT__mem_wdata_o = 0U;
        vlSelf->top__DOT__openmips0__DOT__mem_hi_o = 0U;
        vlSelf->top__DOT__openmips0__DOT__mem_lo_o = 0U;
    } else {
        vlSelf->top__DOT__openmips0__DOT__mem_wdata_o 
            = vlSelf->top__DOT__openmips0__DOT__mem_wdata_i;
        vlSelf->top__DOT__openmips0__DOT__mem_hi_o 
            = vlSelf->top__DOT__openmips0__DOT__mem_hi_i;
        vlSelf->top__DOT__openmips0__DOT__mem_lo_o 
            = vlSelf->top__DOT__openmips0__DOT__mem_lo_i;
    }
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
    if (vlSelf->rst) {
        vlSelf->top__DOT__openmips0__DOT__ex_hi_o = 0U;
        vlSelf->top__DOT__openmips0__DOT__ex_lo_o = 0U;
    } else {
        vlSelf->top__DOT__openmips0__DOT__ex_hi_o = 
            ((0x11U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))
              ? vlSelf->top__DOT__openmips0__DOT__ex_reg1_i
              : ((0x13U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))
                  ? vlSelf->top__DOT__openmips0__DOT__ex0__DOT__HI
                  : 0U));
        vlSelf->top__DOT__openmips0__DOT__ex_lo_o = 
            ((0x11U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))
              ? vlSelf->top__DOT__openmips0__DOT__ex0__DOT__LO
              : ((0x13U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_aluop_i))
                  ? vlSelf->top__DOT__openmips0__DOT__ex_reg1_i
                  : 0U));
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
    vlSelf->top__DOT__openmips0__DOT__ex_wdata_o = 
        ((1U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_alusel_i))
          ? vlSelf->top__DOT__openmips0__DOT__ex0__DOT__logicout
          : ((2U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_alusel_i))
              ? vlSelf->top__DOT__openmips0__DOT__ex0__DOT__shiftres
              : ((3U == (IData)(vlSelf->top__DOT__openmips0__DOT__ex_alusel_i))
                  ? vlSelf->top__DOT__openmips0__DOT__ex0__DOT__movres
                  : 0U)));
    if (vlSelf->rst) {
        vlSelf->top__DOT__openmips0__DOT__id_reg1_o = 0U;
        vlSelf->top__DOT__openmips0__DOT__id_reg2_o = 0U;
    } else {
        vlSelf->top__DOT__openmips0__DOT__id_reg1_o 
            = ((((IData)(vlSelf->top__DOT__openmips0__DOT__reg1_read) 
                 & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_wreg_i)) 
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
                 & (IData)(vlSelf->top__DOT__openmips0__DOT__ex_wreg_i)) 
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
    vlSelf->top__DOT__openmips0__DOT__id_reg1_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__id_reg2_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__id_wreg_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__id_wd_o = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__openmips0__DOT__ex_aluop_i = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__openmips0__DOT__ex_alusel_i = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__openmips0__DOT__ex_reg1_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__ex_reg2_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__ex_wreg_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__ex_wd_i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__openmips0__DOT__ex_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__ex_whilo_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__ex_hi_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__ex_lo_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__mem_wreg_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__mem_wd_i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__openmips0__DOT__mem_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__mem_whilo_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__openmips0__DOT__mem_hi_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__mem_lo_i = VL_RAND_RESET_I(32);
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
    vlSelf->top__DOT__openmips0__DOT__id0__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__id0__DOT__instvalid = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__openmips0__DOT__regfile1__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__openmips0__DOT__ex0__DOT__logicout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__ex0__DOT__shiftres = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__ex0__DOT__movres = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__ex0__DOT__HI = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__openmips0__DOT__ex0__DOT__LO = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<131071; ++__Vi0) {
        vlSelf->top__DOT__inst_rom0__DOT__inst_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
