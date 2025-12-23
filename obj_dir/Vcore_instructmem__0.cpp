// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_instructmem___ico_sequent__TOP__core__fetch_stage__program_counter__inst__0(Vcore_instructmem* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_instructmem___ico_sequent__TOP__core__fetch_stage__program_counter__inst__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.exception = 0U;
    vlSelfRef.mcause = 0U;
    if (VL_UNLIKELY(((0x00010000U < VL_SHIFTR_III(32,32,32, 
                                                  (vlSelfRef.address 
                                                   - (IData)(0x80000000U)), 2U))))) {
        vlSelfRef.exception = 1U;
        vlSelfRef.mcause = 1U;
        VL_WRITEF_NX("oob: %x\n",0,32,vlSelfRef.address);
    } else if (VL_UNLIKELY(((0U != (3U & VL_SEL_IIII(32, vlSelfRef.address, 0U, 2)))))) {
        VL_WRITEF_NX("unaligned: %x\n",0,32,vlSelfRef.address);
        vlSelfRef.exception = 1U;
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0U != (3U & VL_SEL_IIII(32, vlSelfRef.address, 0U, 2)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: instructmem.sv:47: Assertion failed in %Ncore.fetch_stage.program_counter.inst: %10#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.address);
            VL_STOP_MT("source/instructmem.sv", 47, "", false);
        }
    }
    vlSelfRef.instruction = ((0x80000000U > vlSelfRef.address)
                              ? 0x00000013U : vlSelfRef.mem
                             [(0x0000ffffU & VL_SEL_IIII(32, 
                                                         (vlSelfRef.address 
                                                          - (IData)(0x80000000U)), 2U, 16))]);
}

void Vcore_instructmem___nba_sequent__TOP__core__fetch_stage__program_counter__inst__0(Vcore_instructmem* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_instructmem___nba_sequent__TOP__core__fetch_stage__program_counter__inst__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__mem__v0 = 0U;
    if (vlSelfRef.mem_wr_en) {
        vlSelfRef.__VdlyVal__mem__v0 = vlSelfRef.mem_wr_data;
        vlSelfRef.__VdlyDim0__mem__v0 = (0x0000ffffU 
                                         & VL_SEL_IIII(32, vlSelfRef.mem_wr_addr, 0U, 16));
        vlSelfRef.__VdlySet__mem__v0 = 1U;
    }
    if (vlSelfRef.__VdlySet__mem__v0) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v0] 
            = vlSelfRef.__VdlyVal__mem__v0;
    }
}

void Vcore_instructmem___nba_sequent__TOP__core__fetch_stage__program_counter__inst__1(Vcore_instructmem* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_instructmem___nba_sequent__TOP__core__fetch_stage__program_counter__inst__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.exception = 0U;
    vlSelfRef.mcause = 0U;
    if (VL_UNLIKELY(((0x00010000U < VL_SHIFTR_III(32,32,32, 
                                                  (vlSelfRef.address 
                                                   - (IData)(0x80000000U)), 2U))))) {
        vlSelfRef.exception = 1U;
        vlSelfRef.mcause = 1U;
        VL_WRITEF_NX("oob: %x\n",0,32,vlSelfRef.address);
    } else if (VL_UNLIKELY(((0U != (3U & VL_SEL_IIII(32, vlSelfRef.address, 0U, 2)))))) {
        VL_WRITEF_NX("unaligned: %x\n",0,32,vlSelfRef.address);
        vlSelfRef.exception = 1U;
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0U != (3U & VL_SEL_IIII(32, vlSelfRef.address, 0U, 2)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: instructmem.sv:47: Assertion failed in %Ncore.fetch_stage.program_counter.inst: %10#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.address);
            VL_STOP_MT("source/instructmem.sv", 47, "", false);
        }
    }
}

void Vcore_instructmem___nba_comb__TOP__core__fetch_stage__program_counter__inst__0(Vcore_instructmem* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_instructmem___nba_comb__TOP__core__fetch_stage__program_counter__inst__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.instruction = ((0x80000000U > vlSelfRef.address)
                              ? 0x00000013U : vlSelfRef.mem
                             [(0x0000ffffU & VL_SEL_IIII(32, 
                                                         (vlSelfRef.address 
                                                          - (IData)(0x80000000U)), 2U, 16))]);
}
