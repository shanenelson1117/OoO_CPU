// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_ras___ico_sequent__TOP__core__fetch_stage__ret_addr_s__0(Vcore_ras* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ras___ico_sequent__TOP__core__fetch_stage__ret_addr_s__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.empty = (0U == (IData)(vlSelfRef.sp));
    vlSelfRef.full = (0x0fU == (IData)(vlSelfRef.sp));
    vlSelfRef.ptr = vlSelfRef.sp;
}

void Vcore_ras___ico_comb__TOP__core__fetch_stage__ret_addr_s__0(Vcore_ras* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ras___ico_comb__TOP__core__fetch_stage__ret_addr_s__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ras_new_pc = ((IData)(vlSelfRef.reset)
                             ? 0U : ((IData)(vlSelfRef.mispredicted)
                                      ? vlSelfRef.__SYM__stack
                                     [(0x0000000fU 
                                       & ((IData)(vlSelfRef.flush_ptr) 
                                          - (IData)(1U)))]
                                      : vlSelfRef.__SYM__stack
                                     [vlSelfRef.sp]));
}

void Vcore_ras___act_comb__TOP__core__fetch_stage__ret_addr_s__0(Vcore_ras* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ras___act_comb__TOP__core__fetch_stage__ret_addr_s__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ras_new_pc = ((IData)(vlSelfRef.reset)
                             ? 0U : ((IData)(vlSelfRef.mispredicted)
                                      ? vlSelfRef.__SYM__stack
                                     [(0x0000000fU 
                                       & ((IData)(vlSelfRef.flush_ptr) 
                                          - (IData)(1U)))]
                                      : vlSelfRef.__SYM__stack
                                     [vlSelfRef.sp]));
}

void Vcore_ras___nba_sequent__TOP__core__fetch_stage__ret_addr_s__0(Vcore_ras* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ras___nba_sequent__TOP__core__fetch_stage__ret_addr_s__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet____SYM__stack__v0 = 0U;
    vlSelfRef.__VdlySet____SYM__stack__v1 = 0U;
    vlSelfRef.__Vdly__sp = vlSelfRef.sp;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__sp = 0U;
    } else if (vlSelfRef.mispredicted) {
        vlSelfRef.__Vdly__sp = vlSelfRef.flush_ptr;
    } else if ((((IData)(vlSelfRef.push) & (~ (IData)(vlSelfRef.pop))) 
                & (~ (IData)(vlSelfRef.full)))) {
        vlSelfRef.__Vdly__sp = (0x0000000fU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.sp)));
        vlSelfRef.__VdlyVal____SYM__stack__v0 = vlSelfRef.ras_update;
        vlSelfRef.__VdlyDim0____SYM__stack__v0 = (0x0000000fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.sp)));
        vlSelfRef.__VdlySet____SYM__stack__v0 = 1U;
    } else if ((((~ (IData)(vlSelfRef.push)) & (IData)(vlSelfRef.pop)) 
                & (~ (IData)(vlSelfRef.empty)))) {
        vlSelfRef.__Vdly__sp = (0x0000000fU & ((IData)(vlSelfRef.sp) 
                                               - (IData)(1U)));
    } else if (((IData)(vlSelfRef.push) & (IData)(vlSelfRef.pop))) {
        vlSelfRef.__VdlyVal____SYM__stack__v1 = vlSelfRef.ras_update;
        vlSelfRef.__VdlyDim0____SYM__stack__v1 = vlSelfRef.sp;
        vlSelfRef.__VdlySet____SYM__stack__v1 = 1U;
    }
    if (vlSelfRef.__VdlySet____SYM__stack__v0) {
        vlSelfRef.__SYM__stack[vlSelfRef.__VdlyDim0____SYM__stack__v0] 
            = vlSelfRef.__VdlyVal____SYM__stack__v0;
    }
    if (vlSelfRef.__VdlySet____SYM__stack__v1) {
        vlSelfRef.__SYM__stack[vlSelfRef.__VdlyDim0____SYM__stack__v1] 
            = vlSelfRef.__VdlyVal____SYM__stack__v1;
    }
    vlSelfRef.sp = vlSelfRef.__Vdly__sp;
    vlSelfRef.empty = (0U == (IData)(vlSelfRef.sp));
    vlSelfRef.full = (0x0fU == (IData)(vlSelfRef.sp));
    vlSelfRef.ptr = vlSelfRef.sp;
}

void Vcore_ras___nba_comb__TOP__core__fetch_stage__ret_addr_s__0(Vcore_ras* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ras___nba_comb__TOP__core__fetch_stage__ret_addr_s__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ras_new_pc = ((IData)(vlSelfRef.reset)
                             ? 0U : ((IData)(vlSelfRef.mispredicted)
                                      ? vlSelfRef.__SYM__stack
                                     [(0x0000000fU 
                                       & ((IData)(vlSelfRef.flush_ptr) 
                                          - (IData)(1U)))]
                                      : vlSelfRef.__SYM__stack
                                     [vlSelfRef.sp]));
}
