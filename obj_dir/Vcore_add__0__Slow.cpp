// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_add___stl_sequent__TOP__core__adder_fu_0__0(Vcore_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_add___stl_sequent__TOP__core__adder_fu_0__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_QI(0U, vlSelfRef.out, vlSelfRef.load_step1);
    VL_ASSIGNSEL_QI(38, 4, 0x00000022U, vlSelfRef.out, vlSelfRef.curr_rob);
    VL_ASSIGNBIT_QI(1U, vlSelfRef.out, vlSelfRef.b_taken);
}

VL_ATTR_COLD void Vcore_add___stl_sequent__TOP__core__adder_fu_0__1(Vcore_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_add___stl_sequent__TOP__core__adder_fu_0__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bge = (5U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.bne = (1U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.beq = (0U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.blt = (4U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.bltu = (6U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.bgeu = (7U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.ALUop1 = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.ALUop), 2U));
    vlSelf->__PVT__adder->rs1 = vlSelfRef.rs1;
    vlSelf->__PVT__adder->rs2 = vlSelfRef.rs2;
    vlSelf->__PVT__adder->ALUop1 = vlSelfRef.ALUop1;
}

VL_ATTR_COLD void Vcore_add___stl_comb__TOP__core__adder_fu_0__0(Vcore_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_add___stl_comb__TOP__core__adder_fu_0__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.carry = vlSelf->__PVT__adder->carry;
    vlSelfRef.overflow = vlSelf->__PVT__adder->overflow;
}

VL_ATTR_COLD void Vcore_add___stl_comb__TOP__core__adder_fu_0__1(Vcore_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_add___stl_comb__TOP__core__adder_fu_0__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.s = vlSelf->__PVT__adder->s;
    vlSelfRef.zero = vlSelf->__PVT__adder->zero;
    vlSelfRef.negative = vlSelf->__PVT__adder->negative;
    vlSelfRef.result = ((7U == (IData)(vlSelfRef.ALUop))
                         ? (((IData)(vlSelfRef.negative) 
                             ^ (IData)(vlSelfRef.overflow))
                             ? 1U : 0U) : ((6U == (IData)(vlSelfRef.ALUop))
                                            ? ((IData)(vlSelfRef.carry)
                                                ? 0U
                                                : 1U)
                                            : ((1U 
                                                == (IData)(vlSelfRef.ALUop))
                                                ? (vlSelfRef.rs1 
                                                   ^ vlSelfRef.rs2)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.ALUop))
                                                    ? 
                                                   (vlSelfRef.rs1 
                                                    | vlSelfRef.rs2)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.ALUop))
                                                     ? 
                                                    (vlSelfRef.rs1 
                                                     & vlSelfRef.rs2)
                                                     : vlSelfRef.s)))));
    vlSelfRef.b_inter = (((((((IData)(vlSelfRef.bne) 
                              & (~ (IData)(vlSelfRef.zero))) 
                             | ((IData)(vlSelfRef.beq) 
                                & (IData)(vlSelfRef.zero))) 
                            | ((IData)(vlSelfRef.blt) 
                               & ((IData)(vlSelfRef.negative) 
                                  ^ (IData)(vlSelfRef.overflow)))) 
                           | ((IData)(vlSelfRef.bge) 
                              & (~ ((IData)(vlSelfRef.negative) 
                                    ^ (IData)(vlSelfRef.overflow))))) 
                          | ((IData)(vlSelfRef.bltu) 
                             & (~ (IData)(vlSelfRef.carry)))) 
                         | ((IData)(vlSelfRef.bgeu) 
                            & (IData)(vlSelfRef.carry)));
}

VL_ATTR_COLD void Vcore_add___stl_sequent__TOP__core__adder_fu_1__0(Vcore_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_add___stl_sequent__TOP__core__adder_fu_1__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_QI(0U, vlSelfRef.out, vlSelfRef.load_step1);
    VL_ASSIGNSEL_QI(38, 4, 0x00000022U, vlSelfRef.out, vlSelfRef.curr_rob);
    VL_ASSIGNBIT_QI(1U, vlSelfRef.out, vlSelfRef.b_taken);
}

