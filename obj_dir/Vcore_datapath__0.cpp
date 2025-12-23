// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_datapath___ico_sequent__TOP__core__shift_fu__shift_dp__0(Vcore_datapath* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_datapath___ico_sequent__TOP__core__shift_fu__shift_dp__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.output_inter = vlSelfRef.A;
}

void Vcore_datapath___nba_sequent__TOP__core__shift_fu__shift_dp__0(Vcore_datapath* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_datapath___nba_sequent__TOP__core__shift_fu__shift_dp__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__P = vlSelfRef.P;
    vlSelfRef.__Vdly__A = vlSelfRef.A;
    if (vlSelfRef.loadregs) {
        vlSelfRef.__Vdly__A = vlSelfRef.shifted;
        vlSelfRef.__Vdly__P = VL_EXTEND_II(32,5, (0x0000001fU 
                                                  & VL_SEL_IIII(32, vlSelfRef.shifter, 0U, 5)));
    }
    if (vlSelfRef.shiftregs) {
        vlSelfRef.__Vdly__A = ((0x0fU == (IData)(vlSelfRef.ALUop_reg))
                                ? VL_SHIFTL_III(32,32,32, vlSelfRef.A, 1U)
                                : ((9U == (IData)(vlSelfRef.ALUop_reg))
                                    ? VL_CONCAT_III(32,1,31, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSelfRef.A, 0x1fU)), 
                                                    (0x7fffffffU 
                                                     & VL_SEL_IIII(32, vlSelfRef.A, 1U, 31)))
                                    : VL_EXTEND_II(32,31, 
                                                   (0x7fffffffU 
                                                    & VL_SEL_IIII(32, vlSelfRef.A, 1U, 31)))));
        vlSelfRef.__Vdly__P = (vlSelfRef.P - (IData)(1U));
    }
    vlSelfRef.P = vlSelfRef.__Vdly__P;
    vlSelfRef.A = vlSelfRef.__Vdly__A;
    vlSelfRef.output_inter = vlSelfRef.A;
}
