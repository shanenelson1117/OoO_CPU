// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_csr___stl_sequent__TOP__core__csrs__0(Vcore_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_csr___stl_sequent__TOP__core__csrs__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mepc_ReadData = ((0x011fU >= (0x000001ffU 
                                            & VL_SEL_IIII(32, 
                                                          VL_SHIFTL_III(32,32,32, 
                                                                        VL_EXTEND_II(32,3, 
                                                                                ([&]() {
                                    vlSelfRef.__Vfunc_index__0__csr = 0x0300U;
                                    vlSelfRef.__Vfunc_index__0__Vfuncout 
                                        = ((0x0300U 
                                            == (IData)(vlSelfRef.__Vfunc_index__0__csr))
                                            ? 0U : 
                                           ((0x0305U 
                                             == (IData)(vlSelfRef.__Vfunc_index__0__csr))
                                             ? 1U : 
                                            ((0x0314U 
                                              == (IData)(vlSelfRef.__Vfunc_index__0__csr))
                                              ? 2U : 
                                             ((0x0341U 
                                               == (IData)(vlSelfRef.__Vfunc_index__0__csr))
                                               ? 3U
                                               : 7U))));
                                }(), (IData)(vlSelfRef.__Vfunc_index__0__Vfuncout))), 5U), 0U, 9)))
                                ? VL_SEL_IWII(288, vlSelfRef.csr_data, 
                                              (0x000001ffU 
                                               & VL_SEL_IIII(32, 
                                                             VL_SHIFTL_III(32,32,32, 
                                                                           VL_EXTEND_II(32,3, 
                                                                                ([&]() {
                                    vlSelfRef.__Vfunc_index__1__csr = 0x0300U;
                                    vlSelfRef.__Vfunc_index__1__Vfuncout 
                                        = ((0x0300U 
                                            == (IData)(vlSelfRef.__Vfunc_index__1__csr))
                                            ? 0U : 
                                           ((0x0305U 
                                             == (IData)(vlSelfRef.__Vfunc_index__1__csr))
                                             ? 1U : 
                                            ((0x0314U 
                                              == (IData)(vlSelfRef.__Vfunc_index__1__csr))
                                              ? 2U : 
                                             ((0x0341U 
                                               == (IData)(vlSelfRef.__Vfunc_index__1__csr))
                                               ? 3U
                                               : 7U))));
                                }(), (IData)(vlSelfRef.__Vfunc_index__1__Vfuncout))), 5U), 0U, 9)), 32)
                                : 0U);
    vlSelfRef.mtvec_ReadData = ((0x011fU >= (0x000001ffU 
                                             & VL_SEL_IIII(32, 
                                                           VL_SHIFTL_III(32,32,32, 
                                                                         VL_EXTEND_II(32,3, 
                                                                                ([&]() {
                                    vlSelfRef.__Vfunc_index__2__csr = 0x0305U;
                                    vlSelfRef.__Vfunc_index__2__Vfuncout 
                                        = ((0x0300U 
                                            == (IData)(vlSelfRef.__Vfunc_index__2__csr))
                                            ? 0U : 
                                           ((0x0305U 
                                             == (IData)(vlSelfRef.__Vfunc_index__2__csr))
                                             ? 1U : 
                                            ((0x0314U 
                                              == (IData)(vlSelfRef.__Vfunc_index__2__csr))
                                              ? 2U : 
                                             ((0x0341U 
                                               == (IData)(vlSelfRef.__Vfunc_index__2__csr))
                                               ? 3U
                                               : 7U))));
                                }(), (IData)(vlSelfRef.__Vfunc_index__2__Vfuncout))), 5U), 0U, 9)))
                                 ? VL_SEL_IWII(288, vlSelfRef.csr_data, 
                                               (0x000001ffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_SHIFTL_III(32,32,32, 
                                                                            VL_EXTEND_II(32,3, 
                                                                                ([&]() {
                                    vlSelfRef.__Vfunc_index__3__csr = 0x0305U;
                                    vlSelfRef.__Vfunc_index__3__Vfuncout 
                                        = ((0x0300U 
                                            == (IData)(vlSelfRef.__Vfunc_index__3__csr))
                                            ? 0U : 
                                           ((0x0305U 
                                             == (IData)(vlSelfRef.__Vfunc_index__3__csr))
                                             ? 1U : 
                                            ((0x0314U 
                                              == (IData)(vlSelfRef.__Vfunc_index__3__csr))
                                              ? 2U : 
                                             ((0x0341U 
                                               == (IData)(vlSelfRef.__Vfunc_index__3__csr))
                                               ? 3U
                                               : 7U))));
                                }(), (IData)(vlSelfRef.__Vfunc_index__3__Vfuncout))), 5U), 0U, 9)), 32)
                                 : 0U);
}

