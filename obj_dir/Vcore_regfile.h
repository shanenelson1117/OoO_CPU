// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_REGFILE_H_
#define VERILATED_VCORE_REGFILE_H_  // guard

#include "verilated.h"
class Vcore_five_to_thirtytwo_decoder;
class Vcore_register;


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_regfile final : public VerilatedModule {
  public:
    // CELLS
    Vcore_five_to_thirtytwo_decoder* __PVT__regfile_enable_decode;
    Vcore_register* __PVT__registers__BRA__1__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__2__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__3__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__4__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__5__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__6__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__7__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__8__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__9__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__10__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__11__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__12__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__13__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__14__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__15__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__16__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__17__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__18__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__19__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__20__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__21__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__22__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__23__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__24__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__25__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__26__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__27__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__28__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__29__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__30__KET____DOT__reg_i;
    Vcore_register* __PVT__registers__BRA__31__KET____DOT__reg_i;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(rs1,4,0);
        VL_IN8(rs2,4,0);
        VL_IN8(rd,4,0);
        VL_IN8(RegWrite,0,0);
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ __Vcellinp__registers__BRA__1__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__2__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__3__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__4__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__5__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__6__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__7__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__8__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__9__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__10__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__11__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__12__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__13__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__14__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__15__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__16__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__17__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__18__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__19__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__20__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__21__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__22__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__23__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__24__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__25__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__26__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__27__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__28__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__29__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__30__KET____DOT__reg_i__enable;
        CData/*0:0*/ __Vcellinp__registers__BRA__31__KET____DOT__reg_i__enable;
        VL_IN(WriteData,31,0);
        VL_OUT(rs1_data,31,0);
        VL_OUT(rs2_data,31,0);
        IData/*31:0*/ enable_bus;
        IData/*31:0*/ __Vcellout__registers__BRA__1__KET____DOT__reg_i__q;
        IData/*31:0*/ __Vcellout__registers__BRA__2__KET____DOT__reg_i__q;
        IData/*31:0*/ __Vcellout__registers__BRA__3__KET____DOT__reg_i__q;
        IData/*31:0*/ __Vcellout__registers__BRA__4__KET____DOT__reg_i__q;
        IData/*31:0*/ __Vcellout__registers__BRA__5__KET____DOT__reg_i__q;
        IData/*31:0*/ __Vcellout__registers__BRA__6__KET____DOT__reg_i__q;
        IData/*31:0*/ __Vcellout__registers__BRA__7__KET____DOT__reg_i__q;
        IData/*31:0*/ __Vcellout__registers__BRA__8__KET____DOT__reg_i__q;
        IData/*31:0*/ __Vcellout__registers__BRA__9__KET____DOT__reg_i__q;
        IData/*31:0*/ __Vcellout__registers__BRA__10__KET____DOT__reg_i__q;
        IData/*31:0*/ __Vcellout__registers__BRA__11__KET____DOT__reg_i__q;
        IData/*31:0*/ __Vcellout__registers__BRA__12__KET____DOT__reg_i__q;
        IData/*31:0*/ __Vcellout__registers__BRA__13__KET____DOT__reg_i__q;
        IData/*31:0*/ __Vcellout__registers__BRA__14__KET____DOT__reg_i__q;
        IData/*31:0*/ __Vcellout__registers__BRA__15__KET____DOT__reg_i__q;
        IData/*31:0*/ __Vcellout__registers__BRA__16__KET____DOT__reg_i__q;
        IData/*31:0*/ __Vcellout__registers__BRA__17__KET____DOT__reg_i__q;
        IData/*31:0*/ __Vcellout__registers__BRA__18__KET____DOT__reg_i__q;
        IData/*31:0*/ __Vcellout__registers__BRA__19__KET____DOT__reg_i__q;
        IData/*31:0*/ __Vcellout__registers__BRA__20__KET____DOT__reg_i__q;
        IData/*31:0*/ __Vcellout__registers__BRA__21__KET____DOT__reg_i__q;
        IData/*31:0*/ __Vcellout__registers__BRA__22__KET____DOT__reg_i__q;
        IData/*31:0*/ __Vcellout__registers__BRA__23__KET____DOT__reg_i__q;
    };
    struct {
        IData/*31:0*/ __Vcellout__registers__BRA__24__KET____DOT__reg_i__q;
        IData/*31:0*/ __Vcellout__registers__BRA__25__KET____DOT__reg_i__q;
        IData/*31:0*/ __Vcellout__registers__BRA__26__KET____DOT__reg_i__q;
        IData/*31:0*/ __Vcellout__registers__BRA__27__KET____DOT__reg_i__q;
        IData/*31:0*/ __Vcellout__registers__BRA__28__KET____DOT__reg_i__q;
        IData/*31:0*/ __Vcellout__registers__BRA__29__KET____DOT__reg_i__q;
        IData/*31:0*/ __Vcellout__registers__BRA__30__KET____DOT__reg_i__q;
        IData/*31:0*/ __Vcellout__registers__BRA__31__KET____DOT__reg_i__q;
        VlUnpacked<IData/*31:0*/, 32> RegData;
    };

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_regfile(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_regfile();
    VL_UNCOPYABLE(Vcore_regfile);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
