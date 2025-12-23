// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__0__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__0__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__0__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__0__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__0__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__0__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__0__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__0__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__0__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__0__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__1__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__1__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__1__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__1__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__1__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__1__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__1__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__1__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__1__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__1__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__2__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__2__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__2__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__2__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__2__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__2__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__2__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__2__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__2__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__2__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__3__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__3__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__3__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__3__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__3__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__3__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__3__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__3__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__3__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__3__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__4__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__4__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__4__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__4__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__4__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__4__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__4__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__4__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__4__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__4__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__5__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__5__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__5__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__5__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__5__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__5__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__5__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__5__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__5__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__5__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__6__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__6__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__6__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__6__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__6__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__6__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__6__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__6__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__6__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__6__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__7__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__7__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__7__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__7__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__7__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__7__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__7__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__7__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__7__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__7__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__8__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__8__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__8__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__8__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__8__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__8__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__8__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__8__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__8__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__8__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__9__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__9__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__9__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__9__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__9__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__9__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__9__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__9__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__9__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__9__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__10__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__10__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__10__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__10__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__10__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__10__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__10__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__10__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__10__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__10__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__11__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__11__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__11__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__11__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__11__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__11__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__11__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__11__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__11__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__11__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__12__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__12__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__12__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__12__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__12__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__12__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__12__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__12__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__12__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__12__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__13__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__13__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__13__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__13__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__13__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__13__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__13__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__13__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__13__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__13__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__14__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__14__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__14__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__14__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__14__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__14__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__14__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__14__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__14__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__14__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__15__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__15__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__15__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__15__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__15__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__15__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__15__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__15__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__15__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__15__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__16__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__16__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__16__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__16__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__16__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__16__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__16__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__16__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__16__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__16__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__17__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__17__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__17__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__17__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__17__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__17__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__17__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__17__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__17__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__17__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__18__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__18__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__18__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__18__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__18__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__18__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__18__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__18__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__18__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__18__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__19__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__19__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__19__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__19__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__19__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__19__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__19__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__19__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__19__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__19__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__20__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__20__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__20__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__20__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__20__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__20__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__20__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__20__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__20__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__20__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__21__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__21__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__21__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__21__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__21__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__21__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__21__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__21__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__21__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__21__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__22__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__22__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__22__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__22__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__22__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__22__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__22__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__22__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__22__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__22__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__23__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__23__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__23__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__23__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__23__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__23__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__23__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__23__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__23__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__23__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__24__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__24__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__24__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__24__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__24__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__24__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__24__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__24__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__24__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__24__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__25__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__25__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__25__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__25__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__25__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__25__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__25__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__25__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__25__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__25__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__26__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__26__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__26__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__26__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__26__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__26__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__26__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__26__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__26__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__26__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__27__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__27__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__27__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__27__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__27__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__27__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__27__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__27__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__27__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__27__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__28__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__28__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__28__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__28__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__28__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__28__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__28__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__28__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__28__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__28__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__29__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__29__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__29__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__29__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__29__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__29__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__29__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__29__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__29__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__29__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__30__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__30__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__30__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__30__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__30__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__30__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__30__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__30__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__30__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__30__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__31__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__31__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__31__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__31__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__31__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__31__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__31__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__31__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__31__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__31__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__32__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__32__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__32__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__32__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__32__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__32__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__32__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__32__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__32__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__32__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__33__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__33__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__33__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__33__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__33__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__33__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__33__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__33__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__33__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__33__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__34__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__34__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__34__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__34__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__34__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__34__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__34__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__34__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__34__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__34__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__35__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__35__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__35__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__35__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__35__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__35__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__35__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__35__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__35__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__35__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__36__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__36__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__36__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__36__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__36__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__36__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__36__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__36__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__36__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__36__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__37__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__37__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__37__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__37__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__37__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__37__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__37__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__37__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__37__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__37__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__38__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__38__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__38__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__38__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__38__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__38__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__38__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__38__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__38__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__38__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__39__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__39__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__39__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__39__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__39__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__39__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__39__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__39__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__39__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__39__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__40__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__40__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__40__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__40__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__40__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__40__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__40__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__40__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__40__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__40__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__41__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__41__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__41__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__41__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__41__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__41__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__41__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__41__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__41__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__41__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__42__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__42__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__42__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__42__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__42__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__42__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__42__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__42__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__42__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__42__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__43__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__43__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__43__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__43__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__43__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__43__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__43__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__43__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__43__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__43__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__44__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__44__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__44__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__44__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__44__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__44__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__44__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__44__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__44__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__44__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__45__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__45__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__45__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__45__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__45__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__45__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__45__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__45__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__45__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__45__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__46__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__46__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__46__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__46__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__46__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__46__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__46__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__46__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__46__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__46__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__47__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__47__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__47__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__47__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__47__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__47__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__47__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__47__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__47__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__47__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__48__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__48__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__48__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__48__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__48__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__48__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__48__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__48__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__48__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__48__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__49__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__49__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__49__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__49__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__49__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__49__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__49__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__49__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__49__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__49__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__50__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__50__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__50__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__50__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__50__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__50__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__50__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__50__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__50__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__50__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__51__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__51__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__51__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__51__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__51__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__51__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__51__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__51__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__51__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__51__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__52__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__52__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__52__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__52__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__52__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__52__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__52__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__52__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__52__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__52__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__53__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__53__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__53__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__53__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__53__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__53__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__53__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__53__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__53__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__53__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__54__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__54__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__54__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__54__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__54__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__54__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__54__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__54__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__54__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__54__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__55__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__55__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__55__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__55__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__55__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__55__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__55__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__55__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__55__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__55__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__56__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__56__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__56__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__56__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__56__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__56__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__56__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__56__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__56__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__56__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__57__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__57__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__57__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__57__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__57__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__57__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__57__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__57__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__57__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__57__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__58__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__58__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__58__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__58__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__58__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__58__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__58__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__58__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__58__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__58__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__59__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__59__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__59__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__59__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__59__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__59__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__59__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__59__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__59__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__59__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__60__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__60__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__60__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__60__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__60__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__60__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__60__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__60__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__60__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__60__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__61__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__61__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__61__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__61__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__61__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__61__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__61__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__61__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__61__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__61__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__62__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__62__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__62__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__62__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__62__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__62__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__62__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__62__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__62__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__62__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__63__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__63__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__63__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__63__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__63__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__63__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__63__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__63__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__63__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__63__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__64__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__64__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__64__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__64__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__64__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__64__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__64__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__64__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__64__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__64__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__65__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__65__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__65__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__65__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__65__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__65__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__65__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__65__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__65__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__65__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__66__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__66__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__66__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__66__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__66__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__66__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__66__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__66__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__66__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__66__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__67__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__67__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__67__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__67__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__67__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__67__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__67__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__67__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__67__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__67__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__68__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__68__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__68__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__68__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__68__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__68__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__68__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__68__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__68__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__68__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__69__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__69__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__69__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__69__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__69__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__69__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__69__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__69__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__69__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__69__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__70__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__70__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__70__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__70__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__70__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__70__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__70__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__70__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__70__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__70__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__71__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__71__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__71__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__71__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__71__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__71__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__71__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__71__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__71__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__71__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__72__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__72__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__72__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__72__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__72__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__72__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__72__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__72__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__72__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__72__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__73__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__73__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__73__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__73__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__73__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__73__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__73__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__73__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__73__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__73__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__74__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__74__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__74__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__74__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__74__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__74__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__74__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__74__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__74__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__74__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__75__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__75__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__75__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__75__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__75__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__75__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__75__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__75__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__75__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__75__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__76__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__76__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__76__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__76__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__76__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__76__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__76__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__76__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__76__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__76__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__77__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__77__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__77__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__77__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__77__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__77__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__77__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__77__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__77__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__77__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__78__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__78__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__78__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__78__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__78__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__78__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__78__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__78__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__78__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__78__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__79__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__79__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__79__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__79__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__79__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__79__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__79__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__79__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__79__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__79__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__80__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__80__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__80__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__80__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__80__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__80__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__80__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__80__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__80__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__80__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__81__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__81__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__81__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__81__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__81__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__81__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__81__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__81__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__81__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__81__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__82__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__82__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__82__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__82__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__82__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__82__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__82__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__82__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__82__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__82__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__83__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__83__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__83__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__83__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__83__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__83__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__83__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__83__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__83__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__83__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__84__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__84__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__84__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__84__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__84__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__84__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__84__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__84__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__84__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__84__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__85__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__85__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__85__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__85__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__85__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__85__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__85__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__85__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__85__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__85__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__86__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__86__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__86__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__86__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__86__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__86__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__86__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__86__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__86__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__86__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__87__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__87__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__87__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__87__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__87__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__87__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__87__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__87__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__87__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__87__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__88__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__88__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__88__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__88__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__88__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__88__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__88__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__88__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__88__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__88__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__89__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__89__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__89__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__89__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__89__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__89__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__89__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__89__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__89__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__89__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__90__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__90__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__90__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__90__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__90__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__90__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__90__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__90__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__90__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__90__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__91__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__91__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__91__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__91__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__91__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__91__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__91__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__91__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__91__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__91__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__92__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__92__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__92__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__92__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__92__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__92__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__92__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__92__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__92__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__92__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__93__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__93__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__93__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__93__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__93__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__93__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__93__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__93__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__93__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__93__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__94__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__94__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__94__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__94__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__94__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__94__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__94__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__94__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__94__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__94__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__95__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__95__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__95__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__95__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__95__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__95__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__95__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__95__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__95__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__95__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__96__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__96__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__96__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__96__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__96__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__96__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__96__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__96__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__96__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__96__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__97__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__97__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__97__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__97__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__97__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__97__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__97__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__97__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__97__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__97__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__98__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__98__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__98__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__98__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__98__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__98__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__98__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__98__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__98__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__98__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__99__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__99__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__99__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__99__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__99__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__99__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__99__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__99__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__99__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__99__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__100__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__100__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__100__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__100__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__100__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__100__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__100__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__100__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__100__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__100__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__101__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__101__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__101__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__101__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__101__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__101__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__101__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__101__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__101__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__101__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__102__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__102__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__102__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__102__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__102__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__102__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__102__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__102__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__102__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__102__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__103__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__103__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__103__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__103__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__103__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__103__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__103__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__103__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__103__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__103__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__104__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__104__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__104__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__104__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__104__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__104__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__104__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__104__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__104__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__104__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__105__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__105__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__105__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__105__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__105__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__105__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__105__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__105__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__105__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__105__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__106__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__106__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__106__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__106__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__106__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__106__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__106__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__106__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__106__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__106__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__107__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__107__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__107__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__107__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__107__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__107__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__107__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__107__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__107__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__107__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__108__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__108__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__108__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__108__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__108__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__108__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__108__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__108__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__108__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__108__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__109__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__109__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__109__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__109__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__109__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__109__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__109__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__109__KET____DOT__fsm__0\n"); );
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

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__109__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__109__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__110__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__110__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__110__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__110__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__110__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__110__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}
