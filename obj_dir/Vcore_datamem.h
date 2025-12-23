// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_DATAMEM_H_
#define VERILATED_VCORE_DATAMEM_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_datamem final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(write_enable,0,0);
    VL_IN8(read_enable,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(xfer_size,3,0);
    CData/*7:0*/ __VdlyVal__mem__v0;
    SData/*14:0*/ __VdlyDim0__mem__v0;
    VL_IN(address,31,0);
    VL_IN(write_data,31,0);
    VL_OUT(read_data,31,0);
    IData/*31:0*/ aligned_address;
    IData/*31:0*/ i;
    IData/*31:0*/ j;
    VlUnpacked<CData/*7:0*/, 32768> mem;
    VlNBACommitQueue<VlUnpacked<CData/*7:0*/, 32768>, false, CData/*7:0*/, 1> __VdlyCommitQueuemem;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_datamem(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_datamem();
    VL_UNCOPYABLE(Vcore_datamem);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
