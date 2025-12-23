// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_REGSTAT_H_
#define VERILATED_VCORE_REGSTAT_H_  // guard

#include "verilated.h"
class Vcore_five_to_thirtytwo_decoder;
class Vcore_reg_status_entry;


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_regstat final : public VerilatedModule {
  public:
    // CELLS
    Vcore_five_to_thirtytwo_decoder* __PVT__enable_decode;
    Vcore_five_to_thirtytwo_decoder* __PVT__reset_decode;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__1__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__2__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__3__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__4__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__5__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__6__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__7__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__8__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__9__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__10__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__11__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__12__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__13__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__14__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__15__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__16__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__17__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__18__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__19__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__20__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__21__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__22__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__23__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__24__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__25__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__26__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__27__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__28__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__29__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__30__KET____DOT__stat_i;
    Vcore_reg_status_entry* __PVT__reg_stat_entries__BRA__31__KET____DOT__stat_i;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(rs1,4,0);
        VL_IN8(rs2,4,0);
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(issue_writes,0,0);
        VL_IN8(RegWrite,0,0);
        VL_IN8(commit_dest,4,0);
        VL_IN8(issue_dest,4,0);
        VL_IN8(commit_ROB,3,0);
        VL_IN8(issue_ROB,3,0);
        VL_IN8(stall,0,0);
        VL_OUT8(Q_j,3,0);
        VL_OUT8(Q_k,3,0);
        VL_OUT8(rs1reg_busy,0,0);
        VL_OUT8(rs2reg_busy,0,0);
        CData/*4:0*/ d;
        CData/*0:0*/ reset_enable;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__1__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__1__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__1__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__2__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__2__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__2__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__3__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__3__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__3__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__4__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__4__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__4__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__5__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__5__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__5__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__6__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__6__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__6__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__7__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__7__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__7__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__8__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__8__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__8__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__9__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__9__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__9__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__10__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__10__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__10__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__11__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__11__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__11__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__12__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__12__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__12__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__13__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__13__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__13__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__14__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__14__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__14__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__15__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__15__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__15__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__16__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__16__KET____DOT__stat_i__write_en;
    };
    struct {
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__16__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__17__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__17__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__17__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__18__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__18__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__18__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__19__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__19__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__19__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__20__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__20__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__20__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__21__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__21__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__21__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__22__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__22__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__22__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__23__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__23__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__23__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__24__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__24__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__24__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__25__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__25__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__25__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__26__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__26__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__26__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__27__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__27__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__27__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__28__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__28__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__28__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__29__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__29__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__29__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__30__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__30__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__30__KET____DOT__stat_i__clear;
        CData/*4:0*/ __Vcellout__reg_stat_entries__BRA__31__KET____DOT__stat_i__q;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__31__KET____DOT__stat_i__write_en;
        CData/*0:0*/ __Vcellinp__reg_stat_entries__BRA__31__KET____DOT__stat_i__clear;
        IData/*31:0*/ reset_bus;
        IData/*31:0*/ enable_bus;
        VlUnpacked<CData/*4:0*/, 32> reg_status_table;
    };

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_regstat(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_regstat();
    VL_UNCOPYABLE(Vcore_regstat);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