VL_ATTR_COLD void Vcore_csr___stl_comb__TOP__core__csrs__0(Vcore_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_csr___stl_comb__TOP__core__csrs__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csr_ReadData = ((IData)(vlSelfRef.valid_read)
                               ? ((0x011fU >= (0x000001ffU 
                                               & VL_SEL_IIII(32, 
                                                             VL_SHIFTL_III(32,32,32, 
                                                                           VL_EXTEND_II(32,3, (IData)(vlSelfRef.csr_read_select)), 5U), 0U, 9)))
                                   ? VL_SEL_IWII(288, vlSelfRef.csr_data, 
                                                 (0x000001ffU 
                                                  & VL_SEL_IIII(32, 
                                                                VL_SHIFTL_III(32,32,32, 
                                                                              VL_EXTEND_II(32,3, (IData)(vlSelfRef.csr_read_select)), 5U), 0U, 9)), 32)
                                   : 0U) : 0U);
}

VL_ATTR_COLD void Vcore_csr___stl_comb__TOP__core__csrs__1(Vcore_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_csr___stl_comb__TOP__core__csrs__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.illegal_access_e = (((IData)(vlSelfRef.valid_write) 
                                   | (0U == (IData)(vlSelfRef.special))) 
                                  & (0U == (IData)(vlSelfRef.curr_priv)));
    vlSelfRef.mret = ((0U == (IData)(vlSelfRef.special)) 
                      & (0U != (IData)(vlSelfRef.curr_priv)));
}

VL_ATTR_COLD void Vcore_csr___ctor_var_reset(Vcore_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_csr___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->csr_read_select = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11976448709663817359ull);
    vlSelf->csr_write_select = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11538044570823722493ull);
    vlSelf->valid_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9127890896427470787ull);
    vlSelf->valid_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6382707320404232801ull);
    vlSelf->special = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1033624942822192448ull);
    vlSelf->mepc_WriteData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12277894522739170872ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->csr_WriteData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14458753227888770815ull);
    vlSelf->mcause = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16155705988360301293ull);
    vlSelf->exception = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 765130616356482916ull);
    vlSelf->csr_ReadData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4142972005914249151ull);
    vlSelf->mepc_ReadData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17906630443429346129ull);
    vlSelf->mtvec_ReadData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5364263975921930868ull);
    vlSelf->curr_priv = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 513062980522173981ull);
    vlSelf->illegal_access_e = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2103023828628314327ull);
    vlSelf->mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8098803689761564963ull);
    VL_SCOPED_RAND_RESET_W(288, vlSelf->csr_data, __VscopeHash, 15513057494073897048ull);
    vlSelf->__Vlvbound_ha782512b__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13413259711984768074ull);
    vlSelf->__Vfunc_index__0__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17640924879333851708ull);
    vlSelf->__Vfunc_index__0__csr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6620238372401109026ull);
    vlSelf->__Vfunc_index__1__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14828471549028937645ull);
    vlSelf->__Vfunc_index__1__csr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 441778000407039502ull);
    vlSelf->__Vfunc_index__2__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13549390414698758872ull);
    vlSelf->__Vfunc_index__2__csr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4627512224104069780ull);
    vlSelf->__Vfunc_index__3__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8101879180647892121ull);
    vlSelf->__Vfunc_index__3__csr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7787829032826445962ull);
    VL_SCOPED_RAND_RESET_W(288, vlSelf->__Vdly__csr_data, __VscopeHash, 10590346823564651663ull);
    vlSelf->__Vdly__curr_priv = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12378702472429492765ull);
}
