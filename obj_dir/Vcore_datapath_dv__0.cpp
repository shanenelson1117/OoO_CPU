// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_datapath_dv___ico_sequent__TOP__core__div_fu__divide_dp__0(Vcore_datapath_dv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_datapath_dv___ico_sequent__TOP__core__div_fu__divide_dp__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.temp = VL_CONCAT_QIQ(64,31,33, (0x7fffffffU 
                                              & VL_SEL_IIII(32, vlSelfRef.A, 0U, 31)), 
                                   VL_CONCAT_QII(33,32,1, vlSelfRef.Q, 0U));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.A, 0x1eU))) {
        vlSelfRef.A_temp = (VL_SEL_IQII(64, vlSelfRef.temp, 0x20U, 32) 
                            + vlSelfRef.M);
        vlSelfRef.Q_temp = VL_CONCAT_III(32,31,1, (0x7fffffffU 
                                                   & VL_SEL_IQII(64, vlSelfRef.temp, 1U, 31)), 
                                         (1U & (~ VL_BITSEL_IIII(32, vlSelfRef.A_temp, 0x1fU))));
    } else {
        vlSelfRef.A_temp = (VL_SEL_IQII(64, vlSelfRef.temp, 0x20U, 32) 
                            - vlSelfRef.M);
        vlSelfRef.Q_temp = VL_CONCAT_III(32,31,1, (0x7fffffffU 
                                                   & VL_SEL_IQII(64, vlSelfRef.temp, 1U, 31)), 
                                         (1U & (~ VL_BITSEL_IIII(32, vlSelfRef.A_temp, 0x1fU))));
    }
    vlSelfRef.quotient = vlSelfRef.Q;
    vlSelfRef.remainder = vlSelfRef.A;
}

void Vcore_datapath_dv___nba_sequent__TOP__core__div_fu__divide_dp__0(Vcore_datapath_dv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_datapath_dv___nba_sequent__TOP__core__div_fu__divide_dp__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__M = vlSelfRef.M;
    vlSelfRef.__Vdly__P = vlSelfRef.P;
    vlSelfRef.__Vdly__A = vlSelfRef.A;
    vlSelfRef.__Vdly__Q = vlSelfRef.Q;
    if (vlSelfRef.loadregs) {
        vlSelfRef.__Vdly__A = 0U;
        vlSelfRef.__Vdly__P = 0x0000001fU;
        vlSelfRef.__Vdly__M = vlSelfRef.abs_sor;
        vlSelfRef.__Vdly__Q = vlSelfRef.abs_end;
    } else if (vlSelfRef.pass1) {
        vlSelfRef.__Vdly__A = vlSelfRef.A_temp;
        vlSelfRef.__Vdly__Q = vlSelfRef.Q_temp;
        vlSelfRef.__Vdly__P = (vlSelfRef.P - (IData)(1U));
    } else if (vlSelfRef.pass2) {
        if ((1U & VL_BITSEL_IIII(32, vlSelfRef.A, 0x1fU))) {
            vlSelfRef.__Vdly__A = (vlSelfRef.A + vlSelfRef.M);
        }
    } else if (vlSelfRef.signadj) {
        if (((IData)(vlSelfRef.sor_msb) ^ (IData)(vlSelfRef.end_msb))) {
            vlSelfRef.__Vdly__Q = (- vlSelfRef.Q);
        }
    }
    vlSelfRef.M = vlSelfRef.__Vdly__M;
    vlSelfRef.P = vlSelfRef.__Vdly__P;
    vlSelfRef.A = vlSelfRef.__Vdly__A;
    vlSelfRef.Q = vlSelfRef.__Vdly__Q;
    vlSelfRef.remainder = vlSelfRef.A;
    vlSelfRef.temp = VL_CONCAT_QIQ(64,31,33, (0x7fffffffU 
                                              & VL_SEL_IIII(32, vlSelfRef.A, 0U, 31)), 
                                   VL_CONCAT_QII(33,32,1, vlSelfRef.Q, 0U));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.A, 0x1eU))) {
        vlSelfRef.A_temp = (VL_SEL_IQII(64, vlSelfRef.temp, 0x20U, 32) 
                            + vlSelfRef.M);
        vlSelfRef.Q_temp = VL_CONCAT_III(32,31,1, (0x7fffffffU 
                                                   & VL_SEL_IQII(64, vlSelfRef.temp, 1U, 31)), 
                                         (1U & (~ VL_BITSEL_IIII(32, vlSelfRef.A_temp, 0x1fU))));
    } else {
        vlSelfRef.A_temp = (VL_SEL_IQII(64, vlSelfRef.temp, 0x20U, 32) 
                            - vlSelfRef.M);
        vlSelfRef.Q_temp = VL_CONCAT_III(32,31,1, (0x7fffffffU 
                                                   & VL_SEL_IQII(64, vlSelfRef.temp, 1U, 31)), 
                                         (1U & (~ VL_BITSEL_IIII(32, vlSelfRef.A_temp, 0x1fU))));
    }
    vlSelfRef.quotient = vlSelfRef.Q;
}
