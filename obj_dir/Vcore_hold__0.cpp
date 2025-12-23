// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_hold___ico_sequent__TOP__core__ins_hold__0(Vcore_hold* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_hold___ico_sequent__TOP__core__ins_hold__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pc_pipe_stall = vlSelfRef.ps;
}

void Vcore_hold___ico_sequent__TOP__core__ins_hold__1(Vcore_hold* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_hold___ico_sequent__TOP__core__ins_hold__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(112, vlSelfRef.hold_out, (IData)(vlSelfRef.ps), vlSelfRef.instr_hold, vlSelfRef.pipe_out);
    vlSelfRef.rs1 = (0x0000001fU & VL_SEL_IWII(112, vlSelfRef.hold_out, 0U, 5));
}

void Vcore_hold___ico_sequent__TOP__core__ins_hold__2(Vcore_hold* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_hold___ico_sequent__TOP__core__ins_hold__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ns = vlSelfRef.ps;
    if (vlSelfRef.ps) {
        if ((1U & (~ (IData)(vlSelfRef.stall)))) {
            vlSelfRef.ns = 0U;
        }
    } else if (vlSelfRef.stall) {
        vlSelfRef.ns = 1U;
    }
}

void Vcore_hold___nba_sequent__TOP__core__ins_hold__0(Vcore_hold* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_hold___nba_sequent__TOP__core__ins_hold__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    VL_ASSIGN_W(112, vlSelfRef.__Vdly__instr_hold, vlSelfRef.instr_hold);
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 0U;
        VL_CONST_W_1X(112,vlSelfRef.__Vdly__instr_hold,0x00000000);
    } else {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
        if (((~ (IData)(vlSelfRef.ps)) & (IData)(vlSelfRef.ns))) {
            VL_ASSIGN_W(112, vlSelfRef.__Vdly__instr_hold, vlSelfRef.pipe_out);
        }
    }
    VL_ASSIGN_W(112, vlSelfRef.instr_hold, vlSelfRef.__Vdly__instr_hold);
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.pc_pipe_stall = vlSelfRef.ps;
}

void Vcore_hold___nba_comb__TOP__core__ins_hold__0(Vcore_hold* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_hold___nba_comb__TOP__core__ins_hold__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(112, vlSelfRef.hold_out, (IData)(vlSelfRef.ps), vlSelfRef.instr_hold, vlSelfRef.pipe_out);
    vlSelfRef.rs1 = (0x0000001fU & VL_SEL_IWII(112, vlSelfRef.hold_out, 0U, 5));
}

void Vcore_hold___nba_comb__TOP__core__ins_hold__1(Vcore_hold* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_hold___nba_comb__TOP__core__ins_hold__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ns = vlSelfRef.ps;
    if (vlSelfRef.ps) {
        if ((1U & (~ (IData)(vlSelfRef.stall)))) {
            vlSelfRef.ns = 0U;
        }
    } else if (vlSelfRef.stall) {
        vlSelfRef.ns = 1U;
    }
}
