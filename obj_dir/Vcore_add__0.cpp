// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_add___ico_sequent__TOP__core__adder_fu_0__0(Vcore_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_add___ico_sequent__TOP__core__adder_fu_0__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_QI(0U, vlSelfRef.out, vlSelfRef.load_step1);
    VL_ASSIGNSEL_QI(38, 4, 0x00000022U, vlSelfRef.out, vlSelfRef.curr_rob);
    VL_ASSIGNBIT_QI(1U, vlSelfRef.out, vlSelfRef.b_taken);
}

void Vcore_add___ico_sequent__TOP__core__adder_fu_0__1(Vcore_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_add___ico_sequent__TOP__core__adder_fu_0__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bge = (5U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.bne = (1U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.beq = (0U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.blt = (4U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.bltu = (6U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.bgeu = (7U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.ALUop1 = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.ALUop), 2U));
    vlSelf->__PVT__adder->rs1 = vlSelfRef.rs1;
    vlSelf->__PVT__adder->rs2 = vlSelfRef.rs2;
    vlSelf->__PVT__adder->ALUop1 = vlSelfRef.ALUop1;
}

void Vcore_add___ico_sequent__TOP__core__adder_fu_0__2(Vcore_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_add___ico_sequent__TOP__core__adder_fu_0__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.carry = vlSelf->__PVT__adder->carry;
    vlSelfRef.overflow = vlSelf->__PVT__adder->overflow;
}

void Vcore_add___ico_sequent__TOP__core__adder_fu_0__3(Vcore_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_add___ico_sequent__TOP__core__adder_fu_0__3\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.s = vlSelf->__PVT__adder->s;
    vlSelfRef.zero = vlSelf->__PVT__adder->zero;
    vlSelfRef.negative = vlSelf->__PVT__adder->negative;
    vlSelfRef.result = ((7U == (IData)(vlSelfRef.ALUop))
                         ? (((IData)(vlSelfRef.negative) 
                             ^ (IData)(vlSelfRef.overflow))
                             ? 1U : 0U) : ((6U == (IData)(vlSelfRef.ALUop))
                                            ? ((IData)(vlSelfRef.carry)
                                                ? 0U
                                                : 1U)
                                            : ((1U 
                                                == (IData)(vlSelfRef.ALUop))
                                                ? (vlSelfRef.rs1 
                                                   ^ vlSelfRef.rs2)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.ALUop))
                                                    ? 
                                                   (vlSelfRef.rs1 
                                                    | vlSelfRef.rs2)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.ALUop))
                                                     ? 
                                                    (vlSelfRef.rs1 
                                                     & vlSelfRef.rs2)
                                                     : vlSelfRef.s)))));
    vlSelfRef.b_inter = (((((((IData)(vlSelfRef.bne) 
                              & (~ (IData)(vlSelfRef.zero))) 
                             | ((IData)(vlSelfRef.beq) 
                                & (IData)(vlSelfRef.zero))) 
                            | ((IData)(vlSelfRef.blt) 
                               & ((IData)(vlSelfRef.negative) 
                                  ^ (IData)(vlSelfRef.overflow)))) 
                           | ((IData)(vlSelfRef.bge) 
                              & (~ ((IData)(vlSelfRef.negative) 
                                    ^ (IData)(vlSelfRef.overflow))))) 
                          | ((IData)(vlSelfRef.bltu) 
                             & (~ (IData)(vlSelfRef.carry)))) 
                         | ((IData)(vlSelfRef.bgeu) 
                            & (IData)(vlSelfRef.carry)));
}

void Vcore_add___act_comb__TOP__core__adder_fu_0__0(Vcore_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_add___act_comb__TOP__core__adder_fu_0__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.carry = vlSelf->__PVT__adder->carry;
    vlSelfRef.overflow = vlSelf->__PVT__adder->overflow;
}

