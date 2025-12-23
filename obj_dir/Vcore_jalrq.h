// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_JALRQ_H_
#define VERILATED_VCORE_JALRQ_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_jalrq final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(rd_en,0,0);
    VL_OUT8(full,0,0);
    VL_OUT8(head_ready,0,0);
    CData/*1:0*/ wptr;
    CData/*1:0*/ rptr;
    CData/*0:0*/ empty;
    CData/*0:0*/ wr_en;
    CData/*1:0*/ __Vdly__wptr;
    CData/*1:0*/ __Vdly__rptr;
    CData/*1:0*/ __VdlyDim0__jalrq_data__v0;
    CData/*1:0*/ __VdlyDim0__jalrq_data__v1;
    CData/*1:0*/ __VdlyDim0__jalrq_data__v2;
    CData/*1:0*/ __VdlyDim0__jalrq_data__v3;
    VL_OUT(jalr_actual_address,31,0);
    VL_OUT(jalr_taken_address,31,0);
    IData/*31:0*/ unnamedblk1__DOT__i;
    IData/*31:0*/ unnamedblk2__DOT__i;
    IData/*31:0*/ __VdlyVal__jalrq_data__v3;
    VL_IN64(CDB_in,37,0);
    VL_INW(din,80,0,3);
    VlWide<3>/*80:0*/ __VdlyVal__jalrq_data__v1;
    VlWide<3>/*80:0*/ __VdlyElem__jalrq_data__v3;
    VlUnpacked<VlWide<3>/*80:0*/, 4> jalrq_data;
    VlNBACommitQueue<VlUnpacked<VlWide<3>/*80:0*/, 4>, true, VlWide<3>/*80:0*/, 1> __VdlyCommitQueuejalrq_data;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ DEPTH = 4U;

    // CONSTRUCTORS
    Vcore_jalrq(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_jalrq();
    VL_UNCOPYABLE(Vcore_jalrq);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
