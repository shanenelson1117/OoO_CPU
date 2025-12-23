// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_rs_module___ico_sequent__TOP__core__reservation_stations__0(Vcore_rs_module* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rs_module___ico_sequent__TOP__core__reservation_stations__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__reservation_stations__rs0.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reservation_stations__rs1.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reservation_stations__rs2.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__reservation_stations__rs3.clk 
        = vlSelfRef.clk;
    vlSelfRef.__Vcellout__rs0__busy = vlSymsp->TOP__core__reservation_stations__rs0.busy;
    VL_ASSIGN_W(77, vlSelfRef.rs0_data, vlSymsp->TOP__core__reservation_stations__rs0.out);
    vlSelfRef.__Vcellout__rs1__busy = vlSymsp->TOP__core__reservation_stations__rs1.busy;
    VL_ASSIGN_W(77, vlSelfRef.rs1_data, vlSymsp->TOP__core__reservation_stations__rs1.out);
    vlSelfRef.__Vcellout__rs2__busy = vlSymsp->TOP__core__reservation_stations__rs2.busy;
    VL_ASSIGN_W(77, vlSelfRef.rs2_data, vlSymsp->TOP__core__reservation_stations__rs2.out);
    vlSelfRef.__Vcellout__rs3__busy = vlSymsp->TOP__core__reservation_stations__rs3.busy;
    VL_ASSIGN_W(77, vlSelfRef.rs3_data, vlSymsp->TOP__core__reservation_stations__rs3.out);
    vlSelfRef.busy_bus = VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__Vcellout__rs3__busy), (IData)(vlSelfRef.__Vcellout__rs2__busy)), 
                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__Vcellout__rs1__busy), (IData)(vlSelfRef.__Vcellout__rs0__busy)));
}

void Vcore_rs_module___ico_sequent__TOP__core__reservation_stations__1(Vcore_rs_module* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rs_module___ico_sequent__TOP__core__reservation_stations__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__reservation_stations__rs0.CDB_in 
        = vlSelfRef.CDB_in;
    vlSymsp->TOP__core__reservation_stations__rs1.CDB_in 
        = vlSelfRef.CDB_in;
    vlSymsp->TOP__core__reservation_stations__rs2.CDB_in 
        = vlSelfRef.CDB_in;
    vlSymsp->TOP__core__reservation_stations__rs3.CDB_in 
        = vlSelfRef.CDB_in;
}

void Vcore_rs_module___ico_comb__TOP__core__reservation_stations__0(Vcore_rs_module* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rs_module___ico_comb__TOP__core__reservation_stations__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wr_en0 = (((0U == (IData)(vlSelfRef.rs_dest)) 
                         & (~ (IData)(vlSelfRef.stall))) 
                        & (IData)(vlSelfRef.valid_packet));
    vlSelfRef.wr_en1 = (((1U == (IData)(vlSelfRef.rs_dest)) 
                         & (~ (IData)(vlSelfRef.stall))) 
                        & (IData)(vlSelfRef.valid_packet));
    vlSelfRef.wr_en2 = (((2U == (IData)(vlSelfRef.rs_dest)) 
                         & (~ (IData)(vlSelfRef.stall))) 
                        & (IData)(vlSelfRef.valid_packet));
    vlSelfRef.wr_en3 = (((3U == (IData)(vlSelfRef.rs_dest)) 
                         & (~ (IData)(vlSelfRef.stall))) 
                        & (IData)(vlSelfRef.valid_packet));
    VL_ASSIGN_W(85, vlSymsp->TOP__core__reservation_stations__rs0.d, vlSelfRef.d);
    VL_ASSIGN_W(85, vlSymsp->TOP__core__reservation_stations__rs1.d, vlSelfRef.d);
    VL_ASSIGN_W(85, vlSymsp->TOP__core__reservation_stations__rs2.d, vlSelfRef.d);
    VL_ASSIGN_W(85, vlSymsp->TOP__core__reservation_stations__rs3.d, vlSelfRef.d);
    vlSymsp->TOP__core__reservation_stations__rs0.wr_en 
        = vlSelfRef.wr_en0;
    vlSymsp->TOP__core__reservation_stations__rs1.wr_en 
        = vlSelfRef.wr_en1;
    vlSymsp->TOP__core__reservation_stations__rs2.wr_en 
        = vlSelfRef.wr_en2;
    vlSymsp->TOP__core__reservation_stations__rs3.wr_en 
        = vlSelfRef.wr_en3;
}

