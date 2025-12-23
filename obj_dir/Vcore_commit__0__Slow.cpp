// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_commit___stl_sequent__TOP__core__commit_unit__0(Vcore_commit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_commit___stl_sequent__TOP__core__commit_unit__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.commit_jalr = (1U & VL_BITSEL_IIII(32, 
                                                 (((IData)(vlSelfRef.rob_head_ready) 
                                                   & (IData)(vlSelfRef.jalrq_ready))
                                                   ? 
                                                  VL_EXTEND_II(32,1, 
                                                               (1U 
                                                                & VL_BITSEL_IWII(163, vlSelfRef.head, 0x0000004eU)))
                                                   : 0U), 0U));
}

VL_ATTR_COLD void Vcore_commit___stl_comb__TOP__core__commit_unit__0(Vcore_commit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_commit___stl_comb__TOP__core__commit_unit__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.special = 2U;
    vlSelfRef.commit_is_branch = 0U;
    vlSelfRef.commit_prediction = 0U;
    vlSelfRef.commit_result = 0U;
    vlSelfRef.RegWrite = 0U;
    vlSelfRef.committed_pc = 0U;
    vlSelfRef.commit_imm_se = 0U;
    vlSelfRef.rd_en = 0U;
    vlSelfRef.valid_commit = 0U;
    vlSelfRef.WriteData = 0U;
    vlSelfRef.csr_WriteData = 0U;
    vlSelfRef.csr_write_select = 0U;
    vlSelfRef.exception = 0U;
    vlSelfRef.mepc_WriteData = VL_SEL_IWII(163, vlSelfRef.head, 0x0000002eU, 32);
    vlSelfRef.mcause = 0U;
    vlSelfRef.csr_valid_write = 0U;
    vlSelfRef.rd_en_jalrq = 0U;
    if (((IData)(vlSelfRef.rob_head_ready) & (~ (IData)(vlSelfRef.empty)))) {
        vlSelfRef.rd_en = 1U;
        vlSelfRef.valid_commit = 1U;
        vlSelfRef.exception = (1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x00000020U));
        if ((1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x0000004eU))) {
            vlSelfRef.rd_en_jalrq = vlSelfRef.jalrq_ready;
        }
        if ((1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x00000020U))) {
            vlSelfRef.mcause = (0x000000ffU & VL_SEL_IWII(163, vlSelfRef.head, 0x00000026U, 8));
            vlSelfRef.exception = 1U;
            vlSelfRef.valid_commit = 0U;
        } else if ((0U == (3U & VL_SEL_IWII(163, vlSelfRef.head, 0x00000050U, 2)))) {
            vlSelfRef.commit_is_branch = 1U;
            vlSelfRef.commit_prediction = (1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x0000009eU));
            vlSelfRef.commit_result = (1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x0000009dU));
            vlSelfRef.committed_pc = VL_SEL_IWII(163, vlSelfRef.head, 0x00000072U, 32);
            vlSelfRef.commit_imm_se = VL_SEL_IWII(163, vlSelfRef.head, 0x00000052U, 32);
        } else if ((1U == (3U & VL_SEL_IWII(163, vlSelfRef.head, 0x00000050U, 2)))) {
            vlSelfRef.rd_en = vlSelfRef.rd_en_rob;
            vlSelfRef.valid_commit = vlSelfRef.rd_en_rob;
        } else if ((1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x00000096U))) {
            vlSelfRef.special = (3U & VL_SEL_IWII(163, vlSelfRef.head, 0x00000096U, 2));
            vlSelfRef.rd_en = 1U;
            vlSelfRef.exception = 1U;
            vlSelfRef.mcause = (0x000000ffU & VL_SEL_IWII(163, vlSelfRef.head, 0x00000026U, 8));
        } else if ((0U == (3U & VL_SEL_IWII(163, vlSelfRef.head, 0x00000096U, 2)))) {
            vlSelfRef.special = (3U & VL_SEL_IWII(163, vlSelfRef.head, 0x00000096U, 2));
            vlSelfRef.rd_en = (1U & (~ (IData)(vlSelfRef.illegal_access_e)));
            vlSelfRef.valid_commit = vlSelfRef.rd_en;
        } else if ((1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x00000022U))) {
            vlSelfRef.RegWrite = (1U & (~ (IData)(vlSelfRef.illegal_access_e)));
            vlSelfRef.csr_valid_write = 1U;
            vlSelfRef.csr_WriteData = VL_SEL_IWII(163, vlSelfRef.head, 0x00000052U, 32);
            vlSelfRef.WriteData = VL_SEL_IWII(163, vlSelfRef.head, 0x00000072U, 32);
            vlSelfRef.csr_write_select = (7U & VL_SEL_IWII(163, vlSelfRef.head, 0x00000023U, 3));
            vlSelfRef.rd_en = vlSelfRef.RegWrite;
            vlSelfRef.valid_commit = vlSelfRef.RegWrite;
        } else if ((1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x00000021U))) {
            vlSelfRef.RegWrite = 1U;
            vlSelfRef.WriteData = VL_SEL_IWII(163, vlSelfRef.head, 0x00000072U, 32);
            vlSelfRef.valid_commit = 1U;
        } else {
            vlSelfRef.RegWrite = 1U;
            vlSelfRef.WriteData = VL_SEL_IWII(163, vlSelfRef.head, 0x00000052U, 32);
            vlSelfRef.rd_en = ((1U & (~ VL_BITSEL_IWII(163, vlSelfRef.head, 0x0000004eU))) 
                               || (IData)(vlSelfRef.jalrq_ready));
        }
    }
    vlSelfRef.commit_ras_pointer = (0x0000000fU & ((IData)(vlSelfRef.rd_en)
                                                    ? 
                                                   VL_SEL_IWII(163, vlSelfRef.head, 0x00000092U, 4)
                                                    : 0U));
    vlSelfRef.commit_ROB = (0x0000000fU & ((IData)(vlSelfRef.rd_en)
                                            ? VL_SEL_IWII(163, vlSelfRef.head, 0x0000009fU, 4)
                                            : 0U));
    vlSelfRef.rd = (0x0000001fU & ((IData)(vlSelfRef.rd_en)
                                    ? VL_SEL_IWII(163, vlSelfRef.head, 0x00000098U, 5)
                                    : 0U));
}

