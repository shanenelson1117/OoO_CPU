// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_RAS_H_
#define VERILATED_VCORE_RAS_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_ras final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(push,0,0);
    VL_IN8(pop,0,0);
    VL_IN8(mispredicted,0,0);
    VL_IN8(flush_ptr,3,0);
    VL_OUT8(ptr,3,0);
    CData/*3:0*/ sp;
    CData/*0:0*/ full;
    CData/*0:0*/ empty;
    CData/*3:0*/ __Vdly__sp;
    CData/*3:0*/ __VdlyDim0____SYM__stack__v0;
    CData/*0:0*/ __VdlySet____SYM__stack__v0;
    CData/*3:0*/ __VdlyDim0____SYM__stack__v1;
    CData/*0:0*/ __VdlySet____SYM__stack__v1;
    VL_IN(ras_update,31,0);
    VL_OUT(ras_new_pc,31,0);
    IData/*31:0*/ __VdlyVal____SYM__stack__v0;
    IData/*31:0*/ __VdlyVal____SYM__stack__v1;
    VlUnpacked<IData/*31:0*/, 16> __SYM__stack;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_ras(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_ras();
    VL_UNCOPYABLE(Vcore_ras);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
