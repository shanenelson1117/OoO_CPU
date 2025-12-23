// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_DATAPATH_DV_H_
#define VERILATED_VCORE_DATAPATH_DV_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_datapath_dv final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(loadregs,0,0);
    VL_IN8(pass1,0,0);
    VL_IN8(pass2,0,0);
    VL_IN8(signadj,0,0);
    VL_IN8(sor_msb,0,0);
    VL_IN8(end_msb,0,0);
    VL_IN(abs_sor,31,0);
    VL_IN(abs_end,31,0);
    VL_OUT(quotient,31,0);
    VL_OUT(P,31,0);
    VL_OUT(remainder,31,0);
    IData/*31:0*/ A;
    IData/*31:0*/ M;
    IData/*31:0*/ Q;
    IData/*31:0*/ A_temp;
    IData/*31:0*/ Q_temp;
    IData/*31:0*/ __Vdly__A;
    IData/*31:0*/ __Vdly__P;
    IData/*31:0*/ __Vdly__M;
    IData/*31:0*/ __Vdly__Q;
    QData/*63:0*/ temp;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_datapath_dv(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_datapath_dv();
    VL_UNCOPYABLE(Vcore_datapath_dv);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
