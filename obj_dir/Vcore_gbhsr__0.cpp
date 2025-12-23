// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_gbhsr___ico_sequent__TOP__core__fetch_stage__history_reg__0(Vcore_gbhsr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_gbhsr___ico_sequent__TOP__core__fetch_stage__history_reg__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__0__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__0__KET____DOT__biti.q;
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__1__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__1__KET____DOT__biti.q;
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__2__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__2__KET____DOT__biti.q;
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__3__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__3__KET____DOT__biti.q;
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__4__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__4__KET____DOT__biti.q;
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__5__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__5__KET____DOT__biti.q;
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__6__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__6__KET____DOT__biti.q;
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__7__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__7__KET____DOT__biti.q;
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__8__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__8__KET____DOT__biti.q;
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__9__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__9__KET____DOT__biti.q;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__0__KET____DOT__biti.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__1__KET____DOT__biti.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__2__KET____DOT__biti.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__3__KET____DOT__biti.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__4__KET____DOT__biti.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__5__KET____DOT__biti.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__6__KET____DOT__biti.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__7__KET____DOT__biti.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__8__KET____DOT__biti.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__9__KET____DOT__biti.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__0__KET____DOT__biti.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__1__KET____DOT__biti.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__2__KET____DOT__biti.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__3__KET____DOT__biti.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__4__KET____DOT__biti.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__5__KET____DOT__biti.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__6__KET____DOT__biti.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__7__KET____DOT__biti.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__8__KET____DOT__biti.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__9__KET____DOT__biti.reset 
        = vlSelfRef.reset;
    VL_ASSIGNSEL_II(10, 8, 0U, vlSelfRef.history, VL_CONCAT_III(8,4,4, 
                                                                VL_CONCAT_III(4,2,2, 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__Vcellout__gbhsr_dffs__BRA__7__KET____DOT__biti__q), (IData)(vlSelfRef.__Vcellout__gbhsr_dffs__BRA__6__KET____DOT__biti__q)), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__Vcellout__gbhsr_dffs__BRA__5__KET____DOT__biti__q), (IData)(vlSelfRef.__Vcellout__gbhsr_dffs__BRA__4__KET____DOT__biti__q))), 
                                                                VL_CONCAT_III(4,2,2, 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__Vcellout__gbhsr_dffs__BRA__3__KET____DOT__biti__q), (IData)(vlSelfRef.__Vcellout__gbhsr_dffs__BRA__2__KET____DOT__biti__q)), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__Vcellout__gbhsr_dffs__BRA__1__KET____DOT__biti__q), (IData)(vlSelfRef.__Vcellout__gbhsr_dffs__BRA__0__KET____DOT__biti__q)))));
    VL_ASSIGNSEL_II(10, 2, 8U, vlSelfRef.history, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__Vcellout__gbhsr_dffs__BRA__9__KET____DOT__biti__q), (IData)(vlSelfRef.__Vcellout__gbhsr_dffs__BRA__8__KET____DOT__biti__q)));
}

void Vcore_gbhsr___ico_comb__TOP__core__fetch_stage__history_reg__0(Vcore_gbhsr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_gbhsr___ico_comb__TOP__core__fetch_stage__history_reg__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.d = ((IData)(vlSelfRef.valid_in) ? VL_CONCAT_III(10,9,1, 
                                                               (0x000001ffU 
                                                                & VL_SEL_IIII(10, (IData)(vlSelfRef.history), 0U, 9)), (IData)(vlSelfRef.update))
                    : (IData)(vlSelfRef.history));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__0__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 0U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__1__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 1U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__2__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 2U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__3__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 3U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__4__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 4U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__5__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 5U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__6__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 6U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__7__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 7U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__8__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 8U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__9__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 9U));
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__0__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__0__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__1__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__1__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__2__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__2__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__3__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__3__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__4__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__4__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__5__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__5__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__6__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__6__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__7__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__7__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__8__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__8__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__9__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__9__KET____DOT__biti__d;
}

void Vcore_gbhsr___act_sequent__TOP__core__fetch_stage__history_reg__0(Vcore_gbhsr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_gbhsr___act_sequent__TOP__core__fetch_stage__history_reg__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.d = ((IData)(vlSelfRef.valid_in) ? VL_CONCAT_III(10,9,1, 
                                                               (0x000001ffU 
                                                                & VL_SEL_IIII(10, (IData)(vlSelfRef.history), 0U, 9)), (IData)(vlSelfRef.update))
                    : (IData)(vlSelfRef.history));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__0__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 0U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__1__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 1U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__2__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 2U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__3__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 3U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__4__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 4U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__5__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 5U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__6__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 6U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__7__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 7U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__8__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 8U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__9__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 9U));
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__0__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__0__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__1__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__1__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__2__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__2__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__3__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__3__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__4__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__4__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__5__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__5__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__6__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__6__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__7__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__7__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__8__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__8__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__9__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__9__KET____DOT__biti__d;
}

void Vcore_gbhsr___nba_sequent__TOP__core__fetch_stage__history_reg__0(Vcore_gbhsr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_gbhsr___nba_sequent__TOP__core__fetch_stage__history_reg__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__0__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__0__KET____DOT__biti.q;
    VL_ASSIGNBIT_II(0U, vlSelfRef.history, vlSelfRef.__Vcellout__gbhsr_dffs__BRA__0__KET____DOT__biti__q);
}

