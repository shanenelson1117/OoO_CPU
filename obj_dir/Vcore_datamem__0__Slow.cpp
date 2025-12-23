// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_datamem___stl_sequent__TOP__core__data_memory__the_mem__0(Vcore_datamem* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_datamem___stl_sequent__TOP__core__data_memory__the_mem__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aligned_address = ((1U == (IData)(vlSelfRef.xfer_size))
                                  ? vlSelfRef.address
                                  : ((2U == (IData)(vlSelfRef.xfer_size))
                                      ? VL_CONCAT_III(32,31,1, 
                                                      (0x7fffffffU 
                                                       & VL_SEL_IIII(32, vlSelfRef.address, 1U, 31)), 0U)
                                      : ((4U == (IData)(vlSelfRef.xfer_size))
                                          ? VL_CONCAT_III(32,30,2, 
                                                          (0x3fffffffU 
                                                           & VL_SEL_IIII(32, vlSelfRef.address, 2U, 30)), 0U)
                                          : VL_CONCAT_III(32,30,2, 
                                                          (0x3fffffffU 
                                                           & VL_SEL_IIII(32, vlSelfRef.address, 2U, 30)), 0U))));
    vlSelfRef.read_data = 0U;
    if (vlSelfRef.read_enable) {
        vlSelfRef.i = 0U;
        while ((vlSelfRef.i < VL_EXTEND_II(32,4, (IData)(vlSelfRef.xfer_size)))) {
            VL_ASSIGNSEL_II(32, 8, (0x0000001fU & VL_SEL_IIII(32, 
                                                              VL_SHIFTL_III(32,32,32, vlSelfRef.i, 3U), 0U, 5)), vlSelfRef.read_data, 
                            vlSelfRef.mem[(0x00007fffU 
                                           & (VL_SEL_IIII(32, vlSelfRef.aligned_address, 0U, 15) 
                                              + VL_SEL_IIII(32, vlSelfRef.i, 0U, 15)))]);
            vlSelfRef.i = ((IData)(1U) + vlSelfRef.i);
        }
    }
}

VL_ATTR_COLD void Vcore_datamem___ctor_var_reset(Vcore_datamem* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_datamem___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12021632533271657083ull);
    vlSelf->write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3448544431963303041ull);
    vlSelf->read_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6662707938888342393ull);
    vlSelf->write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11298066925140600626ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->xfer_size = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9596001915558650414ull);
    vlSelf->read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13838377541112373472ull);
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4032165174000709208ull);
    }
    vlSelf->aligned_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16298096918010197379ull);
    vlSelf->i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15817570140490810055ull);
    vlSelf->j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15917291556903334389ull);
    vlSelf->__VdlyVal__mem__v0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5712071110568326953ull);
    vlSelf->__VdlyDim0__mem__v0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 12217656160251713783ull);
}
