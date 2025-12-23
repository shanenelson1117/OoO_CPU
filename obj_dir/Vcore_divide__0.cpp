// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_divide___ico_sequent__TOP__core__div_fu__0(Vcore_divide* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_divide___ico_sequent__TOP__core__div_fu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__div_fu__divide_dp.end_msb = vlSelfRef.end_msb;
    vlSymsp->TOP__core__div_fu__divide_dp.sor_msb = vlSelfRef.sor_msb;
    vlSymsp->TOP__core__div_fu__divide_cu.div = vlSelfRef.div;
    vlSelfRef.P = vlSymsp->TOP__core__div_fu__divide_dp.P;
    VL_ASSIGNSEL_QI(38, 4, 0x00000022U, vlSelfRef.out, vlSelfRef.curr_rob);
    vlSymsp->TOP__core__div_fu__divide_cu.P = vlSelfRef.P;
}

void Vcore_divide___ico_sequent__TOP__core__div_fu__1(Vcore_divide* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_divide___ico_sequent__TOP__core__div_fu__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.quotient = vlSymsp->TOP__core__div_fu__divide_dp.quotient;
    vlSelfRef.remainder = vlSymsp->TOP__core__div_fu__divide_dp.remainder;
    vlSelfRef.pass1 = vlSymsp->TOP__core__div_fu__divide_cu.pass1;
    vlSelfRef.pass2 = vlSymsp->TOP__core__div_fu__divide_cu.pass2;
    vlSelfRef.signadj = vlSymsp->TOP__core__div_fu__divide_cu.signadj;
    vlSelfRef.valid_out = vlSymsp->TOP__core__div_fu__divide_cu.valid_out;
    vlSelfRef.ready = vlSymsp->TOP__core__div_fu__divide_cu.ready;
    vlSymsp->TOP__core__div_fu__divide_dp.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__div_fu__divide_cu.clk = vlSelfRef.clk;
    vlSelfRef.result = ((((IData)(vlSelfRef.div) & 
                          (~ (IData)(vlSelfRef.a_lt_b_reg))) 
                         | ((~ (IData)(vlSelfRef.div)) 
                            & (IData)(vlSelfRef.a_lt_b_reg)))
                         ? vlSelfRef.quotient : vlSelfRef.remainder);
    vlSymsp->TOP__core__div_fu__divide_dp.pass1 = vlSelfRef.pass1;
    vlSymsp->TOP__core__div_fu__divide_dp.pass2 = vlSelfRef.pass2;
    vlSymsp->TOP__core__div_fu__divide_dp.signadj = vlSelfRef.signadj;
    VL_ASSIGNSEL_QI(38, 32, 2U, vlSelfRef.out, vlSelfRef.result);
}

void Vcore_divide___ico_sequent__TOP__core__div_fu__2(Vcore_divide* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_divide___ico_sequent__TOP__core__div_fu__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__div_fu__divide_cu.yumi_in = vlSelfRef.yumi_in;
    vlSymsp->TOP__core__div_fu__divide_cu.valid_in 
        = vlSelfRef.valid_in;
    vlSelfRef.abs_sor = ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.ALUop), 0U) 
                                & VL_BITSEL_IIII(32, vlSelfRef.divisor, 0x1fU)))
                          ? ((IData)(1U) + (~ vlSelfRef.divisor))
                          : vlSelfRef.divisor);
    vlSelfRef.abs_end = ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.ALUop), 0U) 
                                & VL_BITSEL_IIII(32, vlSelfRef.dividend, 0x1fU)))
                          ? ((IData)(1U) + (~ vlSelfRef.dividend))
                          : vlSelfRef.dividend);
    vlSymsp->TOP__core__div_fu__divide_dp.abs_sor = vlSelfRef.abs_sor;
    vlSymsp->TOP__core__div_fu__divide_dp.abs_end = vlSelfRef.abs_end;
    vlSelfRef.a_lt_b = (vlSelfRef.abs_sor > vlSelfRef.abs_end);
    vlSymsp->TOP__core__div_fu__divide_cu.a_lt_b = vlSelfRef.a_lt_b;
}

