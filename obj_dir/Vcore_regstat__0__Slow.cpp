// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_regstat___eval_initial__TOP__core__reg_status_register(Vcore_regstat* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_regstat___eval_initial__TOP__core__reg_status_register\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_II(5, 4, 1U, vlSelfRef.reg_status_table
                    [0U], 0U);
    VL_ASSIGNBIT_II(0U, vlSelfRef.reg_status_table[0U], 0U);
}

VL_ATTR_COLD void Vcore_regstat___stl_sequent__TOP__core__reg_status_register__0(Vcore_regstat* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_regstat___stl_sequent__TOP__core__reg_status_register__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__1__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__1__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__2__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__2__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__3__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__3__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__4__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__4__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__5__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__5__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__6__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__6__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__7__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__7__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__8__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__8__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__9__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__9__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__10__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__10__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__11__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__11__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__12__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__12__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__13__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__13__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__14__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__14__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__15__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__15__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__16__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__16__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__17__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__17__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__18__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__18__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__19__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__19__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__20__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__20__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__21__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__21__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__22__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__22__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__23__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__23__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__24__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__24__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__25__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__25__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__26__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__26__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__27__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__27__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__28__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__28__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__29__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__29__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__30__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__30__KET____DOT__stat_i.q;
    vlSelfRef.__Vcellout__reg_stat_entries__BRA__31__KET____DOT__stat_i__q 
        = vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__31__KET____DOT__stat_i.q;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__1__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__2__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__3__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__4__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__5__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__6__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__7__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__8__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__9__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__10__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__11__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__12__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__13__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__14__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__15__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__16__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__17__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__18__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__19__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__20__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__21__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__22__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__23__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__24__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__25__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__26__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__27__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__28__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__29__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__30__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__31__KET____DOT__stat_i.clk 
        = vlSelfRef.clk;
    vlSelfRef.reg_status_table[1U] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__1__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[2U] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__2__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[3U] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__3__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[4U] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__4__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[5U] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__5__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[6U] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__6__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[7U] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__7__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[8U] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__8__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[9U] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__9__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[0x0aU] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__10__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[0x0bU] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__11__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[0x0cU] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__12__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[0x0dU] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__13__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[0x0eU] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__14__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[0x0fU] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__15__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[0x10U] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__16__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[0x11U] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__17__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[0x12U] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__18__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[0x13U] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__19__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[0x14U] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__20__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[0x15U] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__21__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[0x16U] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__22__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[0x17U] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__23__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[0x18U] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__24__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[0x19U] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__25__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[0x1aU] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__26__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[0x1bU] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__27__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[0x1cU] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__28__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[0x1dU] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__29__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[0x1eU] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__30__KET____DOT__stat_i__q;
    vlSelfRef.reg_status_table[0x1fU] = vlSelfRef.__Vcellout__reg_stat_entries__BRA__31__KET____DOT__stat_i__q;
}