void Vcore_add___act_comb__TOP__core__adder_fu_0__1(Vcore_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_add___act_comb__TOP__core__adder_fu_0__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.s = vlSelf->__PVT__adder->s;
    vlSelfRef.zero = vlSelf->__PVT__adder->zero;
    vlSelfRef.negative = vlSelf->__PVT__adder->negative;
    vlSelfRef.result = ((7U == (IData)(vlSelfRef.ALUop))
                         ? (((IData)(vlSelfRef.negative) 
                             ^ (IData)(vlSelfRef.overflow))
                             ? 1U : 0U) : ((6U == (IData)(vlSelfRef.ALUop))
                                            ? ((IData)(vlSelfRef.carry)
                                                ? 0U
                                                : 1U)
                                            : ((1U 
                                                == (IData)(vlSelfRef.ALUop))
                                                ? (vlSelfRef.rs1 
                                                   ^ vlSelfRef.rs2)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.ALUop))
                                                    ? 
                                                   (vlSelfRef.rs1 
                                                    | vlSelfRef.rs2)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.ALUop))
                                                     ? 
                                                    (vlSelfRef.rs1 
                                                     & vlSelfRef.rs2)
                                                     : vlSelfRef.s)))));
    vlSelfRef.b_inter = (((((((IData)(vlSelfRef.bne) 
                              & (~ (IData)(vlSelfRef.zero))) 
                             | ((IData)(vlSelfRef.beq) 
                                & (IData)(vlSelfRef.zero))) 
                            | ((IData)(vlSelfRef.blt) 
                               & ((IData)(vlSelfRef.negative) 
                                  ^ (IData)(vlSelfRef.overflow)))) 
                           | ((IData)(vlSelfRef.bge) 
                              & (~ ((IData)(vlSelfRef.negative) 
                                    ^ (IData)(vlSelfRef.overflow))))) 
                          | ((IData)(vlSelfRef.bltu) 
                             & (~ (IData)(vlSelfRef.carry)))) 
                         | ((IData)(vlSelfRef.bgeu) 
                            & (IData)(vlSelfRef.carry)));
}

void Vcore_add___nba_sequent__TOP__core__adder_fu_0__0(Vcore_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_add___nba_sequent__TOP__core__adder_fu_0__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__b_taken = vlSelfRef.b_taken;
    vlSelfRef.__Vdly__curr_rob = vlSelfRef.curr_rob;
    vlSelfRef.__Vdly__load_step1 = vlSelfRef.load_step1;
    vlSelfRef.__Vdly__valid_out = vlSelfRef.valid_out;
    vlSelfRef.__Vdly__ready = vlSelfRef.ready;
    if (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.yumi_in))) {
        vlSelfRef.__Vdly__valid_out = 0U;
        vlSelfRef.__Vdly__b_taken = 0U;
        vlSelfRef.__Vdly__curr_rob = 0U;
        vlSelfRef.__Vdly__ready = 1U;
        vlSelfRef.__Vdly__load_step1 = 0U;
    } else if (vlSelfRef.valid_in) {
        VL_ASSIGNSEL_QI(38, 32, 2U, vlSelfRef.__Vdly__out, vlSelfRef.result);
        VL_ASSIGNSEL_QI(38, 32, 2U, vlSelfRef.__VdlyMask__out, 0xffffffffU);
        vlSelfRef.__Vdly__valid_out = 1U;
        vlSelfRef.__Vdly__b_taken = vlSelfRef.b_inter;
        vlSelfRef.__Vdly__curr_rob = vlSelfRef.rs_rob_entry;
        vlSelfRef.__Vdly__ready = 0U;
        vlSelfRef.__Vdly__load_step1 = vlSelfRef.load;
    }
    vlSelfRef.out = ((vlSelfRef.__Vdly__out & vlSelfRef.__VdlyMask__out) 
                     | (vlSelfRef.out & (~ vlSelfRef.__VdlyMask__out)));
    vlSelfRef.__VdlyMask__out = 0ULL;
    vlSelfRef.b_taken = vlSelfRef.__Vdly__b_taken;
    vlSelfRef.curr_rob = vlSelfRef.__Vdly__curr_rob;
    vlSelfRef.load_step1 = vlSelfRef.__Vdly__load_step1;
    vlSelfRef.valid_out = vlSelfRef.__Vdly__valid_out;
    vlSelfRef.ready = vlSelfRef.__Vdly__ready;
    VL_ASSIGNBIT_QI(1U, vlSelfRef.out, vlSelfRef.b_taken);
    VL_ASSIGNSEL_QI(38, 4, 0x00000022U, vlSelfRef.out, vlSelfRef.curr_rob);
    VL_ASSIGNBIT_QI(0U, vlSelfRef.out, vlSelfRef.load_step1);
}

