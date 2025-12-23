// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

extern const VlWide<32>/*1023:0*/ Vcore__ConstPool__CONST_hd6b7ba52_0;

void Vcore_demux_10_to_1024___ico_comb__TOP__core__fetch_stage__pred_buffer__update_valid_demux__0(Vcore_demux_10_to_1024* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_demux_10_to_1024___ico_comb__TOP__core__fetch_stage__pred_buffer__update_valid_demux__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1024, vlSelfRef.out, Vcore__ConstPool__CONST_hd6b7ba52_0);
    if (vlSelfRef.en) {
        VL_ASSIGNBIT_WO((IData)(vlSelfRef.sel), vlSelfRef.out);
    }
}

void Vcore_demux_10_to_1024___act_sequent__TOP__core__fetch_stage__pred_buffer__update_valid_demux__0(Vcore_demux_10_to_1024* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_demux_10_to_1024___act_sequent__TOP__core__fetch_stage__pred_buffer__update_valid_demux__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1024, vlSelfRef.out, Vcore__ConstPool__CONST_hd6b7ba52_0);
    if (vlSelfRef.en) {
        VL_ASSIGNBIT_WO((IData)(vlSelfRef.sel), vlSelfRef.out);
    }
}

void Vcore_demux_10_to_1024___nba_comb__TOP__core__fetch_stage__pred_buffer__update_valid_demux__0(Vcore_demux_10_to_1024* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_demux_10_to_1024___nba_comb__TOP__core__fetch_stage__pred_buffer__update_valid_demux__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1024, vlSelfRef.out, Vcore__ConstPool__CONST_hd6b7ba52_0);
    if (vlSelfRef.en) {
        VL_ASSIGNBIT_WO((IData)(vlSelfRef.sel), vlSelfRef.out);
    }
}
