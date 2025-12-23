// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_mult_datapath___ico_sequent__TOP__core__mult_fu__multiply_dp__0(Vcore_mult_datapath* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_mult_datapath___ico_sequent__TOP__core__mult_fu__multiply_dp__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.product_inter = VL_CONCAT_QII(64,32,32, vlSelfRef.A, vlSelfRef.Q);
}

void Vcore_mult_datapath___nba_sequent__TOP__core__mult_fu__multiply_dp__0(Vcore_mult_datapath* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_mult_datapath___nba_sequent__TOP__core__mult_fu__multiply_dp__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__Q1 = vlSelfRef.Q1;
    vlSelfRef.__Vdly__B = vlSelfRef.B;
    vlSelfRef.__Vdly__P = vlSelfRef.P;
    vlSelfRef.__Vdly__A = vlSelfRef.A;
    vlSelfRef.__Vdly__Q = vlSelfRef.Q;
    if (vlSelfRef.loadregs) {
        vlSelfRef.__Vdly__A = 0U;
        vlSelfRef.__Vdly__Q1 = 0U;
        vlSelfRef.__Vdly__P = 0x00000020U;
        vlSelfRef.__Vdly__B = vlSelfRef.multiplicand;
        vlSelfRef.__Vdly__Q = vlSelfRef.multiplier;
    }
    if (vlSelfRef.decr_P) {
        vlSelfRef.__Vdly__P = (vlSelfRef.P - (IData)(1U));
    }
    if (vlSelfRef.addregs) {
        vlSelfRef.__Vdly__A = (((0U == VL_CONCAT_III(2,1,1, 
                                                     (1U 
                                                      & VL_BITSEL_IIII(32, vlSelfRef.Q, 0U)), (IData)(vlSelfRef.Q1))) 
                                | (3U == VL_CONCAT_III(2,1,1, 
                                                       (1U 
                                                        & VL_BITSEL_IIII(32, vlSelfRef.Q, 0U)), (IData)(vlSelfRef.Q1))))
                                ? vlSelfRef.A : ((1U 
                                                  == 
                                                  VL_CONCAT_III(2,1,1, 
                                                                (1U 
                                                                 & VL_BITSEL_IIII(32, vlSelfRef.Q, 0U)), (IData)(vlSelfRef.Q1)))
                                                  ? 
                                                 (vlSelfRef.A 
                                                  + vlSelfRef.B)
                                                  : 
                                                 (vlSelfRef.A 
                                                  - vlSelfRef.B)));
    }
    if (vlSelfRef.shiftregs) {
        vlSelfRef.__Vdly__A = VL_CONCAT_III(32,1,31, 
                                            (1U & VL_BITSEL_IIII(32, vlSelfRef.A, 0x1fU)), 
                                            (0x7fffffffU 
                                             & VL_SEL_IIII(32, vlSelfRef.A, 1U, 31)));
        vlSelfRef.__Vdly__Q = VL_CONCAT_III(32,1,31, 
                                            (1U & VL_BITSEL_IIII(32, vlSelfRef.A, 0U)), 
                                            (0x7fffffffU 
                                             & VL_SEL_IIII(32, vlSelfRef.Q, 1U, 31)));
        vlSelfRef.__Vdly__Q1 = (1U & VL_BITSEL_IIII(32, vlSelfRef.Q, 0U));
    }
    vlSelfRef.Q1 = vlSelfRef.__Vdly__Q1;
    vlSelfRef.B = vlSelfRef.__Vdly__B;
    vlSelfRef.P = vlSelfRef.__Vdly__P;
    vlSelfRef.A = vlSelfRef.__Vdly__A;
    vlSelfRef.Q = vlSelfRef.__Vdly__Q;
    vlSelfRef.product_inter = VL_CONCAT_QII(64,32,32, vlSelfRef.A, vlSelfRef.Q);
}