VL_ATTR_COLD void Vcore_add___stl_sequent__TOP__core__adder_fu_1__1(Vcore_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_add___stl_sequent__TOP__core__adder_fu_1__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bge = (5U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.bne = (1U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.beq = (0U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.blt = (4U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.bltu = (6U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.bgeu = (7U == (IData)(vlSelfRef.branch_type));
    vlSelfRef.ALUop1 = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.ALUop), 2U));
    vlSelf->__PVT__adder->rs1 = vlSelfRef.rs1;
    vlSelf->__PVT__adder->rs2 = vlSelfRef.rs2;
    vlSelf->__PVT__adder->ALUop1 = vlSelfRef.ALUop1;
}

VL_ATTR_COLD void Vcore_add___stl_comb__TOP__core__adder_fu_1__0(Vcore_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_add___stl_comb__TOP__core__adder_fu_1__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.carry = vlSelf->__PVT__adder->carry;
    vlSelfRef.overflow = vlSelf->__PVT__adder->overflow;
}

VL_ATTR_COLD void Vcore_add___stl_comb__TOP__core__adder_fu_1__1(Vcore_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_add___stl_comb__TOP__core__adder_fu_1__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.s = vlSelf->__PVT__adder->s;
    vlSelfRef.zero = vlSelf->__PVT__adder->zero;
    vlSelfRef.negative = vlSelf->__PVT__adder->negative;
    vlSelfRef.result = ((7U == (IData)(vlSelfRef.ALUop))
                         ? (((IData)(vlSelfRef.negative) 
                             ^ (IData)(vlSelfRef.overflow))
                             ? 1U : 0U) : ((6U == (IData)(vlSelfRef.ALUop))
                                            ? ((IData)(vlSelfRef.carry)
                                                ? 0U
                                                : 1U)
                                            : ((1U 
                                                == (IData)(vlSelfRef.ALUop))
                                                ? (vlSelfRef.rs1 
                                                   ^ vlSelfRef.rs2)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.ALUop))
                                                    ? 
                                                   (vlSelfRef.rs1 
                                                    | vlSelfRef.rs2)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.ALUop))
                                                     ? 
                                                    (vlSelfRef.rs1 
                                                     & vlSelfRef.rs2)
                                                     : vlSelfRef.s)))));
    vlSelfRef.b_inter = (((((((IData)(vlSelfRef.bne) 
                              & (~ (IData)(vlSelfRef.zero))) 
                             | ((IData)(vlSelfRef.beq) 
                                & (IData)(vlSelfRef.zero))) 
                            | ((IData)(vlSelfRef.blt) 
                               & ((IData)(vlSelfRef.negative) 
                                  ^ (IData)(vlSelfRef.overflow)))) 
                           | ((IData)(vlSelfRef.bge) 
                              & (~ ((IData)(vlSelfRef.negative) 
                                    ^ (IData)(vlSelfRef.overflow))))) 
                          | ((IData)(vlSelfRef.bltu) 
                             & (~ (IData)(vlSelfRef.carry)))) 
                         | ((IData)(vlSelfRef.bgeu) 
                            & (IData)(vlSelfRef.carry)));
}

VL_ATTR_COLD void Vcore_add___ctor_var_reset(Vcore_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_add___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->valid_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16540271516330450727ull);
    vlSelf->yumi_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4822011186292556654ull);
    vlSelf->load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1148748992964133306ull);
    vlSelf->ALUop = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10972201474921426583ull);
    vlSelf->rs_rob_entry = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9763797606826813157ull);
    vlSelf->rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10211807078052224816ull);
    vlSelf->rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 392999376545494891ull);
    vlSelf->branch_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14488777592317265311ull);
    vlSelf->valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8744939437868816662ull);
    vlSelf->ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 898948264233693212ull);
    vlSelf->out = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 7519490245117619040ull);
    vlSelf->s = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16562859848569467201ull);
    vlSelf->result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16664408842984530663ull);
    vlSelf->zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10977623970759875275ull);
    vlSelf->negative = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15787286895655867513ull);
    vlSelf->overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16341344440165733293ull);
    vlSelf->ALUop1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14538662602627186084ull);
    vlSelf->carry = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16970673489425401941ull);
    vlSelf->b_inter = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7328254006401467916ull);
    vlSelf->b_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10383670508301414068ull);
    vlSelf->load_step1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17675386505205150396ull);
    vlSelf->bne = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17358742158875040291ull);
    vlSelf->beq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3510267405748395976ull);
    vlSelf->blt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8716301045238274644ull);
    vlSelf->bge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2704046548345479771ull);
    vlSelf->bltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 94189621343200645ull);
    vlSelf->bgeu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6537341043376497928ull);
    vlSelf->curr_rob = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6610471750986501630ull);
    vlSelf->__Vdly__valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17664428475989813653ull);
    vlSelf->__Vdly__b_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4860272256437325301ull);
    vlSelf->__Vdly__curr_rob = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16000938257677394406ull);
    vlSelf->__Vdly__ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6835520217793954282ull);
    vlSelf->__Vdly__load_step1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9002439878134800406ull);
    vlSelf->__Vdly__out = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 16624861127376065080ull);
    vlSelf->__VdlyMask__out = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 7559218031264765300ull);
}
