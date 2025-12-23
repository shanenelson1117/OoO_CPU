// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_REGISTER_H_
#define VERILATED_VCORE_REGISTER_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_register final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(enable,0,0);
    VL_IN(d,31,0);
    VL_OUT(q,31,0);
    IData/*31:0*/ q_reg;
    IData/*31:0*/ __Vdly__q_reg;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_register(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_register();
    VL_UNCOPYABLE(Vcore_register);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
