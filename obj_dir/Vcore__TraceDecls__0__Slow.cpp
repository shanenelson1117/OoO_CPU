// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void Vcore___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"S_EMPTY", "S_HOLD"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(1, "hold.state_t", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"s_idle", "s_shift", "s_done"};
        const char* __VenumItemValues[]
        = {"0", "10", "11"};
        tracep->declDTypeEnum(2, "control.__typeimpmod1", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"s_idle", "s_pass1", "s_pass2", "s_pass3", 
                                "s_signadj", "s_done", 
                                "unused1", "s_pass4"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111"};
        tracep->declDTypeEnum(3, "control_dv.__typeimpmod1", 8, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"s_idle", "s_add", "s_shift", "s_done"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(4, "mult_control.__typeimpmod1", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"N", "n", "t", "T"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(5, "two_bit_predictor.__typeimpmod1", 4, 2, __VenumItemNames, __VenumItemValues);
    }
}

void Vcore___024root__trace_decl_types(VerilatedFst* tracep) {
    Vcore___024root__traceDeclTypesSub0(tracep);
}