VL_ATTR_COLD void Vcore_regstat___stl_sequent__TOP__core__reg_status_register__1(Vcore_regstat* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_regstat___stl_sequent__TOP__core__reg_status_register__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.d = VL_CONCAT_III(5,4,1, (IData)(vlSelfRef.issue_ROB), 1U);
    vlSelfRef.Q_j = (0x0000000fU & VL_SEL_IIII(5, vlSelfRef.reg_status_table
                                               [vlSelfRef.rs1], 1U, 4));
    vlSelfRef.Q_k = (0x0000000fU & VL_SEL_IIII(5, vlSelfRef.reg_status_table
                                               [vlSelfRef.rs2], 1U, 4));
    vlSelfRef.rs1reg_busy = (1U & VL_BITSEL_IIII(5, 
                                                 vlSelfRef.reg_status_table
                                                 [vlSelfRef.rs1], 0U));
    vlSelfRef.rs2reg_busy = (1U & VL_BITSEL_IIII(5, 
                                                 vlSelfRef.reg_status_table
                                                 [vlSelfRef.rs2], 0U));
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__1__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__2__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__3__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__4__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__5__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__6__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__7__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__8__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__9__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__10__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__11__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__12__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__13__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__14__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__15__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__16__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__17__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__18__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__19__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__20__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__21__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__22__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__23__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__24__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__25__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__26__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__27__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__28__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__29__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__30__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__31__KET____DOT__stat_i.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__1__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__2__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__3__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__4__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__5__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__6__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__7__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__8__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__9__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__10__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__11__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__12__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__13__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__14__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__15__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__16__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__17__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__18__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__19__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__20__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__21__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__22__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__23__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__24__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__25__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__26__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__27__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__28__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__29__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__30__KET____DOT__stat_i.d 
        = vlSelfRef.d;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__31__KET____DOT__stat_i.d 
        = vlSelfRef.d;
}

VL_ATTR_COLD void Vcore_regstat___stl_comb__TOP__core__reg_status_register__0(Vcore_regstat* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_regstat___stl_comb__TOP__core__reg_status_register__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__reg_status_register__enable_decode.sel 
        = vlSelfRef.issue_dest;
    vlSymsp->TOP__core__reg_status_register__enable_decode.enable 
        = vlSelfRef.issue_writes;
}

VL_ATTR_COLD void Vcore_regstat___stl_comb__TOP__core__reg_status_register__1(Vcore_regstat* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_regstat___stl_comb__TOP__core__reg_status_register__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.enable_bus = vlSymsp->TOP__core__reg_status_register__enable_decode.out;
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__1__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 1U));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__2__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 2U));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__3__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 3U));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__4__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 4U));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__5__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 5U));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__6__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 6U));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__7__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 7U));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__8__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 8U));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__9__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 9U));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__10__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 0x0aU));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__11__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 0x0bU));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__12__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 0x0cU));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__13__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 0x0dU));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__14__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 0x0eU));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__15__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 0x0fU));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__16__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 0x10U));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__17__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 0x11U));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__18__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 0x12U));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__19__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 0x13U));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__20__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 0x14U));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__21__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 0x15U));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__22__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 0x16U));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__23__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 0x17U));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__24__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 0x18U));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__25__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 0x19U));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__26__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 0x1aU));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__27__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 0x1bU));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__28__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 0x1cU));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__29__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 0x1dU));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__30__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 0x1eU));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__31__KET____DOT__stat_i__write_en 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.enable_bus, 0x1fU));
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__1__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__1__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__2__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__2__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__3__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__3__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__4__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__4__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__5__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__5__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__6__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__6__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__7__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__7__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__8__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__8__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__9__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__9__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__10__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__10__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__11__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__11__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__12__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__12__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__13__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__13__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__14__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__14__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__15__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__15__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__16__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__16__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__17__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__17__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__18__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__18__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__19__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__19__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__20__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__20__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__21__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__21__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__22__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__22__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__23__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__23__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__24__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__24__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__25__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__25__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__26__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__26__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__27__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__27__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__28__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__28__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__29__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__29__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__30__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__30__KET____DOT__stat_i__write_en;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__31__KET____DOT__stat_i.write_en 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__31__KET____DOT__stat_i__write_en;
}

VL_ATTR_COLD void Vcore_regstat___stl_comb__TOP__core__reg_status_register__2(Vcore_regstat* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_regstat___stl_comb__TOP__core__reg_status_register__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__reg_status_register__reset_decode.sel 
        = vlSelfRef.commit_dest;
}

