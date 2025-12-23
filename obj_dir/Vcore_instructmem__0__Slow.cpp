// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_instructmem___eval_initial__TOP__core__fetch_stage__program_counter__inst(Vcore_instructmem* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_instructmem___eval_initial__TOP__core__fetch_stage__program_counter__inst\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TIMEFORMAT_IINI(true, 0xfffffff7U, true, 2U, true, " ns"s, true, 0x0000000aU, vlSymsp->_vm_contextp__);
}

VL_ATTR_COLD void Vcore_instructmem___stl_sequent__TOP__core__fetch_stage__program_counter__inst__0(Vcore_instructmem* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_instructmem___stl_sequent__TOP__core__fetch_stage__program_counter__inst__0\n"); );
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

VL_ATTR_COLD void Vcore_instructmem___ctor_var_reset(Vcore_instructmem* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_instructmem___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12021632533271657083ull);
    vlSelf->instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8876431511369994264ull);
    vlSelf->exception = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 765130616356482916ull);
    vlSelf->mcause = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16155705988360301293ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4032165174000709208ull);
    }
    vlSelf->mem_wr_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11541756044354751528ull);
    vlSelf->mem_wr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2840439259503414816ull);
    vlSelf->mem_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10623438697984641879ull);
    vlSelf->__VdlyVal__mem__v0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5712071110568326953ull);
    vlSelf->__VdlyDim0__mem__v0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12217656160251713783ull);
    vlSelf->__VdlySet__mem__v0 = 0;
}
