// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_NEW_PC_H_
#define VERILATED_VCORE_NEW_PC_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_new_pc final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(commit_taken,0,0);
    VL_IN8(commit_result,0,0);
    VL_IN8(commit_jalr,0,0);
    VL_IN8(committed_is_branch,0,0);
    VL_OUT8(mispredicted,0,0);
    CData/*0:0*/ pipe_taken;
    CData/*0:0*/ jump;
    CData/*0:0*/ branch;
    CData/*0:0*/ mis_taken;
    VL_IN(commit_pc,31,0);
    VL_IN(commit_imm_se,31,0);
    VL_IN(jalr_actual_address,31,0);
    VL_IN(jalr_taken_address,31,0);
    VL_OUT(pc_update,31,0);
    IData/*31:0*/ pipe_pc;
    IData/*31:0*/ instruction;
    IData/*31:0*/ pc_pre;
    IData/*31:0*/ to_be_added;
    IData/*31:0*/ i;
    VL_INW(pipe_in,111,0,4);

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_new_pc(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_new_pc();
    VL_UNCOPYABLE(Vcore_new_pc);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