VL_ATTR_COLD void Vcore_regstat___stl_comb__TOP__core__reg_status_register__3(Vcore_regstat* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_regstat___stl_comb__TOP__core__reg_status_register__3\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reset_enable = (((0x0000000fU & VL_SEL_IIII(5, 
                                                          vlSelfRef.reg_status_table
                                                          [vlSelfRef.commit_dest], 1U, 4)) 
                               == (IData)(vlSelfRef.commit_ROB)) 
                              & (~ (((IData)(vlSelfRef.issue_dest) 
                                     == (IData)(vlSelfRef.commit_dest)) 
                                    & (IData)(vlSelfRef.issue_writes))));
    vlSymsp->TOP__core__reg_status_register__reset_decode.enable 
        = vlSelfRef.reset_enable;
}

VL_ATTR_COLD void Vcore_regstat___stl_comb__TOP__core__reg_status_register__4(Vcore_regstat* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_regstat___stl_comb__TOP__core__reg_status_register__4\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reset_bus = vlSymsp->TOP__core__reg_status_register__reset_decode.out;
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__1__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 1U) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__2__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 2U) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__3__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 3U) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__4__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 4U) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__5__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 5U) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__6__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 6U) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__7__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 7U) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__8__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 8U) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__9__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 9U) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__10__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 0x0aU) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__11__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 0x0bU) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__12__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 0x0cU) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__13__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 0x0dU) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__14__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 0x0eU) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__15__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 0x0fU) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__16__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 0x10U) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__17__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 0x11U) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__18__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 0x12U) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__19__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 0x13U) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__20__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 0x14U) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__21__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 0x15U) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__22__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 0x16U) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__23__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 0x17U) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__24__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 0x18U) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__25__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 0x19U) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__26__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 0x1aU) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__27__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 0x1bU) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__28__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 0x1cU) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__29__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 0x1dU) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__30__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 0x1eU) 
           & (IData)(vlSelfRef.RegWrite));
    vlSelfRef.__Vcellinp__reg_stat_entries__BRA__31__KET____DOT__stat_i__clear 
        = (VL_BITSEL_IIII(32, vlSelfRef.reset_bus, 0x1fU) 
           & (IData)(vlSelfRef.RegWrite));
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__1__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__1__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__2__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__2__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__3__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__3__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__4__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__4__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__5__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__5__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__6__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__6__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__7__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__7__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__8__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__8__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__9__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__9__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__10__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__10__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__11__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__11__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__12__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__12__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__13__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__13__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__14__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__14__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__15__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__15__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__16__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__16__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__17__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__17__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__18__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__18__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__19__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__19__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__20__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__20__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__21__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__21__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__22__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__22__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__23__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__23__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__24__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__24__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__25__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__25__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__26__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__26__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__27__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__27__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__28__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__28__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__29__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__29__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__30__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__30__KET____DOT__stat_i__clear;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__31__KET____DOT__stat_i.clear 
        = vlSelfRef.__Vcellinp__reg_stat_entries__BRA__31__KET____DOT__stat_i__clear;
}

VL_ATTR_COLD void Vcore_regstat___stl_comb__TOP__core__reg_status_register__5(Vcore_regstat* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_regstat___stl_comb__TOP__core__reg_status_register__5\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__1__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__2__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__3__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__4__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__5__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__6__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__7__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__8__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__9__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__10__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__11__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__12__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__13__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__14__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__15__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__16__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__17__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__18__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__19__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__20__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__21__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__22__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__23__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__24__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__25__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__26__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__27__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__28__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__29__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__30__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__reg_status_register__reg_stat_entries__BRA__31__KET____DOT__stat_i.reset 
        = vlSelfRef.reset;
}

