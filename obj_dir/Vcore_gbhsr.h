// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_GBHSR_H_
#define VERILATED_VCORE_GBHSR_H_  // guard

#include "verilated.h"
class Vcore_D_FF;


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_gbhsr final : public VerilatedModule {
  public:
    // CELLS
    Vcore_D_FF* __PVT__gbhsr_dffs__BRA__0__KET____DOT__biti;
    Vcore_D_FF* __PVT__gbhsr_dffs__BRA__1__KET____DOT__biti;
    Vcore_D_FF* __PVT__gbhsr_dffs__BRA__2__KET____DOT__biti;
    Vcore_D_FF* __PVT__gbhsr_dffs__BRA__3__KET____DOT__biti;
    Vcore_D_FF* __PVT__gbhsr_dffs__BRA__4__KET____DOT__biti;
    Vcore_D_FF* __PVT__gbhsr_dffs__BRA__5__KET____DOT__biti;
    Vcore_D_FF* __PVT__gbhsr_dffs__BRA__6__KET____DOT__biti;
    Vcore_D_FF* __PVT__gbhsr_dffs__BRA__7__KET____DOT__biti;
    Vcore_D_FF* __PVT__gbhsr_dffs__BRA__8__KET____DOT__biti;
    Vcore_D_FF* __PVT__gbhsr_dffs__BRA__9__KET____DOT__biti;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(update,0,0);
    VL_IN8(valid_in,0,0);
    CData/*0:0*/ __Vcellout__gbhsr_dffs__BRA__0__KET____DOT__biti__q;
    CData/*0:0*/ __Vcellinp__gbhsr_dffs__BRA__0__KET____DOT__biti__d;
    CData/*0:0*/ __Vcellout__gbhsr_dffs__BRA__1__KET____DOT__biti__q;
    CData/*0:0*/ __Vcellinp__gbhsr_dffs__BRA__1__KET____DOT__biti__d;
    CData/*0:0*/ __Vcellout__gbhsr_dffs__BRA__2__KET____DOT__biti__q;
    CData/*0:0*/ __Vcellinp__gbhsr_dffs__BRA__2__KET____DOT__biti__d;
    CData/*0:0*/ __Vcellout__gbhsr_dffs__BRA__3__KET____DOT__biti__q;
    CData/*0:0*/ __Vcellinp__gbhsr_dffs__BRA__3__KET____DOT__biti__d;
    CData/*0:0*/ __Vcellout__gbhsr_dffs__BRA__4__KET____DOT__biti__q;
    CData/*0:0*/ __Vcellinp__gbhsr_dffs__BRA__4__KET____DOT__biti__d;
    CData/*0:0*/ __Vcellout__gbhsr_dffs__BRA__5__KET____DOT__biti__q;
    CData/*0:0*/ __Vcellinp__gbhsr_dffs__BRA__5__KET____DOT__biti__d;
    CData/*0:0*/ __Vcellout__gbhsr_dffs__BRA__6__KET____DOT__biti__q;
    CData/*0:0*/ __Vcellinp__gbhsr_dffs__BRA__6__KET____DOT__biti__d;
    CData/*0:0*/ __Vcellout__gbhsr_dffs__BRA__7__KET____DOT__biti__q;
    CData/*0:0*/ __Vcellinp__gbhsr_dffs__BRA__7__KET____DOT__biti__d;
    CData/*0:0*/ __Vcellout__gbhsr_dffs__BRA__8__KET____DOT__biti__q;
    CData/*0:0*/ __Vcellinp__gbhsr_dffs__BRA__8__KET____DOT__biti__d;
    CData/*0:0*/ __Vcellout__gbhsr_dffs__BRA__9__KET____DOT__biti__q;
    CData/*0:0*/ __Vcellinp__gbhsr_dffs__BRA__9__KET____DOT__biti__d;
    VL_OUT16(history,9,0);
    SData/*9:0*/ d;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_gbhsr(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_gbhsr();
    VL_UNCOPYABLE(Vcore_gbhsr);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