void Vcore_add___nba_comb__TOP__core__adder_fu_0__0(Vcore_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_add___nba_comb__TOP__core__adder_fu_0__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bge = (5U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.bne = (1U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.beq = (0U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.blt = (4U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.bltu = (6U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.bgeu = (7U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.ALUop1 = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.ALUop), 2U));
    vlSelf->__PVT__adder->rs1 = vlSelfRef.rs1;
    vlSelf->__PVT__adder->rs2 = vlSelfRef.rs2;
    vlSelf->__PVT__adder->ALUop1 = vlSelfRef.ALUop1;
}

void Vcore_add___nba_comb__TOP__core__adder_fu_0__1(Vcore_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_add___nba_comb__TOP__core__adder_fu_0__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.carry = vlSelf->__PVT__adder->carry;
    vlSelfRef.overflow = vlSelf->__PVT__adder->overflow;
}

void Vcore_add___nba_comb__TOP__core__adder_fu_0__2(Vcore_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_add___nba_comb__TOP__core__adder_fu_0__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.s = vlSelf->__PVT__adder->s;
    vlSelfRef.zero = vlSelf->__PVT__adder->zero;
    vlSelfRef.negative = vlSelf->__PVT__adder->negative;
    vlSelfRef.result = ((7U == (IData)(vlSelfRef.ALUop))
                         ? (((IData)(vlSelfRef.negative) 
                             ^ (IData)(vlSelfRef.overflow))
                             ? 1U : 0U) : ((6U == (IData)(vlSelfRef.ALUop))
                                            ? ((IData)(vlSelfRef.carry)
                                                ? 0U
                                                : 1U)
                                            : ((1U 
                                                == (IData)(vlSelfRef.ALUop))
                                                ? (vlSelfRef.rs1 
                                                   ^ vlSelfRef.rs2)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.ALUop))
                                                    ? 
                                                   (vlSelfRef.rs1 
                                                    | vlSelfRef.rs2)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.ALUop))
                                                     ? 
                                                    (vlSelfRef.rs1 
                                                     & vlSelfRef.rs2)
                                                     : vlSelfRef.s)))));
    vlSelfRef.b_inter = (((((((IData)(vlSelfRef.bne) 
                              & (~ (IData)(vlSelfRef.zero))) 
                             | ((IData)(vlSelfRef.beq) 
                                & (IData)(vlSelfRef.zero))) 
                            | ((IData)(vlSelfRef.blt) 
                               & ((IData)(vlSelfRef.negative) 
                                  ^ (IData)(vlSelfRef.overflow)))) 
                           | ((IData)(vlSelfRef.bge) 
                              & (~ ((IData)(vlSelfRef.negative) 
                                    ^ (IData)(vlSelfRef.overflow))))) 
                          | ((IData)(vlSelfRef.bltu) 
                             & (~ (IData)(vlSelfRef.carry)))) 
                         | ((IData)(vlSelfRef.bgeu) 
                            & (IData)(vlSelfRef.carry)));
}

void Vcore_add___ico_sequent__TOP__core__adder_fu_1__0(Vcore_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_add___ico_sequent__TOP__core__adder_fu_1__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_QI(0U, vlSelfRef.out, vlSelfRef.load_step1);
    VL_ASSIGNSEL_QI(38, 4, 0x00000022U, vlSelfRef.out, vlSelfRef.curr_rob);
    VL_ASSIGNBIT_QI(1U, vlSelfRef.out, vlSelfRef.b_taken);
}

void Vcore_add___ico_sequent__TOP__core__adder_fu_1__1(Vcore_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_add___ico_sequent__TOP__core__adder_fu_1__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bge = (5U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.bne = (1U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.beq = (0U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.blt = (4U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.bltu = (6U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.bgeu = (7U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.ALUop1 = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.ALUop), 2U));
    vlSelf->__PVT__adder->rs1 = vlSelfRef.rs1;
    vlSelf->__PVT__adder->rs2 = vlSelfRef.rs2;
    vlSelf->__PVT__adder->ALUop1 = vlSelfRef.ALUop1;
}

void Vcore_add___ico_sequent__TOP__core__adder_fu_1__2(Vcore_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_add___ico_sequent__TOP__core__adder_fu_1__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.carry = vlSelf->__PVT__adder->carry;
    vlSelfRef.overflow = vlSelf->__PVT__adder->overflow;
}

void Vcore_add___ico_sequent__TOP__core__adder_fu_1__3(Vcore_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_add___ico_sequent__TOP__core__adder_fu_1__3\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.s = vlSelf->__PVT__adder->s;
    vlSelfRef.zero = vlSelf->__PVT__adder->zero;
    vlSelfRef.negative = vlSelf->__PVT__adder->negative;
    vlSelfRef.result = ((7U == (IData)(vlSelfRef.ALUop))
                         ? (((IData)(vlSelfRef.negative) 
                             ^ (IData)(vlSelfRef.overflow))
                             ? 1U : 0U) : ((6U == (IData)(vlSelfRef.ALUop))
                                            ? ((IData)(vlSelfRef.carry)
                                                ? 0U
                                                : 1U)
                                            : ((1U 
                                                == (IData)(vlSelfRef.ALUop))
                                                ? (vlSelfRef.rs1 
                                                   ^ vlSelfRef.rs2)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.ALUop))
                                                    ? 
                                                   (vlSelfRef.rs1 
                                                    | vlSelfRef.rs2)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.ALUop))
                                                     ? 
                                                    (vlSelfRef.rs1 
                                                     & vlSelfRef.rs2)
                                                     : vlSelfRef.s)))));
    vlSelfRef.b_inter = (((((((IData)(vlSelfRef.bne) 
                              & (~ (IData)(vlSelfRef.zero))) 
                             | ((IData)(vlSelfRef.beq) 
                                & (IData)(vlSelfRef.zero))) 
                            | ((IData)(vlSelfRef.blt) 
                               & ((IData)(vlSelfRef.negative) 
                                  ^ (IData)(vlSelfRef.overflow)))) 
                           | ((IData)(vlSelfRef.bge) 
                              & (~ ((IData)(vlSelfRef.negative) 
                                    ^ (IData)(vlSelfRef.overflow))))) 
                          | ((IData)(vlSelfRef.bltu) 
                             & (~ (IData)(vlSelfRef.carry)))) 
                         | ((IData)(vlSelfRef.bgeu) 
                            & (IData)(vlSelfRef.carry)));
}

