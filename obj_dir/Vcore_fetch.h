// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_FETCH_H_
#define VERILATED_VCORE_FETCH_H_  // guard

#include "verilated.h"
class Vcore_bpb;
class Vcore_gbhsr;
class Vcore_pc;
class Vcore_ras;


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_fetch final : public VerilatedModule {
  public:
    // CELLS
    Vcore_pc* __PVT__program_counter;
    Vcore_gbhsr* __PVT__history_reg;
    Vcore_bpb* __PVT__pred_buffer;
    Vcore_ras* __PVT__ret_addr_s;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(update,0,0);
    VL_IN8(valid_in,0,0);
    VL_IN8(stall,0,0);
    VL_IN8(mispredicted,0,0);
    VL_IN8(flush_ptr,3,0);
    VL_IN8(mret,0,0);
    VL_IN8(exception,0,0);
    CData/*0:0*/ branch;
    CData/*0:0*/ prediction;
    CData/*0:0*/ jump;
    CData/*0:0*/ jalr;
    CData/*0:0*/ read_exception;
    CData/*7:0*/ mcause;
    CData/*6:0*/ opcode;
    CData/*0:0*/ push;
    CData/*0:0*/ pop;
    CData/*3:0*/ ptr;
    CData/*4:0*/ rd;
    CData/*4:0*/ rs1;
    SData/*9:0*/ history;
    SData/*9:0*/ index_read;
    SData/*9:0*/ index_write;
    VL_IN(pc_update,31,0);
    VL_IN(committed_pc,31,0);
    VL_IN(mtvec_ReadData,31,0);
    VL_IN(mepc_ReadData,31,0);
    IData/*31:0*/ pc;
    IData/*31:0*/ instruction;
    IData/*31:0*/ newpc;
    IData/*31:0*/ ras_new_pc;
    IData/*31:0*/ __Vcellinp__ret_addr_s__ras_update;
    VL_OUTW(pipe_in,111,0,4);

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_fetch(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_fetch();
    VL_UNCOPYABLE(Vcore_fetch);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