VL_ATTR_COLD void Vcore_commit___ctor_var_reset(Vcore_commit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_commit___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    VL_SCOPED_RAND_RESET_W(163, vlSelf->head, __VscopeHash, 10112112548227665684ull);
    vlSelf->rob_head_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13536451052963611336ull);
    vlSelf->empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3016723684638320966ull);
    vlSelf->jalrq_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2355455933565304380ull);
    vlSelf->rd_en_rob = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13288154225850418120ull);
    vlSelf->illegal_access_e = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2103023828628314327ull);
    vlSelf->RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3806711693106967809ull);
    vlSelf->commit_ROB = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5206458954467531095ull);
    vlSelf->rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10303652599525973633ull);
    vlSelf->commit_is_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5181610211813709608ull);
    vlSelf->commit_prediction = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12556409357848323134ull);
    vlSelf->commit_result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8466355976420499118ull);
    vlSelf->commit_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15734581275611539913ull);
    vlSelf->WriteData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11254409076074583820ull);
    vlSelf->committed_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2851875357791482293ull);
    vlSelf->commit_imm_se = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10335403197138811143ull);
    vlSelf->rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3814484142505630662ull);
    vlSelf->valid_commit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17853949320393776948ull);
    vlSelf->rd_en_jalrq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13725882464350225640ull);
    vlSelf->commit_ras_pointer = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2633493357818976541ull);
    vlSelf->csr_valid_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12611454948746141850ull);
    vlSelf->special = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1033624942822192448ull);
    vlSelf->mepc_WriteData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12277894522739170872ull);
    vlSelf->csr_WriteData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14458753227888770815ull);
    vlSelf->csr_write_select = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11538044570823722493ull);
    vlSelf->mcause = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16155705988360301293ull);
    vlSelf->exception = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 765130616356482916ull);
}
