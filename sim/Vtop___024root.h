// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__rom_ce;
        CData/*3:0*/ top__DOT__ram_sel_i;
        CData/*0:0*/ top__DOT__ram_ce_i;
        CData/*0:0*/ top__DOT__ram_we_i;
        CData/*7:0*/ top__DOT__openmips0__DOT__id_aluop_o;
        CData/*2:0*/ top__DOT__openmips0__DOT__id_alusel_o;
        CData/*0:0*/ top__DOT__openmips0__DOT__id_wreg_o;
        CData/*4:0*/ top__DOT__openmips0__DOT__id_wd_o;
        CData/*0:0*/ top__DOT__openmips0__DOT__id_next_inst_in_delayslot_o;
        CData/*7:0*/ top__DOT__openmips0__DOT__ex_aluop_i;
        CData/*2:0*/ top__DOT__openmips0__DOT__ex_alusel_i;
        CData/*0:0*/ top__DOT__openmips0__DOT__ex_wreg_i;
        CData/*4:0*/ top__DOT__openmips0__DOT__ex_wd_i;
        CData/*0:0*/ top__DOT__openmips0__DOT__ex_wreg_o;
        CData/*0:0*/ top__DOT__openmips0__DOT__ex_whilo_o;
        CData/*0:0*/ top__DOT__openmips0__DOT__ex_is_in_delayslot_i;
        CData/*0:0*/ top__DOT__openmips0__DOT__mem_wreg_i;
        CData/*4:0*/ top__DOT__openmips0__DOT__mem_wd_i;
        CData/*0:0*/ top__DOT__openmips0__DOT__mem_whilo_i;
        CData/*7:0*/ top__DOT__openmips0__DOT__mem_aluop_i;
        CData/*0:0*/ top__DOT__openmips0__DOT__mem_wreg_o;
        CData/*4:0*/ top__DOT__openmips0__DOT__mem_wd_o;
        CData/*0:0*/ top__DOT__openmips0__DOT__mem_whilo_o;
        CData/*0:0*/ top__DOT__openmips0__DOT__wb_wreg_i;
        CData/*4:0*/ top__DOT__openmips0__DOT__wb_wd_i;
        CData/*0:0*/ top__DOT__openmips0__DOT__wb_whilo_i;
        CData/*0:0*/ top__DOT__openmips0__DOT__reg1_read;
        CData/*0:0*/ top__DOT__openmips0__DOT__reg2_read;
        CData/*4:0*/ top__DOT__openmips0__DOT__reg1_addr;
        CData/*4:0*/ top__DOT__openmips0__DOT__reg2_addr;
        CData/*5:0*/ top__DOT__openmips0__DOT__stall;
        CData/*1:0*/ top__DOT__openmips0__DOT__cnt_i;
        CData/*1:0*/ top__DOT__openmips0__DOT__cnt_o;
        CData/*0:0*/ top__DOT__openmips0__DOT__is_in_delayslot_i;
        CData/*0:0*/ top__DOT__openmips0__DOT__is_in_delayslot_o;
        CData/*0:0*/ top__DOT__openmips0__DOT__id_branch_flag_o;
        CData/*0:0*/ top__DOT__openmips0__DOT__id0__DOT__instvalid;
        CData/*0:0*/ top__DOT__openmips0__DOT__ex0__DOT__reg1_eq_reg2;
        CData/*0:0*/ top__DOT__openmips0__DOT__ex0__DOT__stallreq_for_madd_msub;
        IData/*31:0*/ top__DOT__ram_addr_i;
        IData/*31:0*/ top__DOT__ram_data_o;
        IData/*31:0*/ top__DOT__openmips0__DOT__pc;
        IData/*31:0*/ top__DOT__openmips0__DOT__id_pc_i;
        IData/*31:0*/ top__DOT__openmips0__DOT__id_inst_i;
        IData/*31:0*/ top__DOT__openmips0__DOT__id_reg1_o;
        IData/*31:0*/ top__DOT__openmips0__DOT__id_reg2_o;
        IData/*31:0*/ top__DOT__openmips0__DOT__id_link_addr_o;
        IData/*31:0*/ top__DOT__openmips0__DOT__ex_reg1_i;
        IData/*31:0*/ top__DOT__openmips0__DOT__ex_reg2_i;
        IData/*31:0*/ top__DOT__openmips0__DOT__ex_inst_i;
        IData/*31:0*/ top__DOT__openmips0__DOT__ex_wdata_o;
        IData/*31:0*/ top__DOT__openmips0__DOT__ex_hi_o;
        IData/*31:0*/ top__DOT__openmips0__DOT__ex_lo_o;
        IData/*31:0*/ top__DOT__openmips0__DOT__ex_link_address_i;
        IData/*31:0*/ top__DOT__openmips0__DOT__mem_wdata_i;
        IData/*31:0*/ top__DOT__openmips0__DOT__mem_hi_i;
        IData/*31:0*/ top__DOT__openmips0__DOT__mem_lo_i;
        IData/*31:0*/ top__DOT__openmips0__DOT__mem_mem_addr_i;
        IData/*31:0*/ top__DOT__openmips0__DOT__mem_reg2_i;
        IData/*31:0*/ top__DOT__openmips0__DOT__mem_wdata_o;
        IData/*31:0*/ top__DOT__openmips0__DOT__mem_hi_o;
        IData/*31:0*/ top__DOT__openmips0__DOT__mem_lo_o;
        IData/*31:0*/ top__DOT__openmips0__DOT__wb_wdata_i;
        IData/*31:0*/ top__DOT__openmips0__DOT__wb_hi_i;
    };
    struct {
        IData/*31:0*/ top__DOT__openmips0__DOT__wb_lo_i;
        IData/*31:0*/ top__DOT__openmips0__DOT__hi;
        IData/*31:0*/ top__DOT__openmips0__DOT__lo;
        IData/*31:0*/ top__DOT__openmips0__DOT__branch_target_address;
        IData/*31:0*/ top__DOT__openmips0__DOT__id0__DOT__imm;
        IData/*31:0*/ top__DOT__openmips0__DOT__id0__DOT__imm_sll2_signedext;
        IData/*31:0*/ top__DOT__openmips0__DOT__ex0__DOT__logicout;
        IData/*31:0*/ top__DOT__openmips0__DOT__ex0__DOT__shiftres;
        IData/*31:0*/ top__DOT__openmips0__DOT__ex0__DOT__movres;
        IData/*31:0*/ top__DOT__openmips0__DOT__ex0__DOT__HI;
        IData/*31:0*/ top__DOT__openmips0__DOT__ex0__DOT__LO;
        IData/*31:0*/ top__DOT__openmips0__DOT__ex0__DOT__arithmeticres;
        IData/*31:0*/ top__DOT__openmips0__DOT__ex0__DOT__reg2_i_mux;
        IData/*31:0*/ top__DOT__openmips0__DOT__ex0__DOT__result_sum;
        QData/*63:0*/ top__DOT__openmips0__DOT__hilo_temp_i;
        QData/*63:0*/ top__DOT__openmips0__DOT__hilo_temp_o;
        QData/*63:0*/ top__DOT__openmips0__DOT__ex0__DOT__hilo_temp;
        QData/*63:0*/ top__DOT__openmips0__DOT__ex0__DOT__hilo_temp1;
        QData/*63:0*/ top__DOT__openmips0__DOT__ex0__DOT__mulres;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__openmips0__DOT__regfile1__DOT__regs;
        VlUnpacked<IData/*31:0*/, 131071> top__DOT__inst_rom0__DOT__inst_mem;
        VlUnpacked<CData/*7:0*/, 131071> top__DOT__data_ram0__DOT__data_mem0;
        VlUnpacked<CData/*7:0*/, 131071> top__DOT__data_ram0__DOT__data_mem1;
        VlUnpacked<CData/*7:0*/, 131071> top__DOT__data_ram0__DOT__data_mem2;
        VlUnpacked<CData/*7:0*/, 131071> top__DOT__data_ram0__DOT__data_mem3;
    };

    // LOCAL VARIABLES
    CData/*7:0*/ top__DOT__data_ram0__DOT____Vlvbound1;
    CData/*7:0*/ top__DOT__data_ram0__DOT____Vlvbound2;
    CData/*7:0*/ top__DOT__data_ram0__DOT____Vlvbound3;
    CData/*7:0*/ top__DOT__data_ram0__DOT____Vlvbound4;
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ top__DOT____Vcellout__openmips0__ram_data_o;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
