// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__0__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__0__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__0__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__0__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__0__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__0__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__0__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__0__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__0__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__0__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__0__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__0__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__0__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__0__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__0__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__0__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__1__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__1__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__1__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__1__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__1__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__1__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__1__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__1__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__1__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__1__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__1__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__1__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__1__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__1__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__1__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__1__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__2__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__2__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__2__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__2__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__2__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__2__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__2__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__2__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__2__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__2__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__2__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__2__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__2__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__2__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__2__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__2__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__3__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__3__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__3__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__3__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__3__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__3__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__3__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__3__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__3__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__3__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__3__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__3__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__3__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__3__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__3__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__3__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__4__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__4__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__4__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__4__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__4__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__4__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__4__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__4__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__4__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__4__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__4__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__4__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__4__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__4__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__4__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__4__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__5__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__5__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__5__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__5__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__5__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__5__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__5__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__5__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__5__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__5__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__5__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__5__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__5__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__5__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__5__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__5__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__6__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__6__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__6__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__6__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__6__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__6__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__6__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__6__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__6__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__6__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__6__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__6__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__6__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__6__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__6__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__6__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__7__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__7__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__7__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__7__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__7__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__7__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__7__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__7__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__7__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__7__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__7__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__7__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__7__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__7__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__7__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__7__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__8__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__8__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__8__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__8__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__8__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__8__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__8__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__8__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__8__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__8__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__8__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__8__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__8__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__8__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__8__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__8__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__9__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__9__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__9__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__9__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__9__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__9__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__9__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__9__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__9__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__9__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__9__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__9__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__9__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__9__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__9__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__9__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__10__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__10__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__10__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__10__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__10__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__10__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__10__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__10__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__10__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__10__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__10__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__10__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__10__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__10__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__10__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__10__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__11__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__11__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__11__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__11__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__11__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__11__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__11__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__11__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__11__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__11__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__11__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__11__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__11__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__11__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__11__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__11__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__12__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__12__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__12__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__12__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__12__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__12__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__12__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__12__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__12__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__12__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__12__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__12__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__12__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__12__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__12__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__12__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__13__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__13__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__13__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__13__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__13__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__13__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__13__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__13__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__13__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__13__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__13__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__13__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__13__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__13__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__13__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__13__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__14__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__14__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__14__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__14__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__14__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__14__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__14__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__14__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__14__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__14__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__14__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__14__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__14__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__14__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__14__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__14__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__15__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__15__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__15__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__15__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__15__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__15__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__15__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__15__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__15__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__15__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__15__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__15__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__15__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__15__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__15__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__15__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__16__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__16__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__16__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__16__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__16__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__16__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__16__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__16__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__16__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__16__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__16__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__16__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__16__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__16__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__16__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__16__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__17__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__17__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__17__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__17__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__17__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__17__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__17__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__17__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__17__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__17__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__17__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__17__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__17__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__17__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__17__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__17__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__18__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__18__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__18__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__18__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__18__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__18__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__18__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__18__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__18__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__18__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__18__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__18__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__18__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__18__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__18__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__18__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__19__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__19__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__19__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__19__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__19__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__19__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__19__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__19__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__19__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__19__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__19__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__19__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__19__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__19__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__19__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__19__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__20__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__20__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__20__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__20__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__20__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__20__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__20__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__20__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__20__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__20__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__20__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__20__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__20__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__20__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__20__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__20__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__21__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__21__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__21__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__21__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__21__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__21__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__21__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__21__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__21__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__21__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__21__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__21__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__21__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__21__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__21__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__21__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__22__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__22__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__22__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__22__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__22__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__22__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__22__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__22__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__22__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__22__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__22__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__22__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__22__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__22__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__22__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__22__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__23__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__23__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__23__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__23__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__23__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__23__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__23__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__23__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__23__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__23__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__23__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__23__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__23__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__23__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__23__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__23__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__24__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__24__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__24__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__24__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__24__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__24__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__24__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__24__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__24__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__24__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__24__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__24__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__24__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__24__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__24__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__24__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__25__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__25__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__25__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__25__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__25__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__25__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__25__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__25__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__25__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__25__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__25__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__25__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__25__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__25__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__25__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__25__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__26__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__26__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__26__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__26__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__26__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__26__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__26__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__26__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__26__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__26__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__26__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__26__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__26__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__26__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__26__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__26__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__27__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__27__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__27__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__27__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__27__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__27__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__27__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__27__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__27__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__27__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__27__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__27__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__27__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__27__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__27__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__27__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__28__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__28__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__28__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__28__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__28__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__28__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__28__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__28__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__28__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__28__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__28__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__28__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__28__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__28__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__28__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__28__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__29__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__29__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__29__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__29__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__29__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__29__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__29__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__29__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__29__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__29__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__29__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__29__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__29__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__29__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__29__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__29__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__30__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__30__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__30__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__30__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__30__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__30__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__30__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__30__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__30__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__30__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__30__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__30__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__30__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__30__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__30__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__30__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__31__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__31__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__31__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__31__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__31__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_0__adder__add_loop__BRA__31__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__31__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__31__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__31__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__31__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__31__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__31__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__31__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__31__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__31__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_0__adder__add_loop__BRA__31__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__0__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__0__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__0__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__0__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__0__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__0__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__0__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__0__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__0__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__0__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__0__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__0__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__0__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__0__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__0__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__0__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__1__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__1__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__1__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__1__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__1__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__1__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__1__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__1__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__1__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__1__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__1__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__1__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__1__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__1__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__1__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__1__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__2__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__2__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__2__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__2__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__2__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__2__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__2__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__2__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__2__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__2__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__2__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__2__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__2__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__2__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__2__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__2__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__3__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__3__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__3__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__3__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__3__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__3__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__3__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__3__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__3__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__3__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__3__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__3__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__3__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__3__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__3__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__3__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__4__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__4__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__4__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__4__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__4__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__4__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__4__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__4__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__4__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__4__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__4__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__4__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__4__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__4__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__4__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__4__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__5__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__5__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__5__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__5__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__5__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__5__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__5__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__5__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__5__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__5__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__5__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__5__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__5__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__5__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__5__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__5__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__6__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__6__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__6__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__6__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__6__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__6__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__6__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__6__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__6__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__6__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__6__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__6__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__6__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__6__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__6__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__6__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__7__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__7__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__7__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__7__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__7__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__7__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__7__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__7__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__7__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__7__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__7__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__7__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__7__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__7__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__7__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__7__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__8__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__8__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__8__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__8__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__8__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__8__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__8__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__8__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__8__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__8__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__8__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__8__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__8__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__8__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__8__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__8__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__9__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__9__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__9__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__9__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__9__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__9__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__9__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__9__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__9__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__9__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__9__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__9__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__9__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__9__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__9__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__9__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__10__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__10__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__10__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__10__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__10__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__10__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__10__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__10__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__10__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__10__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__10__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__10__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__10__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__10__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__10__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__10__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__11__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__11__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__11__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__11__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__11__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__11__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__11__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__11__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__11__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__11__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__11__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__11__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__11__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__11__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__11__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__11__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__12__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__12__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__12__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__12__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__12__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__12__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__12__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__12__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__12__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__12__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__12__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__12__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__12__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__12__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__12__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__12__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__13__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__13__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__13__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__13__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__13__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__13__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__13__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__13__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__13__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__13__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__13__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__13__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__13__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__13__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__13__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__13__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__14__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__14__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__14__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__14__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__14__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__14__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__14__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__14__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__14__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__14__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__14__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__14__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__14__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__14__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__14__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__14__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__15__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__15__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__15__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__15__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__15__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__15__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__15__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__15__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__15__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__15__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__15__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__15__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__15__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__15__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__15__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__15__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__16__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__16__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__16__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__16__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__16__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__16__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__16__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__16__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__16__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__16__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__16__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__16__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__16__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__16__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__16__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__16__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__17__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__17__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__17__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__17__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__17__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__17__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__17__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__17__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__17__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__17__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__17__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__17__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__17__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__17__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__17__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__17__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__18__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__18__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__18__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__18__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__18__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__18__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__18__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__18__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__18__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__18__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__18__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__18__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__18__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__18__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__18__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__18__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__19__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__19__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__19__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__19__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__19__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__19__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__19__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__19__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__19__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__19__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__19__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__19__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__19__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__19__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__19__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__19__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__20__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__20__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__20__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__20__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__20__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__20__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__20__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__20__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__20__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__20__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__20__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__20__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__20__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__20__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__20__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__20__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__21__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__21__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__21__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__21__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__21__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__21__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__21__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__21__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__21__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__21__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__21__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__21__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__21__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__21__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__21__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__21__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__22__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__22__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__22__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__22__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__22__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__22__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__22__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__22__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__22__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__22__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__22__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__22__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__22__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__22__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__22__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__22__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__23__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__23__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__23__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__23__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__23__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__23__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__23__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__23__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__23__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__23__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__23__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__23__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__23__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__23__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__23__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__23__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__24__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__24__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__24__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__24__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__24__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__24__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__24__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__24__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__24__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__24__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__24__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__24__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__24__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__24__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__24__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__24__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__25__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__25__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__25__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__25__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__25__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__25__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__25__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__25__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__25__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__25__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__25__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__25__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__25__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__25__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__25__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__25__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__26__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__26__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__26__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__26__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__26__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__26__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__26__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__26__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__26__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__26__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__26__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__26__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__26__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__26__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__26__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__26__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__27__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__27__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__27__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__27__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__27__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__27__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__27__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__27__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__27__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__27__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__27__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__27__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__27__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__27__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__27__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__27__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__28__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__28__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__28__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__28__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__28__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__28__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__28__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__28__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__28__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__28__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__28__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__28__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__28__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__28__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__28__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__28__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__29__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__29__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__29__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__29__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__29__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__29__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__29__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__29__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__29__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__29__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__29__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__29__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__29__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__29__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__29__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__29__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__30__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__30__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__30__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__30__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__30__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__30__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__30__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__30__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__30__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__30__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__30__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__30__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__30__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__30__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__30__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__30__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__31__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__31__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__31__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__31__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__31__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___ico_sequent__TOP__core__adder_fu_1__adder__add_loop__BRA__31__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__31__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__31__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
}

void Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__31__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___act_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__31__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__31__KET____DOT__addi__0(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__31__KET____DOT__addi__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__add1->a = vlSelfRef.a;
    vlSelf->__PVT__add2->a = vlSelfRef.c_in;
    vlSelf->__PVT__add1->b = vlSelfRef.b;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__31__KET____DOT__addi__1(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__31__KET____DOT__addi__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2 = vlSelf->__PVT__add1->c_out;
    vlSelfRef.i1 = vlSelf->__PVT__add1->sum;
    vlSelf->__PVT__add2->b = vlSelfRef.i1;
}

void Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__31__KET____DOT__addi__2(Vcore_full_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_full_add___nba_comb__TOP__core__adder_fu_1__adder__add_loop__BRA__31__KET____DOT__addi__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i3 = vlSelf->__PVT__add2->c_out;
    vlSelfRef.sum = vlSelf->__PVT__add2->sum;
    vlSelfRef.c_out = ((IData)(vlSelfRef.i2) | (IData)(vlSelfRef.i3));
}
