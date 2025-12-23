// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_MEMORY_H_
#define VERILATED_VCORE_MEMORY_H_  // guard

#include "verilated.h"
class Vcore_datamem;


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_memory final : public VerilatedModule {
  public:
    // CELLS
    Vcore_datamem* __PVT__the_mem;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(ROB_head_store,0,0);
    VL_IN8(head_load,0,0);
    VL_IN8(head_ready,0,0);
    VL_IN8(yummy_in,0,0);
    VL_IN8(empty,0,0);
    VL_OUT8(rd_en,0,0);
    VL_OUT8(rd_en_rob,0,0);
    VL_OUT8(valid_out,0,0);
    CData/*0:0*/ write_enable;
    CData/*0:0*/ read_enable;
    CData/*3:0*/ mem_rob_entry_reg;
    CData/*0:0*/ mem_valid_reg;
    CData/*3:0*/ __Vcellinp__the_mem__xfer_size;
    CData/*3:0*/ __Vdly__mem_rob_entry_reg;
    CData/*0:0*/ __Vdly__mem_valid_reg;
    IData/*31:0*/ mem_result_reg;
    IData/*31:0*/ read_data;
    IData/*31:0*/ __Vcellinp__the_mem__write_data;
    IData/*31:0*/ __Vcellinp__the_mem__address;
    IData/*31:0*/ __Vdly__mem_result_reg;
    VL_INW(mem_in,78,0,3);
    VL_OUT64(mem_read_out,37,0);

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_memory(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_memory();
    VL_UNCOPYABLE(Vcore_memory);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