void Vcore_divide___ico_sequent__TOP__core__div_fu__3(Vcore_divide* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_divide___ico_sequent__TOP__core__div_fu__3\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.loadregs = vlSymsp->TOP__core__div_fu__divide_cu.loadregs;
    vlSymsp->TOP__core__div_fu__divide_dp.loadregs 
        = vlSelfRef.loadregs;
}

void Vcore_divide___ico_comb__TOP__core__div_fu__0(Vcore_divide* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_divide___ico_comb__TOP__core__div_fu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__div_fu__divide_cu.reset = vlSelfRef.reset;
}

void Vcore_divide___act_comb__TOP__core__div_fu__0(Vcore_divide* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_divide___act_comb__TOP__core__div_fu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__div_fu__divide_cu.reset = vlSelfRef.reset;
}

void Vcore_divide___nba_sequent__TOP__core__div_fu__0(Vcore_divide* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_divide___nba_sequent__TOP__core__div_fu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.P = vlSymsp->TOP__core__div_fu__divide_dp.P;
    vlSelfRef.remainder = vlSymsp->TOP__core__div_fu__divide_dp.remainder;
    vlSelfRef.quotient = vlSymsp->TOP__core__div_fu__divide_dp.quotient;
    vlSymsp->TOP__core__div_fu__divide_cu.P = vlSelfRef.P;
}

void Vcore_divide___nba_sequent__TOP__core__div_fu__1(Vcore_divide* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_divide___nba_sequent__TOP__core__div_fu__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__sor_msb = vlSelfRef.sor_msb;
    vlSelfRef.__Vdly__end_msb = vlSelfRef.end_msb;
    vlSelfRef.__Vdly__curr_rob = vlSelfRef.curr_rob;
    vlSelfRef.__Vdly__a_lt_b_reg = vlSelfRef.a_lt_b_reg;
    vlSelfRef.__Vdly__div = vlSelfRef.div;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__curr_rob = 0U;
        vlSelfRef.__Vdly__div = 0U;
        vlSelfRef.__Vdly__sor_msb = 0U;
        vlSelfRef.__Vdly__end_msb = 0U;
        vlSelfRef.__Vdly__a_lt_b_reg = 0U;
    } else if (vlSelfRef.valid_in) {
        vlSelfRef.__Vdly__curr_rob = vlSelfRef.rs_rob_entry;
        vlSelfRef.__Vdly__div = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.ALUop), 0U));
        vlSelfRef.__Vdly__sor_msb = (1U & VL_BITSEL_IIII(32, vlSelfRef.divisor, 0x1fU));
        vlSelfRef.__Vdly__end_msb = (1U & VL_BITSEL_IIII(32, vlSelfRef.dividend, 0x1fU));
        vlSelfRef.__Vdly__a_lt_b_reg = vlSelfRef.a_lt_b;
    } else if (vlSelfRef.yumi_in) {
        vlSelfRef.__Vdly__curr_rob = 0U;
        vlSelfRef.__Vdly__div = 0U;
        vlSelfRef.__Vdly__sor_msb = 0U;
        vlSelfRef.__Vdly__end_msb = 0U;
        vlSelfRef.__Vdly__a_lt_b_reg = 0U;
    }
    vlSelfRef.sor_msb = vlSelfRef.__Vdly__sor_msb;
    vlSelfRef.end_msb = vlSelfRef.__Vdly__end_msb;
    vlSelfRef.curr_rob = vlSelfRef.__Vdly__curr_rob;
    vlSelfRef.a_lt_b_reg = vlSelfRef.__Vdly__a_lt_b_reg;
    vlSelfRef.div = vlSelfRef.__Vdly__div;
    vlSymsp->TOP__core__div_fu__divide_dp.sor_msb = vlSelfRef.sor_msb;
    vlSymsp->TOP__core__div_fu__divide_dp.end_msb = vlSelfRef.end_msb;
    VL_ASSIGNSEL_QI(38, 4, 0x00000022U, vlSelfRef.out, vlSelfRef.curr_rob);
    vlSymsp->TOP__core__div_fu__divide_cu.div = vlSelfRef.div;
}

