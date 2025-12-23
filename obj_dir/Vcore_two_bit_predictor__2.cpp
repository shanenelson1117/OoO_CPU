// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__221__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__221__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__221__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__221__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__221__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__221__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__222__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__222__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__222__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__222__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__222__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__222__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__222__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__222__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__222__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__222__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__223__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__223__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__223__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__223__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__223__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__223__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__223__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__223__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__223__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__223__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__224__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__224__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__224__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__224__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__224__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__224__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__224__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__224__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__224__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__224__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__225__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__225__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__225__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__225__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__225__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__225__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__225__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__225__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__225__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__225__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__226__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__226__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__226__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__226__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__226__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__226__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__226__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__226__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__226__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__226__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__227__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__227__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__227__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__227__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__227__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__227__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__227__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__227__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__227__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__227__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__228__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__228__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__228__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__228__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__228__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__228__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__228__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__228__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__228__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__228__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__229__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__229__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__229__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__229__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__229__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__229__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__229__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__229__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__229__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__229__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__230__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__230__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__230__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__230__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__230__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__230__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__230__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__230__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__230__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__230__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__231__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__231__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__231__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__231__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__231__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__231__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__231__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__231__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__231__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__231__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__232__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__232__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__232__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__232__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__232__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__232__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__232__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__232__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__232__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__232__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__233__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__233__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__233__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__233__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__233__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__233__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__233__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__233__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__233__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__233__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__234__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__234__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__234__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__234__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__234__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__234__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__234__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__234__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__234__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__234__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__235__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__235__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__235__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__235__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__235__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__235__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__235__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__235__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__235__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__235__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__236__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__236__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__236__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__236__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__236__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__236__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__236__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__236__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__236__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__236__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__237__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__237__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__237__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__237__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__237__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__237__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__237__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__237__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__237__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__237__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__238__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__238__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__238__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__238__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__238__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__238__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__238__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__238__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__238__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__238__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__239__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__239__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__239__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__239__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__239__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__239__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__239__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__239__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__239__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__239__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__240__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__240__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__240__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__240__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__240__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__240__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__240__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__240__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__240__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__240__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__241__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__241__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__241__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__241__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__241__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__241__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__241__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__241__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__241__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__241__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__242__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__242__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__242__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__242__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__242__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__242__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__242__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__242__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__242__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__242__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__243__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__243__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__243__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__243__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__243__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__243__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__243__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__243__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__243__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__243__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__244__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__244__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__244__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__244__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__244__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__244__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__244__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__244__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__244__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__244__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__245__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__245__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__245__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__245__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__245__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__245__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__245__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__245__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__245__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__245__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__246__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__246__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__246__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__246__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__246__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__246__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__246__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__246__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__246__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__246__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__247__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__247__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__247__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__247__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__247__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__247__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__247__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__247__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__247__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__247__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__248__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__248__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__248__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__248__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__248__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__248__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__248__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__248__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__248__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__248__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__249__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__249__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__249__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__249__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__249__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__249__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__249__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__249__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__249__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__249__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__250__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__250__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__250__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__250__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__250__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__250__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__250__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__250__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__250__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__250__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__251__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__251__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__251__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__251__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__251__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__251__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__251__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__251__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__251__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__251__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__252__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__252__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__252__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__252__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__252__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__252__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__252__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__252__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__252__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__252__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__253__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__253__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__253__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__253__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__253__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__253__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__253__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__253__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__253__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__253__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__254__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__254__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__254__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__254__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__254__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__254__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__254__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__254__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__254__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__254__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__255__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__255__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__255__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__255__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__255__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__255__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__255__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__255__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__255__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__255__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__256__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__256__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__256__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__256__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__256__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__256__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__256__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__256__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__256__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__256__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__257__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__257__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__257__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__257__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__257__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__257__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__257__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__257__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__257__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__257__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__258__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__258__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__258__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__258__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__258__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__258__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__258__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__258__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__258__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__258__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__259__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__259__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__259__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__259__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__259__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__259__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__259__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__259__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__259__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__259__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__260__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__260__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__260__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__260__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__260__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__260__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__260__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__260__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__260__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__260__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__261__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__261__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__261__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__261__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__261__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__261__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__261__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__261__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__261__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__261__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__262__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__262__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__262__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__262__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__262__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__262__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__262__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__262__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__262__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__262__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__263__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__263__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__263__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__263__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__263__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__263__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__263__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__263__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__263__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__263__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__264__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__264__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__264__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__264__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__264__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__264__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__264__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__264__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__264__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__264__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__265__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__265__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__265__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__265__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__265__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__265__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__265__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__265__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__265__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__265__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__266__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__266__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__266__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__266__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__266__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__266__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__266__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__266__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__266__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__266__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__267__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__267__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__267__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__267__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__267__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__267__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__267__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__267__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__267__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__267__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__268__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__268__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__268__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__268__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__268__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__268__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__268__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__268__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__268__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__268__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__269__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__269__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__269__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__269__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__269__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__269__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__269__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__269__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__269__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__269__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__270__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__270__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__270__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__270__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__270__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__270__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__270__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__270__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__270__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__270__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__271__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__271__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__271__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__271__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__271__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__271__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__271__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__271__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__271__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__271__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__272__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__272__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__272__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__272__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__272__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__272__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__272__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__272__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__272__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__272__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__273__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__273__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__273__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__273__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__273__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__273__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__273__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__273__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__273__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__273__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__274__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__274__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__274__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__274__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__274__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__274__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__274__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__274__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__274__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__274__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__275__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__275__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__275__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__275__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__275__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__275__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__275__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__275__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__275__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__275__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__276__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__276__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__276__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__276__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__276__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__276__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__276__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__276__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__276__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__276__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__277__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__277__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__277__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__277__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__277__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__277__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__277__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__277__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__277__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__277__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__278__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__278__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__278__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__278__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__278__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__278__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__278__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__278__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__278__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__278__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__279__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__279__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__279__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__279__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__279__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__279__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__279__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__279__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__279__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__279__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__280__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__280__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__280__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__280__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__280__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__280__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__280__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__280__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__280__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__280__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__281__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__281__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__281__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__281__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__281__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__281__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__281__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__281__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__281__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__281__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__282__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__282__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__282__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__282__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__282__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__282__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__282__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__282__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__282__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__282__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__283__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__283__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__283__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__283__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__283__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__283__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__283__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__283__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__283__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__283__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__284__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__284__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__284__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__284__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__284__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__284__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__284__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__284__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__284__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__284__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__285__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__285__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__285__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__285__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__285__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__285__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__285__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__285__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__285__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__285__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__286__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__286__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__286__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__286__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__286__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__286__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__286__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__286__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__286__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__286__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__287__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__287__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__287__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__287__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__287__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__287__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__287__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__287__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__287__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__287__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__288__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__288__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__288__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__288__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__288__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__288__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__288__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__288__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__288__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__288__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__289__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__289__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__289__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__289__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__289__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__289__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__289__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__289__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__289__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__289__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__290__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__290__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__290__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__290__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__290__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__290__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__290__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__290__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__290__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__290__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__291__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__291__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__291__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__291__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__291__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__291__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__291__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__291__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__291__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__291__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__292__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__292__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__292__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__292__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__292__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__292__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__292__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__292__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__292__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__292__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__293__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__293__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__293__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__293__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__293__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__293__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__293__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__293__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__293__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__293__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__294__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__294__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__294__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__294__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__294__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__294__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__294__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__294__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__294__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__294__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__295__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__295__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__295__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__295__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__295__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__295__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__295__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__295__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__295__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__295__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__296__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__296__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__296__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__296__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__296__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__296__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__296__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__296__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__296__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__296__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__297__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__297__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__297__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__297__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__297__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__297__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__297__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__297__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__297__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__297__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__298__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__298__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__298__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__298__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__298__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__298__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__298__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__298__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__298__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__298__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__299__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__299__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__299__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__299__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__299__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__299__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__299__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__299__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__299__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__299__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__300__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__300__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__300__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__300__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__300__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__300__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__300__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__300__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__300__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__300__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__301__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__301__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__301__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__301__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__301__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__301__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__301__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__301__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__301__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__301__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__302__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__302__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__302__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__302__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__302__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__302__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__302__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__302__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__302__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__302__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__303__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__303__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__303__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__303__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__303__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__303__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__303__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__303__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__303__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__303__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__304__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__304__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__304__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__304__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__304__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__304__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__304__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__304__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__304__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__304__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__305__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__305__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__305__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__305__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__305__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__305__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__305__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__305__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__305__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__305__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__306__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__306__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__306__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__306__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__306__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__306__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__306__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__306__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__306__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__306__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__307__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__307__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__307__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__307__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__307__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__307__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__307__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__307__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__307__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__307__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__308__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__308__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__308__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__308__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__308__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__308__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__308__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__308__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__308__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__308__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__309__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__309__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__309__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__309__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__309__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__309__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__309__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__309__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__309__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__309__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__310__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__310__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__310__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__310__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__310__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__310__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__310__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__310__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__310__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__310__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__311__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__311__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__311__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__311__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__311__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__311__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__311__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__311__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__311__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__311__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__312__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__312__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__312__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__312__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__312__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__312__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__312__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__312__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__312__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__312__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__313__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__313__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__313__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__313__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__313__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__313__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__313__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__313__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__313__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__313__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__314__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__314__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__314__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__314__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__314__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__314__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__314__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__314__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__314__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__314__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__315__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__315__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__315__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__315__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__315__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__315__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__315__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__315__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__315__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__315__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__316__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__316__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__316__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__316__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__316__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__316__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__316__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__316__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__316__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__316__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__317__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__317__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__317__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__317__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__317__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__317__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__317__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__317__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__317__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__317__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__318__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__318__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__318__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__318__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__318__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__318__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__318__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__318__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__318__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__318__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__319__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__319__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__319__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__319__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__319__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__319__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__319__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__319__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__319__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__319__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__320__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__320__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__320__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__320__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__320__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__320__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__320__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__320__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__320__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__320__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__321__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__321__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__321__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__321__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__321__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__321__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__321__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__321__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__321__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__321__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__322__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__322__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__322__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__322__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__322__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__322__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__322__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__322__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__322__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__322__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__323__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__323__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__323__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__323__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__323__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__323__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__323__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__323__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__323__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__323__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__324__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__324__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__324__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__324__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__324__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__324__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__324__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__324__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__324__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__324__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__325__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__325__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__325__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__325__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__325__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__325__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__325__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__325__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__325__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__325__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__326__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__326__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__326__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__326__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__326__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__326__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__326__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__326__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__326__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__326__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__327__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__327__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__327__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__327__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__327__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__327__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__327__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__327__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__327__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__327__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__328__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__328__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__328__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__328__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__328__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__328__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__328__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__328__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__328__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__328__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__329__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__329__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__329__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__329__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__329__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__329__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__329__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__329__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__329__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__329__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__330__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__330__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__330__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__330__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__330__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__330__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__330__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__330__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__330__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__330__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__331__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__331__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__331__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__331__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__331__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__331__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__331__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__331__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__331__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__331__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}
