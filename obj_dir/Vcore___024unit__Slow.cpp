// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

// Parameter definitions for Vcore___024unit
constexpr CData/*3:0*/ Vcore___024unit::ADD;
constexpr CData/*3:0*/ Vcore___024unit::XOR;
constexpr CData/*3:0*/ Vcore___024unit::OR;
constexpr CData/*3:0*/ Vcore___024unit::AND;
constexpr CData/*3:0*/ Vcore___024unit::SUB;
constexpr CData/*3:0*/ Vcore___024unit::SLTU;
constexpr CData/*3:0*/ Vcore___024unit::SLT;
constexpr CData/*3:0*/ Vcore___024unit::MUL;
constexpr CData/*3:0*/ Vcore___024unit::MULH;
constexpr CData/*3:0*/ Vcore___024unit::DIV;
constexpr CData/*3:0*/ Vcore___024unit::REMU;
constexpr CData/*3:0*/ Vcore___024unit::SRL;
constexpr CData/*3:0*/ Vcore___024unit::SRA;
constexpr CData/*3:0*/ Vcore___024unit::SLL;
constexpr CData/*3:0*/ Vcore___024unit::CLEAR;
constexpr CData/*2:0*/ Vcore___024unit::BEQ;
constexpr CData/*2:0*/ Vcore___024unit::BNE;
constexpr CData/*2:0*/ Vcore___024unit::BLT;
constexpr CData/*2:0*/ Vcore___024unit::BGE;
constexpr CData/*2:0*/ Vcore___024unit::BLTU;
constexpr CData/*2:0*/ Vcore___024unit::BGEU;
constexpr CData/*2:0*/ Vcore___024unit::NB;
constexpr CData/*2:0*/ Vcore___024unit::C;
constexpr CData/*2:0*/ Vcore___024unit::S;
constexpr CData/*2:0*/ Vcore___024unit::W;
constexpr CData/*2:0*/ Vcore___024unit::CI;
constexpr CData/*2:0*/ Vcore___024unit::SI;
constexpr CData/*2:0*/ Vcore___024unit::WI;
constexpr CData/*1:0*/ Vcore___024unit::MRET;
constexpr CData/*1:0*/ Vcore___024unit::ECALL;
constexpr CData/*1:0*/ Vcore___024unit::NONE;
constexpr CData/*1:0*/ Vcore___024unit::EBREAK;
constexpr CData/*1:0*/ Vcore___024unit::M;
constexpr CData/*1:0*/ Vcore___024unit::U;
constexpr IData/*31:0*/ Vcore___024unit::NUM_CSR;
constexpr IData/*31:0*/ Vcore___024unit::CSR_BITS;


void Vcore___024unit___ctor_var_reset(Vcore___024unit* vlSelf);

Vcore___024unit::Vcore___024unit(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore___024unit___ctor_var_reset(this);
}

void Vcore___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore___024unit::~Vcore___024unit() {
}
