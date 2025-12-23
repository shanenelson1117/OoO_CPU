// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_ADDER_32BIT_H_
#define VERILATED_VCORE_ADDER_32BIT_H_  // guard

#include "verilated.h"
class Vcore_full_add;


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_adder_32bit final : public VerilatedModule {
  public:
    // CELLS
    Vcore_full_add* __PVT__add_loop__BRA__0__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__1__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__2__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__3__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__4__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__5__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__6__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__7__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__8__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__9__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__10__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__11__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__12__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__13__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__14__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__15__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__16__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__17__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__18__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__19__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__20__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__21__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__22__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__23__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__24__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__25__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__26__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__27__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__28__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__29__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__30__KET____DOT__addi;
    Vcore_full_add* __PVT__add_loop__BRA__31__KET____DOT__addi;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(ALUop1,0,0);
        VL_OUT8(zero,0,0);
        VL_OUT8(overflow,0,0);
        VL_OUT8(negative,0,0);
        VL_OUT8(carry,0,0);
        CData/*0:0*/ __Vcellinp__add_loop__BRA__0__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__0__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__0__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__0__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__0__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__1__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__1__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__1__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__1__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__1__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__2__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__2__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__2__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__2__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__2__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__3__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__3__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__3__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__3__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__3__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__4__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__4__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__4__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__4__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__4__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__5__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__5__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__5__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__5__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__5__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__6__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__6__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__6__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__6__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__6__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__7__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__7__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__7__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__7__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__7__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__8__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__8__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__8__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__8__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__8__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__9__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__9__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__9__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__9__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__9__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__10__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__10__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__10__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__10__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__10__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__11__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__11__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__11__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__11__KET____DOT__addi____pinNumber2;
    };
    struct {
        CData/*0:0*/ __Vcellout__add_loop__BRA__11__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__12__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__12__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__12__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__12__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__12__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__13__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__13__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__13__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__13__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__13__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__14__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__14__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__14__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__14__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__14__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__15__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__15__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__15__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__15__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__15__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__16__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__16__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__16__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__16__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__16__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__17__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__17__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__17__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__17__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__17__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__18__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__18__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__18__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__18__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__18__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__19__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__19__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__19__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__19__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__19__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__20__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__20__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__20__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__20__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__20__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__21__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__21__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__21__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__21__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__21__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__22__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__22__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__22__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__22__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__22__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__23__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__23__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__23__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__23__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__23__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__24__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__24__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__24__KET____DOT__addi____pinNumber3;
    };
    struct {
        CData/*0:0*/ __Vcellout__add_loop__BRA__24__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__24__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__25__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__25__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__25__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__25__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__25__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__26__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__26__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__26__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__26__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__26__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__27__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__27__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__27__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__27__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__27__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__28__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__28__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__28__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__28__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__28__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__29__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__29__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__29__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__29__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__29__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__30__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__30__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__30__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__30__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__30__KET____DOT__addi____pinNumber1;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__31__KET____DOT__addi____pinNumber5;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__31__KET____DOT__addi____pinNumber4;
        CData/*0:0*/ __Vcellinp__add_loop__BRA__31__KET____DOT__addi____pinNumber3;
        CData/*0:0*/ __Vcellout__add_loop__BRA__31__KET____DOT__addi____pinNumber2;
        CData/*0:0*/ __Vcellout__add_loop__BRA__31__KET____DOT__addi____pinNumber1;
        VL_IN(rs1,31,0);
        VL_IN(rs2,31,0);
        VL_OUT(s,31,0);
        IData/*31:0*/ b;
        QData/*32:0*/ c_bus;
    };

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_adder_32bit(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_adder_32bit();
    VL_UNCOPYABLE(Vcore_adder_32bit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
