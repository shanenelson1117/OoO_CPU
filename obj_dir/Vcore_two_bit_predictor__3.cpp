// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__332__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__332__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__332__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__332__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__332__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__332__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__332__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__332__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__332__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__332__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__333__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__333__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__333__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__333__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__333__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__333__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__333__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__333__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__333__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__333__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__334__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__334__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__334__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__334__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__334__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__334__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__334__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__334__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__334__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__334__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__335__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__335__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__335__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__335__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__335__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__335__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__335__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__335__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__335__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__335__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__336__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__336__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__336__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__336__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__336__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__336__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__336__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__336__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__336__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__336__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__337__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__337__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__337__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__337__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__337__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__337__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__337__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__337__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__337__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__337__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__338__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__338__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__338__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__338__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__338__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__338__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__338__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__338__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__338__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__338__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__339__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__339__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__339__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__339__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__339__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__339__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__339__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__339__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__339__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__339__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__340__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__340__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__340__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__340__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__340__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__340__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__340__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__340__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__340__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__340__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__341__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__341__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__341__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__341__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__341__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__341__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__341__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__341__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__341__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__341__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__342__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__342__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__342__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__342__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__342__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__342__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__342__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__342__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__342__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__342__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__343__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__343__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__343__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__343__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__343__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__343__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__343__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__343__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__343__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__343__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__344__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__344__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__344__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__344__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__344__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__344__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__344__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__344__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__344__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__344__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__345__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__345__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__345__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__345__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__345__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__345__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__345__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__345__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__345__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__345__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__346__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__346__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__346__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__346__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__346__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__346__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__346__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__346__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__346__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__346__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__347__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__347__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__347__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__347__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__347__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__347__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__347__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__347__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__347__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__347__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__348__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__348__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__348__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__348__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__348__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__348__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__348__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__348__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__348__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__348__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__349__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__349__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__349__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__349__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__349__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__349__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__349__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__349__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__349__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__349__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__350__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__350__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__350__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__350__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__350__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__350__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__350__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__350__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__350__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__350__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__351__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__351__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__351__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__351__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__351__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__351__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__351__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__351__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__351__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__351__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__352__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__352__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__352__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__352__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__352__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__352__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__352__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__352__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__352__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__352__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__353__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__353__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__353__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__353__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__353__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__353__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__353__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__353__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__353__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__353__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__354__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__354__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__354__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__354__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__354__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__354__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__354__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__354__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__354__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__354__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__355__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__355__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__355__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__355__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__355__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__355__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__355__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__355__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__355__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__355__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__356__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__356__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__356__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__356__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__356__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__356__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__356__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__356__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__356__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__356__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__357__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__357__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__357__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__357__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__357__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__357__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__357__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__357__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__357__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__357__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__358__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__358__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__358__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__358__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__358__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__358__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__358__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__358__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__358__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__358__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__359__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__359__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__359__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__359__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__359__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__359__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__359__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__359__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__359__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__359__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__360__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__360__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__360__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__360__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__360__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__360__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__360__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__360__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__360__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__360__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__361__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__361__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__361__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__361__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__361__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__361__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__361__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__361__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__361__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__361__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__362__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__362__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__362__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__362__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__362__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__362__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__362__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__362__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__362__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__362__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__363__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__363__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__363__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__363__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__363__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__363__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__363__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__363__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__363__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__363__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__364__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__364__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__364__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__364__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__364__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__364__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__364__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__364__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__364__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__364__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__365__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__365__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__365__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__365__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__365__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__365__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__365__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__365__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__365__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__365__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__366__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__366__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__366__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__366__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__366__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__366__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__366__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__366__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__366__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__366__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__367__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__367__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__367__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__367__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__367__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__367__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__367__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__367__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__367__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__367__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__368__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__368__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__368__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__368__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__368__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__368__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__368__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__368__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__368__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__368__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__369__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__369__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__369__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__369__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__369__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__369__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__369__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__369__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__369__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__369__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__370__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__370__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__370__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__370__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__370__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__370__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__370__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__370__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__370__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__370__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__371__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__371__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__371__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__371__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__371__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__371__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__371__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__371__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__371__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__371__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__372__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__372__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__372__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__372__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__372__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__372__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__372__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__372__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__372__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__372__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__373__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__373__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__373__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__373__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__373__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__373__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__373__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__373__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__373__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__373__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__374__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__374__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__374__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__374__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__374__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__374__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__374__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__374__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__374__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__374__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__375__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__375__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__375__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__375__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__375__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__375__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__375__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__375__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__375__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__375__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__376__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__376__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__376__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__376__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__376__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__376__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__376__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__376__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__376__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__376__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__377__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__377__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__377__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__377__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__377__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__377__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__377__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__377__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__377__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__377__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__378__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__378__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__378__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__378__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__378__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__378__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__378__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__378__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__378__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__378__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__379__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__379__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__379__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__379__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__379__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__379__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__379__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__379__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__379__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__379__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__380__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__380__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__380__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__380__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__380__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__380__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__380__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__380__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__380__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__380__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__381__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__381__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__381__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__381__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__381__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__381__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__381__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__381__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__381__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__381__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__382__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__382__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__382__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__382__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__382__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__382__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__382__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__382__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__382__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__382__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__383__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__383__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__383__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__383__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__383__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__383__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__383__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__383__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__383__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__383__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__384__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__384__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__384__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__384__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__384__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__384__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__384__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__384__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__384__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__384__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__385__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__385__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__385__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__385__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__385__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__385__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__385__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__385__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__385__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__385__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__386__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__386__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__386__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__386__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__386__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__386__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__386__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__386__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__386__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__386__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__387__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__387__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__387__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__387__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__387__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__387__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__387__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__387__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__387__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__387__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__388__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__388__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__388__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__388__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__388__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__388__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__388__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__388__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__388__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__388__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__389__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__389__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__389__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__389__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__389__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__389__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__389__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__389__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__389__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__389__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__390__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__390__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__390__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__390__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__390__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__390__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__390__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__390__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__390__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__390__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__391__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__391__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__391__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__391__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__391__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__391__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__391__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__391__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__391__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__391__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__392__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__392__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__392__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__392__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__392__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__392__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__392__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__392__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__392__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__392__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__393__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__393__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__393__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__393__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__393__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__393__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__393__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__393__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__393__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__393__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__394__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__394__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__394__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__394__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__394__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__394__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__394__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__394__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__394__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__394__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__395__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__395__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__395__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__395__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__395__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__395__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__395__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__395__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__395__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__395__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__396__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__396__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__396__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__396__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__396__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__396__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__396__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__396__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__396__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__396__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__397__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__397__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__397__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__397__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__397__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__397__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__397__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__397__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__397__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__397__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__398__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__398__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__398__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__398__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__398__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__398__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__398__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__398__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__398__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__398__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__399__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__399__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__399__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__399__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__399__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__399__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__399__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__399__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__399__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__399__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__400__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__400__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__400__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__400__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__400__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__400__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__400__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__400__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__400__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__400__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__401__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__401__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__401__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__401__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__401__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__401__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__401__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__401__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__401__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__401__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__402__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__402__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__402__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__402__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__402__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__402__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__402__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__402__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__402__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__402__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__403__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__403__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__403__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__403__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__403__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__403__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__403__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__403__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__403__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__403__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__404__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__404__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__404__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__404__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__404__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__404__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__404__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__404__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__404__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__404__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__405__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__405__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__405__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__405__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__405__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__405__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__405__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__405__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__405__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__405__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__406__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__406__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__406__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__406__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__406__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__406__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__406__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__406__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__406__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__406__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__407__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__407__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__407__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__407__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__407__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__407__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__407__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__407__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__407__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__407__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__408__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__408__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__408__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__408__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__408__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__408__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__408__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__408__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__408__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__408__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__409__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__409__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__409__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__409__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__409__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__409__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__409__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__409__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__409__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__409__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__410__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__410__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__410__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__410__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__410__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__410__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__410__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__410__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__410__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__410__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__411__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__411__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__411__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__411__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__411__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__411__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__411__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__411__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__411__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__411__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__412__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__412__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__412__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__412__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__412__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__412__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__412__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__412__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__412__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__412__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__413__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__413__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__413__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__413__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__413__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__413__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__413__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__413__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__413__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__413__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__414__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__414__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__414__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__414__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__414__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__414__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__414__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__414__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__414__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__414__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__415__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__415__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__415__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__415__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__415__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__415__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__415__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__415__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__415__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__415__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__416__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__416__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__416__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__416__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__416__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__416__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__416__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__416__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__416__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__416__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__417__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__417__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__417__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__417__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__417__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__417__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__417__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__417__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__417__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__417__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__418__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__418__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__418__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__418__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__418__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__418__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__418__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__418__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__418__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__418__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__419__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__419__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__419__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__419__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__419__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__419__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__419__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__419__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__419__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__419__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__420__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__420__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__420__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__420__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__420__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__420__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__420__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__420__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__420__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__420__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__421__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__421__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__421__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__421__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__421__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__421__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__421__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__421__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__421__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__421__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__422__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__422__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__422__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__422__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__422__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__422__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__422__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__422__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__422__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__422__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__423__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__423__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__423__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__423__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__423__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__423__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__423__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__423__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__423__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__423__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__424__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__424__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__424__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__424__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__424__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__424__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__424__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__424__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__424__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__424__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__425__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__425__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__425__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__425__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__425__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__425__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__425__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__425__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__425__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__425__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__426__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__426__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__426__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__426__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__426__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__426__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__426__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__426__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__426__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__426__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__427__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__427__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__427__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__427__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__427__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__427__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__427__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__427__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__427__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__427__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__428__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__428__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__428__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__428__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__428__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__428__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__428__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__428__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__428__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__428__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__429__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__429__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__429__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__429__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__429__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__429__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__429__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__429__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__429__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__429__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__430__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__430__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__430__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__430__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__430__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__430__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__430__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__430__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__430__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__430__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__431__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__431__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__431__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__431__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__431__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__431__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__431__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__431__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__431__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__431__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__432__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__432__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__432__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__432__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__432__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__432__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__432__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__432__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__432__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__432__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__433__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__433__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__433__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__433__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__433__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__433__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__433__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__433__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__433__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__433__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__434__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__434__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__434__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__434__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__434__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__434__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__434__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__434__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__434__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__434__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__435__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__435__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__435__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__435__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__435__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__435__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__435__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__435__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__435__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__435__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__436__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__436__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__436__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__436__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__436__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__436__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__436__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__436__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__436__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__436__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__437__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__437__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__437__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__437__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__437__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__437__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__437__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__437__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__437__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__437__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__438__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__438__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__438__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__438__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__438__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__438__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__438__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__438__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__438__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__438__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__439__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__439__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__439__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__439__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__439__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__439__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__439__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__439__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__439__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__439__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__440__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__440__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__440__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__440__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__440__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__440__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__440__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__440__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__440__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__440__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__441__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__441__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__441__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__441__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__441__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__441__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__441__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__441__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__441__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__441__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__442__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__442__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__442__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__442__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__442__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__442__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}
