// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_HOLD_H_
#define VERILATED_VCORE_HOLD_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_hold final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(stall,0,0);
    VL_OUT8(pc_pipe_stall,0,0);
    VL_OUT8(rs1,4,0);
    VL_OUT8(rs2,4,0);
    CData/*0:0*/ ps;
    CData/*0:0*/ ns;
    CData/*0:0*/ __Vdly__ps;
    VL_INW(pipe_out,111,0,4);
    VL_OUTW(hold_out,111,0,4);
    VlWide<4>/*111:0*/ instr_hold;
    VlWide<4>/*111:0*/ __Vdly__instr_hold;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_hold(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_hold();
    VL_UNCOPYABLE(Vcore_hold);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
