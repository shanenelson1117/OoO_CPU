// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_shift___ico_sequent__TOP__core__shift_fu__0(Vcore_shift* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_shift___ico_sequent__TOP__core__shift_fu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__shift_fu__shift_dp.ALUop_reg 
        = vlSelfRef.ALUop_reg;
    vlSelfRef.P = vlSymsp->TOP__core__shift_fu__shift_dp.P;
    VL_ASSIGNSEL_QI(38, 4, 0x00000022U, vlSelfRef.out, vlSelfRef.curr_rob);
    vlSymsp->TOP__core__shift_fu__shift_cu.P = vlSelfRef.P;
}

void Vcore_shift___ico_sequent__TOP__core__shift_fu__1(Vcore_shift* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_shift___ico_sequent__TOP__core__shift_fu__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.shiftregs = vlSymsp->TOP__core__shift_fu__shift_cu.shiftregs;
    vlSelfRef.valid_out = vlSymsp->TOP__core__shift_fu__shift_cu.valid_out;
    vlSelfRef.ready = vlSymsp->TOP__core__shift_fu__shift_cu.ready;
    vlSymsp->TOP__core__shift_fu__shift_dp.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__shift_fu__shift_cu.clk = vlSelfRef.clk;
    vlSelfRef.output_inter = vlSymsp->TOP__core__shift_fu__shift_dp.output_inter;
    vlSymsp->TOP__core__shift_fu__shift_dp.shiftregs 
        = vlSelfRef.shiftregs;
    vlSelfRef.result = vlSelfRef.output_inter;
    VL_ASSIGNSEL_QI(38, 32, 2U, vlSelfRef.out, vlSelfRef.result);
}

void Vcore_shift___ico_sequent__TOP__core__shift_fu__2(Vcore_shift* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_shift___ico_sequent__TOP__core__shift_fu__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__shift_fu__shift_cu.yumi_in 
        = vlSelfRef.yumi_in;
    vlSymsp->TOP__core__shift_fu__shift_cu.valid_in 
        = vlSelfRef.valid_in;
    vlSelfRef.shifter = vlSelfRef.B;
    vlSelfRef.shifted = vlSelfRef.A;
    vlSymsp->TOP__core__shift_fu__shift_dp.shifter 
        = vlSelfRef.shifter;
    vlSymsp->TOP__core__shift_fu__shift_dp.shifted 
        = vlSelfRef.shifted;
}

void Vcore_shift___ico_sequent__TOP__core__shift_fu__3(Vcore_shift* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_shift___ico_sequent__TOP__core__shift_fu__3\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.loadregs = vlSymsp->TOP__core__shift_fu__shift_cu.loadregs;
    vlSymsp->TOP__core__shift_fu__shift_dp.loadregs 
        = vlSelfRef.loadregs;
}

void Vcore_shift___ico_comb__TOP__core__shift_fu__0(Vcore_shift* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_shift___ico_comb__TOP__core__shift_fu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__shift_fu__shift_cu.reset = vlSelfRef.reset;
}

void Vcore_shift___act_comb__TOP__core__shift_fu__0(Vcore_shift* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_shift___act_comb__TOP__core__shift_fu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__shift_fu__shift_cu.reset = vlSelfRef.reset;
}

void Vcore_shift___nba_sequent__TOP__core__shift_fu__0(Vcore_shift* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_shift___nba_sequent__TOP__core__shift_fu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.P = vlSymsp->TOP__core__shift_fu__shift_dp.P;
    vlSelfRef.output_inter = vlSymsp->TOP__core__shift_fu__shift_dp.output_inter;
    vlSymsp->TOP__core__shift_fu__shift_cu.P = vlSelfRef.P;
    vlSelfRef.result = vlSelfRef.output_inter;
    VL_ASSIGNSEL_QI(38, 32, 2U, vlSelfRef.out, vlSelfRef.result);
}

void Vcore_shift___nba_sequent__TOP__core__shift_fu__1(Vcore_shift* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_shift___nba_sequent__TOP__core__shift_fu__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ALUop_reg = vlSelfRef.ALUop_reg;
    vlSelfRef.__Vdly__curr_rob = vlSelfRef.curr_rob;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__curr_rob = 0U;
        vlSelfRef.__Vdly__ALUop_reg = 0U;
    } else if (vlSelfRef.valid_in) {
        vlSelfRef.__Vdly__curr_rob = vlSelfRef.rs_rob_entry;
        vlSelfRef.__Vdly__ALUop_reg = vlSelfRef.ALUop;
    } else if (vlSelfRef.yumi_in) {
        vlSelfRef.__Vdly__curr_rob = 0U;
        vlSelfRef.__Vdly__ALUop_reg = 0U;
    }
    vlSelfRef.ALUop_reg = vlSelfRef.__Vdly__ALUop_reg;
    vlSelfRef.curr_rob = vlSelfRef.__Vdly__curr_rob;
    vlSymsp->TOP__core__shift_fu__shift_dp.ALUop_reg 
        = vlSelfRef.ALUop_reg;
    VL_ASSIGNSEL_QI(38, 4, 0x00000022U, vlSelfRef.out, vlSelfRef.curr_rob);
}

void Vcore_shift___nba_sequent__TOP__core__shift_fu__2(Vcore_shift* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_shift___nba_sequent__TOP__core__shift_fu__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.shiftregs = vlSymsp->TOP__core__shift_fu__shift_cu.shiftregs;
    vlSelfRef.valid_out = vlSymsp->TOP__core__shift_fu__shift_cu.valid_out;
    vlSelfRef.ready = vlSymsp->TOP__core__shift_fu__shift_cu.ready;
    vlSymsp->TOP__core__shift_fu__shift_dp.shiftregs 
        = vlSelfRef.shiftregs;
}

void Vcore_shift___nba_comb__TOP__core__shift_fu__0(Vcore_shift* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_shift___nba_comb__TOP__core__shift_fu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__shift_fu__shift_cu.yumi_in 
        = vlSelfRef.yumi_in;
}

void Vcore_shift___nba_comb__TOP__core__shift_fu__1(Vcore_shift* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_shift___nba_comb__TOP__core__shift_fu__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__shift_fu__shift_cu.valid_in 
        = vlSelfRef.valid_in;
    vlSelfRef.shifter = vlSelfRef.B;
    vlSelfRef.shifted = vlSelfRef.A;
    vlSymsp->TOP__core__shift_fu__shift_dp.shifter 
        = vlSelfRef.shifter;
    vlSymsp->TOP__core__shift_fu__shift_dp.shifted 
        = vlSelfRef.shifted;
}

void Vcore_shift___nba_comb__TOP__core__shift_fu__2(Vcore_shift* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_shift___nba_comb__TOP__core__shift_fu__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.loadregs = vlSymsp->TOP__core__shift_fu__shift_cu.loadregs;
    vlSymsp->TOP__core__shift_fu__shift_dp.loadregs 
        = vlSelfRef.loadregs;
}

void Vcore_shift___nba_comb__TOP__core__shift_fu__3(Vcore_shift* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_shift___nba_comb__TOP__core__shift_fu__3\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__shift_fu__shift_cu.reset = vlSelfRef.reset;
}