void Vcore_rs_module___ico_comb__TOP__core__reservation_stations__1(Vcore_rs_module* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rs_module___ico_comb__TOP__core__reservation_stations__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__rs0__reset = (1U & (((IData)(vlSelfRef.mispredicted) 
                                               | (IData)(vlSelfRef.reset)) 
                                              | VL_BITSEL_IIII(4, (IData)(vlSelfRef.consumed_bus), 0U)));
    vlSelfRef.__Vcellinp__rs1__reset = (1U & (((IData)(vlSelfRef.mispredicted) 
                                               | (IData)(vlSelfRef.reset)) 
                                              | VL_BITSEL_IIII(4, (IData)(vlSelfRef.consumed_bus), 1U)));
    vlSelfRef.__Vcellinp__rs2__reset = (1U & (((IData)(vlSelfRef.mispredicted) 
                                               | (IData)(vlSelfRef.reset)) 
                                              | VL_BITSEL_IIII(4, (IData)(vlSelfRef.consumed_bus), 2U)));
    vlSelfRef.__Vcellinp__rs3__reset = (1U & (((IData)(vlSelfRef.mispredicted) 
                                               | (IData)(vlSelfRef.reset)) 
                                              | VL_BITSEL_IIII(4, (IData)(vlSelfRef.consumed_bus), 3U)));
    vlSymsp->TOP__core__reservation_stations__rs0.reset 
        = vlSelfRef.__Vcellinp__rs0__reset;
    vlSymsp->TOP__core__reservation_stations__rs1.reset 
        = vlSelfRef.__Vcellinp__rs1__reset;
    vlSymsp->TOP__core__reservation_stations__rs2.reset 
        = vlSelfRef.__Vcellinp__rs2__reset;
    vlSymsp->TOP__core__reservation_stations__rs3.reset 
        = vlSelfRef.__Vcellinp__rs3__reset;
}

void Vcore_rs_module___act_sequent__TOP__core__reservation_stations__0(Vcore_rs_module* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rs_module___act_sequent__TOP__core__reservation_stations__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wr_en0 = (((0U == (IData)(vlSelfRef.rs_dest)) 
                         & (~ (IData)(vlSelfRef.stall))) 
                        & (IData)(vlSelfRef.valid_packet));
    vlSelfRef.wr_en1 = (((1U == (IData)(vlSelfRef.rs_dest)) 
                         & (~ (IData)(vlSelfRef.stall))) 
                        & (IData)(vlSelfRef.valid_packet));
    vlSelfRef.wr_en2 = (((2U == (IData)(vlSelfRef.rs_dest)) 
                         & (~ (IData)(vlSelfRef.stall))) 
                        & (IData)(vlSelfRef.valid_packet));
    vlSelfRef.wr_en3 = (((3U == (IData)(vlSelfRef.rs_dest)) 
                         & (~ (IData)(vlSelfRef.stall))) 
                        & (IData)(vlSelfRef.valid_packet));
    VL_ASSIGN_W(85, vlSymsp->TOP__core__reservation_stations__rs0.d, vlSelfRef.d);
    VL_ASSIGN_W(85, vlSymsp->TOP__core__reservation_stations__rs1.d, vlSelfRef.d);
    VL_ASSIGN_W(85, vlSymsp->TOP__core__reservation_stations__rs2.d, vlSelfRef.d);
    VL_ASSIGN_W(85, vlSymsp->TOP__core__reservation_stations__rs3.d, vlSelfRef.d);
    vlSymsp->TOP__core__reservation_stations__rs0.wr_en 
        = vlSelfRef.wr_en0;
    vlSymsp->TOP__core__reservation_stations__rs1.wr_en 
        = vlSelfRef.wr_en1;
    vlSymsp->TOP__core__reservation_stations__rs2.wr_en 
        = vlSelfRef.wr_en2;
    vlSymsp->TOP__core__reservation_stations__rs3.wr_en 
        = vlSelfRef.wr_en3;
}

