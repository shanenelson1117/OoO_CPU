// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__0__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__0__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__0__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__0__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__1__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__1__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__1__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__1__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__2__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__2__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__2__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__2__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__3__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__3__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__3__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__3__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__4__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__4__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__4__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__4__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__5__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__5__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__5__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__5__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__6__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__6__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__6__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__6__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__7__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__7__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__7__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__7__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__8__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__8__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__8__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__8__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__9__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__9__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__9__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__9__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__10__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__10__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__10__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__10__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__11__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__11__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__11__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__11__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__12__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__12__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__12__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__12__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__13__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__13__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__13__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__13__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__14__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__14__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__14__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__14__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__15__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__15__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__15__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__15__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__16__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__16__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__16__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__16__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__17__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__17__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__17__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__17__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__18__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__18__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__18__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__18__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__19__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__19__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__19__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__19__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__20__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__20__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__20__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__20__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__21__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__21__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__21__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__21__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__22__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__22__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__22__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__22__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__23__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__23__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__23__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__23__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__24__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__24__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__24__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__24__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__25__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__25__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__25__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__25__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__26__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__26__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__26__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__26__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__27__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__27__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__27__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__27__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__28__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__28__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__28__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__28__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__29__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__29__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__29__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__29__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__30__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__30__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__30__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__30__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__31__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__31__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__31__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__31__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__32__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__32__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__32__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__32__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__33__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__33__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__33__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__33__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__34__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__34__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__34__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__34__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__35__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__35__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__35__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__35__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__36__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__36__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__36__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__36__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__37__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__37__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__37__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__37__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__38__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__38__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__38__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__38__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__39__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__39__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__39__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__39__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__40__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__40__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__40__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__40__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__41__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__41__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__41__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__41__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__42__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__42__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__42__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__42__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__43__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__43__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__43__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__43__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__44__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__44__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__44__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__44__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__45__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__45__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__45__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__45__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__46__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__46__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__46__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__46__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__47__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__47__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__47__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__47__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__48__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__48__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__48__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__48__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__49__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__49__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__49__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__49__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__50__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__50__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__50__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__50__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__51__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__51__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__51__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__51__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__52__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__52__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__52__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__52__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__53__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__53__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__53__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__53__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__54__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__54__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__54__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__54__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__55__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__55__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__55__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__55__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__56__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__56__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__56__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__56__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__57__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__57__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__57__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__57__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__58__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__58__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__58__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__58__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__59__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__59__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__59__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__59__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__60__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__60__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__60__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__60__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__61__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__61__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__61__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__61__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__62__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__62__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__62__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__62__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__63__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__63__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__63__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__63__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__64__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__64__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__64__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__64__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__65__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__65__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__65__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__65__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__66__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__66__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__66__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__66__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__67__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__67__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__67__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__67__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__68__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__68__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__68__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__68__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__69__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__69__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__69__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__69__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__70__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__70__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__70__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__70__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__71__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__71__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__71__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__71__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__72__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__72__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__72__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__72__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__73__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__73__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__73__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__73__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__74__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__74__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__74__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__74__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__75__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__75__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__75__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__75__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__76__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__76__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__76__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__76__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__77__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__77__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__77__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__77__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__78__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__78__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__78__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__78__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__79__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__79__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__79__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__79__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__80__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__80__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__80__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__80__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__81__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__81__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__81__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__81__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__82__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__82__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__82__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__82__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__83__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__83__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__83__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__83__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__84__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__84__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__84__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__84__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__85__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__85__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__85__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__85__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__86__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__86__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__86__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__86__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__87__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__87__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__87__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__87__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__88__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__88__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__88__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__88__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__89__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__89__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__89__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__89__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__90__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__90__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__90__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__90__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__91__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__91__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__91__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__91__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__92__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__92__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__92__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__92__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__93__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__93__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__93__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__93__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__94__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__94__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__94__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__94__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__95__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__95__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__95__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__95__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__96__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__96__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__96__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__96__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__97__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__97__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__97__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__97__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__98__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__98__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__98__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__98__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__99__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__99__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__99__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__99__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__100__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__100__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__100__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__100__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__101__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__101__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__101__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__101__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__102__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__102__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__102__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__102__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__103__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__103__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__103__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__103__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__104__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__104__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__104__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__104__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__105__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__105__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__105__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__105__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__106__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__106__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__106__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__106__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__107__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__107__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__107__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__107__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__108__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__108__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__108__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__108__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__109__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__109__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__109__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__109__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__110__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__110__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__110__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__110__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__111__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__111__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__111__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__111__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__112__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__112__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__112__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__112__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__113__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__113__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__113__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__113__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__114__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__114__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__114__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__114__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__115__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__115__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__115__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__115__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__116__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__116__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__116__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__116__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__117__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__117__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__117__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__117__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__118__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__118__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__118__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__118__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__119__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__119__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__119__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__119__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__120__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__120__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__120__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__120__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__121__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__121__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__121__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__121__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__122__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__122__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__122__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__122__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__123__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__123__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__123__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__123__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__124__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__124__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__124__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__124__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__125__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__125__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__125__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__125__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__126__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__126__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__126__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__126__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__127__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__127__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__127__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__127__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__128__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__128__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__128__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__128__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__129__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__129__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__129__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__129__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__130__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__130__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__130__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__130__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__131__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__131__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__131__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__131__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__132__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__132__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__132__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__132__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__133__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__133__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__133__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__133__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__134__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__134__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__134__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__134__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__135__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__135__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__135__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__135__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__136__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__136__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__136__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__136__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__137__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__137__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__137__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__137__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__138__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__138__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__138__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__138__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__139__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__139__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__139__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__139__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__140__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__140__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__140__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__140__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__141__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__141__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__141__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__141__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__142__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__142__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__142__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__142__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__143__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__143__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__143__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__143__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__144__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__144__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__144__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__144__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__145__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__145__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__145__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__145__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__146__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__146__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__146__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__146__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__147__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__147__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__147__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__147__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__148__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__148__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__148__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__148__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__149__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__149__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__149__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__149__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__150__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__150__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__150__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__150__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__151__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__151__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__151__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__151__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__152__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__152__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__152__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__152__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__153__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__153__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__153__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__153__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__154__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__154__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__154__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__154__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__155__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__155__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__155__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__155__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__156__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__156__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__156__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__156__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__157__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__157__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__157__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__157__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__158__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__158__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__158__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__158__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__159__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__159__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__159__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__159__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__160__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__160__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__160__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__160__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__161__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__161__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__161__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__161__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__162__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__162__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__162__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__162__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__163__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__163__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__163__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__163__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__164__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__164__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__164__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__164__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__165__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__165__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__165__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__165__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__166__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__166__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__166__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__166__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__167__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__167__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__167__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__167__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__168__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__168__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__168__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__168__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__169__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__169__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__169__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__169__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__170__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__170__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__170__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__170__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__171__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__171__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__171__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__171__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__172__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__172__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__172__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__172__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__173__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__173__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__173__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__173__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__174__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__174__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__174__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__174__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__175__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__175__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__175__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__175__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__176__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__176__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__176__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__176__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__177__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__177__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__177__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__177__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__178__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__178__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__178__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__178__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__179__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__179__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__179__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__179__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__180__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__180__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__180__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__180__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__181__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__181__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__181__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__181__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__182__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__182__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__182__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__182__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__183__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__183__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__183__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__183__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__184__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__184__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__184__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__184__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__185__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__185__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__185__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__185__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__186__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__186__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__186__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__186__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__187__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__187__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__187__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__187__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__188__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__188__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__188__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__188__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__189__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__189__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__189__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__189__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__190__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__190__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__190__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__190__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__191__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__191__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__191__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__191__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__192__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__192__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__192__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__192__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__193__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__193__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__193__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__193__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__194__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__194__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__194__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__194__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__195__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__195__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__195__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__195__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__196__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__196__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__196__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__196__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__197__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__197__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__197__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__197__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__198__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__198__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__198__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__198__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__199__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__199__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__199__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__199__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__200__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__200__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__200__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__200__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__201__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__201__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__201__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__201__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__202__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__202__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__202__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__202__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__203__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__203__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__203__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__203__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__204__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__204__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__204__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__204__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__205__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__205__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__205__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__205__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__206__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__206__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__206__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__206__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__207__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__207__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__207__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__207__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__208__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__208__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__208__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__208__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__209__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__209__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__209__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__209__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__210__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__210__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__210__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__210__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__211__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__211__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__211__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__211__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__212__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__212__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__212__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__212__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__213__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__213__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__213__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__213__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__214__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__214__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__214__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__214__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__215__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__215__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__215__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__215__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__216__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__216__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__216__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__216__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__217__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__217__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__217__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__217__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__218__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__218__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__218__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__218__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__219__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__219__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__219__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__219__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__220__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__220__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__220__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__220__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__221__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__221__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__221__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__221__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__222__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__222__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__222__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__222__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__223__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__223__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__223__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__223__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__224__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__224__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__224__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__224__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__225__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__225__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__225__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__225__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__226__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__226__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__226__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__226__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__227__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__227__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__227__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__227__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__228__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__228__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__228__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__228__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__229__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__229__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__229__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__229__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__230__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__230__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__230__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__230__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__231__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__231__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__231__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__231__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__232__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__232__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__232__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__232__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__233__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__233__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__233__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__233__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__234__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__234__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__234__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__234__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__235__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__235__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__235__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__235__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__236__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__236__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__236__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__236__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__237__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__237__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__237__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__237__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__238__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__238__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__238__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__238__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__239__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__239__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__239__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__239__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__240__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__240__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__240__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__240__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__241__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__241__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__241__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__241__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__242__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__242__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__242__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__242__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__243__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__243__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__243__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__243__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__244__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__244__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__244__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__244__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__245__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__245__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__245__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__245__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__246__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__246__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__246__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__246__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__247__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__247__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__247__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__247__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__248__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__248__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__248__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__248__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__249__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__249__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__249__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__249__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__250__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__250__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__250__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__250__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__251__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__251__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__251__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__251__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__252__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__252__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__252__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__252__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__253__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__253__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__253__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__253__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__254__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__254__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__254__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__254__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__255__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__255__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__255__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__255__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__256__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__256__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__256__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__256__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__257__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__257__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__257__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__257__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__258__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__258__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__258__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__258__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__259__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__259__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__259__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__259__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__260__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__260__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__260__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__260__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__261__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__261__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__261__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__261__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__262__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__262__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__262__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__262__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__263__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__263__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__263__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__263__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__264__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__264__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__264__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__264__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__265__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__265__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__265__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__265__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__266__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__266__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__266__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__266__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__267__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__267__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__267__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__267__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__268__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__268__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__268__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__268__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__269__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__269__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__269__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__269__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__270__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__270__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__270__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__270__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__271__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__271__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__271__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__271__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__272__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__272__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__272__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__272__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__273__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__273__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__273__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__273__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__274__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__274__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__274__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__274__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__275__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__275__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__275__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__275__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__276__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__276__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__276__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__276__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__277__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__277__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__277__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__277__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__278__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__278__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__278__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__278__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__279__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__279__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__279__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__279__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__280__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__280__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__280__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__280__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__281__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__281__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__281__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__281__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__282__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__282__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__282__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__282__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__283__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__283__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__283__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__283__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__284__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__284__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__284__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__284__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__285__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__285__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__285__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__285__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__286__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__286__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__286__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__286__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__287__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__287__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__287__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__287__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__288__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__288__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__288__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__288__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__289__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__289__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__289__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__289__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__290__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__290__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__290__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__290__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__291__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__291__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__291__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__291__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__292__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__292__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__292__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__292__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__293__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__293__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__293__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__293__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__294__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__294__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__294__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__294__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__295__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__295__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__295__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__295__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__296__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__296__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__296__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__296__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__297__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__297__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__297__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__297__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__298__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__298__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__298__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__298__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__299__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__299__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__299__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__299__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__300__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__300__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__300__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__300__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__301__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__301__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__301__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__301__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__302__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__302__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__302__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__302__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__303__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__303__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__303__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__303__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__304__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__304__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__304__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__304__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__305__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__305__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__305__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__305__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__306__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__306__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__306__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__306__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__307__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__307__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__307__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__307__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__308__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__308__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__308__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__308__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__309__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__309__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__309__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__309__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__310__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__310__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__310__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__310__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__311__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__311__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__311__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__311__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__312__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__312__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__312__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__312__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__313__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__313__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__313__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__313__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__314__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__314__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__314__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__314__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__315__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__315__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__315__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__315__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__316__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__316__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__316__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__316__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__317__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__317__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__317__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__317__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__318__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__318__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__318__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__318__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__319__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__319__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__319__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__319__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__320__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__320__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__320__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__320__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__321__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__321__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__321__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__321__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__322__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__322__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__322__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__322__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__323__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__323__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__323__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__323__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__324__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__324__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__324__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__324__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__325__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__325__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__325__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__325__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__326__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__326__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__326__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__326__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__327__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__327__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__327__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__327__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__328__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__328__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__328__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__328__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__329__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__329__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__329__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__329__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__330__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__330__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__330__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__330__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__331__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__331__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__331__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__331__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__332__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__332__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__332__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__332__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__333__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__333__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__333__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__333__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__334__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__334__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__334__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__334__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__335__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__335__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__335__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__335__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__336__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__336__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__336__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__336__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__337__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__337__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__337__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__337__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__338__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__338__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__338__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__338__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__339__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__339__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__339__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__339__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__340__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__340__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__340__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__340__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__341__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__341__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__341__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__341__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__342__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__342__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__342__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__342__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__343__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__343__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__343__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__343__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__344__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_sequent__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__344__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.ps), 1U));
}

VL_ATTR_COLD void Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__344__KET____DOT__fsm__0(Vcore_two_bit_predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_two_bit_predictor___stl_comb__TOP__core__fetch_stage__pred_buffer__bpb_fsms__BRA__344__KET____DOT__fsm__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 1U
                         : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 2U
                         : 0U);
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.update) ? 3U
                         : 2U);
    }
}
