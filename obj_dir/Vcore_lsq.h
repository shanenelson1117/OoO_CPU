// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_LSQ_H_
#define VERILATED_VCORE_LSQ_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_lsq final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(wr_en,0,0);
    VL_IN8(rd_en,0,0);
    VL_OUT8(full,0,0);
    VL_OUT8(head_ready,0,0);
    VL_OUT8(head_load,0,0);
    VL_OUT8(empty,0,0);
    CData/*1:0*/ wptr;
    CData/*1:0*/ rptr;
    CData/*1:0*/ __Vdly__wptr;
    CData/*1:0*/ __Vdly__rptr;
    CData/*1:0*/ __VdlyDim0__lsq_data__v0;
    CData/*1:0*/ __VdlyDim0__lsq_data__v1;
    CData/*1:0*/ __VdlyDim0__lsq_data__v2;
    CData/*1:0*/ __VdlyDim0__lsq_data__v3;
    CData/*1:0*/ __VdlyDim0__lsq_data__v4;
    CData/*1:0*/ __VdlyDim0__lsq_data__v5;
    IData/*31:0*/ unnamedblk1__DOT__i;
    IData/*31:0*/ unnamedblk2__DOT__i;
    IData/*31:0*/ __VdlyVal__lsq_data__v3;
    IData/*31:0*/ __VdlyVal__lsq_data__v4;
    VL_IN64(CDB_in,37,0);
    VL_INW(din,78,0,3);
    VL_OUTW(dout,78,0,3);
    VlWide<3>/*78:0*/ __VdlyVal__lsq_data__v1;
    VlWide<3>/*78:0*/ __VdlyElem__lsq_data__v3;
    VlWide<3>/*78:0*/ __VdlyElem__lsq_data__v4;
    VlUnpacked<VlWide<3>/*78:0*/, 4> lsq_data;
    VlNBACommitQueue<VlUnpacked<VlWide<3>/*78:0*/, 4>, true, VlWide<3>/*78:0*/, 1> __VdlyCommitQueuelsq_data;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ DEPTH = 4U;

    // CONSTRUCTORS
    Vcore_lsq(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_lsq();
    VL_UNCOPYABLE(Vcore_lsq);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