void Vcore_rs_module___act_comb__TOP__core__reservation_stations__0(Vcore_rs_module* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rs_module___act_comb__TOP__core__reservation_stations__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__rs0__reset = (1U & (((IData)(vlSelfRef.mispredicted) 
                                               | (IData)(vlSelfRef.reset)) 
                                              | VL_BITSEL_IIII(4, (IData)(vlSelfRef.consumed_bus), 0U)));
    vlSelfRef.__Vcellinp__rs1__reset = (1U & (((IData)(vlSelfRef.mispredicted) 
                                               | (IData)(vlSelfRef.reset)) 
                                              | VL_BITSEL_IIII(4, (IData)(vlSelfRef.consumed_bus), 1U)));
    vlSelfRef.__Vcellinp__rs2__reset = (1U & (((IData)(vlSelfRef.mispredicted) 
                                               | (IData)(vlSelfRef.reset)) 
                                              | VL_BITSEL_IIII(4, (IData)(vlSelfRef.consumed_bus), 2U)));
    vlSelfRef.__Vcellinp__rs3__reset = (1U & (((IData)(vlSelfRef.mispredicted) 
                                               | (IData)(vlSelfRef.reset)) 
                                              | VL_BITSEL_IIII(4, (IData)(vlSelfRef.consumed_bus), 3U)));
    vlSymsp->TOP__core__reservation_stations__rs0.reset 
        = vlSelfRef.__Vcellinp__rs0__reset;
    vlSymsp->TOP__core__reservation_stations__rs1.reset 
        = vlSelfRef.__Vcellinp__rs1__reset;
    vlSymsp->TOP__core__reservation_stations__rs2.reset 
        = vlSelfRef.__Vcellinp__rs2__reset;
    vlSymsp->TOP__core__reservation_stations__rs3.reset 
        = vlSelfRef.__Vcellinp__rs3__reset;
}

void Vcore_rs_module___nba_sequent__TOP__core__reservation_stations__0(Vcore_rs_module* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rs_module___nba_sequent__TOP__core__reservation_stations__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__rs0__busy = vlSymsp->TOP__core__reservation_stations__rs0.busy;
    VL_ASSIGN_W(77, vlSelfRef.rs0_data, vlSymsp->TOP__core__reservation_stations__rs0.out);
    VL_ASSIGNBIT_II(0U, vlSelfRef.busy_bus, vlSelfRef.__Vcellout__rs0__busy);
}

void Vcore_rs_module___nba_sequent__TOP__core__reservation_stations__1(Vcore_rs_module* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rs_module___nba_sequent__TOP__core__reservation_stations__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__rs1__busy = vlSymsp->TOP__core__reservation_stations__rs1.busy;
    VL_ASSIGN_W(77, vlSelfRef.rs1_data, vlSymsp->TOP__core__reservation_stations__rs1.out);
    VL_ASSIGNBIT_II(1U, vlSelfRef.busy_bus, vlSelfRef.__Vcellout__rs1__busy);
}

void Vcore_rs_module___nba_sequent__TOP__core__reservation_stations__2(Vcore_rs_module* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rs_module___nba_sequent__TOP__core__reservation_stations__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__rs2__busy = vlSymsp->TOP__core__reservation_stations__rs2.busy;
    VL_ASSIGN_W(77, vlSelfRef.rs2_data, vlSymsp->TOP__core__reservation_stations__rs2.out);
    VL_ASSIGNBIT_II(2U, vlSelfRef.busy_bus, vlSelfRef.__Vcellout__rs2__busy);
}

void Vcore_rs_module___nba_sequent__TOP__core__reservation_stations__3(Vcore_rs_module* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rs_module___nba_sequent__TOP__core__reservation_stations__3\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__rs3__busy = vlSymsp->TOP__core__reservation_stations__rs3.busy;
    VL_ASSIGN_W(77, vlSelfRef.rs3_data, vlSymsp->TOP__core__reservation_stations__rs3.out);
    VL_ASSIGNBIT_II(3U, vlSelfRef.busy_bus, vlSelfRef.__Vcellout__rs3__busy);
}

void Vcore_rs_module___nba_comb__TOP__core__reservation_stations__0(Vcore_rs_module* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rs_module___nba_comb__TOP__core__reservation_stations__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__reservation_stations__rs0.CDB_in 
        = vlSelfRef.CDB_in;
    vlSymsp->TOP__core__reservation_stations__rs1.CDB_in 
        = vlSelfRef.CDB_in;
    vlSymsp->TOP__core__reservation_stations__rs2.CDB_in 
        = vlSelfRef.CDB_in;
    vlSymsp->TOP__core__reservation_stations__rs3.CDB_in 
        = vlSelfRef.CDB_in;
}