void Vcore_gbhsr___nba_sequent__TOP__core__fetch_stage__history_reg__1(Vcore_gbhsr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_gbhsr___nba_sequent__TOP__core__fetch_stage__history_reg__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__1__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__1__KET____DOT__biti.q;
    VL_ASSIGNBIT_II(1U, vlSelfRef.history, vlSelfRef.__Vcellout__gbhsr_dffs__BRA__1__KET____DOT__biti__q);
}

void Vcore_gbhsr___nba_sequent__TOP__core__fetch_stage__history_reg__2(Vcore_gbhsr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_gbhsr___nba_sequent__TOP__core__fetch_stage__history_reg__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__2__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__2__KET____DOT__biti.q;
    VL_ASSIGNBIT_II(2U, vlSelfRef.history, vlSelfRef.__Vcellout__gbhsr_dffs__BRA__2__KET____DOT__biti__q);
}

void Vcore_gbhsr___nba_sequent__TOP__core__fetch_stage__history_reg__3(Vcore_gbhsr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_gbhsr___nba_sequent__TOP__core__fetch_stage__history_reg__3\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__3__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__3__KET____DOT__biti.q;
    VL_ASSIGNBIT_II(3U, vlSelfRef.history, vlSelfRef.__Vcellout__gbhsr_dffs__BRA__3__KET____DOT__biti__q);
}

void Vcore_gbhsr___nba_sequent__TOP__core__fetch_stage__history_reg__4(Vcore_gbhsr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_gbhsr___nba_sequent__TOP__core__fetch_stage__history_reg__4\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__4__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__4__KET____DOT__biti.q;
    VL_ASSIGNBIT_II(4U, vlSelfRef.history, vlSelfRef.__Vcellout__gbhsr_dffs__BRA__4__KET____DOT__biti__q);
}

void Vcore_gbhsr___nba_sequent__TOP__core__fetch_stage__history_reg__5(Vcore_gbhsr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_gbhsr___nba_sequent__TOP__core__fetch_stage__history_reg__5\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__5__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__5__KET____DOT__biti.q;
    VL_ASSIGNBIT_II(5U, vlSelfRef.history, vlSelfRef.__Vcellout__gbhsr_dffs__BRA__5__KET____DOT__biti__q);
}

void Vcore_gbhsr___nba_sequent__TOP__core__fetch_stage__history_reg__6(Vcore_gbhsr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_gbhsr___nba_sequent__TOP__core__fetch_stage__history_reg__6\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__6__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__6__KET____DOT__biti.q;
    VL_ASSIGNBIT_II(6U, vlSelfRef.history, vlSelfRef.__Vcellout__gbhsr_dffs__BRA__6__KET____DOT__biti__q);
}

void Vcore_gbhsr___nba_sequent__TOP__core__fetch_stage__history_reg__7(Vcore_gbhsr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_gbhsr___nba_sequent__TOP__core__fetch_stage__history_reg__7\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__7__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__7__KET____DOT__biti.q;
    VL_ASSIGNBIT_II(7U, vlSelfRef.history, vlSelfRef.__Vcellout__gbhsr_dffs__BRA__7__KET____DOT__biti__q);
}

void Vcore_gbhsr___nba_sequent__TOP__core__fetch_stage__history_reg__8(Vcore_gbhsr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_gbhsr___nba_sequent__TOP__core__fetch_stage__history_reg__8\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__8__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__8__KET____DOT__biti.q;
    VL_ASSIGNBIT_II(8U, vlSelfRef.history, vlSelfRef.__Vcellout__gbhsr_dffs__BRA__8__KET____DOT__biti__q);
}

void Vcore_gbhsr___nba_sequent__TOP__core__fetch_stage__history_reg__9(Vcore_gbhsr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_gbhsr___nba_sequent__TOP__core__fetch_stage__history_reg__9\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__9__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__9__KET____DOT__biti.q;
    VL_ASSIGNBIT_II(9U, vlSelfRef.history, vlSelfRef.__Vcellout__gbhsr_dffs__BRA__9__KET____DOT__biti__q);
}

void Vcore_gbhsr___nba_comb__TOP__core__fetch_stage__history_reg__0(Vcore_gbhsr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_gbhsr___nba_comb__TOP__core__fetch_stage__history_reg__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.d = ((IData)(vlSelfRef.valid_in) ? VL_CONCAT_III(10,9,1, 
                                                               (0x000001ffU 
                                                                & VL_SEL_IIII(10, (IData)(vlSelfRef.history), 0U, 9)), (IData)(vlSelfRef.update))
                    : (IData)(vlSelfRef.history));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__0__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 0U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__1__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 1U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__2__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 2U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__3__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 3U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__4__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 4U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__5__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 5U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__6__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 6U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__7__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 7U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__8__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 8U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__9__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 9U));
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__0__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__0__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__1__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__1__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__2__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__2__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__3__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__3__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__4__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__4__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__5__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__5__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__6__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__6__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__7__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__7__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__8__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__8__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__9__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__9__KET____DOT__biti__d;
}