VL_ATTR_COLD void Vcore_regstat___ctor_var_reset(Vcore_regstat* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_regstat___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10211807078052224816ull);
    vlSelf->rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 392999376545494891ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->issue_writes = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15153084133952738016ull);
    vlSelf->RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3806711693106967809ull);
    vlSelf->commit_dest = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 736259882609744895ull);
    vlSelf->issue_dest = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11940087933589456684ull);
    vlSelf->commit_ROB = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5206458954467531095ull);
    vlSelf->issue_ROB = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8735798383957513358ull);
    vlSelf->stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7179230919112499263ull);
    vlSelf->Q_j = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13101064098374966050ull);
    vlSelf->Q_k = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8213264214307608121ull);
    vlSelf->rs1reg_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9311950891482279135ull);
    vlSelf->rs2reg_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8460084214161007516ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->reg_status_table[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6036292114276187971ull);
    }
    vlSelf->d = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1720370409040345145ull);
    vlSelf->reset_bus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12705513374888879883ull);
    vlSelf->enable_bus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5407736553279334814ull);
    vlSelf->reset_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9486116574124460597ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__1__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9440212347175057708ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__1__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2371537579987379584ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__1__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1284874799712960175ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__2__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4115953185271365631ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__2__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10510771846173344488ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__2__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 605953020907903395ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__3__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4545953435226239496ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__3__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13203087477170298696ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__3__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11785589153071030736ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__4__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5631054874212025048ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__4__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3150449486939265307ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__4__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 75352905578548886ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__5__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11730367602110900645ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__5__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4605350387257880497ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__5__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8774232590275379504ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__6__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10621254520577392146ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__6__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11047201750406236254ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__6__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9813718690775239775ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__7__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13734192958755568025ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__7__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 800690387620892446ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__7__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7172188170888578660ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__8__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14487119763720120875ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__8__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9646430490214339961ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__8__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12727159185773262240ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__9__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8727554977437559727ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__9__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4834091921161510123ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__9__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5790319452525476771ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__10__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7088208639450084332ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__10__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 946645346829626858ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__10__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 658181334577841666ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__11__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17257621037252592443ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__11__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5196471076994596852ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__11__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8741697188383151494ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__12__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8929141294891101894ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__12__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17887839993629823804ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__12__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10863119310472119353ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__13__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11825594336466646593ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__13__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5355650599000061296ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__13__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11802389864725686677ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__14__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17509317529981555599ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__14__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12593570284238142483ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__14__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14613597315036956676ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__15__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17377251401914992841ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__15__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16926739050209099123ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__15__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2151878169833039366ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__16__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16351632191301869254ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__16__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5247365014797311241ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__16__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10409051456029530553ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__17__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1354275453778458618ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__17__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14204557238139775765ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__17__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3721387944743348260ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__18__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16962972728279362203ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__18__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 878252480819870720ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__18__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11652138665717105895ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__19__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3946836306613319919ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__19__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9550509328844581125ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__19__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14148479188216482537ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__20__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 873334039029177292ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__20__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16208083863914366050ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__20__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17784332262926158084ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__21__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7991535249451899543ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__21__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16241329063271907373ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__21__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12951036103148463508ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__22__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6644181224998896502ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__22__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2488742669664974557ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__22__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7898156292825700120ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__23__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15537112337415973882ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__23__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1534064843808799161ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__23__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9778643822746203243ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__24__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18097717611595210865ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__24__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14808973343086210866ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__24__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10966256369169831447ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__25__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13610109771845128751ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__25__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 666694707103104459ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__25__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13101002477714615200ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__26__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4725312753772439974ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__26__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5639433961750467801ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__26__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15853089921563802765ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__27__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1139783861490005703ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__27__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13612992334363296544ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__27__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9269341663867326882ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__28__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8637283656888349560ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__28__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11722973102582429621ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__28__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7979154311432402577ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__29__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11868200211459253623ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__29__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8806397265786534705ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__29__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5560294991817291613ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__30__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12159955707807520857ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__30__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2005975166883314780ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__30__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14541704647268835781ull);
    vlSelf->__Vcellout__reg_stat_entries__BRA__31__KET____DOT__stat_i__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3631656621796360669ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__31__KET____DOT__stat_i__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1053440749422755491ull);
    vlSelf->__Vcellinp__reg_stat_entries__BRA__31__KET____DOT__stat_i__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17755565014275164101ull);
}
