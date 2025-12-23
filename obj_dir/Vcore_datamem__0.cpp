// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_datamem___ico_sequent__TOP__core__data_memory__the_mem__0(Vcore_datamem* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_datamem___ico_sequent__TOP__core__data_memory__the_mem__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aligned_address = ((1U == (IData)(vlSelfRef.xfer_size))
                                  ? vlSelfRef.address
                                  : ((2U == (IData)(vlSelfRef.xfer_size))
                                      ? VL_CONCAT_III(32,31,1, 
                                                      (0x7fffffffU 
                                                       & VL_SEL_IIII(32, vlSelfRef.address, 1U, 31)), 0U)
                                      : ((4U == (IData)(vlSelfRef.xfer_size))
                                          ? VL_CONCAT_III(32,30,2, 
                                                          (0x3fffffffU 
                                                           & VL_SEL_IIII(32, vlSelfRef.address, 2U, 30)), 0U)
                                          : VL_CONCAT_III(32,30,2, 
                                                          (0x3fffffffU 
                                                           & VL_SEL_IIII(32, vlSelfRef.address, 2U, 30)), 0U))));
    vlSelfRef.read_data = 0U;
    if (vlSelfRef.read_enable) {
        vlSelfRef.i = 0U;
        while ((vlSelfRef.i < VL_EXTEND_II(32,4, (IData)(vlSelfRef.xfer_size)))) {
            VL_ASSIGNSEL_II(32, 8, (0x0000001fU & VL_SEL_IIII(32, 
                                                              VL_SHIFTL_III(32,32,32, vlSelfRef.i, 3U), 0U, 5)), vlSelfRef.read_data, 
                            vlSelfRef.mem[(0x00007fffU 
                                           & (VL_SEL_IIII(32, vlSelfRef.aligned_address, 0U, 15) 
                                              + VL_SEL_IIII(32, vlSelfRef.i, 0U, 15)))]);
            vlSelfRef.i = ((IData)(1U) + vlSelfRef.i);
        }
    }
}

void Vcore_datamem___nba_sequent__TOP__core__data_memory__the_mem__0(Vcore_datamem* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_datamem___nba_sequent__TOP__core__data_memory__the_mem__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.write_enable) | (IData)(vlSelfRef.read_enable))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((0U != (vlSelfRef.address 
                                     & (VL_EXTEND_II(32,4, (IData)(vlSelfRef.xfer_size)) 
                                        - (IData)(1U))))))) {
                VL_WRITEF_NX("[%0t] %%Error: datamem.sv:29: Assertion failed in %Ncore.data_memory.the_mem: 'assert' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("source/datamem.sv", 29, "");
            }
        }
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((0U != (VL_EXTEND_II(32,4, (IData)(vlSelfRef.xfer_size)) 
                                     & (VL_EXTEND_II(32,4, (IData)(vlSelfRef.xfer_size)) 
                                        - (IData)(1U))))))) {
                VL_WRITEF_NX("[%0t] %%Error: datamem.sv:30: Assertion failed in %Ncore.data_memory.the_mem: 'assert' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("source/datamem.sv", 30, "");
            }
        }
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((0x00008000U < (vlSelfRef.address 
                                             + VL_EXTEND_II(32,4, (IData)(vlSelfRef.xfer_size))))))) {
                VL_WRITEF_NX("[%0t] %%Error: datamem.sv:31: Assertion failed in %Ncore.data_memory.the_mem: 'assert' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("source/datamem.sv", 31, "");
            }
        }
    }
    if (vlSelfRef.write_enable) {
        vlSelfRef.j = 0U;
        while ((vlSelfRef.j < VL_EXTEND_II(32,4, (IData)(vlSelfRef.xfer_size)))) {
            vlSelfRef.__VdlyVal__mem__v0 = (0x000000ffU 
                                            & VL_SEL_IIII(32, vlSelfRef.write_data, 
                                                          (0x0000001fU 
                                                           & VL_SEL_IIII(32, 
                                                                         VL_SHIFTL_III(32,32,32, vlSelfRef.j, 3U), 0U, 5)), 8));
            vlSelfRef.__VdlyDim0__mem__v0 = (0x00007fffU 
                                             & (VL_SEL_IIII(32, vlSelfRef.aligned_address, 0U, 15) 
                                                + VL_SEL_IIII(32, vlSelfRef.j, 0U, 15)));
            vlSelfRef.__VdlyCommitQueuemem.enqueue(vlSelfRef.__VdlyVal__mem__v0, (IData)(vlSelfRef.__VdlyDim0__mem__v0));
            vlSelfRef.j = ((IData)(1U) + vlSelfRef.j);
        }
    }
    vlSelfRef.__VdlyCommitQueuemem.commit(vlSelfRef.mem);
}

void Vcore_datamem___nba_sequent__TOP__core__data_memory__the_mem__1(Vcore_datamem* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_datamem___nba_sequent__TOP__core__data_memory__the_mem__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aligned_address = ((1U == (IData)(vlSelfRef.xfer_size))
                                  ? vlSelfRef.address
                                  : ((2U == (IData)(vlSelfRef.xfer_size))
                                      ? VL_CONCAT_III(32,31,1, 
                                                      (0x7fffffffU 
                                                       & VL_SEL_IIII(32, vlSelfRef.address, 1U, 31)), 0U)
                                      : ((4U == (IData)(vlSelfRef.xfer_size))
                                          ? VL_CONCAT_III(32,30,2, 
                                                          (0x3fffffffU 
                                                           & VL_SEL_IIII(32, vlSelfRef.address, 2U, 30)), 0U)
                                          : VL_CONCAT_III(32,30,2, 
                                                          (0x3fffffffU 
                                                           & VL_SEL_IIII(32, vlSelfRef.address, 2U, 30)), 0U))));
}

void Vcore_datamem___nba_comb__TOP__core__data_memory__the_mem__0(Vcore_datamem* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_datamem___nba_comb__TOP__core__data_memory__the_mem__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.read_data = 0U;
    if (vlSelfRef.read_enable) {
        vlSelfRef.i = 0U;
        while ((vlSelfRef.i < VL_EXTEND_II(32,4, (IData)(vlSelfRef.xfer_size)))) {
            VL_ASSIGNSEL_II(32, 8, (0x0000001fU & VL_SEL_IIII(32, 
                                                              VL_SHIFTL_III(32,32,32, vlSelfRef.i, 3U), 0U, 5)), vlSelfRef.read_data, 
                            vlSelfRef.mem[(0x00007fffU 
                                           & (VL_SEL_IIII(32, vlSelfRef.aligned_address, 0U, 15) 
                                              + VL_SEL_IIII(32, vlSelfRef.i, 0U, 15)))]);
            vlSelfRef.i = ((IData)(1U) + vlSelfRef.i);
        }
    }
}
