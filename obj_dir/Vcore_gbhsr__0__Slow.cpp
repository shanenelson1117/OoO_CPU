// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_gbhsr___stl_sequent__TOP__core__fetch_stage__history_reg__0(Vcore_gbhsr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_gbhsr___stl_sequent__TOP__core__fetch_stage__history_reg__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__0__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__0__KET____DOT__biti.q;
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__1__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__1__KET____DOT__biti.q;
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__2__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__2__KET____DOT__biti.q;
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__3__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__3__KET____DOT__biti.q;
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__4__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__4__KET____DOT__biti.q;
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__5__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__5__KET____DOT__biti.q;
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__6__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__6__KET____DOT__biti.q;
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__7__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__7__KET____DOT__biti.q;
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__8__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__8__KET____DOT__biti.q;
    vlSelfRef.__Vcellout__gbhsr_dffs__BRA__9__KET____DOT__biti__q 
        = vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__9__KET____DOT__biti.q;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__0__KET____DOT__biti.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__1__KET____DOT__biti.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__2__KET____DOT__biti.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__3__KET____DOT__biti.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__4__KET____DOT__biti.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__5__KET____DOT__biti.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__6__KET____DOT__biti.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__7__KET____DOT__biti.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__8__KET____DOT__biti.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__9__KET____DOT__biti.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__0__KET____DOT__biti.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__1__KET____DOT__biti.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__2__KET____DOT__biti.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__3__KET____DOT__biti.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__4__KET____DOT__biti.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__5__KET____DOT__biti.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__6__KET____DOT__biti.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__7__KET____DOT__biti.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__8__KET____DOT__biti.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__9__KET____DOT__biti.reset 
        = vlSelfRef.reset;
    VL_ASSIGNSEL_II(10, 8, 0U, vlSelfRef.history, VL_CONCAT_III(8,4,4, 
                                                                VL_CONCAT_III(4,2,2, 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__Vcellout__gbhsr_dffs__BRA__7__KET____DOT__biti__q), (IData)(vlSelfRef.__Vcellout__gbhsr_dffs__BRA__6__KET____DOT__biti__q)), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__Vcellout__gbhsr_dffs__BRA__5__KET____DOT__biti__q), (IData)(vlSelfRef.__Vcellout__gbhsr_dffs__BRA__4__KET____DOT__biti__q))), 
                                                                VL_CONCAT_III(4,2,2, 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__Vcellout__gbhsr_dffs__BRA__3__KET____DOT__biti__q), (IData)(vlSelfRef.__Vcellout__gbhsr_dffs__BRA__2__KET____DOT__biti__q)), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__Vcellout__gbhsr_dffs__BRA__1__KET____DOT__biti__q), (IData)(vlSelfRef.__Vcellout__gbhsr_dffs__BRA__0__KET____DOT__biti__q)))));
    VL_ASSIGNSEL_II(10, 2, 8U, vlSelfRef.history, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__Vcellout__gbhsr_dffs__BRA__9__KET____DOT__biti__q), (IData)(vlSelfRef.__Vcellout__gbhsr_dffs__BRA__8__KET____DOT__biti__q)));
}

VL_ATTR_COLD void Vcore_gbhsr___stl_comb__TOP__core__fetch_stage__history_reg__0(Vcore_gbhsr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_gbhsr___stl_comb__TOP__core__fetch_stage__history_reg__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.d = ((IData)(vlSelfRef.valid_in) ? VL_CONCAT_III(10,9,1, 
                                                               (0x000001ffU 
                                                                & VL_SEL_IIII(10, (IData)(vlSelfRef.history), 0U, 9)), (IData)(vlSelfRef.update))
                    : (IData)(vlSelfRef.history));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__0__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 0U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__1__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 1U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__2__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 2U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__3__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 3U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__4__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 4U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__5__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 5U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__6__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 6U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__7__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 7U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__8__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 8U));
    vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__9__KET____DOT__biti__d 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.d), 9U));
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__0__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__0__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__1__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__1__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__2__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__2__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__3__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__3__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__4__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__4__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__5__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__5__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__6__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__6__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__7__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__7__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__8__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__8__KET____DOT__biti__d;
    vlSymsp->TOP__core__fetch_stage__history_reg__gbhsr_dffs__BRA__9__KET____DOT__biti.d 
        = vlSelfRef.__Vcellinp__gbhsr_dffs__BRA__9__KET____DOT__biti__d;
}

VL_ATTR_COLD void Vcore_gbhsr___ctor_var_reset(Vcore_gbhsr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_gbhsr___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12726010985536908150ull);
    vlSelf->valid_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16540271516330450727ull);
    vlSelf->history = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17152829647071001359ull);
    vlSelf->d = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1720370409040345145ull);
    vlSelf->__Vcellout__gbhsr_dffs__BRA__0__KET____DOT__biti__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1850987818058571680ull);
    vlSelf->__Vcellinp__gbhsr_dffs__BRA__0__KET____DOT__biti__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3138598752408718841ull);
    vlSelf->__Vcellout__gbhsr_dffs__BRA__1__KET____DOT__biti__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18281434709296229497ull);
    vlSelf->__Vcellinp__gbhsr_dffs__BRA__1__KET____DOT__biti__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10467802837574381365ull);
    vlSelf->__Vcellout__gbhsr_dffs__BRA__2__KET____DOT__biti__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10968527249016252456ull);
    vlSelf->__Vcellinp__gbhsr_dffs__BRA__2__KET____DOT__biti__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17408056264265101729ull);
    vlSelf->__Vcellout__gbhsr_dffs__BRA__3__KET____DOT__biti__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16185267979016492004ull);
    vlSelf->__Vcellinp__gbhsr_dffs__BRA__3__KET____DOT__biti__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8480191827974194983ull);
    vlSelf->__Vcellout__gbhsr_dffs__BRA__4__KET____DOT__biti__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1442338041791248288ull);
    vlSelf->__Vcellinp__gbhsr_dffs__BRA__4__KET____DOT__biti__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7850775635433943764ull);
    vlSelf->__Vcellout__gbhsr_dffs__BRA__5__KET____DOT__biti__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17999325789336418513ull);
    vlSelf->__Vcellinp__gbhsr_dffs__BRA__5__KET____DOT__biti__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8333802703649313209ull);
    vlSelf->__Vcellout__gbhsr_dffs__BRA__6__KET____DOT__biti__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7300830986585500453ull);
    vlSelf->__Vcellinp__gbhsr_dffs__BRA__6__KET____DOT__biti__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14385386107791193799ull);
    vlSelf->__Vcellout__gbhsr_dffs__BRA__7__KET____DOT__biti__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8260281150401915895ull);
    vlSelf->__Vcellinp__gbhsr_dffs__BRA__7__KET____DOT__biti__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16762112644867435346ull);
    vlSelf->__Vcellout__gbhsr_dffs__BRA__8__KET____DOT__biti__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10838244124926770143ull);
    vlSelf->__Vcellinp__gbhsr_dffs__BRA__8__KET____DOT__biti__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3185726187130508875ull);
    vlSelf->__Vcellout__gbhsr_dffs__BRA__9__KET____DOT__biti__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15562127398855230818ull);
    vlSelf->__Vcellinp__gbhsr_dffs__BRA__9__KET____DOT__biti__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4172234590010412045ull);
}
