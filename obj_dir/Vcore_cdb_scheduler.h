// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_CDB_SCHEDULER_H_
#define VERILATED_VCORE_CDB_SCHEDULER_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_cdb_scheduler final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(valid_out_bus,5,0);
    VL_OUT8(yummi_in_bus,5,0);
    VL_IN64(adder_0_out,37,0);
    VL_IN64(adder_1_out,37,0);
    VL_IN64(mult_out,37,0);
    VL_IN64(div_out,37,0);
    VL_IN64(mem_out,37,0);
    VL_IN64(shift_out,37,0);
    VL_OUT64(new_CDB,37,0);

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_cdb_scheduler(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_cdb_scheduler();
    VL_UNCOPYABLE(Vcore_cdb_scheduler);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
