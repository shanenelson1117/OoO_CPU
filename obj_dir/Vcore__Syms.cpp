// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcore__pch.h"
#include "Vcore.h"
#include "Vcore___024root.h"
#include "Vcore___024unit.h"

// FUNCTIONS
Vcore__Syms::~Vcore__Syms()
{
}

Vcore__Syms::Vcore__Syms(VerilatedContext* contextp, const char* namep, Vcore* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(4404);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_core.configure(this, name(), "core", "core", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_core__data_memory__the_mem.configure(this, name(), "core.data_memory.the_mem", "the_mem", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_core__fetch_stage__program_counter__inst.configure(this, name(), "core.fetch_stage.program_counter.inst", "inst", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_core.varInsert(__Vfinal,"csr_ReadData", &(TOP.core__DOT__csr_ReadData), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_core.varInsert(__Vfinal,"csr_WriteData", &(TOP.core__DOT__csr_WriteData), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_core.varInsert(__Vfinal,"mepc_ReadData", &(TOP.core__DOT__mepc_ReadData), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_core.varInsert(__Vfinal,"mepc_WriteData", &(TOP.core__DOT__mepc_WriteData), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_core.varInsert(__Vfinal,"mtvec_ReadData", &(TOP.core__DOT__mtvec_ReadData), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_core.varInsert(__Vfinal,"special", &(TOP.core__DOT__special), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
    }
}
