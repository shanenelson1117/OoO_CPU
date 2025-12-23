// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_ADD_H_
#define VERILATED_VCORE_ADD_H_  // guard

#include "verilated.h"
class Vcore_adder_32bit;


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_add final : public VerilatedModule {
  public:
    // CELLS
    Vcore_adder_32bit* __PVT__adder;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(valid_in,0,0);
    VL_IN8(yumi_in,0,0);
    VL_IN8(load,0,0);
    VL_IN8(ALUop,3,0);
    VL_IN8(rs_rob_entry,3,0);
    VL_IN8(branch_type,2,0);
    VL_OUT8(valid_out,0,0);
    VL_OUT8(ready,0,0);
    CData/*0:0*/ zero;
    CData/*0:0*/ negative;
    CData/*0:0*/ overflow;
    CData/*0:0*/ ALUop1;
    CData/*0:0*/ carry;
    CData/*0:0*/ b_inter;
    CData/*0:0*/ b_taken;
    CData/*0:0*/ load_step1;
    CData/*0:0*/ bne;
    CData/*0:0*/ beq;
    CData/*0:0*/ blt;
    CData/*0:0*/ bge;
    CData/*0:0*/ bltu;
    CData/*0:0*/ bgeu;
    CData/*3:0*/ curr_rob;
    CData/*0:0*/ __Vdly__valid_out;
    CData/*0:0*/ __Vdly__b_taken;
    CData/*3:0*/ __Vdly__curr_rob;
    CData/*0:0*/ __Vdly__ready;
    CData/*0:0*/ __Vdly__load_step1;
    VL_IN(rs1,31,0);
    VL_IN(rs2,31,0);
    IData/*31:0*/ s;
    IData/*31:0*/ result;
    VL_OUT64(out,37,0);
    QData/*37:0*/ __Vdly__out;
    QData/*37:0*/ __VdlyMask__out;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_add(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_add();
    VL_UNCOPYABLE(Vcore_add);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
