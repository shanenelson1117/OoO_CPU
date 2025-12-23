// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_ROB_H_
#define VERILATED_VCORE_ROB_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_rob final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(rd_en,0,0);
    VL_IN8(Q_j,3,0);
    VL_IN8(Q_k,3,0);
    VL_IN8(illegal_access_e,0,0);
    VL_OUT8(head_ready,0,0);
    VL_OUT8(full,0,0);
    VL_OUT8(empty,0,0);
    VL_OUT8(ROB_head_store,0,0);
    VL_OUT8(ROB_entry,3,0);
    VL_OUT8(rs1rob_ready,0,0);
    VL_OUT8(rs2rob_ready,0,0);
    CData/*3:0*/ wptr;
    CData/*3:0*/ rptr;
    CData/*0:0*/ wr_en;
    CData/*3:0*/ __Vdly__wptr;
    CData/*3:0*/ __Vdly__rptr;
    CData/*3:0*/ __VdlyDim0__rob_data__v0;
    CData/*3:0*/ __VdlyDim0__rob_data__v1;
    CData/*0:0*/ __VdlyVal__rob_data__v2;
    CData/*3:0*/ __VdlyDim0__rob_data__v2;
    CData/*3:0*/ __VdlyDim0__rob_data__v3;
    CData/*3:0*/ __VdlyDim0__rob_data__v4;
    CData/*3:0*/ __VdlyDim0__rob_data__v5;
    CData/*3:0*/ __VdlyDim0__rob_data__v6;
    CData/*3:0*/ __VdlyDim0__rob_data__v7;
    VL_OUT(rs1rob_data,31,0);
    VL_OUT(rs2rob_data,31,0);
    IData/*31:0*/ unnamedblk1__DOT__i;
    IData/*31:0*/ unnamedblk2__DOT__i;
    IData/*31:0*/ __VdlyVal__rob_data__v4;
    VL_INW(new_entry,162,0,6);
    VL_IN64(CDB_in,37,0);
    VL_OUTW(head,162,0,6);
    VlWide<6>/*162:0*/ __VdlyVal__rob_data__v1;
    VlWide<6>/*162:0*/ __VdlyElem__rob_data__v2;
    VlWide<6>/*162:0*/ __VdlyElem__rob_data__v4;
    VlUnpacked<VlWide<6>/*162:0*/, 16> rob_data;
    VlNBACommitQueue<VlUnpacked<VlWide<6>/*162:0*/, 16>, true, VlWide<6>/*162:0*/, 1> __VdlyCommitQueuerob_data;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ DEPTH = 0x00000010U;

    // CONSTRUCTORS
    Vcore_rob(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_rob();
    VL_UNCOPYABLE(Vcore_rob);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
