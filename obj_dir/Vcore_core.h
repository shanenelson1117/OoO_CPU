// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_CORE_H_
#define VERILATED_VCORE_CORE_H_  // guard

#include "verilated.h"
class Vcore_add;
class Vcore_cdb_scheduler;
class Vcore_commit;
class Vcore_csr;
class Vcore_csr_regstat;
class Vcore_divide;
class Vcore_fetch;
class Vcore_fu_scheduler;
class Vcore_hold;
class Vcore_issue;
class Vcore_jalrq;
class Vcore_lsq;
class Vcore_lsq_scheduler;
class Vcore_memory;
class Vcore_multiply;
class Vcore_new_pc;
class Vcore_pipeline_reg;
class Vcore_regfile;
class Vcore_regstat;
class Vcore_rob;
class Vcore_rs_module;
class Vcore_shift;


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_core final : public VerilatedModule {
  public:
    // CELLS
    Vcore_fetch* __PVT__fetch_stage;
    Vcore_pipeline_reg* __PVT__fetch_issue_reg;
    Vcore_new_pc* __PVT__generate_new_pc;
    Vcore_hold* __PVT__ins_hold;
    Vcore_issue* __PVT__res_sched;
    Vcore_csr* __PVT__csrs;
    Vcore_csr_regstat* __PVT__csr_register_status;
    Vcore_regfile* __PVT__registers;
    Vcore_regstat* __PVT__reg_status_register;
    Vcore_rs_module* __PVT__reservation_stations;
    Vcore_lsq* __PVT__load_store_queue;
    Vcore_lsq_scheduler* __PVT__lsq_sched;
    Vcore_jalrq* __PVT__indirect_jump_queue;
    Vcore_fu_scheduler* __PVT__fu_sched;
    Vcore_add* __PVT__adder_fu_0;
    Vcore_add* __PVT__adder_fu_1;
    Vcore_multiply* __PVT__mult_fu;
    Vcore_divide* __PVT__div_fu;
    Vcore_memory* __PVT__data_memory;
    Vcore_shift* __PVT__shift_fu;
    Vcore_cdb_scheduler* __PVT__cdb;
    Vcore_rob* __PVT__reorder_buffer;
    Vcore_commit* __PVT__commit_unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(mem_wr_en,0,0);
        VL_OUT8(valid_commit_out,0,0);
        VL_OUT8(RegWrite_out,0,0);
        VL_OUT8(rd_out,4,0);
        VL_OUT8(csr_write_out,0,0);
        VL_OUT8(csr_write_select_out,2,0);
        VL_OUT8(priv_out,1,0);
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ mispredicted;
        CData/*0:0*/ commit_prediction;
        CData/*0:0*/ commit_result;
        CData/*0:0*/ committed_is_branch;
        CData/*0:0*/ commit_jalr;
        CData/*0:0*/ stall;
        CData/*3:0*/ ROB_entry;
        CData/*3:0*/ Q_j;
        CData/*3:0*/ Q_k;
        CData/*0:0*/ rs1reg_busy;
        CData/*0:0*/ rs2reg_busy;
        CData/*0:0*/ rob_full;
        CData/*0:0*/ empty;
        CData/*4:0*/ rs1;
        CData/*4:0*/ rs2;
        CData/*0:0*/ issue_writes;
        CData/*4:0*/ issue_dest;
        CData/*2:0*/ rs_dest;
        CData/*4:0*/ rd;
        CData/*0:0*/ RegWrite;
        CData/*3:0*/ busy_bus;
        CData/*3:0*/ consumed_bus;
        CData/*4:0*/ ready_bus;
        IData/*19:0*/ ROB_entry_bus;
        CData/*5:0*/ branch_type_bus;
        CData/*1:0*/ load;
        CData/*4:0*/ valid_in_bus;
        IData/*19:0*/ ALU_op;
        CData/*5:0*/ yumi_bus;
        CData/*5:0*/ valid_out_bus;
        CData/*0:0*/ wr_en;
        CData/*0:0*/ lsq_full;
        CData/*0:0*/ rd_en;
        CData/*0:0*/ ROB_head_store;
        CData/*0:0*/ head_ready;
        CData/*0:0*/ head_load;
        CData/*0:0*/ rd_en_rob;
        CData/*0:0*/ rob_read_enable;
        CData/*0:0*/ rob_head_ready;
        CData/*3:0*/ commit_ROB;
        CData/*0:0*/ valid_commit;
        CData/*0:0*/ lsq_empty;
        CData/*0:0*/ pc_pipe_stall;
        CData/*0:0*/ rd_en_jalrq;
        CData/*0:0*/ jalrq_ready;
        CData/*0:0*/ jalrq_full;
        CData/*3:0*/ commit_ras_pointer;
        CData/*0:0*/ rs1rob_ready;
        CData/*0:0*/ rs2rob_ready;
        CData/*0:0*/ exception;
        CData/*7:0*/ mcause;
        CData/*2:0*/ commit_csr_write_select;
        CData/*2:0*/ issue_csr_write_select;
        CData/*1:0*/ special;
        CData/*0:0*/ commit_csr_valid_write;
    };
    struct {
        CData/*0:0*/ issue_csr_valid_write;
        CData/*0:0*/ illegal_access_e;
        CData/*0:0*/ issue_csr_valid_read;
        CData/*0:0*/ valid_packet;
        CData/*1:0*/ curr_priv;
        CData/*0:0*/ mret;
        CData/*0:0*/ csr_busy;
        CData/*0:0*/ __Vcellinp__fetch_issue_reg__reset;
        CData/*0:0*/ __Vcellinp__res_sched__reset;
        CData/*0:0*/ __Vcellinp__csr_register_status__reset;
        CData/*0:0*/ __Vcellinp__reg_status_register__reset;
        CData/*0:0*/ __Vcellinp__reservation_stations__reset;
        CData/*0:0*/ __Vcellinp__load_store_queue__reset;
        CData/*0:0*/ __Vcellinp__indirect_jump_queue__reset;
        CData/*0:0*/ __Vcellout__adder_fu_0__ready;
        CData/*3:0*/ __Vcellinp__adder_fu_0__ALUop;
        CData/*0:0*/ __Vcellout__adder_fu_0__valid_out;
        CData/*2:0*/ __Vcellinp__adder_fu_0__branch_type;
        CData/*3:0*/ __Vcellinp__adder_fu_0__rs_rob_entry;
        CData/*0:0*/ __Vcellinp__adder_fu_0__yumi_in;
        CData/*0:0*/ __Vcellinp__adder_fu_0__valid_in;
        CData/*0:0*/ __Vcellinp__adder_fu_0__load;
        CData/*0:0*/ __Vcellinp__adder_fu_0__reset;
        CData/*0:0*/ __Vcellout__adder_fu_1__ready;
        CData/*3:0*/ __Vcellinp__adder_fu_1__ALUop;
        CData/*0:0*/ __Vcellout__adder_fu_1__valid_out;
        CData/*2:0*/ __Vcellinp__adder_fu_1__branch_type;
        CData/*3:0*/ __Vcellinp__adder_fu_1__rs_rob_entry;
        CData/*0:0*/ __Vcellinp__adder_fu_1__yumi_in;
        CData/*0:0*/ __Vcellinp__adder_fu_1__load;
        CData/*0:0*/ __Vcellinp__adder_fu_1__valid_in;
        CData/*0:0*/ __Vcellinp__adder_fu_1__reset;
        CData/*0:0*/ __Vcellout__mult_fu__ready;
        CData/*0:0*/ __Vcellout__mult_fu__valid_out;
        CData/*3:0*/ __Vcellinp__mult_fu__ALUop;
        CData/*0:0*/ __Vcellinp__mult_fu__valid_in;
        CData/*0:0*/ __Vcellinp__mult_fu__yumi_in;
        CData/*3:0*/ __Vcellinp__mult_fu__rs_rob_entry;
        CData/*0:0*/ __Vcellinp__mult_fu__reset;
        CData/*0:0*/ __Vcellout__div_fu__ready;
        CData/*0:0*/ __Vcellout__div_fu__valid_out;
        CData/*3:0*/ __Vcellinp__div_fu__ALUop;
        CData/*3:0*/ __Vcellinp__div_fu__rs_rob_entry;
        CData/*0:0*/ __Vcellinp__div_fu__yumi_in;
        CData/*0:0*/ __Vcellinp__div_fu__valid_in;
        CData/*0:0*/ __Vcellinp__div_fu__reset;
        CData/*0:0*/ __Vcellinp__data_memory__yummy_in;
        CData/*0:0*/ __Vcellinp__data_memory__reset;
        CData/*0:0*/ __Vcellout__data_memory__valid_out;
        CData/*0:0*/ __Vcellout__shift_fu__ready;
        CData/*0:0*/ __Vcellout__shift_fu__valid_out;
        CData/*0:0*/ __Vcellinp__shift_fu__reset;
        CData/*0:0*/ __Vcellinp__shift_fu__yumi_in;
        CData/*0:0*/ __Vcellinp__shift_fu__valid_in;
        CData/*3:0*/ __Vcellinp__shift_fu__ALUop;
        CData/*3:0*/ __Vcellinp__shift_fu__rs_rob_entry;
        CData/*0:0*/ __Vcellinp__reorder_buffer__reset;
        VL_IN(mem_wr_addr,31,0);
        VL_IN(mem_wr_data,31,0);
        VL_OUT(head_pc,31,0);
        VL_OUT(WriteData_out,31,0);
        VL_OUT(ins_out,31,0);
        VL_OUT(csr_WriteData_out,31,0);
        IData/*31:0*/ pc_update;
    };
    struct {
        IData/*31:0*/ committed_pc;
        IData/*31:0*/ commit_imm_se;
        IData/*31:0*/ rs1reg_data;
        IData/*31:0*/ rs2reg_data;
        IData/*31:0*/ WriteData;
        VlWide<10>/*319:0*/ fu_bus;
        IData/*31:0*/ jalr_actual_address;
        IData/*31:0*/ jalr_taken_address;
        IData/*31:0*/ rs1rob_data;
        IData/*31:0*/ rs2rob_data;
        IData/*31:0*/ mepc_WriteData;
        IData/*31:0*/ csr_WriteData;
        IData/*31:0*/ csr_ReadData;
        IData/*31:0*/ mtvec_ReadData;
        IData/*31:0*/ mepc_ReadData;
        IData/*31:0*/ __Vcellinp__adder_fu_0__rs2;
        IData/*31:0*/ __Vcellinp__adder_fu_0__rs1;
        IData/*31:0*/ __Vcellinp__adder_fu_1__rs2;
        IData/*31:0*/ __Vcellinp__adder_fu_1__rs1;
        IData/*31:0*/ __Vcellinp__mult_fu__B;
        IData/*31:0*/ __Vcellinp__mult_fu__A;
        IData/*31:0*/ __Vcellinp__div_fu__divisor;
        IData/*31:0*/ __Vcellinp__div_fu__dividend;
        IData/*31:0*/ __Vcellinp__shift_fu__B;
        IData/*31:0*/ __Vcellinp__shift_fu__A;
        VlWide<4>/*111:0*/ pipe_in;
        VlWide<4>/*111:0*/ pipe_out;
        VlWide<3>/*84:0*/ rs_input;
        VlWide<6>/*162:0*/ rob_input;
        QData/*37:0*/ CDB_out;
        VlWide<3>/*76:0*/ rs0_data;
        VlWide<3>/*76:0*/ rs1_data;
        VlWide<3>/*76:0*/ rs2_data;
        VlWide<3>/*76:0*/ rs3_data;
        QData/*37:0*/ out_0;
        QData/*37:0*/ out_1;
        QData/*37:0*/ out_2;
        QData/*37:0*/ out_3;
        QData/*37:0*/ out_load;
        VlWide<3>/*78:0*/ lsq_input;
        VlWide<3>/*78:0*/ lqss_out;
        VlWide<3>/*78:0*/ lsq_out;
        VlWide<6>/*162:0*/ head;
        QData/*37:0*/ shift_out;
        VlWide<3>/*80:0*/ jalrq_input;
        VlWide<4>/*111:0*/ hold_out;
    };

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_core(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_core();
    VL_UNCOPYABLE(Vcore_core);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
