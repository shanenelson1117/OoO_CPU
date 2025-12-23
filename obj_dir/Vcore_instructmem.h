// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_INSTRUCTMEM_H_
#define VERILATED_VCORE_INSTRUCTMEM_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_instructmem final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(exception,0,0);
    VL_OUT8(mcause,7,0);
    VL_IN8(clk,0,0);
    CData/*0:0*/ mem_wr_en;
    CData/*0:0*/ __VdlySet__mem__v0;
    SData/*15:0*/ __VdlyDim0__mem__v0;
    VL_IN(address,31,0);
    VL_OUT(instruction,31,0);
    IData/*31:0*/ mem_wr_addr;
    IData/*31:0*/ mem_wr_data;
    IData/*31:0*/ __VdlyVal__mem__v0;
    VlUnpacked<IData/*31:0*/, 65536> mem;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_instructmem(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_instructmem();
    VL_UNCOPYABLE(Vcore_instructmem);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
