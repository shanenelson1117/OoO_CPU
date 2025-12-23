// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__1__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__1__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__1__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__1__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__2__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__2__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__2__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__2__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__3__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__3__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__3__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__3__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__4__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__4__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__4__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__4__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__5__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__5__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__5__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__5__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__6__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__6__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__6__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__6__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__7__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__7__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__7__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__7__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__8__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__8__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__8__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__8__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__9__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__9__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__9__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__9__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__10__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__10__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__10__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__10__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__11__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__11__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__11__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__11__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__12__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__12__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__12__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__12__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__13__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__13__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__13__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__13__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__14__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__14__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__14__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__14__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__15__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__15__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__15__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__15__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__16__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__16__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__16__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__16__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__17__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__17__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__17__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__17__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__18__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__18__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__18__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__18__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__19__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__19__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__19__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__19__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__20__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__20__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__20__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__20__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__21__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__21__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__21__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__21__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__22__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__22__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__22__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__22__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__23__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__23__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__23__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__23__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__24__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__24__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__24__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__24__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__25__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__25__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__25__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__25__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__26__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__26__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__26__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__26__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__27__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__27__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__27__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__27__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__28__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__28__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__28__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__28__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__29__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__29__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__29__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__29__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__30__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__30__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__30__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__30__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__31__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___ico_sequent__TOP__core__registers__registers__BRA__31__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.q = vlSelfRef.q_reg;
}

void Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__31__KET____DOT__reg_i__0(Vcore_register* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_register___nba_sequent__TOP__core__registers__registers__BRA__31__KET____DOT__reg_i__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__q_reg = vlSelfRef.q_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__q_reg = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.__Vdly__q_reg = vlSelfRef.d;
    }
    vlSelfRef.q_reg = vlSelfRef.__Vdly__q_reg;
    vlSelfRef.q = vlSelfRef.q_reg;
}
