// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_multiply___ico_sequent__TOP__core__mult_fu__0(Vcore_multiply* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_multiply___ico_sequent__TOP__core__mult_fu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.P = vlSymsp->TOP__core__mult_fu__multiply_dp.P;
    VL_ASSIGNSEL_QI(38, 4, 0x00000022U, vlSelfRef.out, vlSelfRef.curr_rob);
    vlSelfRef.shiftregs = vlSymsp->TOP__core__mult_fu__multiply_cu.shiftregs;
    vlSelfRef.addregs = vlSymsp->TOP__core__mult_fu__multiply_cu.addregs;
    vlSelfRef.decr_P = vlSymsp->TOP__core__mult_fu__multiply_cu.decr_P;
    vlSelfRef.valid_out = vlSymsp->TOP__core__mult_fu__multiply_cu.valid_out;
    vlSelfRef.ready = vlSymsp->TOP__core__mult_fu__multiply_cu.ready;
    vlSymsp->TOP__core__mult_fu__multiply_cu.P = vlSelfRef.P;
    vlSymsp->TOP__core__mult_fu__multiply_dp.shiftregs 
        = vlSelfRef.shiftregs;
    vlSymsp->TOP__core__mult_fu__multiply_dp.addregs 
        = vlSelfRef.addregs;
    vlSymsp->TOP__core__mult_fu__multiply_dp.decr_P 
        = vlSelfRef.decr_P;
}

void Vcore_multiply___ico_sequent__TOP__core__mult_fu__1(Vcore_multiply* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_multiply___ico_sequent__TOP__core__mult_fu__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__mult_fu__multiply_dp.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__mult_fu__multiply_cu.clk = vlSelfRef.clk;
    vlSelfRef.product_inter = vlSymsp->TOP__core__mult_fu__multiply_dp.product_inter;
    vlSelfRef.result = ((IData)(vlSelfRef.mul_h) ? 
                        VL_SEL_IQII(64, vlSelfRef.product_inter, 0x20U, 32)
                         : VL_SEL_IQII(64, vlSelfRef.product_inter, 0U, 32));
    VL_ASSIGNSEL_QI(38, 32, 2U, vlSelfRef.out, vlSelfRef.result);
}

void Vcore_multiply___ico_sequent__TOP__core__mult_fu__2(Vcore_multiply* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_multiply___ico_sequent__TOP__core__mult_fu__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__mult_fu__multiply_cu.yumi_in 
        = vlSelfRef.yumi_in;
    vlSymsp->TOP__core__mult_fu__multiply_cu.valid_in 
        = vlSelfRef.valid_in;
    vlSelfRef.multiplicand = vlSelfRef.B;
    vlSelfRef.multiplier = vlSelfRef.A;
    vlSymsp->TOP__core__mult_fu__multiply_dp.multiplicand 
        = vlSelfRef.multiplicand;
    vlSymsp->TOP__core__mult_fu__multiply_dp.multiplier 
        = vlSelfRef.multiplier;
}

void Vcore_multiply___ico_sequent__TOP__core__mult_fu__3(Vcore_multiply* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_multiply___ico_sequent__TOP__core__mult_fu__3\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.loadregs = vlSymsp->TOP__core__mult_fu__multiply_cu.loadregs;
    vlSymsp->TOP__core__mult_fu__multiply_dp.loadregs 
        = vlSelfRef.loadregs;
}

void Vcore_multiply___ico_comb__TOP__core__mult_fu__0(Vcore_multiply* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_multiply___ico_comb__TOP__core__mult_fu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__mult_fu__multiply_cu.reset 
        = vlSelfRef.reset;
}

void Vcore_multiply___act_comb__TOP__core__mult_fu__0(Vcore_multiply* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_multiply___act_comb__TOP__core__mult_fu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__mult_fu__multiply_cu.reset 
        = vlSelfRef.reset;
}

void Vcore_multiply___nba_sequent__TOP__core__mult_fu__0(Vcore_multiply* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_multiply___nba_sequent__TOP__core__mult_fu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.P = vlSymsp->TOP__core__mult_fu__multiply_dp.P;
    vlSelfRef.product_inter = vlSymsp->TOP__core__mult_fu__multiply_dp.product_inter;
    vlSymsp->TOP__core__mult_fu__multiply_cu.P = vlSelfRef.P;
}

