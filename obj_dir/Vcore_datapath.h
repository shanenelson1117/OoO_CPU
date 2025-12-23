// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_DATAPATH_H_
#define VERILATED_VCORE_DATAPATH_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_datapath final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(loadregs,0,0);
    VL_IN8(shiftregs,0,0);
    VL_IN8(ALUop_reg,3,0);
    VL_OUT(output_inter,31,0);
    VL_OUT(P,31,0);
    VL_IN(shifter,31,0);
    VL_IN(shifted,31,0);
    IData/*31:0*/ A;
    IData/*31:0*/ __Vdly__A;
    IData/*31:0*/ __Vdly__P;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_datapath(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_datapath();
    VL_UNCOPYABLE(Vcore_datapath);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