void Vcore_rs_module___nba_comb__TOP__core__reservation_stations__1(Vcore_rs_module* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rs_module___nba_comb__TOP__core__reservation_stations__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wr_en0 = (((0U == (IData)(vlSelfRef.rs_dest)) 
                         & (~ (IData)(vlSelfRef.stall))) 
                        & (IData)(vlSelfRef.valid_packet));
    vlSelfRef.wr_en1 = (((1U == (IData)(vlSelfRef.rs_dest)) 
                         & (~ (IData)(vlSelfRef.stall))) 
                        & (IData)(vlSelfRef.valid_packet));
    vlSelfRef.wr_en2 = (((2U == (IData)(vlSelfRef.rs_dest)) 
                         & (~ (IData)(vlSelfRef.stall))) 
                        & (IData)(vlSelfRef.valid_packet));
    vlSelfRef.wr_en3 = (((3U == (IData)(vlSelfRef.rs_dest)) 
                         & (~ (IData)(vlSelfRef.stall))) 
                        & (IData)(vlSelfRef.valid_packet));
    vlSymsp->TOP__core__reservation_stations__rs0.wr_en 
        = vlSelfRef.wr_en0;
    vlSymsp->TOP__core__reservation_stations__rs1.wr_en 
        = vlSelfRef.wr_en1;
    vlSymsp->TOP__core__reservation_stations__rs2.wr_en 
        = vlSelfRef.wr_en2;
    vlSymsp->TOP__core__reservation_stations__rs3.wr_en 
        = vlSelfRef.wr_en3;
}

void Vcore_rs_module___nba_comb__TOP__core__reservation_stations__2(Vcore_rs_module* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rs_module___nba_comb__TOP__core__reservation_stations__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(85, vlSymsp->TOP__core__reservation_stations__rs0.d, vlSelfRef.d);
    VL_ASSIGN_W(85, vlSymsp->TOP__core__reservation_stations__rs1.d, vlSelfRef.d);
    VL_ASSIGN_W(85, vlSymsp->TOP__core__reservation_stations__rs2.d, vlSelfRef.d);
    VL_ASSIGN_W(85, vlSymsp->TOP__core__reservation_stations__rs3.d, vlSelfRef.d);
}

void Vcore_rs_module___nba_comb__TOP__core__reservation_stations__3(Vcore_rs_module* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rs_module___nba_comb__TOP__core__reservation_stations__3\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__rs0__reset = (1U & (((IData)(vlSelfRef.mispredicted) 
                                               | (IData)(vlSelfRef.reset)) 
                                              | VL_BITSEL_IIII(4, (IData)(vlSelfRef.consumed_bus), 0U)));
    vlSelfRef.__Vcellinp__rs1__reset = (1U & (((IData)(vlSelfRef.mispredicted) 
                                               | (IData)(vlSelfRef.reset)) 
                                              | VL_BITSEL_IIII(4, (IData)(vlSelfRef.consumed_bus), 1U)));
    vlSelfRef.__Vcellinp__rs2__reset = (1U & (((IData)(vlSelfRef.mispredicted) 
                                               | (IData)(vlSelfRef.reset)) 
                                              | VL_BITSEL_IIII(4, (IData)(vlSelfRef.consumed_bus), 2U)));
    vlSelfRef.__Vcellinp__rs3__reset = (1U & (((IData)(vlSelfRef.mispredicted) 
                                               | (IData)(vlSelfRef.reset)) 
                                              | VL_BITSEL_IIII(4, (IData)(vlSelfRef.consumed_bus), 3U)));
    vlSymsp->TOP__core__reservation_stations__rs0.reset 
        = vlSelfRef.__Vcellinp__rs0__reset;
    vlSymsp->TOP__core__reservation_stations__rs1.reset 
        = vlSelfRef.__Vcellinp__rs1__reset;
    vlSymsp->TOP__core__reservation_stations__rs2.reset 
        = vlSelfRef.__Vcellinp__rs2__reset;
    vlSymsp->TOP__core__reservation_stations__rs3.reset 
        = vlSelfRef.__Vcellinp__rs3__reset;
}
