// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE___024UNIT_H_
#define VERILATED_VCORE___024UNIT_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*3:0*/ ADD = 0U;
    static constexpr CData/*3:0*/ XOR = 1U;
    static constexpr CData/*3:0*/ OR = 2U;
    static constexpr CData/*3:0*/ AND = 3U;
    static constexpr CData/*3:0*/ SUB = 4U;
    static constexpr CData/*3:0*/ SLTU = 6U;
    static constexpr CData/*3:0*/ SLT = 7U;
    static constexpr CData/*3:0*/ MUL = 0x0cU;
    static constexpr CData/*3:0*/ MULH = 0x0dU;
    static constexpr CData/*3:0*/ DIV = 0x0bU;
    static constexpr CData/*3:0*/ REMU = 0x0aU;
    static constexpr CData/*3:0*/ SRL = 8U;
    static constexpr CData/*3:0*/ SRA = 9U;
    static constexpr CData/*3:0*/ SLL = 0x0fU;
    static constexpr CData/*3:0*/ CLEAR = 5U;
    static constexpr CData/*2:0*/ BEQ = 0U;
    static constexpr CData/*2:0*/ BNE = 1U;
    static constexpr CData/*2:0*/ BLT = 4U;
    static constexpr CData/*2:0*/ BGE = 5U;
    static constexpr CData/*2:0*/ BLTU = 6U;
    static constexpr CData/*2:0*/ BGEU = 7U;
    static constexpr CData/*2:0*/ NB = 2U;
    static constexpr CData/*2:0*/ C = 3U;
    static constexpr CData/*2:0*/ S = 2U;
    static constexpr CData/*2:0*/ W = 1U;
    static constexpr CData/*2:0*/ CI = 7U;
    static constexpr CData/*2:0*/ SI = 6U;
    static constexpr CData/*2:0*/ WI = 5U;
    static constexpr CData/*1:0*/ MRET = 0U;
    static constexpr CData/*1:0*/ ECALL = 1U;
    static constexpr CData/*1:0*/ NONE = 2U;
    static constexpr CData/*1:0*/ EBREAK = 3U;
    static constexpr CData/*1:0*/ M = 3U;
    static constexpr CData/*1:0*/ U = 0U;
    static constexpr IData/*31:0*/ NUM_CSR = 8U;
    static constexpr IData/*31:0*/ CSR_BITS = 2U;

    // CONSTRUCTORS
    Vcore___024unit(Vcore__Syms* symsp, const char* v__name);
    ~Vcore___024unit();
    VL_UNCOPYABLE(Vcore___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
