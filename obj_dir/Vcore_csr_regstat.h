// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_CSR_REGSTAT_H_
#define VERILATED_VCORE_CSR_REGSTAT_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_csr_regstat final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(issue_csr_valid_write,0,0);
    VL_IN8(commit_csr_valid_write,0,0);
    VL_IN8(commit_csr_write_select,2,0);
    VL_IN8(issue_csr_write_select,2,0);
    VL_IN8(stall,0,0);
    VL_IN8(commit_ROB,3,0);
    VL_IN8(issue_ROB,3,0);
    VL_IN8(csr_valid_read,0,0);
    VL_OUT8(busy,0,0);
    QData/*44:0*/ reg_stat_data;
    CData/*4:0*/ d;
    CData/*0:0*/ reset_enable;
    CData/*0:0*/ write_enable;
    CData/*4:0*/ __Vlvbound_h72234604__0;
    CData/*4:0*/ __Vlvbound_h0823f771__0;
    QData/*44:0*/ __Vdly__reg_stat_data;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_csr_regstat(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_csr_regstat();
    VL_UNCOPYABLE(Vcore_csr_regstat);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