void Vcore_divide___nba_sequent__TOP__core__div_fu__2(Vcore_divide* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_divide___nba_sequent__TOP__core__div_fu__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pass1 = vlSymsp->TOP__core__div_fu__divide_cu.pass1;
    vlSelfRef.pass2 = vlSymsp->TOP__core__div_fu__divide_cu.pass2;
    vlSelfRef.signadj = vlSymsp->TOP__core__div_fu__divide_cu.signadj;
    vlSelfRef.valid_out = vlSymsp->TOP__core__div_fu__divide_cu.valid_out;
    vlSelfRef.ready = vlSymsp->TOP__core__div_fu__divide_cu.ready;
    vlSymsp->TOP__core__div_fu__divide_dp.pass1 = vlSelfRef.pass1;
    vlSymsp->TOP__core__div_fu__divide_dp.pass2 = vlSelfRef.pass2;
    vlSymsp->TOP__core__div_fu__divide_dp.signadj = vlSelfRef.signadj;
}

void Vcore_divide___nba_comb__TOP__core__div_fu__0(Vcore_divide* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_divide___nba_comb__TOP__core__div_fu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.result = ((((IData)(vlSelfRef.div) & 
                          (~ (IData)(vlSelfRef.a_lt_b_reg))) 
                         | ((~ (IData)(vlSelfRef.div)) 
                            & (IData)(vlSelfRef.a_lt_b_reg)))
                         ? vlSelfRef.quotient : vlSelfRef.remainder);
    VL_ASSIGNSEL_QI(38, 32, 2U, vlSelfRef.out, vlSelfRef.result);
}

void Vcore_divide___nba_comb__TOP__core__div_fu__1(Vcore_divide* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_divide___nba_comb__TOP__core__div_fu__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__div_fu__divide_cu.yumi_in = vlSelfRef.yumi_in;
}

void Vcore_divide___nba_comb__TOP__core__div_fu__2(Vcore_divide* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_divide___nba_comb__TOP__core__div_fu__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__div_fu__divide_cu.valid_in 
        = vlSelfRef.valid_in;
    vlSelfRef.abs_sor = ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.ALUop), 0U) 
                                & VL_BITSEL_IIII(32, vlSelfRef.divisor, 0x1fU)))
                          ? ((IData)(1U) + (~ vlSelfRef.divisor))
                          : vlSelfRef.divisor);
    vlSelfRef.abs_end = ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.ALUop), 0U) 
                                & VL_BITSEL_IIII(32, vlSelfRef.dividend, 0x1fU)))
                          ? ((IData)(1U) + (~ vlSelfRef.dividend))
                          : vlSelfRef.dividend);
    vlSymsp->TOP__core__div_fu__divide_dp.abs_sor = vlSelfRef.abs_sor;
    vlSymsp->TOP__core__div_fu__divide_dp.abs_end = vlSelfRef.abs_end;
    vlSelfRef.a_lt_b = (vlSelfRef.abs_sor > vlSelfRef.abs_end);
    vlSymsp->TOP__core__div_fu__divide_cu.a_lt_b = vlSelfRef.a_lt_b;
}

void Vcore_divide___nba_comb__TOP__core__div_fu__3(Vcore_divide* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_divide___nba_comb__TOP__core__div_fu__3\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.loadregs = vlSymsp->TOP__core__div_fu__divide_cu.loadregs;
    vlSymsp->TOP__core__div_fu__divide_dp.loadregs 
        = vlSelfRef.loadregs;
}

void Vcore_divide___nba_comb__TOP__core__div_fu__4(Vcore_divide* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_divide___nba_comb__TOP__core__div_fu__4\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__div_fu__divide_cu.reset = vlSelfRef.reset;
}
