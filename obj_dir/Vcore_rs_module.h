// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_RS_MODULE_H_
#define VERILATED_VCORE_RS_MODULE_H_  // guard

#include "verilated.h"
class Vcore_rs;


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_rs_module final : public VerilatedModule {
  public:
    // CELLS
    Vcore_rs* __PVT__rs0;
    Vcore_rs* __PVT__rs1;
    Vcore_rs* __PVT__rs2;
    Vcore_rs* __PVT__rs3;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(mispredicted,0,0);
    VL_IN8(stall,0,0);
    VL_IN8(rs_dest,2,0);
    VL_IN8(valid_packet,0,0);
    VL_IN8(consumed_bus,3,0);
    VL_OUT8(busy_bus,3,0);
    CData/*0:0*/ wr_en0;
    CData/*0:0*/ wr_en1;
    CData/*0:0*/ wr_en2;
    CData/*0:0*/ wr_en3;
    CData/*0:0*/ __Vcellout__rs0__busy;
    CData/*0:0*/ __Vcellinp__rs0__reset;
    CData/*0:0*/ __Vcellout__rs1__busy;
    CData/*0:0*/ __Vcellinp__rs1__reset;
    CData/*0:0*/ __Vcellout__rs2__busy;
    CData/*0:0*/ __Vcellinp__rs2__reset;
    CData/*0:0*/ __Vcellout__rs3__busy;
    CData/*0:0*/ __Vcellinp__rs3__reset;
    VL_INW(d,84,0,3);
    VL_IN64(CDB_in,37,0);
    VL_OUTW(rs0_data,76,0,3);
    VL_OUTW(rs1_data,76,0,3);
    VL_OUTW(rs2_data,76,0,3);
    VL_OUTW(rs3_data,76,0,3);

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_rs_module(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_rs_module();
    VL_UNCOPYABLE(Vcore_rs_module);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
