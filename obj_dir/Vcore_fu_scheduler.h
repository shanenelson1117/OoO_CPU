// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_FU_SCHEDULER_H_
#define VERILATED_VCORE_FU_SCHEDULER_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_fu_scheduler final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(ready_bus,4,0);
    VL_OUT(ROB_entry_bus,19,0);
    VL_OUT8(load,1,0);
    VL_OUT8(branch_type_bus,5,0);
    VL_OUT(ALU_op,19,0);
    VL_OUT8(consumed_bus,3,0);
    VL_OUT8(valid_in_bus,4,0);
    VL_OUTW(fu_bus,319,0,10);
    VL_INW(rs0_data,76,0,3);
    VL_INW(rs1_data,76,0,3);
    VL_INW(rs2_data,76,0,3);
    VL_INW(rs3_data,76,0,3);

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_fu_scheduler(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_fu_scheduler();
    VL_UNCOPYABLE(Vcore_fu_scheduler);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
