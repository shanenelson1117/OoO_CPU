// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_TWO_BIT_PREDICTOR_H_
#define VERILATED_VCORE_TWO_BIT_PREDICTOR_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_two_bit_predictor final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(prediction,0,0);
    VL_IN8(update,0,0);
    VL_IN8(valid,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*1:0*/ ps;
    CData/*1:0*/ ns;
    CData/*1:0*/ __Vdly__ps;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_two_bit_predictor(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_two_bit_predictor();
    VL_UNCOPYABLE(Vcore_two_bit_predictor);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
