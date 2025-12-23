// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_pc___ico_sequent__TOP__core__fetch_stage__program_counter__0(Vcore_pc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_pc___ico_sequent__TOP__core__fetch_stage__program_counter__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__fetch_stage__program_counter__inst.address 
        = vlSelfRef.pc;
    vlSymsp->TOP__core__fetch_stage__program_counter__inst.clk 
        = vlSelfRef.clk;
}

void Vcore_pc___ico_sequent__TOP__core__fetch_stage__program_counter__1(Vcore_pc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_pc___ico_sequent__TOP__core__fetch_stage__program_counter__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.read_exception = vlSymsp->TOP__core__fetch_stage__program_counter__inst.exception;
    vlSelfRef.mcause = vlSymsp->TOP__core__fetch_stage__program_counter__inst.mcause;
    vlSelfRef.instruction = vlSymsp->TOP__core__fetch_stage__program_counter__inst.instruction;
}

void Vcore_pc___ico_comb__TOP__core__fetch_stage__program_counter__0(Vcore_pc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_pc___ico_comb__TOP__core__fetch_stage__program_counter__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.new_pc = (((IData)(vlSelfRef.stall) & 
                         (~ (IData)(vlSelfRef.mispredicted)))
                         ? vlSelfRef.pc : vlSelfRef.pc_update);
}

void Vcore_pc___act_comb__TOP__core__fetch_stage__program_counter__0(Vcore_pc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_pc___act_comb__TOP__core__fetch_stage__program_counter__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.new_pc = (((IData)(vlSelfRef.stall) & 
                         (~ (IData)(vlSelfRef.mispredicted)))
                         ? vlSelfRef.pc : vlSelfRef.pc_update);
}

void Vcore_pc___nba_sequent__TOP__core__fetch_stage__program_counter__0(Vcore_pc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_pc___nba_sequent__TOP__core__fetch_stage__program_counter__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__pc = vlSelfRef.pc;
    vlSelfRef.__Vdly__pc = ((IData)(vlSelfRef.reset)
                             ? 0x80000000U : ((IData)(vlSelfRef.exception)
                                               ? vlSelfRef.mtvec_ReadData
                                               : ((IData)(vlSelfRef.mret)
                                                   ? vlSelfRef.mepc_ReadData
                                                   : vlSelfRef.new_pc)));
    vlSelfRef.pc = vlSelfRef.__Vdly__pc;
    vlSymsp->TOP__core__fetch_stage__program_counter__inst.address 
        = vlSelfRef.pc;
}

void Vcore_pc___nba_sequent__TOP__core__fetch_stage__program_counter__1(Vcore_pc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_pc___nba_sequent__TOP__core__fetch_stage__program_counter__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.read_exception = vlSymsp->TOP__core__fetch_stage__program_counter__inst.exception;
    vlSelfRef.mcause = vlSymsp->TOP__core__fetch_stage__program_counter__inst.mcause;
}

void Vcore_pc___nba_comb__TOP__core__fetch_stage__program_counter__0(Vcore_pc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_pc___nba_comb__TOP__core__fetch_stage__program_counter__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.instruction = vlSymsp->TOP__core__fetch_stage__program_counter__inst.instruction;
}

void Vcore_pc___nba_comb__TOP__core__fetch_stage__program_counter__1(Vcore_pc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_pc___nba_comb__TOP__core__fetch_stage__program_counter__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.new_pc = (((IData)(vlSelfRef.stall) & 
                         (~ (IData)(vlSelfRef.mispredicted)))
                         ? vlSelfRef.pc : vlSelfRef.pc_update);
}
