// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_CSR_H_
#define VERILATED_VCORE_CSR_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_csr final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(csr_read_select,2,0);
    VL_IN8(csr_write_select,2,0);
    VL_IN8(valid_write,0,0);
    VL_IN8(valid_read,0,0);
    VL_IN8(special,1,0);
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(mcause,7,0);
    VL_IN8(exception,0,0);
    VL_OUT8(curr_priv,1,0);
    VL_OUT8(illegal_access_e,0,0);
    VL_OUT8(mret,0,0);
    CData/*2:0*/ __Vfunc_index__0__Vfuncout;
    CData/*2:0*/ __Vfunc_index__1__Vfuncout;
    CData/*2:0*/ __Vfunc_index__2__Vfuncout;
    CData/*2:0*/ __Vfunc_index__3__Vfuncout;
    CData/*1:0*/ __Vdly__curr_priv;
    SData/*11:0*/ __Vfunc_index__0__csr;
    SData/*11:0*/ __Vfunc_index__1__csr;
    SData/*11:0*/ __Vfunc_index__2__csr;
    SData/*11:0*/ __Vfunc_index__3__csr;
    VL_IN(mepc_WriteData,31,0);
    VL_IN(csr_WriteData,31,0);
    VL_OUT(csr_ReadData,31,0);
    VL_OUT(mepc_ReadData,31,0);
    VL_OUT(mtvec_ReadData,31,0);
    VlWide<9>/*287:0*/ csr_data;
    IData/*31:0*/ __Vlvbound_ha782512b__0;
    VlWide<9>/*287:0*/ __Vdly__csr_data;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_csr(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_csr();
    VL_UNCOPYABLE(Vcore_csr);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