void Vcore_add___act_comb__TOP__core__adder_fu_1__0(Vcore_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_add___act_comb__TOP__core__adder_fu_1__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.carry = vlSelf->__PVT__adder->carry;
    vlSelfRef.overflow = vlSelf->__PVT__adder->overflow;
}

void Vcore_add___act_comb__TOP__core__adder_fu_1__1(Vcore_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_add___act_comb__TOP__core__adder_fu_1__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.s = vlSelf->__PVT__adder->s;
    vlSelfRef.zero = vlSelf->__PVT__adder->zero;
    vlSelfRef.negative = vlSelf->__PVT__adder->negative;
    vlSelfRef.result = ((7U == (IData)(vlSelfRef.ALUop))
                         ? (((IData)(vlSelfRef.negative) 
                             ^ (IData)(vlSelfRef.overflow))
                             ? 1U : 0U) : ((6U == (IData)(vlSelfRef.ALUop))
                                            ? ((IData)(vlSelfRef.carry)
                                                ? 0U
                                                : 1U)
                                            : ((1U 
                                                == (IData)(vlSelfRef.ALUop))
                                                ? (vlSelfRef.rs1 
                                                   ^ vlSelfRef.rs2)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.ALUop))
                                                    ? 
                                                   (vlSelfRef.rs1 
                                                    | vlSelfRef.rs2)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.ALUop))
                                                     ? 
                                                    (vlSelfRef.rs1 
                                                     & vlSelfRef.rs2)
                                                     : vlSelfRef.s)))));
    vlSelfRef.b_inter = (((((((IData)(vlSelfRef.bne) 
                              & (~ (IData)(vlSelfRef.zero))) 
                             | ((IData)(vlSelfRef.beq) 
                                & (IData)(vlSelfRef.zero))) 
                            | ((IData)(vlSelfRef.blt) 
                               & ((IData)(vlSelfRef.negative) 
                                  ^ (IData)(vlSelfRef.overflow)))) 
                           | ((IData)(vlSelfRef.bge) 
                              & (~ ((IData)(vlSelfRef.negative) 
                                    ^ (IData)(vlSelfRef.overflow))))) 
                          | ((IData)(vlSelfRef.bltu) 
                             & (~ (IData)(vlSelfRef.carry)))) 
                         | ((IData)(vlSelfRef.bgeu) 
                            & (IData)(vlSelfRef.carry)));
}

