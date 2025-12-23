// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_ISSUE_H_
#define VERILATED_VCORE_ISSUE_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_issue final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(busy_bus,3,0);
    VL_IN8(ROB_entry,3,0);
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(Q_j,3,0);
    VL_IN8(Q_k,3,0);
    VL_IN8(rs1reg_busy,0,0);
    VL_IN8(rs2reg_busy,0,0);
    VL_IN8(rs1rob_ready,0,0);
    VL_IN8(rs2rob_ready,0,0);
    VL_IN8(csr_busy,0,0);
    VL_OUT8(rs_dest,2,0);
    VL_OUT8(issue_dest,4,0);
    VL_OUT8(issue_writes,0,0);
    VL_IN8(stall,0,0);
    VL_OUT8(csr_valid_read,0,0);
    VL_OUT8(issue_csr_valid_write,0,0);
    VL_OUT8(issue_csr_write_select,2,0);
    VL_OUT8(valid_packet,0,0);
    CData/*0:0*/ prediction;
    CData/*3:0*/ alu_op;
    CData/*2:0*/ branch_type;
    CData/*3:0*/ Q_temp_j;
    CData/*3:0*/ Q_temp_k;
    CData/*0:0*/ branch;
    CData/*0:0*/ jump;
    CData/*0:0*/ temp_load;
    CData/*0:0*/ issue_writes_temp;
    CData/*0:0*/ illegal;
    CData/*0:0*/ csr_valid_write_temp;
    CData/*0:0*/ csr_valid_read_temp;
    CData/*0:0*/ exception;
    CData/*7:0*/ mcause;
    CData/*6:0*/ op;
    CData/*4:0*/ rs1;
    CData/*4:0*/ rs2;
    CData/*2:0*/ __Vfunc_index__0__Vfuncout;
    CData/*2:0*/ __Vfunc_index__1__Vfuncout;
    CData/*2:0*/ __Vfunc_index__2__Vfuncout;
    SData/*11:0*/ __Vfunc_index__0__csr;
    SData/*11:0*/ __Vfunc_index__1__csr;
    SData/*11:0*/ __Vfunc_index__2__csr;
    VL_IN(rs1_data,31,0);
    VL_IN(rs2_data,31,0);
    VL_IN(rs1rob_data,31,0);
    VL_IN(rs2rob_data,31,0);
    VL_IN(csr_ReadData,31,0);
    IData/*31:0*/ curr_branch_pc;
    IData/*31:0*/ ins;
    IData/*31:0*/ V_k;
    IData/*31:0*/ V_j;
    VL_INW(hold_out,111,0,4);
    VL_IN64(new_CDB,37,0);
    VL_OUTW(rs_input,84,0,3);
    VL_OUTW(new_packet,162,0,6);
    VL_OUTW(lsq_input,78,0,3);
    VL_OUTW(jalrq_input,80,0,3);
    VlWide<6>/*162:0*/ rob_input;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_issue(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_issue();
    VL_UNCOPYABLE(Vcore_issue);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
