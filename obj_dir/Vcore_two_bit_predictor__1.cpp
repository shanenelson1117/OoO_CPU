// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__110__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__110__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__110__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__110__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__111__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__111__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__111__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__111__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__111__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__111__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__111__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__111__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__111__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__111__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__112__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__112__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__112__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__112__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__112__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__112__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__112__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__112__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__112__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__112__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__113__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__113__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__113__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__113__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__113__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__113__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__113__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__113__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__113__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__113__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__114__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__114__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__114__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__114__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__114__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__114__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__114__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__114__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__114__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__114__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__115__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__115__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__115__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__115__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__115__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__115__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__115__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__115__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__115__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__115__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__116__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__116__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__116__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__116__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__116__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__116__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__116__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__116__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__116__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__116__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__117__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__117__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__117__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__117__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__117__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__117__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__117__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__117__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__117__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__117__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__118__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__118__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__118__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__118__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__118__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__118__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__118__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__118__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__118__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__118__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__119__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__119__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__119__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__119__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__119__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__119__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__119__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__119__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__119__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__119__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__120__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__120__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__120__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__120__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__120__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__120__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__120__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__120__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__120__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__120__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__121__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__121__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__121__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__121__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__121__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__121__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__121__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__121__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__121__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__121__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__122__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__122__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__122__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__122__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__122__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__122__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__122__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__122__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__122__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__122__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__123__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__123__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__123__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__123__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__123__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__123__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__123__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__123__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__123__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__123__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__124__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__124__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__124__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__124__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__124__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__124__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__124__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__124__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__124__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__124__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__125__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__125__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__125__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__125__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__125__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__125__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__125__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__125__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__125__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__125__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__126__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__126__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__126__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__126__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__126__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__126__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__126__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__126__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__126__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__126__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__127__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__127__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__127__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__127__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__127__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__127__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__127__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__127__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__127__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__127__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__128__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__128__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__128__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__128__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__128__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__128__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__128__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__128__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__128__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__128__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__129__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__129__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__129__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__129__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__129__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__129__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__129__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__129__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__129__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__129__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__130__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__130__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__130__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__130__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__130__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__130__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__130__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__130__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__130__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__130__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__131__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__131__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__131__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__131__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__131__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__131__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__131__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__131__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__131__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__131__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__132__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__132__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__132__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__132__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__132__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__132__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__132__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__132__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__132__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__132__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__133__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__133__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__133__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__133__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__133__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__133__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__133__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__133__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__133__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__133__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__134__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__134__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__134__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__134__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__134__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__134__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__134__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__134__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__134__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__134__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__135__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__135__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__135__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__135__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__135__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__135__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__135__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__135__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__135__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__135__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__136__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__136__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__136__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__136__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__136__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__136__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__136__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__136__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__136__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__136__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__137__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__137__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__137__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__137__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__137__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__137__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__137__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__137__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__137__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__137__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__138__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__138__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__138__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__138__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__138__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__138__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__138__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__138__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__138__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__138__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__139__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__139__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__139__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__139__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__139__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__139__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__139__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__139__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__139__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__139__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__140__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__140__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__140__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__140__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__140__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__140__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__140__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__140__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__140__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__140__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__141__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__141__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__141__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__141__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__141__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__141__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__141__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__141__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__141__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__141__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__142__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__142__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__142__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__142__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__142__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__142__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__142__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__142__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__142__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__142__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__143__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__143__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__143__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__143__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__143__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__143__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__143__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__143__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__143__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__143__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__144__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__144__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__144__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__144__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__144__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__144__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__144__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__144__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__144__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__144__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__145__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__145__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__145__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__145__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__145__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__145__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__145__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__145__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__145__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__145__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__146__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__146__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__146__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__146__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__146__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__146__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__146__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__146__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__146__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__146__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__147__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__147__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__147__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__147__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__147__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__147__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__147__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__147__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__147__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__147__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__148__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__148__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__148__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__148__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__148__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__148__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__148__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__148__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__148__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__148__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__149__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__149__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__149__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__149__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__149__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__149__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__149__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__149__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__149__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__149__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__150__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__150__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__150__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__150__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__150__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__150__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__150__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__150__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__150__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__150__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__151__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__151__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__151__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__151__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__151__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__151__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__151__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__151__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__151__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__151__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__152__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__152__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__152__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__152__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__152__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__152__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__152__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__152__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__152__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__152__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__153__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__153__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__153__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__153__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__153__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__153__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__153__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__153__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__153__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__153__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__154__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__154__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__154__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__154__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__154__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__154__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__154__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__154__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__154__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__154__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__155__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__155__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__155__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__155__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__155__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__155__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__155__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__155__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__155__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__155__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__156__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__156__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__156__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__156__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__156__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__156__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__156__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__156__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__156__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__156__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__157__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__157__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__157__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__157__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__157__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__157__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__157__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__157__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__157__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__157__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__158__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__158__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__158__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__158__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__158__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__158__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__158__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__158__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__158__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__158__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__159__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__159__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__159__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__159__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__159__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__159__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__159__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__159__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__159__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__159__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__160__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__160__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__160__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__160__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__160__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__160__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__160__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__160__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__160__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__160__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__161__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__161__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__161__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__161__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__161__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__161__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__161__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__161__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__161__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__161__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__162__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__162__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__162__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__162__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__162__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__162__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__162__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__162__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__162__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__162__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__163__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__163__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__163__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__163__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__163__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__163__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__163__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__163__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__163__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__163__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__164__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__164__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__164__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__164__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__164__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__164__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__164__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__164__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__164__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__164__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__165__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__165__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__165__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__165__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__165__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__165__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__165__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__165__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__165__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__165__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__166__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__166__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__166__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__166__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__166__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__166__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__166__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__166__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__166__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__166__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__167__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__167__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__167__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__167__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__167__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__167__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__167__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__167__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__167__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__167__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__168__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__168__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__168__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__168__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__168__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__168__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__168__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__168__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__168__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__168__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__169__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__169__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__169__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__169__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__169__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__169__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__169__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__169__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__169__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__169__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__170__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__170__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__170__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__170__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__170__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__170__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__170__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__170__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__170__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__170__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__171__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__171__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__171__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__171__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__171__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__171__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__171__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__171__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__171__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__171__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__172__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__172__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__172__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__172__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__172__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__172__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__172__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__172__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__172__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__172__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__173__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__173__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__173__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__173__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__173__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__173__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__173__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__173__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__173__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__173__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__174__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__174__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__174__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__174__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__174__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__174__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__174__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__174__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__174__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__174__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__175__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__175__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__175__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__175__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__175__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__175__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__175__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__175__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__175__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__175__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__176__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__176__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__176__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__176__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__176__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__176__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__176__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__176__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__176__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__176__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__177__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__177__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__177__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__177__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__177__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__177__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__177__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__177__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__177__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__177__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__178__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__178__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__178__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__178__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__178__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__178__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__178__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__178__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__178__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__178__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__179__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__179__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__179__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__179__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__179__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__179__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__179__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__179__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__179__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__179__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__180__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__180__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__180__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__180__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__180__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__180__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__180__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__180__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__180__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__180__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__181__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__181__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__181__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__181__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__181__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__181__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__181__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__181__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__181__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__181__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__182__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__182__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__182__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__182__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__182__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__182__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__182__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__182__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__182__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__182__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__183__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__183__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__183__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__183__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__183__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__183__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__183__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__183__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__183__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__183__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__184__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__184__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__184__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__184__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__184__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__184__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__184__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__184__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__184__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__184__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__185__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__185__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__185__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__185__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__185__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__185__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__185__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__185__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__185__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__185__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__186__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__186__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__186__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__186__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__186__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__186__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__186__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__186__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__186__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__186__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__187__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__187__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__187__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__187__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__187__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__187__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__187__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__187__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__187__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__187__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__188__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__188__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__188__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__188__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__188__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__188__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__188__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__188__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__188__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__188__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__189__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__189__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__189__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__189__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__189__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__189__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__189__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__189__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__189__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__189__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__190__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__190__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__190__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__190__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__190__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__190__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__190__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__190__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__190__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__190__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__191__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__191__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__191__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__191__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__191__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__191__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__191__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__191__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__191__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__191__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__192__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__192__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__192__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__192__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__192__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__192__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__192__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__192__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__192__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__192__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__193__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__193__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__193__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__193__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__193__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__193__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__193__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__193__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__193__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__193__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__194__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__194__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__194__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__194__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__194__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__194__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__194__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__194__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__194__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__194__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__195__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__195__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__195__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__195__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__195__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__195__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__195__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__195__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__195__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__195__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__196__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__196__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__196__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__196__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__196__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__196__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__196__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__196__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__196__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__196__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__197__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__197__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__197__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__197__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__197__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__197__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__197__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__197__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__197__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__197__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__198__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__198__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__198__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__198__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__198__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__198__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__198__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__198__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__198__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__198__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__199__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__199__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__199__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__199__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__199__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__199__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__199__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__199__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__199__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__199__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__200__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__200__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__200__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__200__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__200__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__200__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__200__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__200__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__200__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__200__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__201__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__201__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__201__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__201__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__201__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__201__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__201__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__201__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__201__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__201__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__202__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__202__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__202__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__202__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__202__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__202__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__202__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__202__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__202__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__202__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__203__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__203__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__203__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__203__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__203__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__203__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__203__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__203__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__203__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__203__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__204__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__204__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__204__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__204__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__204__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__204__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__204__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__204__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__204__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__204__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__205__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__205__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__205__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__205__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__205__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__205__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__205__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__205__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__205__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__205__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__206__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__206__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__206__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__206__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__206__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__206__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__206__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__206__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__206__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__206__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__207__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__207__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__207__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__207__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__207__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__207__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__207__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__207__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__207__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__207__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__208__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__208__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__208__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__208__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__208__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__208__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__208__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__208__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__208__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__208__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__209__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__209__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__209__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__209__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__209__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__209__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__209__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__209__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__209__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__209__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__210__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__210__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__210__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__210__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__210__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__210__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__210__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__210__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__210__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__210__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__211__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__211__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__211__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__211__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__211__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__211__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__211__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__211__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__211__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__211__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__212__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__212__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__212__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__212__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__212__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__212__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__212__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__212__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__212__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__212__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__213__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__213__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__213__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__213__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__213__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__213__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__213__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__213__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__213__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__213__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__214__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__214__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__214__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__214__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__214__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__214__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__214__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__214__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__214__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__214__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__215__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__215__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__215__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__215__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__215__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__215__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__215__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__215__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__215__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__215__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__216__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__216__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__216__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__216__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__216__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__216__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__216__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__216__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__216__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__216__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__217__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__217__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__217__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__217__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__217__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__217__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__217__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__217__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__217__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__217__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__218__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__218__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__218__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__218__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__218__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__218__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__218__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__218__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__218__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__218__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__219__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__219__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__219__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__219__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__219__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__219__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__219__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__219__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__219__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__219__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__220__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__220__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__220__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__220__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__220__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___act_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__220__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__220__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__220__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ps = 1U;
    } else if (vlSelfRef.valid) {
        vlSelfRef.__Vdly__ps = vlSelfRef.ns;
    }
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__220__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___nba_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__220__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

void Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__221__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__221__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

void Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__221__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___ico_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__221__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}
