// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_rs_module___stl_sequent__TOP__core__reservation_stations__0(Vcore_rs_module* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rs_module___stl_sequent__TOP__core__reservation_stations__0\n"); );
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

VL_ATTR_COLD void Vcore_rs_module___stl_sequent__TOP__core__reservation_stations__1(Vcore_rs_module* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rs_module___stl_sequent__TOP__core__reservation_stations__1\n"); );
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

VL_ATTR_COLD void Vcore_rs_module___stl_comb__TOP__core__reservation_stations__0(Vcore_rs_module* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rs_module___stl_comb__TOP__core__reservation_stations__0\n"); );
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

VL_ATTR_COLD void Vcore_rs_module___stl_comb__TOP__core__reservation_stations__1(Vcore_rs_module* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rs_module___stl_comb__TOP__core__reservation_stations__1\n"); );
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

VL_ATTR_COLD void Vcore_rs_module___ctor_var_reset(Vcore_rs_module* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rs_module___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->mispredicted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18312463477978689879ull);
    vlSelf->stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7179230919112499263ull);
    vlSelf->rs_dest = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6233366190338396100ull);
    vlSelf->valid_packet = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7061692927215707603ull);
    VL_SCOPED_RAND_RESET_W(85, vlSelf->d, __VscopeHash, 1720370409040345145ull);
    vlSelf->CDB_in = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 18108829248981814492ull);
    vlSelf->consumed_bus = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7268660960299225513ull);
    vlSelf->busy_bus = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12381324853571396118ull);
    VL_SCOPED_RAND_RESET_W(77, vlSelf->rs0_data, __VscopeHash, 6623469576102183047ull);
    VL_SCOPED_RAND_RESET_W(77, vlSelf->rs1_data, __VscopeHash, 16624318508599476813ull);
    VL_SCOPED_RAND_RESET_W(77, vlSelf->rs2_data, __VscopeHash, 10683005467506302743ull);
    VL_SCOPED_RAND_RESET_W(77, vlSelf->rs3_data, __VscopeHash, 17123992503407504941ull);
    vlSelf->wr_en0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11030432488416321222ull);
    vlSelf->wr_en1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12537963226712301114ull);
    vlSelf->wr_en2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8017420562688428944ull);
    vlSelf->wr_en3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14097286815383207585ull);
    vlSelf->__Vcellout__rs0__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14594298917336242492ull);
    vlSelf->__Vcellinp__rs0__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10631434663469944776ull);
    vlSelf->__Vcellout__rs1__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14144096087496102598ull);
    vlSelf->__Vcellinp__rs1__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 275705343364755019ull);
    vlSelf->__Vcellout__rs2__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9134356554105018499ull);
    vlSelf->__Vcellinp__rs2__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6409589808666400706ull);
    vlSelf->__Vcellout__rs3__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 241740492630341387ull);
    vlSelf->__Vcellinp__rs3__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10981287066645957493ull);
}