void Vcore_multiply___nba_sequent__TOP__core__mult_fu__1(Vcore_multiply* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_multiply___nba_sequent__TOP__core__mult_fu__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__curr_rob = vlSelfRef.curr_rob;
    vlSelfRef.__Vdly__mul_h = vlSelfRef.mul_h;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__curr_rob = 0U;
        vlSelfRef.__Vdly__mul_h = 0U;
    } else if (vlSelfRef.valid_in) {
        vlSelfRef.__Vdly__curr_rob = vlSelfRef.rs_rob_entry;
        vlSelfRef.__Vdly__mul_h = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.ALUop), 0U));
    } else if (vlSelfRef.yumi_in) {
        vlSelfRef.__Vdly__curr_rob = 0U;
        vlSelfRef.__Vdly__mul_h = 0U;
    }
    vlSelfRef.curr_rob = vlSelfRef.__Vdly__curr_rob;
    vlSelfRef.mul_h = vlSelfRef.__Vdly__mul_h;
    VL_ASSIGNSEL_QI(38, 4, 0x00000022U, vlSelfRef.out, vlSelfRef.curr_rob);
}

void Vcore_multiply___nba_sequent__TOP__core__mult_fu__2(Vcore_multiply* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_multiply___nba_sequent__TOP__core__mult_fu__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.shiftregs = vlSymsp->TOP__core__mult_fu__multiply_cu.shiftregs;
    vlSelfRef.addregs = vlSymsp->TOP__core__mult_fu__multiply_cu.addregs;
    vlSelfRef.decr_P = vlSymsp->TOP__core__mult_fu__multiply_cu.decr_P;
    vlSelfRef.valid_out = vlSymsp->TOP__core__mult_fu__multiply_cu.valid_out;
    vlSelfRef.ready = vlSymsp->TOP__core__mult_fu__multiply_cu.ready;
    vlSymsp->TOP__core__mult_fu__multiply_dp.shiftregs 
        = vlSelfRef.shiftregs;
    vlSymsp->TOP__core__mult_fu__multiply_dp.addregs 
        = vlSelfRef.addregs;
    vlSymsp->TOP__core__mult_fu__multiply_dp.decr_P 
        = vlSelfRef.decr_P;
}

void Vcore_multiply___nba_comb__TOP__core__mult_fu__0(Vcore_multiply* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_multiply___nba_comb__TOP__core__mult_fu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.result = ((IData)(vlSelfRef.mul_h) ? 
                        VL_SEL_IQII(64, vlSelfRef.product_inter, 0x20U, 32)
                         : VL_SEL_IQII(64, vlSelfRef.product_inter, 0U, 32));
    VL_ASSIGNSEL_QI(38, 32, 2U, vlSelfRef.out, vlSelfRef.result);
}

void Vcore_multiply___nba_comb__TOP__core__mult_fu__1(Vcore_multiply* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_multiply___nba_comb__TOP__core__mult_fu__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__mult_fu__multiply_cu.yumi_in 
        = vlSelfRef.yumi_in;
}

void Vcore_multiply___nba_comb__TOP__core__mult_fu__2(Vcore_multiply* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_multiply___nba_comb__TOP__core__mult_fu__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__mult_fu__multiply_cu.valid_in 
        = vlSelfRef.valid_in;
    vlSelfRef.multiplicand = vlSelfRef.B;
    vlSelfRef.multiplier = vlSelfRef.A;
    vlSymsp->TOP__core__mult_fu__multiply_dp.multiplicand 
        = vlSelfRef.multiplicand;
    vlSymsp->TOP__core__mult_fu__multiply_dp.multiplier 
        = vlSelfRef.multiplier;
}

void Vcore_multiply___nba_comb__TOP__core__mult_fu__3(Vcore_multiply* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_multiply___nba_comb__TOP__core__mult_fu__3\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.loadregs = vlSymsp->TOP__core__mult_fu__multiply_cu.loadregs;
    vlSymsp->TOP__core__mult_fu__multiply_dp.loadregs 
        = vlSelfRef.loadregs;
}

void Vcore_multiply___nba_comb__TOP__core__mult_fu__4(Vcore_multiply* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_multiply___nba_comb__TOP__core__mult_fu__4\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__mult_fu__multiply_cu.reset 
        = vlSelfRef.reset;
}
