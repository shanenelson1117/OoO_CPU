// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_MULT_DATAPATH_H_
#define VERILATED_VCORE_MULT_DATAPATH_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_mult_datapath final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(loadregs,0,0);
    VL_IN8(shiftregs,0,0);
    VL_IN8(addregs,0,0);
    VL_IN8(decr_P,0,0);
    CData/*0:0*/ Q1;
    CData/*0:0*/ __Vdly__Q1;
    VL_OUT(P,31,0);
    VL_IN(multiplier,31,0);
    VL_IN(multiplicand,31,0);
    IData/*31:0*/ A;
    IData/*31:0*/ B;
    IData/*31:0*/ Q;
    IData/*31:0*/ __Vdly__A;
    IData/*31:0*/ __Vdly__P;
    IData/*31:0*/ __Vdly__B;
    IData/*31:0*/ __Vdly__Q;
    VL_OUT64(product_inter,63,0);

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_mult_datapath(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_mult_datapath();
    VL_UNCOPYABLE(Vcore_mult_datapath);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
