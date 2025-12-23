// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_COMMIT_H_
#define VERILATED_VCORE_COMMIT_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_commit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(rob_head_ready,0,0);
    VL_IN8(empty,0,0);
    VL_IN8(jalrq_ready,0,0);
    VL_IN8(rd_en_rob,0,0);
    VL_IN8(illegal_access_e,0,0);
    VL_OUT8(RegWrite,0,0);
    VL_OUT8(commit_ROB,3,0);
    VL_OUT8(rd,4,0);
    VL_OUT8(commit_is_branch,0,0);
    VL_OUT8(commit_prediction,0,0);
    VL_OUT8(commit_result,0,0);
    VL_OUT8(commit_jalr,0,0);
    VL_OUT8(rd_en,0,0);
    VL_OUT8(valid_commit,0,0);
    VL_OUT8(rd_en_jalrq,0,0);
    VL_OUT8(commit_ras_pointer,3,0);
    VL_OUT8(csr_valid_write,0,0);
    VL_OUT8(special,1,0);
    VL_OUT8(csr_write_select,2,0);
    VL_OUT8(mcause,7,0);
    VL_OUT8(exception,0,0);
    VL_OUT(WriteData,31,0);
    VL_OUT(committed_pc,31,0);
    VL_OUT(commit_imm_se,31,0);
    VL_OUT(mepc_WriteData,31,0);
    VL_OUT(csr_WriteData,31,0);
    VL_INW(head,162,0,6);

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_commit(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_commit();
    VL_UNCOPYABLE(Vcore_commit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