void Vcore_add___nba_sequent__TOP__core__adder_fu_1__0(Vcore_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_add___nba_sequent__TOP__core__adder_fu_1__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__b_taken = vlSelfRef.b_taken;
    vlSelfRef.__Vdly__curr_rob = vlSelfRef.curr_rob;
    vlSelfRef.__Vdly__load_step1 = vlSelfRef.load_step1;
    vlSelfRef.__Vdly__valid_out = vlSelfRef.valid_out;
    vlSelfRef.__Vdly__ready = vlSelfRef.ready;
    if (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.yumi_in))) {
        vlSelfRef.__Vdly__valid_out = 0U;
        vlSelfRef.__Vdly__b_taken = 0U;
        vlSelfRef.__Vdly__curr_rob = 0U;
        vlSelfRef.__Vdly__ready = 1U;
        vlSelfRef.__Vdly__load_step1 = 0U;
    } else if (vlSelfRef.valid_in) {
        VL_ASSIGNSEL_QI(38, 32, 2U, vlSelfRef.__Vdly__out, vlSelfRef.result);
        VL_ASSIGNSEL_QI(38, 32, 2U, vlSelfRef.__VdlyMask__out, 0xffffffffU);
        vlSelfRef.__Vdly__valid_out = 1U;
        vlSelfRef.__Vdly__b_taken = vlSelfRef.b_inter;
        vlSelfRef.__Vdly__curr_rob = vlSelfRef.rs_rob_entry;
        vlSelfRef.__Vdly__ready = 0U;
        vlSelfRef.__Vdly__load_step1 = vlSelfRef.load;
    }
    vlSelfRef.out = ((vlSelfRef.__Vdly__out & vlSelfRef.__VdlyMask__out) 
                     | (vlSelfRef.out & (~ vlSelfRef.__VdlyMask__out)));
    vlSelfRef.__VdlyMask__out = 0ULL;
    vlSelfRef.b_taken = vlSelfRef.__Vdly__b_taken;
    vlSelfRef.curr_rob = vlSelfRef.__Vdly__curr_rob;
    vlSelfRef.load_step1 = vlSelfRef.__Vdly__load_step1;
    vlSelfRef.valid_out = vlSelfRef.__Vdly__valid_out;
    vlSelfRef.ready = vlSelfRef.__Vdly__ready;
    VL_ASSIGNBIT_QI(1U, vlSelfRef.out, vlSelfRef.b_taken);
    VL_ASSIGNSEL_QI(38, 4, 0x00000022U, vlSelfRef.out, vlSelfRef.curr_rob);
    VL_ASSIGNBIT_QI(0U, vlSelfRef.out, vlSelfRef.load_step1);
}

void Vcore_add___nba_comb__TOP__core__adder_fu_1__0(Vcore_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_add___nba_comb__TOP__core__adder_fu_1__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bge = (5U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.bne = (1U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.beq = (0U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.blt = (4U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.bltu = (6U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.bgeu = (7U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.ALUop1 = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.ALUop), 2U));
    vlSelf->__PVT__adder->rs1 = vlSelfRef.rs1;
    vlSelf->__PVT__adder->rs2 = vlSelfRef.rs2;
    vlSelf->__PVT__adder->ALUop1 = vlSelfRef.ALUop1;
}

void Vcore_add___nba_comb__TOP__core__adder_fu_1__1(Vcore_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_add___nba_comb__TOP__core__adder_fu_1__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.carry = vlSelf->__PVT__adder->carry;
    vlSelfRef.overflow = vlSelf->__PVT__adder->overflow;
}

void Vcore_add___nba_comb__TOP__core__adder_fu_1__2(Vcore_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_add___nba_comb__TOP__core__adder_fu_1__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.s = vlSelf->__PVT__adder->s;
    vlSelfRef.zero = vlSelf->__PVT__adder->zero;
    vlSelfRef.negative = vlSelf->__PVT__adder->negative;
    vlSelfRef.result = ((7U == (IData)(vlSelfRef.ALUop))
                         ? (((IData)(vlSelfRef.negative) 
                             ^ (IData)(vlSelfRef.overflow))
                             ? 1U : 0U) : ((6U == (IData)(vlSelfRef.ALUop))
                                            ? ((IData)(vlSelfRef.carry)
                                                ? 0U
                                                : 1U)
                                            : ((1U 
                                                == (IData)(vlSelfRef.ALUop))
                                                ? (vlSelfRef.rs1 
                                                   ^ vlSelfRef.rs2)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.ALUop))
                                                    ? 
                                                   (vlSelfRef.rs1 
                                                    | vlSelfRef.rs2)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.ALUop))
                                                     ? 
                                                    (vlSelfRef.rs1 
                                                     & vlSelfRef.rs2)
                                                     : vlSelfRef.s)))));
    vlSelfRef.b_inter = (((((((IData)(vlSelfRef.bne) 
                              & (~ (IData)(vlSelfRef.zero))) 
                             | ((IData)(vlSelfRef.beq) 
                                & (IData)(vlSelfRef.zero))) 
                            | ((IData)(vlSelfRef.blt) 
                               & ((IData)(vlSelfRef.negative) 
                                  ^ (IData)(vlSelfRef.overflow)))) 
                           | ((IData)(vlSelfRef.bge) 
                              & (~ ((IData)(vlSelfRef.negative) 
                                    ^ (IData)(vlSelfRef.overflow))))) 
                          | ((IData)(vlSelfRef.bltu) 
                             & (~ (IData)(vlSelfRef.carry)))) 
                         | ((IData)(vlSelfRef.bgeu) 
                            & (IData)(vlSelfRef.carry)));
}
