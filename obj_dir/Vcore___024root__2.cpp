// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

extern const VlUnpacked<CData/*1:0*/, 8> Vcore__ConstPool__TABLE_hd26579b0_0;
extern const VlWide<32>/*1023:0*/ Vcore__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<10>/*319:0*/ Vcore__ConstPool__CONST_hab76c978_0;

void Vcore___024root___nba_sequent__TOP__2(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___nba_sequent__TOP__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ core__DOT__fetch_stage__DOT____VdfgExtracted_h5b55025d__0;
    core__DOT__fetch_stage__DOT____VdfgExtracted_h5b55025d__0 = 0;
    CData/*0:0*/ core__DOT__fetch_stage__DOT____VdfgRegularize_h7b9f36a4_0_0;
    core__DOT__fetch_stage__DOT____VdfgRegularize_h7b9f36a4_0_0 = 0;
    CData/*2:0*/ core__DOT__res_sched__DOT____VdfgExtracted_h69ccd114__0;
    core__DOT__res_sched__DOT____VdfgExtracted_h69ccd114__0 = 0;
    CData/*2:0*/ core__DOT__res_sched__DOT____VdfgExtracted_h69ccd114__1;
    core__DOT__res_sched__DOT____VdfgExtracted_h69ccd114__1 = 0;
    CData/*2:0*/ core__DOT__res_sched__DOT____VdfgExtracted_h69ccd114__2;
    core__DOT__res_sched__DOT____VdfgExtracted_h69ccd114__2 = 0;
    CData/*2:0*/ __Vfunc_index__1__Vfuncout;
    __Vfunc_index__1__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_index__1__csr;
    __Vfunc_index__1__csr = 0;
    CData/*2:0*/ __Vfunc_index__2__Vfuncout;
    __Vfunc_index__2__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_index__2__csr;
    __Vfunc_index__2__csr = 0;
    CData/*2:0*/ __Vfunc_index__3__Vfuncout;
    __Vfunc_index__3__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_index__3__csr;
    __Vfunc_index__3__csr = 0;
    CData/*2:0*/ __Vtableidx871;
    __Vtableidx871 = 0;
    CData/*2:0*/ __Vtableidx872;
    __Vtableidx872 = 0;
    CData/*2:0*/ __Vtableidx873;
    __Vtableidx873 = 0;
    CData/*2:0*/ __Vtableidx874;
    __Vtableidx874 = 0;
    CData/*2:0*/ __Vtableidx875;
    __Vtableidx875 = 0;
    CData/*2:0*/ __Vtableidx876;
    __Vtableidx876 = 0;
    CData/*2:0*/ __Vtableidx877;
    __Vtableidx877 = 0;
    CData/*2:0*/ __Vtableidx878;
    __Vtableidx878 = 0;
    CData/*2:0*/ __Vtableidx879;
    __Vtableidx879 = 0;
    CData/*2:0*/ __Vtableidx880;
    __Vtableidx880 = 0;
    CData/*2:0*/ __Vtableidx881;
    __Vtableidx881 = 0;
    CData/*2:0*/ __Vtableidx882;
    __Vtableidx882 = 0;
    CData/*2:0*/ __Vtableidx883;
    __Vtableidx883 = 0;
    CData/*2:0*/ __Vtableidx884;
    __Vtableidx884 = 0;
    CData/*2:0*/ __Vtableidx885;
    __Vtableidx885 = 0;
    CData/*2:0*/ __Vtableidx886;
    __Vtableidx886 = 0;
    CData/*2:0*/ __Vtableidx887;
    __Vtableidx887 = 0;
    CData/*2:0*/ __Vtableidx888;
    __Vtableidx888 = 0;
    CData/*2:0*/ __Vtableidx889;
    __Vtableidx889 = 0;
    CData/*2:0*/ __Vtableidx890;
    __Vtableidx890 = 0;
    CData/*2:0*/ __Vtableidx891;
    __Vtableidx891 = 0;
    CData/*2:0*/ __Vtableidx892;
    __Vtableidx892 = 0;
    CData/*2:0*/ __Vtableidx893;
    __Vtableidx893 = 0;
    CData/*2:0*/ __Vtableidx894;
    __Vtableidx894 = 0;
    CData/*2:0*/ __Vtableidx895;
    __Vtableidx895 = 0;
    CData/*2:0*/ __Vtableidx896;
    __Vtableidx896 = 0;
    CData/*2:0*/ __Vtableidx897;
    __Vtableidx897 = 0;
    CData/*2:0*/ __Vtableidx898;
    __Vtableidx898 = 0;
    CData/*2:0*/ __Vtableidx899;
    __Vtableidx899 = 0;
    CData/*2:0*/ __Vtableidx900;
    __Vtableidx900 = 0;
    CData/*2:0*/ __Vtableidx901;
    __Vtableidx901 = 0;
    CData/*2:0*/ __Vtableidx902;
    __Vtableidx902 = 0;
    CData/*2:0*/ __Vtableidx903;
    __Vtableidx903 = 0;
    CData/*2:0*/ __Vtableidx904;
    __Vtableidx904 = 0;
    CData/*2:0*/ __Vtableidx905;
    __Vtableidx905 = 0;
    CData/*2:0*/ __Vtableidx906;
    __Vtableidx906 = 0;
    CData/*2:0*/ __Vtableidx907;
    __Vtableidx907 = 0;
    CData/*2:0*/ __Vtableidx908;
    __Vtableidx908 = 0;
    CData/*2:0*/ __Vtableidx909;
    __Vtableidx909 = 0;
    CData/*2:0*/ __Vtableidx910;
    __Vtableidx910 = 0;
    CData/*2:0*/ __Vtableidx911;
    __Vtableidx911 = 0;
    CData/*2:0*/ __Vtableidx912;
    __Vtableidx912 = 0;
    CData/*2:0*/ __Vtableidx913;
    __Vtableidx913 = 0;
    CData/*2:0*/ __Vtableidx914;
    __Vtableidx914 = 0;
    CData/*2:0*/ __Vtableidx915;
    __Vtableidx915 = 0;
    CData/*2:0*/ __Vtableidx916;
    __Vtableidx916 = 0;
    CData/*2:0*/ __Vtableidx917;
    __Vtableidx917 = 0;
    CData/*2:0*/ __Vtableidx918;
    __Vtableidx918 = 0;
    CData/*2:0*/ __Vtableidx919;
    __Vtableidx919 = 0;
    CData/*2:0*/ __Vtableidx920;
    __Vtableidx920 = 0;
    CData/*2:0*/ __Vtableidx921;
    __Vtableidx921 = 0;
    CData/*2:0*/ __Vtableidx922;
    __Vtableidx922 = 0;
    CData/*2:0*/ __Vtableidx923;
    __Vtableidx923 = 0;
    CData/*2:0*/ __Vtableidx924;
    __Vtableidx924 = 0;
    CData/*2:0*/ __Vtableidx925;
    __Vtableidx925 = 0;
    CData/*2:0*/ __Vtableidx926;
    __Vtableidx926 = 0;
    CData/*2:0*/ __Vtableidx927;
    __Vtableidx927 = 0;
    CData/*2:0*/ __Vtableidx928;
    __Vtableidx928 = 0;
    CData/*2:0*/ __Vtableidx929;
    __Vtableidx929 = 0;
    CData/*2:0*/ __Vtableidx930;
    __Vtableidx930 = 0;
    CData/*2:0*/ __Vtableidx931;
    __Vtableidx931 = 0;
    CData/*2:0*/ __Vtableidx932;
    __Vtableidx932 = 0;
    CData/*2:0*/ __Vtableidx933;
    __Vtableidx933 = 0;
    CData/*2:0*/ __Vtableidx934;
    __Vtableidx934 = 0;
    CData/*2:0*/ __Vtableidx935;
    __Vtableidx935 = 0;
    CData/*2:0*/ __Vtableidx936;
    __Vtableidx936 = 0;
    CData/*2:0*/ __Vtableidx937;
    __Vtableidx937 = 0;
    CData/*2:0*/ __Vtableidx938;
    __Vtableidx938 = 0;
    CData/*2:0*/ __Vtableidx939;
    __Vtableidx939 = 0;
    CData/*2:0*/ __Vtableidx940;
    __Vtableidx940 = 0;
    CData/*2:0*/ __Vtableidx941;
    __Vtableidx941 = 0;
    CData/*2:0*/ __Vtableidx942;
    __Vtableidx942 = 0;
    CData/*2:0*/ __Vtableidx943;
    __Vtableidx943 = 0;
    CData/*2:0*/ __Vtableidx944;
    __Vtableidx944 = 0;
    CData/*2:0*/ __Vtableidx945;
    __Vtableidx945 = 0;
    CData/*2:0*/ __Vtableidx946;
    __Vtableidx946 = 0;
    CData/*2:0*/ __Vtableidx947;
    __Vtableidx947 = 0;
    CData/*2:0*/ __Vtableidx948;
    __Vtableidx948 = 0;
    CData/*2:0*/ __Vtableidx949;
    __Vtableidx949 = 0;
    CData/*2:0*/ __Vtableidx950;
    __Vtableidx950 = 0;
    CData/*2:0*/ __Vtableidx951;
    __Vtableidx951 = 0;
    CData/*2:0*/ __Vtableidx952;
    __Vtableidx952 = 0;
    CData/*2:0*/ __Vtableidx953;
    __Vtableidx953 = 0;
    CData/*2:0*/ __Vtableidx954;
    __Vtableidx954 = 0;
    CData/*2:0*/ __Vtableidx955;
    __Vtableidx955 = 0;
    CData/*2:0*/ __Vtableidx956;
    __Vtableidx956 = 0;
    CData/*2:0*/ __Vtableidx957;
    __Vtableidx957 = 0;
    CData/*2:0*/ __Vtableidx958;
    __Vtableidx958 = 0;
    CData/*2:0*/ __Vtableidx959;
    __Vtableidx959 = 0;
    CData/*2:0*/ __Vtableidx960;
    __Vtableidx960 = 0;
    CData/*2:0*/ __Vtableidx961;
    __Vtableidx961 = 0;
    CData/*2:0*/ __Vtableidx962;
    __Vtableidx962 = 0;
    CData/*2:0*/ __Vtableidx963;
    __Vtableidx963 = 0;
    CData/*2:0*/ __Vtableidx964;
    __Vtableidx964 = 0;
    CData/*2:0*/ __Vtableidx965;
    __Vtableidx965 = 0;
    CData/*2:0*/ __Vtableidx966;
    __Vtableidx966 = 0;
    CData/*2:0*/ __Vtableidx967;
    __Vtableidx967 = 0;
    CData/*2:0*/ __Vtableidx968;
    __Vtableidx968 = 0;
    CData/*2:0*/ __Vtableidx969;
    __Vtableidx969 = 0;
    CData/*2:0*/ __Vtableidx970;
    __Vtableidx970 = 0;
    CData/*2:0*/ __Vtableidx971;
    __Vtableidx971 = 0;
    CData/*2:0*/ __Vtableidx972;
    __Vtableidx972 = 0;
    CData/*2:0*/ __Vtableidx973;
    __Vtableidx973 = 0;
    CData/*2:0*/ __Vtableidx974;
    __Vtableidx974 = 0;
    CData/*2:0*/ __Vtableidx975;
    __Vtableidx975 = 0;
    CData/*2:0*/ __Vtableidx976;
    __Vtableidx976 = 0;
    CData/*2:0*/ __Vtableidx977;
    __Vtableidx977 = 0;
    CData/*2:0*/ __Vtableidx978;
    __Vtableidx978 = 0;
    CData/*2:0*/ __Vtableidx979;
    __Vtableidx979 = 0;
    CData/*2:0*/ __Vtableidx980;
    __Vtableidx980 = 0;
    CData/*2:0*/ __Vtableidx981;
    __Vtableidx981 = 0;
    CData/*2:0*/ __Vtableidx982;
    __Vtableidx982 = 0;
    CData/*2:0*/ __Vtableidx983;
    __Vtableidx983 = 0;
    CData/*2:0*/ __Vtableidx984;
    __Vtableidx984 = 0;
    CData/*2:0*/ __Vtableidx985;
    __Vtableidx985 = 0;
    CData/*2:0*/ __Vtableidx986;
    __Vtableidx986 = 0;
    CData/*2:0*/ __Vtableidx987;
    __Vtableidx987 = 0;
    CData/*2:0*/ __Vtableidx988;
    __Vtableidx988 = 0;
    CData/*2:0*/ __Vtableidx989;
    __Vtableidx989 = 0;
    CData/*2:0*/ __Vtableidx990;
    __Vtableidx990 = 0;
    CData/*2:0*/ __Vtableidx991;
    __Vtableidx991 = 0;
    CData/*2:0*/ __Vtableidx992;
    __Vtableidx992 = 0;
    CData/*2:0*/ __Vtableidx993;
    __Vtableidx993 = 0;
    CData/*2:0*/ __Vtableidx994;
    __Vtableidx994 = 0;
    CData/*2:0*/ __Vtableidx995;
    __Vtableidx995 = 0;
    CData/*2:0*/ __Vtableidx996;
    __Vtableidx996 = 0;
    CData/*2:0*/ __Vtableidx997;
    __Vtableidx997 = 0;
    CData/*2:0*/ __Vtableidx998;
    __Vtableidx998 = 0;
    CData/*2:0*/ __Vtableidx999;
    __Vtableidx999 = 0;
    CData/*2:0*/ __Vtableidx1000;
    __Vtableidx1000 = 0;
    CData/*2:0*/ __Vtableidx1001;
    __Vtableidx1001 = 0;
    CData/*2:0*/ __Vtableidx1002;
    __Vtableidx1002 = 0;
    CData/*2:0*/ __Vtableidx1003;
    __Vtableidx1003 = 0;
    CData/*2:0*/ __Vtableidx1004;
    __Vtableidx1004 = 0;
    CData/*2:0*/ __Vtableidx1005;
    __Vtableidx1005 = 0;
    CData/*2:0*/ __Vtableidx1006;
    __Vtableidx1006 = 0;
    CData/*2:0*/ __Vtableidx1007;
    __Vtableidx1007 = 0;
    CData/*2:0*/ __Vtableidx1008;
    __Vtableidx1008 = 0;
    CData/*2:0*/ __Vtableidx1009;
    __Vtableidx1009 = 0;
    CData/*2:0*/ __Vtableidx1010;
    __Vtableidx1010 = 0;
    CData/*2:0*/ __Vtableidx1011;
    __Vtableidx1011 = 0;
    CData/*2:0*/ __Vtableidx1012;
    __Vtableidx1012 = 0;
    CData/*2:0*/ __Vtableidx1013;
    __Vtableidx1013 = 0;
    CData/*2:0*/ __Vtableidx1014;
    __Vtableidx1014 = 0;
    CData/*2:0*/ __Vtableidx1015;
    __Vtableidx1015 = 0;
    CData/*2:0*/ __Vtableidx1016;
    __Vtableidx1016 = 0;
    CData/*2:0*/ __Vtableidx1017;
    __Vtableidx1017 = 0;
    CData/*2:0*/ __Vtableidx1018;
    __Vtableidx1018 = 0;
    CData/*2:0*/ __Vtableidx1019;
    __Vtableidx1019 = 0;
    CData/*2:0*/ __Vtableidx1020;
    __Vtableidx1020 = 0;
    CData/*2:0*/ __Vtableidx1021;
    __Vtableidx1021 = 0;
    CData/*2:0*/ __Vtableidx1022;
    __Vtableidx1022 = 0;
    CData/*2:0*/ __Vtableidx1023;
    __Vtableidx1023 = 0;
    CData/*2:0*/ __Vtableidx1024;
    __Vtableidx1024 = 0;
    // Body
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__869__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[vlSelfRef.__Vtableidx870];
    __Vtableidx871 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__870__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__870__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx871];
    __Vtableidx872 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__871__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__871__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx872];
    __Vtableidx873 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__872__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__872__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx873];
    __Vtableidx874 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__873__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__873__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx874];
    __Vtableidx875 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__874__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__874__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx875];
    __Vtableidx876 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__875__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__875__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx876];
    __Vtableidx877 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__876__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__876__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx877];
    __Vtableidx878 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__877__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__877__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx878];
    __Vtableidx879 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__878__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__878__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx879];
    __Vtableidx880 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__879__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__879__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx880];
    __Vtableidx881 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__880__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__880__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx881];
    __Vtableidx882 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__881__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__881__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx882];
    __Vtableidx883 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__882__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__882__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx883];
    __Vtableidx884 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__883__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__883__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx884];
    __Vtableidx885 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__884__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__884__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx885];
    __Vtableidx886 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__885__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__885__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx886];
    __Vtableidx887 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__886__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__886__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx887];
    __Vtableidx888 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__887__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__887__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx888];
    __Vtableidx889 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__888__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__888__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx889];
    __Vtableidx890 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__889__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__889__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx890];
    __Vtableidx891 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__890__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__890__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx891];
    __Vtableidx892 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__891__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__891__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx892];
    __Vtableidx893 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__892__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__892__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx893];
    __Vtableidx894 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__893__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__893__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx894];
    __Vtableidx895 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__894__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__894__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx895];
    __Vtableidx896 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__895__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__895__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx896];
    __Vtableidx897 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__896__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__896__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx897];
    __Vtableidx898 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__897__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__897__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx898];
    __Vtableidx899 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__898__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__898__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx899];
    __Vtableidx900 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__899__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__899__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx900];
    __Vtableidx901 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__900__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__900__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx901];
    __Vtableidx902 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__901__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__901__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx902];
    __Vtableidx903 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__902__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__902__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx903];
    __Vtableidx904 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__903__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__903__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx904];
    __Vtableidx905 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__904__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__904__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx905];
    __Vtableidx906 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__905__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__905__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx906];
    __Vtableidx907 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__906__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__906__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx907];
    __Vtableidx908 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__907__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__907__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx908];
    __Vtableidx909 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__908__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__908__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx909];
    __Vtableidx910 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__909__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__909__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx910];
    __Vtableidx911 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__910__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__910__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx911];
    __Vtableidx912 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__911__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__911__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx912];
    __Vtableidx913 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__912__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__912__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx913];
    __Vtableidx914 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__913__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__913__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx914];
    __Vtableidx915 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__914__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__914__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx915];
    __Vtableidx916 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__915__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__915__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx916];
    __Vtableidx917 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__916__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__916__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx917];
    __Vtableidx918 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__917__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__917__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx918];
    __Vtableidx919 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__918__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__918__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx919];
    __Vtableidx920 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__919__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__919__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx920];
    __Vtableidx921 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__920__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__920__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx921];
    __Vtableidx922 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__921__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__921__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx922];
    __Vtableidx923 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__922__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__922__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx923];
    __Vtableidx924 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__923__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__923__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx924];
    __Vtableidx925 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__924__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__924__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx925];
    __Vtableidx926 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__925__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__925__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx926];
    __Vtableidx927 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__926__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__926__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx927];
    __Vtableidx928 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__927__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__927__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx928];
    __Vtableidx929 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__928__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__928__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx929];
    __Vtableidx930 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__929__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__929__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx930];
    __Vtableidx931 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__930__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__930__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx931];
    __Vtableidx932 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__931__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__931__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx932];
    __Vtableidx933 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__932__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__932__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx933];
    __Vtableidx934 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__933__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__933__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx934];
    __Vtableidx935 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__934__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__934__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx935];
    __Vtableidx936 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__935__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__935__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx936];
    __Vtableidx937 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__936__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__936__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx937];
    __Vtableidx938 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__937__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__937__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx938];
    __Vtableidx939 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__938__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__938__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx939];
    __Vtableidx940 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__939__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__939__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx940];
    __Vtableidx941 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__940__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__940__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx941];
    __Vtableidx942 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__941__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__941__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx942];
    __Vtableidx943 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__942__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__942__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx943];
    __Vtableidx944 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__943__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__943__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx944];
    __Vtableidx945 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__944__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__944__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx945];
    __Vtableidx946 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__945__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__945__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx946];
    __Vtableidx947 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__946__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__946__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx947];
    __Vtableidx948 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__947__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__947__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx948];
    __Vtableidx949 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__948__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__948__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx949];
    __Vtableidx950 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__949__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__949__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx950];
    __Vtableidx951 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__950__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__950__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx951];
    __Vtableidx952 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__951__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__951__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx952];
    __Vtableidx953 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__952__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__952__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx953];
    __Vtableidx954 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__953__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__953__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx954];
    __Vtableidx955 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__954__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__954__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx955];
    __Vtableidx956 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__955__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__955__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx956];
    __Vtableidx957 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__956__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__956__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx957];
    __Vtableidx958 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__957__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__957__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx958];
    __Vtableidx959 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__958__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__958__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx959];
    __Vtableidx960 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__959__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__959__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx960];
    __Vtableidx961 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__960__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__960__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx961];
    __Vtableidx962 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__961__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__961__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx962];
    __Vtableidx963 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__962__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__962__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx963];
    __Vtableidx964 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__963__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__963__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx964];
    __Vtableidx965 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__964__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__964__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx965];
    __Vtableidx966 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__965__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__965__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx966];
    __Vtableidx967 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__966__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__966__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx967];
    __Vtableidx968 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__967__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__967__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx968];
    __Vtableidx969 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__968__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__968__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx969];
    __Vtableidx970 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__969__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__969__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx970];
    __Vtableidx971 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__970__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__970__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx971];
    __Vtableidx972 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__971__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__971__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx972];
    __Vtableidx973 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__972__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__972__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx973];
    __Vtableidx974 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__973__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__973__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx974];
    __Vtableidx975 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__974__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__974__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx975];
    __Vtableidx976 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__975__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__975__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx976];
    __Vtableidx977 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__976__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__976__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx977];
    __Vtableidx978 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__977__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__977__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx978];
    __Vtableidx979 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__978__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__978__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx979];
    __Vtableidx980 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__979__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__979__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx980];
    __Vtableidx981 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__980__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__980__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx981];
    __Vtableidx982 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__981__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__981__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx982];
    __Vtableidx983 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__982__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__982__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx983];
    __Vtableidx984 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__983__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__983__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx984];
    __Vtableidx985 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__984__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__984__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx985];
    __Vtableidx986 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__985__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__985__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx986];
    __Vtableidx987 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__986__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__986__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx987];
    __Vtableidx988 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__987__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__987__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx988];
    __Vtableidx989 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__988__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__988__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx989];
    __Vtableidx990 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__989__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__989__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx990];
    __Vtableidx991 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__990__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__990__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx991];
    __Vtableidx992 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__991__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__991__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx992];
    __Vtableidx993 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__992__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__992__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx993];
    __Vtableidx994 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__993__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__993__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx994];
    __Vtableidx995 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__994__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__994__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx995];
    __Vtableidx996 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__995__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__995__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx996];
    __Vtableidx997 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__996__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__996__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx997];
    __Vtableidx998 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__997__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__997__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx998];
    __Vtableidx999 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                       << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__998__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__998__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx999];
    __Vtableidx1000 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                        << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__999__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__999__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx1000];
    __Vtableidx1001 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                        << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1000__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1000__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx1001];
    __Vtableidx1002 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                        << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1001__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1001__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx1002];
    __Vtableidx1003 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                        << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1002__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1002__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx1003];
    __Vtableidx1004 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                        << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1003__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1003__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx1004];
    __Vtableidx1005 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                        << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1004__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1004__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx1005];
    __Vtableidx1006 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                        << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1005__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1005__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx1006];
    __Vtableidx1007 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                        << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1006__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1006__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx1007];
    __Vtableidx1008 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                        << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1007__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1007__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx1008];
    __Vtableidx1009 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                        << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1008__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1008__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx1009];
    __Vtableidx1010 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                        << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1009__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1009__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx1010];
    __Vtableidx1011 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                        << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1010__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1010__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx1011];
    __Vtableidx1012 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                        << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1011__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1011__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx1012];
    __Vtableidx1013 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                        << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1012__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1012__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx1013];
    __Vtableidx1014 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                        << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1013__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1013__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx1014];
    __Vtableidx1015 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                        << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1014__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1014__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx1015];
    __Vtableidx1016 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                        << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1015__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1015__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx1016];
    __Vtableidx1017 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                        << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1016__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1016__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx1017];
    __Vtableidx1018 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                        << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1017__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1017__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx1018];
    __Vtableidx1019 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                        << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1018__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1018__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx1019];
    __Vtableidx1020 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                        << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1019__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1019__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx1020];
    __Vtableidx1021 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                        << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1020__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1020__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx1021];
    __Vtableidx1022 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                        << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1021__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1021__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx1022];
    __Vtableidx1023 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                        << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1022__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1022__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx1023];
    __Vtableidx1024 = (((IData)(vlSelfRef.core__DOT__commit_result) 
                        << 2U) | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1023__KET____DOT__fsm__DOT__ps));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1023__KET____DOT__fsm__DOT__ns 
        = Vcore__ConstPool__TABLE_hd26579b0_0[__Vtableidx1024];
    vlSelfRef.__VdfgRegularize_h4af1c392_0_0 = ((IData)(vlSelfRef.core__DOT__committed_is_branch) 
                                                & ((IData)(vlSelfRef.core__DOT__commit_prediction) 
                                                   ^ (IData)(vlSelfRef.core__DOT__commit_result)));
    vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__temp 
        = (((QData)((IData)((0x7fffffffU & vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__A))) 
            << 0x00000021U) | ((QData)((IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__Q)) 
                               << 1U));
    if ((0x40000000U & vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__A)) {
        vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__A_temp 
            = ((IData)((vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__temp 
                        >> 0x20U)) + vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__M);
        vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__Q_temp 
            = (((IData)((vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__temp 
                         >> 1U)) << 1U) | (1U & (~ 
                                                 (vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__A_temp 
                                                  >> 0x1fU))));
    } else {
        vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__A_temp 
            = ((IData)((vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__temp 
                        >> 0x20U)) - vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__M);
        vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__Q_temp 
            = (((IData)((vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__temp 
                         >> 1U)) << 1U) | (1U & (~ 
                                                 (vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__A_temp 
                                                  >> 0x1fU))));
    }
    vlSelfRef.core__DOT__cdb__DOT__valid_out_bus = 
        ((((3U == (IData)(vlSelfRef.core__DOT__shift_fu__DOT__shift_cu__DOT__ps)) 
           << 5U) | (((IData)(vlSelfRef.core__DOT__data_memory__DOT__mem_valid_reg) 
                      << 4U) | ((5U == (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps)) 
                                << 3U))) | (((3U == (IData)(vlSelfRef.core__DOT__mult_fu__DOT__multiply_cu__DOT__ps)) 
                                             << 2U) 
                                            | (((IData)(vlSelfRef.core__DOT____Vcellout__adder_fu_1__valid_out) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.core__DOT____Vcellout__adder_fu_0__valid_out))));
    vlSelfRef.core__DOT__ready_bus = ((((0U == (IData)(vlSelfRef.core__DOT__shift_fu__DOT__shift_cu__DOT__ps)) 
                                        << 4U) | ((
                                                   (0U 
                                                    == (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps)) 
                                                   << 3U) 
                                                  | ((0U 
                                                      == (IData)(vlSelfRef.core__DOT__mult_fu__DOT__multiply_cu__DOT__ps)) 
                                                     << 2U))) 
                                      | (((IData)(vlSelfRef.core__DOT____Vcellout__adder_fu_1__ready) 
                                          << 1U) | (IData)(vlSelfRef.core__DOT____Vcellout__adder_fu_0__ready)));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[1U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[2U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[3U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[4U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[5U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[6U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[7U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[8U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[9U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x0000000aU];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x0000000bU];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x0000000cU];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x0000000dU];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x0000000eU];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x0000000fU];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x00000010U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x00000011U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x00000012U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x00000013U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x00000014U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x00000015U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x00000016U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x00000017U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x00000018U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x00000019U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x0000001aU];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x0000001bU];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x0000001cU];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x0000001dU];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x0000001eU];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x0000001fU];
    if (vlSelfRef.core__DOT__committed_is_branch) {
        vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[(0x0000001fU 
                                                                             & (((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history) 
                                                                                ^ vlSelfRef.core__DOT__committed_pc) 
                                                                                >> 5U))] 
            = (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[
               (0x0000001fU & (((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history) 
                                ^ vlSelfRef.core__DOT__committed_pc) 
                               >> 5U))] | ((IData)(1U) 
                                           << (0x0000001fU 
                                               & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history) 
                                                  ^ vlSelfRef.core__DOT__committed_pc))));
        vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT__d 
            = (((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT____VdfgRegularize_h17208b76_0_0) 
                << 1U) | (IData)(vlSelfRef.core__DOT__commit_result));
    } else {
        vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT__d 
            = vlSelfRef.core__DOT__fetch_stage__DOT__history;
    }
    vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__empty 
        = (0U == (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__sp));
    vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__full 
        = (0x0fU == (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__sp));
    vlSelfRef.core__DOT__fetch_stage__DOT__pc = ((IData)(vlSelfRef.reset)
                                                  ? 0x80000000U
                                                  : 
                                                 ((IData)(vlSelfRef.core__DOT__exception)
                                                   ? vlSelfRef.core__DOT__mtvec_ReadData
                                                   : 
                                                  ((IData)(vlSelfRef.core__DOT__mret)
                                                    ? vlSelfRef.core__DOT__mepc_ReadData
                                                    : vlSelfRef.core__DOT__fetch_stage__DOT__program_counter__DOT__new_pc)));
    vlSelfRef.core__DOT__ins_hold__DOT__ps = ((1U & 
                                               (~ (IData)(vlSelfRef.core__DOT____Vcellinp__adder_fu_0__reset))) 
                                              && (IData)(vlSelfRef.core__DOT__ins_hold__DOT__ns));
    vlSelfRef.core__DOT__data_memory__DOT__read_data = 0U;
    if (vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__read_enable) {
        vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__i = 0U;
        while ((vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__i 
                < (7U & (vlSelfRef.core__DOT__lsq_out[0U] 
                         >> 1U)))) {
            vlSelfRef.core__DOT__data_memory__DOT__read_data 
                = (((~ ((IData)(0x000000ffU) << (0x0000001fU 
                                                 & VL_SHIFTL_III(5,32,32, vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__i, 3U)))) 
                    & vlSelfRef.core__DOT__data_memory__DOT__read_data) 
                   | (0x00000000ffffffffULL & (vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__mem
                                               [(0x00007fffU 
                                                 & (vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__aligned_address 
                                                    + vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__i))] 
                                               << (0x0000001fU 
                                                   & VL_SHIFTL_III(5,32,32, vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__i, 3U)))));
            vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__i 
                = ((IData)(1U) + vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__i);
        }
    }
    vlSelfRef.core__DOT__RegWrite = 0U;
    vlSelfRef.core__DOT__rob_read_enable = 0U;
    vlSelfRef.core__DOT__valid_commit = 0U;
    vlSelfRef.core__DOT__commit_csr_valid_write = 0U;
    vlSelfRef.core__DOT__mispredicted = ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_0) 
                                         | (IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_1));
    if ((0x00000010U & (IData)(vlSelfRef.core__DOT__cdb__DOT__valid_out_bus))) {
        vlSelfRef.core__DOT__yumi_bus = 0x10U;
        vlSelfRef.core__DOT__CDB_out = (((QData)((IData)(vlSelfRef.core__DOT__data_memory__DOT__mem_rob_entry_reg)) 
                                         << 0x00000022U) 
                                        | ((QData)((IData)(vlSelfRef.core__DOT__data_memory__DOT__mem_result_reg)) 
                                           << 2U));
    } else if ((0x00000020U & (IData)(vlSelfRef.core__DOT__cdb__DOT__valid_out_bus))) {
        vlSelfRef.core__DOT__yumi_bus = 0x20U;
        vlSelfRef.core__DOT__CDB_out = (((QData)((IData)(vlSelfRef.core__DOT__shift_fu__DOT__curr_rob)) 
                                         << 0x00000022U) 
                                        | ((QData)((IData)(vlSelfRef.core__DOT__shift_fu__DOT__shift_dp__DOT__A)) 
                                           << 2U));
    } else if ((8U & (IData)(vlSelfRef.core__DOT__cdb__DOT__valid_out_bus))) {
        vlSelfRef.core__DOT__yumi_bus = 8U;
        vlSelfRef.core__DOT__CDB_out = (((QData)((IData)(vlSelfRef.core__DOT__div_fu__DOT__curr_rob)) 
                                         << 0x00000022U) 
                                        | ((QData)((IData)(
                                                           ((((~ (IData)(vlSelfRef.core__DOT__div_fu__DOT__a_lt_b_reg)) 
                                                              & (IData)(vlSelfRef.core__DOT__div_fu__DOT__div)) 
                                                             | ((~ (IData)(vlSelfRef.core__DOT__div_fu__DOT__div)) 
                                                                & (IData)(vlSelfRef.core__DOT__div_fu__DOT__a_lt_b_reg)))
                                                             ? vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__Q
                                                             : vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__A))) 
                                           << 2U));
    } else if ((4U & (IData)(vlSelfRef.core__DOT__cdb__DOT__valid_out_bus))) {
        vlSelfRef.core__DOT__yumi_bus = 4U;
        vlSelfRef.core__DOT__CDB_out = (((QData)((IData)(vlSelfRef.core__DOT__mult_fu__DOT__curr_rob)) 
                                         << 0x00000022U) 
                                        | ((QData)((IData)(
                                                           ((IData)(vlSelfRef.core__DOT__mult_fu__DOT__mul_h)
                                                             ? vlSelfRef.core__DOT__mult_fu__DOT__multiply_dp__DOT__A
                                                             : vlSelfRef.core__DOT__mult_fu__DOT__multiply_dp__DOT__Q))) 
                                           << 2U));
    } else if ((2U & (IData)(vlSelfRef.core__DOT__cdb__DOT__valid_out_bus))) {
        vlSelfRef.core__DOT__yumi_bus = 2U;
        vlSelfRef.core__DOT__CDB_out = vlSelfRef.core__DOT__out_1;
    } else if ((1U & (IData)(vlSelfRef.core__DOT__cdb__DOT__valid_out_bus))) {
        vlSelfRef.core__DOT__yumi_bus = 1U;
        vlSelfRef.core__DOT__CDB_out = vlSelfRef.core__DOT__out_0;
    } else {
        vlSelfRef.core__DOT__yumi_bus = 0U;
        vlSelfRef.core__DOT__CDB_out = (1ULL & vlSelfRef.core__DOT__CDB_out);
    }
    vlSelfRef.core__DOT__fu_bus[0U] = Vcore__ConstPool__CONST_hab76c978_0[0U];
    vlSelfRef.core__DOT__fu_bus[1U] = Vcore__ConstPool__CONST_hab76c978_0[1U];
    vlSelfRef.core__DOT__fu_bus[2U] = Vcore__ConstPool__CONST_hab76c978_0[2U];
    vlSelfRef.core__DOT__fu_bus[3U] = Vcore__ConstPool__CONST_hab76c978_0[3U];
    vlSelfRef.core__DOT__fu_bus[4U] = Vcore__ConstPool__CONST_hab76c978_0[4U];
    vlSelfRef.core__DOT__fu_bus[5U] = Vcore__ConstPool__CONST_hab76c978_0[5U];
    vlSelfRef.core__DOT__fu_bus[6U] = Vcore__ConstPool__CONST_hab76c978_0[6U];
    vlSelfRef.core__DOT__fu_bus[7U] = Vcore__ConstPool__CONST_hab76c978_0[7U];
    vlSelfRef.core__DOT__fu_bus[8U] = Vcore__ConstPool__CONST_hab76c978_0[8U];
    vlSelfRef.core__DOT__fu_bus[9U] = Vcore__ConstPool__CONST_hab76c978_0[9U];
    vlSelfRef.core__DOT__load = 0U;
    vlSelfRef.core__DOT__branch_type_bus = 0x12U;
    vlSelfRef.core__DOT__ROB_entry_bus = 0U;
    vlSelfRef.core__DOT__valid_in_bus = 0U;
    vlSelfRef.core__DOT__consumed_bus = 0U;
    vlSelfRef.core__DOT__ALU_op = 0U;
    if ((1U & (IData)(vlSelfRef.core__DOT__ready_bus))) {
        if ((1U & ((vlSelfRef.core__DOT__rs0_data[0U] 
                    >> 1U) & (~ (vlSelfRef.core__DOT__rs0_data[2U] 
                                 >> 9U))))) {
            vlSelfRef.core__DOT__fu_bus[0U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs0_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs0_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs0_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs0_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[1U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs0_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs0_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs0_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs0_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__load = ((2U & (IData)(vlSelfRef.core__DOT__load)) 
                                         | (1U & vlSelfRef.core__DOT__rs0_data[0U]));
            vlSelfRef.core__DOT__branch_type_bus = 
                ((0x38U & (IData)(vlSelfRef.core__DOT__branch_type_bus)) 
                 | (7U & (vlSelfRef.core__DOT__rs0_data[2U] 
                          >> 0x0000000aU)));
            vlSelfRef.core__DOT__consumed_bus = (1U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000ffff0U 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x0000000fU 
                                                     & (vlSelfRef.core__DOT__rs0_data[2U] 
                                                        >> 2U)));
            vlSelfRef.core__DOT__valid_in_bus = (1U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000ffff0U 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x0000000fU 
                                              & (vlSelfRef.core__DOT__rs0_data[2U] 
                                                 >> 6U)));
        } else if ((1U & ((vlSelfRef.core__DOT__rs1_data[0U] 
                           >> 1U) & (~ (vlSelfRef.core__DOT__rs1_data[2U] 
                                        >> 9U))))) {
            vlSelfRef.core__DOT__fu_bus[0U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs1_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs1_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs1_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs1_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[1U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs1_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs1_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs1_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs1_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__load = ((2U & (IData)(vlSelfRef.core__DOT__load)) 
                                         | (1U & vlSelfRef.core__DOT__rs1_data[0U]));
            vlSelfRef.core__DOT__branch_type_bus = 
                ((0x38U & (IData)(vlSelfRef.core__DOT__branch_type_bus)) 
                 | (7U & (vlSelfRef.core__DOT__rs1_data[2U] 
                          >> 0x0000000aU)));
            vlSelfRef.core__DOT__consumed_bus = (2U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000ffff0U 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x0000000fU 
                                                     & (vlSelfRef.core__DOT__rs1_data[2U] 
                                                        >> 2U)));
            vlSelfRef.core__DOT__valid_in_bus = (1U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000ffff0U 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x0000000fU 
                                              & (vlSelfRef.core__DOT__rs1_data[2U] 
                                                 >> 6U)));
        } else if ((1U & ((vlSelfRef.core__DOT__rs2_data[0U] 
                           >> 1U) & (~ (vlSelfRef.core__DOT__rs2_data[2U] 
                                        >> 9U))))) {
            vlSelfRef.core__DOT__fu_bus[0U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs2_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs2_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs2_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs2_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[1U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs2_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs2_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs2_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs2_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__load = ((2U & (IData)(vlSelfRef.core__DOT__load)) 
                                         | (1U & vlSelfRef.core__DOT__rs2_data[0U]));
            vlSelfRef.core__DOT__branch_type_bus = 
                ((0x38U & (IData)(vlSelfRef.core__DOT__branch_type_bus)) 
                 | (7U & (vlSelfRef.core__DOT__rs2_data[2U] 
                          >> 0x0000000aU)));
            vlSelfRef.core__DOT__consumed_bus = (4U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000ffff0U 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x0000000fU 
                                                     & (vlSelfRef.core__DOT__rs2_data[2U] 
                                                        >> 2U)));
            vlSelfRef.core__DOT__valid_in_bus = (1U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000ffff0U 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x0000000fU 
                                              & (vlSelfRef.core__DOT__rs2_data[2U] 
                                                 >> 6U)));
        } else if ((1U & ((vlSelfRef.core__DOT__rs3_data[0U] 
                           >> 1U) & (~ (vlSelfRef.core__DOT__rs3_data[2U] 
                                        >> 9U))))) {
            vlSelfRef.core__DOT__fu_bus[0U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs3_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs3_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs3_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs3_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[1U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs3_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs3_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs3_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs3_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__load = ((2U & (IData)(vlSelfRef.core__DOT__load)) 
                                         | (1U & vlSelfRef.core__DOT__rs3_data[0U]));
            vlSelfRef.core__DOT__branch_type_bus = 
                ((0x38U & (IData)(vlSelfRef.core__DOT__branch_type_bus)) 
                 | (7U & (vlSelfRef.core__DOT__rs3_data[2U] 
                          >> 0x0000000aU)));
            vlSelfRef.core__DOT__consumed_bus = (8U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000ffff0U 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x0000000fU 
                                                     & (vlSelfRef.core__DOT__rs3_data[2U] 
                                                        >> 2U)));
            vlSelfRef.core__DOT__valid_in_bus = (1U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000ffff0U 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x0000000fU 
                                              & (vlSelfRef.core__DOT__rs3_data[2U] 
                                                 >> 6U)));
        }
    }
    if ((2U & (IData)(vlSelfRef.core__DOT__ready_bus))) {
        if ((1U & (((vlSelfRef.core__DOT__rs3_data[0U] 
                     >> 1U) & (~ (vlSelfRef.core__DOT__rs3_data[2U] 
                                  >> 9U))) & (~ ((IData)(vlSelfRef.core__DOT__consumed_bus) 
                                                 >> 3U))))) {
            vlSelfRef.core__DOT__fu_bus[2U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs3_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs3_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs3_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs3_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[3U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs3_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs3_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs3_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs3_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__load = ((1U & (IData)(vlSelfRef.core__DOT__load)) 
                                         | (2U & (vlSelfRef.core__DOT__rs3_data[0U] 
                                                  << 1U)));
            vlSelfRef.core__DOT__branch_type_bus = 
                ((7U & (IData)(vlSelfRef.core__DOT__branch_type_bus)) 
                 | (0x00000038U & (vlSelfRef.core__DOT__rs3_data[2U] 
                                   >> 7U)));
            vlSelfRef.core__DOT__consumed_bus = (8U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000fff0fU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x000000f0U 
                                                     & (vlSelfRef.core__DOT__rs3_data[2U] 
                                                        << 2U)));
            vlSelfRef.core__DOT__valid_in_bus = (2U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000fff0fU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x000000f0U 
                                              & (vlSelfRef.core__DOT__rs3_data[2U] 
                                                 >> 2U)));
        } else if ((1U & (((vlSelfRef.core__DOT__rs2_data[0U] 
                            >> 1U) & (~ (vlSelfRef.core__DOT__rs2_data[2U] 
                                         >> 9U))) & 
                          (~ ((IData)(vlSelfRef.core__DOT__consumed_bus) 
                              >> 2U))))) {
            vlSelfRef.core__DOT__fu_bus[2U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs2_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs2_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs2_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs2_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[3U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs2_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs2_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs2_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs2_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__load = ((1U & (IData)(vlSelfRef.core__DOT__load)) 
                                         | (2U & (vlSelfRef.core__DOT__rs2_data[0U] 
                                                  << 1U)));
            vlSelfRef.core__DOT__branch_type_bus = 
                ((7U & (IData)(vlSelfRef.core__DOT__branch_type_bus)) 
                 | (0x00000038U & (vlSelfRef.core__DOT__rs2_data[2U] 
                                   >> 7U)));
            vlSelfRef.core__DOT__consumed_bus = (4U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000fff0fU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x000000f0U 
                                                     & (vlSelfRef.core__DOT__rs2_data[2U] 
                                                        << 2U)));
            vlSelfRef.core__DOT__valid_in_bus = (2U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000fff0fU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x000000f0U 
                                              & (vlSelfRef.core__DOT__rs2_data[2U] 
                                                 >> 2U)));
        } else if ((1U & (((vlSelfRef.core__DOT__rs1_data[0U] 
                            >> 1U) & (~ (vlSelfRef.core__DOT__rs1_data[2U] 
                                         >> 9U))) & 
                          (~ ((IData)(vlSelfRef.core__DOT__consumed_bus) 
                              >> 1U))))) {
            vlSelfRef.core__DOT__fu_bus[2U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs1_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs1_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs1_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs1_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[3U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs1_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs1_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs1_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs1_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__load = ((1U & (IData)(vlSelfRef.core__DOT__load)) 
                                         | (2U & (vlSelfRef.core__DOT__rs1_data[0U] 
                                                  << 1U)));
            vlSelfRef.core__DOT__branch_type_bus = 
                ((7U & (IData)(vlSelfRef.core__DOT__branch_type_bus)) 
                 | (0x00000038U & (vlSelfRef.core__DOT__rs1_data[2U] 
                                   >> 7U)));
            vlSelfRef.core__DOT__consumed_bus = (2U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000fff0fU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x000000f0U 
                                                     & (vlSelfRef.core__DOT__rs1_data[2U] 
                                                        << 2U)));
            vlSelfRef.core__DOT__valid_in_bus = (2U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000fff0fU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x000000f0U 
                                              & (vlSelfRef.core__DOT__rs1_data[2U] 
                                                 >> 2U)));
        } else if ((1U & (((vlSelfRef.core__DOT__rs0_data[0U] 
                            >> 1U) & (~ (vlSelfRef.core__DOT__rs0_data[2U] 
                                         >> 9U))) & 
                          (~ (IData)(vlSelfRef.core__DOT__consumed_bus))))) {
            vlSelfRef.core__DOT__fu_bus[2U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs0_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs0_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs0_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs0_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[3U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs0_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs0_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs0_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs0_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__load = ((1U & (IData)(vlSelfRef.core__DOT__load)) 
                                         | (2U & (vlSelfRef.core__DOT__rs0_data[0U] 
                                                  << 1U)));
            vlSelfRef.core__DOT__branch_type_bus = 
                ((7U & (IData)(vlSelfRef.core__DOT__branch_type_bus)) 
                 | (0x00000038U & (vlSelfRef.core__DOT__rs0_data[2U] 
                                   >> 7U)));
            vlSelfRef.core__DOT__consumed_bus = (1U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000fff0fU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x000000f0U 
                                                     & (vlSelfRef.core__DOT__rs0_data[2U] 
                                                        << 2U)));
            vlSelfRef.core__DOT__valid_in_bus = (2U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000fff0fU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x000000f0U 
                                              & (vlSelfRef.core__DOT__rs0_data[2U] 
                                                 >> 2U)));
        }
    }
    if ((4U & (IData)(vlSelfRef.core__DOT__ready_bus))) {
        if (((vlSelfRef.core__DOT__rs0_data[0U] >> 1U) 
             & ((0x0cU == (0x0000000fU & (vlSelfRef.core__DOT__rs0_data[2U] 
                                          >> 6U))) 
                | (0x0dU == (0x0000000fU & (vlSelfRef.core__DOT__rs0_data[2U] 
                                            >> 6U)))))) {
            vlSelfRef.core__DOT__fu_bus[4U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs0_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs0_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs0_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs0_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[5U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs0_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs0_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs0_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs0_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__consumed_bus = (1U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000ff0ffU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x00000f00U 
                                                     & (vlSelfRef.core__DOT__rs0_data[2U] 
                                                        << 6U)));
            vlSelfRef.core__DOT__valid_in_bus = (4U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000ff0ffU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x00000f00U 
                                              & (vlSelfRef.core__DOT__rs0_data[2U] 
                                                 << 2U)));
        } else if (((vlSelfRef.core__DOT__rs1_data[0U] 
                     >> 1U) & ((0x0cU == (0x0000000fU 
                                          & (vlSelfRef.core__DOT__rs1_data[2U] 
                                             >> 6U))) 
                               | (0x0dU == (0x0000000fU 
                                            & (vlSelfRef.core__DOT__rs1_data[2U] 
                                               >> 6U)))))) {
            vlSelfRef.core__DOT__fu_bus[4U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs1_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs1_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs1_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs1_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[5U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs1_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs1_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs1_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs1_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__consumed_bus = (2U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000ff0ffU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x00000f00U 
                                                     & (vlSelfRef.core__DOT__rs1_data[2U] 
                                                        << 6U)));
            vlSelfRef.core__DOT__valid_in_bus = (4U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000ff0ffU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x00000f00U 
                                              & (vlSelfRef.core__DOT__rs1_data[2U] 
                                                 << 2U)));
        } else if (((vlSelfRef.core__DOT__rs2_data[0U] 
                     >> 1U) & ((0x0cU == (0x0000000fU 
                                          & (vlSelfRef.core__DOT__rs2_data[2U] 
                                             >> 6U))) 
                               | (0x0dU == (0x0000000fU 
                                            & (vlSelfRef.core__DOT__rs2_data[2U] 
                                               >> 6U)))))) {
            vlSelfRef.core__DOT__fu_bus[4U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs2_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs2_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs2_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs2_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[5U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs2_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs2_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs2_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs2_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__consumed_bus = (4U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000ff0ffU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x00000f00U 
                                                     & (vlSelfRef.core__DOT__rs2_data[2U] 
                                                        << 6U)));
            vlSelfRef.core__DOT__valid_in_bus = (4U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000ff0ffU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x00000f00U 
                                              & (vlSelfRef.core__DOT__rs2_data[2U] 
                                                 << 2U)));
        } else if (((vlSelfRef.core__DOT__rs3_data[0U] 
                     >> 1U) & ((0x0cU == (0x0000000fU 
                                          & (vlSelfRef.core__DOT__rs3_data[2U] 
                                             >> 6U))) 
                               | (0x0dU == (0x0000000fU 
                                            & (vlSelfRef.core__DOT__rs3_data[2U] 
                                               >> 6U)))))) {
            vlSelfRef.core__DOT__fu_bus[4U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs3_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs3_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs3_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs3_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[5U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs3_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs3_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs3_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs3_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__consumed_bus = (8U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000ff0ffU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x00000f00U 
                                                     & (vlSelfRef.core__DOT__rs3_data[2U] 
                                                        << 6U)));
            vlSelfRef.core__DOT__valid_in_bus = (4U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000ff0ffU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x00000f00U 
                                              & (vlSelfRef.core__DOT__rs3_data[2U] 
                                                 << 2U)));
        }
    }
    if ((8U & (IData)(vlSelfRef.core__DOT__ready_bus))) {
        if (((vlSelfRef.core__DOT__rs0_data[0U] >> 1U) 
             & ((0x0bU == (0x0000000fU & (vlSelfRef.core__DOT__rs0_data[2U] 
                                          >> 6U))) 
                | (0x0aU == (0x0000000fU & (vlSelfRef.core__DOT__rs0_data[2U] 
                                            >> 6U)))))) {
            vlSelfRef.core__DOT__fu_bus[6U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs0_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs0_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs0_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs0_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[7U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs0_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs0_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs0_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs0_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__consumed_bus = (1U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000f0fffU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x0000f000U 
                                                     & (vlSelfRef.core__DOT__rs0_data[2U] 
                                                        << 0x0000000aU)));
            vlSelfRef.core__DOT__valid_in_bus = (8U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000f0fffU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x0000f000U 
                                              & (vlSelfRef.core__DOT__rs0_data[2U] 
                                                 << 6U)));
        } else if (((vlSelfRef.core__DOT__rs1_data[0U] 
                     >> 1U) & ((0x0bU == (0x0000000fU 
                                          & (vlSelfRef.core__DOT__rs1_data[2U] 
                                             >> 6U))) 
                               | (0x0aU == (0x0000000fU 
                                            & (vlSelfRef.core__DOT__rs1_data[2U] 
                                               >> 6U)))))) {
            vlSelfRef.core__DOT__fu_bus[6U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs1_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs1_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs1_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs1_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[7U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs1_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs1_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs1_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs1_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__consumed_bus = (2U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000f0fffU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x0000f000U 
                                                     & (vlSelfRef.core__DOT__rs1_data[2U] 
                                                        << 0x0000000aU)));
            vlSelfRef.core__DOT__valid_in_bus = (8U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000f0fffU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x0000f000U 
                                              & (vlSelfRef.core__DOT__rs1_data[2U] 
                                                 << 6U)));
        } else if (((vlSelfRef.core__DOT__rs2_data[0U] 
                     >> 1U) & ((0x0bU == (0x0000000fU 
                                          & (vlSelfRef.core__DOT__rs2_data[2U] 
                                             >> 6U))) 
                               | (0x0aU == (0x0000000fU 
                                            & (vlSelfRef.core__DOT__rs2_data[2U] 
                                               >> 6U)))))) {
            vlSelfRef.core__DOT__fu_bus[6U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs2_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs2_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs2_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs2_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[7U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs2_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs2_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs2_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs2_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__consumed_bus = (4U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000f0fffU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x0000f000U 
                                                     & (vlSelfRef.core__DOT__rs2_data[2U] 
                                                        << 0x0000000aU)));
            vlSelfRef.core__DOT__valid_in_bus = (8U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000f0fffU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x0000f000U 
                                              & (vlSelfRef.core__DOT__rs2_data[2U] 
                                                 << 6U)));
        } else if (((vlSelfRef.core__DOT__rs3_data[0U] 
                     >> 1U) & ((0x0bU == (0x0000000fU 
                                          & (vlSelfRef.core__DOT__rs3_data[2U] 
                                             >> 6U))) 
                               | (0x0aU == (0x0000000fU 
                                            & (vlSelfRef.core__DOT__rs3_data[2U] 
                                               >> 6U)))))) {
            vlSelfRef.core__DOT__fu_bus[6U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs3_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs3_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs3_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs3_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[7U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs3_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs3_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs3_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs3_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__consumed_bus = (8U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000f0fffU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x0000f000U 
                                                     & (vlSelfRef.core__DOT__rs3_data[2U] 
                                                        << 0x0000000aU)));
            vlSelfRef.core__DOT__valid_in_bus = (8U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000f0fffU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x0000f000U 
                                              & (vlSelfRef.core__DOT__rs3_data[2U] 
                                                 << 6U)));
        }
    }
    if ((0x00000010U & (IData)(vlSelfRef.core__DOT__ready_bus))) {
        if (((vlSelfRef.core__DOT__rs0_data[0U] >> 1U) 
             & (((0x0fU == (0x0000000fU & (vlSelfRef.core__DOT__rs0_data[2U] 
                                           >> 6U))) 
                 | (8U == (0x0000000fU & (vlSelfRef.core__DOT__rs0_data[2U] 
                                          >> 6U)))) 
                | (9U == (0x0000000fU & (vlSelfRef.core__DOT__rs0_data[2U] 
                                         >> 6U)))))) {
            vlSelfRef.core__DOT__fu_bus[8U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs0_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs0_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs0_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs0_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[9U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs0_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs0_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs0_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs0_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__consumed_bus = (1U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x0000ffffU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x000f0000U 
                                                     & (vlSelfRef.core__DOT__rs0_data[2U] 
                                                        << 0x0000000eU)));
            vlSelfRef.core__DOT__valid_in_bus = (0x00000010U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x0000ffffU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x000f0000U 
                                              & (vlSelfRef.core__DOT__rs0_data[2U] 
                                                 << 0x0000000aU)));
        } else if (((vlSelfRef.core__DOT__rs1_data[0U] 
                     >> 1U) & (((0x0fU == (0x0000000fU 
                                           & (vlSelfRef.core__DOT__rs1_data[2U] 
                                              >> 6U))) 
                                | (8U == (0x0000000fU 
                                          & (vlSelfRef.core__DOT__rs1_data[2U] 
                                             >> 6U)))) 
                               | (9U == (0x0000000fU 
                                         & (vlSelfRef.core__DOT__rs1_data[2U] 
                                            >> 6U)))))) {
            vlSelfRef.core__DOT__fu_bus[8U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs1_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs1_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs1_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs1_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[9U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs1_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs1_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs1_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs1_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__consumed_bus = (2U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x0000ffffU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x000f0000U 
                                                     & (vlSelfRef.core__DOT__rs1_data[2U] 
                                                        << 0x0000000eU)));
            vlSelfRef.core__DOT__valid_in_bus = (0x00000010U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x0000ffffU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x000f0000U 
                                              & (vlSelfRef.core__DOT__rs1_data[2U] 
                                                 << 0x0000000aU)));
        } else if (((vlSelfRef.core__DOT__rs2_data[0U] 
                     >> 1U) & (((0x0fU == (0x0000000fU 
                                           & (vlSelfRef.core__DOT__rs2_data[2U] 
                                              >> 6U))) 
                                | (8U == (0x0000000fU 
                                          & (vlSelfRef.core__DOT__rs2_data[2U] 
                                             >> 6U)))) 
                               | (9U == (0x0000000fU 
                                         & (vlSelfRef.core__DOT__rs2_data[2U] 
                                            >> 6U)))))) {
            vlSelfRef.core__DOT__fu_bus[8U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs2_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs2_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs2_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs2_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[9U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs2_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs2_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs2_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs2_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__consumed_bus = (4U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x0000ffffU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x000f0000U 
                                                     & (vlSelfRef.core__DOT__rs2_data[2U] 
                                                        << 0x0000000eU)));
            vlSelfRef.core__DOT__valid_in_bus = (0x00000010U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x0000ffffU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x000f0000U 
                                              & (vlSelfRef.core__DOT__rs2_data[2U] 
                                                 << 0x0000000aU)));
        } else if (((vlSelfRef.core__DOT__rs3_data[0U] 
                     >> 1U) & (((0x0fU == (0x0000000fU 
                                           & (vlSelfRef.core__DOT__rs3_data[2U] 
                                              >> 6U))) 
                                | (8U == (0x0000000fU 
                                          & (vlSelfRef.core__DOT__rs3_data[2U] 
                                             >> 6U)))) 
                               | (9U == (0x0000000fU 
                                         & (vlSelfRef.core__DOT__rs3_data[2U] 
                                            >> 6U)))))) {
            vlSelfRef.core__DOT__fu_bus[8U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs3_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs3_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs3_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs3_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[9U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs3_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs3_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs3_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs3_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__consumed_bus = (8U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x0000ffffU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x000f0000U 
                                                     & (vlSelfRef.core__DOT__rs3_data[2U] 
                                                        << 0x0000000eU)));
            vlSelfRef.core__DOT__valid_in_bus = (0x00000010U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x0000ffffU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x000f0000U 
                                              & (vlSelfRef.core__DOT__rs3_data[2U] 
                                                 << 0x0000000aU)));
        }
    }
    vlSelfRef.core__DOT__mtvec_ReadData = vlSelfRef.core__DOT__csrs__DOT__csr_data[1U];
    vlSelfRef.core__DOT__mepc_ReadData = vlSelfRef.core__DOT__csrs__DOT__csr_data[3U];
    vlSelfRef.core__DOT__mret = ((0U == (IData)(vlSelfRef.core__DOT__special)) 
                                 & (0U != (IData)(vlSelfRef.core__DOT__curr_priv)));
    vlSelfRef.core__DOT__exception = 0U;
    if ((1U & ((vlSelfRef.core__DOT__commit_unit__DOT__head[2U] 
                >> 0x00000013U) & (~ (IData)(vlSelfRef.core__DOT__commit_unit__DOT__empty))))) {
        vlSelfRef.core__DOT__rob_read_enable = 1U;
        vlSelfRef.core__DOT__valid_commit = 1U;
        vlSelfRef.core__DOT__exception = (1U & (vlSelfRef.core__DOT__commit_unit__DOT__head[1U] 
                                                >> 4U));
        if ((0x00000010U & vlSelfRef.core__DOT__commit_unit__DOT__head[1U])) {
            vlSelfRef.core__DOT__valid_commit = 0U;
            vlSelfRef.core__DOT__exception = 1U;
        } else if ((0U != (3U & (vlSelfRef.core__DOT__commit_unit__DOT__head[2U] 
                                 >> 0x00000014U)))) {
            if ((1U == (3U & (vlSelfRef.core__DOT__commit_unit__DOT__head[2U] 
                              >> 0x00000014U)))) {
                vlSelfRef.core__DOT__rob_read_enable 
                    = vlSelfRef.core__DOT__commit_unit__DOT__rd_en_rob;
                vlSelfRef.core__DOT__valid_commit = vlSelfRef.core__DOT__commit_unit__DOT__rd_en_rob;
            } else if ((0x04000000U & vlSelfRef.core__DOT__commit_unit__DOT__head[4U])) {
                vlSelfRef.core__DOT__rob_read_enable = 1U;
            } else if ((0U == (3U & (vlSelfRef.core__DOT__commit_unit__DOT__head[4U] 
                                     >> 0x0000001aU)))) {
                vlSelfRef.core__DOT__rob_read_enable 
                    = (0U != (IData)(vlSelfRef.core__DOT__curr_priv));
                vlSelfRef.core__DOT__valid_commit = vlSelfRef.core__DOT__rob_read_enable;
            } else if ((0x00000040U & vlSelfRef.core__DOT__commit_unit__DOT__head[1U])) {
                vlSelfRef.core__DOT__RegWrite = (0U 
                                                 != (IData)(vlSelfRef.core__DOT__curr_priv));
                vlSelfRef.core__DOT__commit_csr_valid_write 
                    = vlSelfRef.core__DOT__RegWrite;
                vlSelfRef.core__DOT__rob_read_enable 
                    = vlSelfRef.core__DOT__RegWrite;
                vlSelfRef.core__DOT__valid_commit = vlSelfRef.core__DOT__RegWrite;
            } else if ((0x00000020U & vlSelfRef.core__DOT__commit_unit__DOT__head[1U])) {
                vlSelfRef.core__DOT__RegWrite = 1U;
                vlSelfRef.core__DOT__valid_commit = 1U;
            } else {
                vlSelfRef.core__DOT__RegWrite = 1U;
                vlSelfRef.core__DOT__rob_read_enable 
                    = ((1U & (~ (vlSelfRef.core__DOT__commit_unit__DOT__head[2U] 
                                 >> 0x00000012U))) 
                       || (IData)(vlSelfRef.core__DOT__commit_unit__DOT__jalrq_ready));
            }
            if ((1U != (3U & (vlSelfRef.core__DOT__commit_unit__DOT__head[2U] 
                              >> 0x00000014U)))) {
                if ((0x04000000U & vlSelfRef.core__DOT__commit_unit__DOT__head[4U])) {
                    vlSelfRef.core__DOT__exception = 1U;
                }
            }
        }
    }
    vlSelfRef.valid_commit_out = vlSelfRef.core__DOT__valid_commit;
    vlSelfRef.RegWrite_out = vlSelfRef.core__DOT__RegWrite;
    vlSelfRef.csr_write_out = vlSelfRef.core__DOT__commit_csr_valid_write;
    vlSelfRef.core__DOT__illegal_access_e = (((IData)(vlSelfRef.core__DOT__commit_csr_valid_write) 
                                              | (0U 
                                                 == (IData)(vlSelfRef.core__DOT__special))) 
                                             & (0U 
                                                == (IData)(vlSelfRef.core__DOT__curr_priv)));
    if (vlSelfRef.core__DOT__rob_read_enable) {
        vlSelfRef.rd_out = (0x0000001fU & ((vlSelfRef.core__DOT__commit_unit__DOT__head[5U] 
                                            << 4U) 
                                           | (vlSelfRef.core__DOT__commit_unit__DOT__head[4U] 
                                              >> 0x0000001cU)));
        vlSelfRef.core__DOT__commit_unit__DOT__commit_ROB 
            = (0x0000000fU & (vlSelfRef.core__DOT__commit_unit__DOT__head[5U] 
                              >> 3U));
        vlSelfRef.core__DOT__commit_unit__DOT__commit_ras_pointer 
            = (0x0000000fU & (vlSelfRef.core__DOT__commit_unit__DOT__head[4U] 
                              >> 0x00000016U));
    } else {
        vlSelfRef.rd_out = 0U;
        vlSelfRef.core__DOT__commit_unit__DOT__commit_ROB = 0U;
        vlSelfRef.core__DOT__commit_unit__DOT__commit_ras_pointer = 0U;
    }
    vlSelfRef.core__DOT__mult_fu__DOT__loadregs = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.core__DOT__mult_fu__DOT__multiply_cu__DOT__ps)) 
                                                   & ((IData)(vlSelfRef.core__DOT__valid_in_bus) 
                                                      >> 2U));
    vlSelfRef.core__DOT__div_fu__DOT__loadregs = ((0U 
                                                   == (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps)) 
                                                  & ((IData)(vlSelfRef.core__DOT__valid_in_bus) 
                                                     >> 3U));
    vlSelfRef.core__DOT__shift_fu__DOT__loadregs = 
        ((0U == (IData)(vlSelfRef.core__DOT__shift_fu__DOT__shift_cu__DOT__ps)) 
         & ((IData)(vlSelfRef.core__DOT__valid_in_bus) 
            >> 4U));
    vlSelfRef.core__DOT__mult_fu__DOT__multiply_cu__DOT__ns 
        = ((2U & (IData)(vlSelfRef.core__DOT__mult_fu__DOT__multiply_cu__DOT__ps))
            ? ((1U & (IData)(vlSelfRef.core__DOT__mult_fu__DOT__multiply_cu__DOT__ps))
                ? ((4U & (IData)(vlSelfRef.core__DOT__yumi_bus))
                    ? 0U : 3U) : ((0U == vlSelfRef.core__DOT__mult_fu__DOT__P)
                                   ? 3U : 1U)) : ((1U 
                                                   & (IData)(vlSelfRef.core__DOT__mult_fu__DOT__multiply_cu__DOT__ps))
                                                   ? 2U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.core__DOT__valid_in_bus))
                                                    ? 1U
                                                    : 0U)));
    vlSelfRef.core__DOT__shift_fu__DOT__shift_cu__DOT__ns 
        = ((0U == (IData)(vlSelfRef.core__DOT__shift_fu__DOT__shift_cu__DOT__ps))
            ? ((0x00000010U & (IData)(vlSelfRef.core__DOT__valid_in_bus))
                ? 2U : 0U) : ((2U == (IData)(vlSelfRef.core__DOT__shift_fu__DOT__shift_cu__DOT__ps))
                               ? ((1U == vlSelfRef.core__DOT__shift_fu__DOT__P)
                                   ? 3U : 2U) : ((3U 
                                                  == (IData)(vlSelfRef.core__DOT__shift_fu__DOT__shift_cu__DOT__ps))
                                                  ? 
                                                 ((0x00000020U 
                                                   & (IData)(vlSelfRef.core__DOT__yumi_bus))
                                                   ? 0U
                                                   : 3U)
                                                  : 0U)));
    vlSelfRef.core__DOT__div_fu__DOT__abs_sor = ((IData)(
                                                         ((vlSelfRef.core__DOT__ALU_op 
                                                           >> 0x0000000cU) 
                                                          & (vlSelfRef.core__DOT__fu_bus[7U] 
                                                             >> 0x0000001fU)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ 
                                                   vlSelfRef.core__DOT__fu_bus[7U]))
                                                  : 
                                                 vlSelfRef.core__DOT__fu_bus[7U]);
    vlSelfRef.core__DOT__div_fu__DOT__abs_end = ((IData)(
                                                         ((vlSelfRef.core__DOT__ALU_op 
                                                           >> 0x0000000cU) 
                                                          & (vlSelfRef.core__DOT__fu_bus[6U] 
                                                             >> 0x0000001fU)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ 
                                                   vlSelfRef.core__DOT__fu_bus[6U]))
                                                  : 
                                                 vlSelfRef.core__DOT__fu_bus[6U]);
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
        = ((4U & vlSelfRef.core__DOT__ALU_op) ? (~ 
                                                 vlSelfRef.core__DOT__fu_bus[1U])
            : vlSelfRef.core__DOT__fu_bus[1U]);
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
        = ((0x00000040U & vlSelfRef.core__DOT__ALU_op)
            ? (~ vlSelfRef.core__DOT__fu_bus[3U]) : 
           vlSelfRef.core__DOT__fu_bus[3U]);
    vlSelfRef.core__DOT____Vcellinp__adder_fu_0__reset 
        = ((IData)(vlSelfRef.core__DOT__mispredicted) 
           | ((IData)(vlSelfRef.reset) | ((IData)(vlSelfRef.core__DOT__exception) 
                                          | (IData)(vlSelfRef.core__DOT__mret))));
    vlSelfRef.core__DOT__fetch_stage__DOT__read_exception = 0U;
    vlSelfRef.core__DOT__fetch_stage__DOT__mcause = 0U;
    if (VL_UNLIKELY(((0x00010000U < VL_SHIFTR_III(32,32,32, 
                                                  (vlSelfRef.core__DOT__fetch_stage__DOT__pc 
                                                   - (IData)(0x80000000U)), 2U))))) {
        vlSelfRef.core__DOT__fetch_stage__DOT__read_exception = 1U;
        vlSelfRef.core__DOT__fetch_stage__DOT__mcause = 1U;
        VL_WRITEF_NX("oob: %x\n",0,32,vlSelfRef.core__DOT__fetch_stage__DOT__pc);
    } else if (VL_UNLIKELY(((0U != (3U & vlSelfRef.core__DOT__fetch_stage__DOT__pc))))) {
        VL_WRITEF_NX("unaligned: %x\n",0,32,vlSelfRef.core__DOT__fetch_stage__DOT__pc);
        vlSelfRef.core__DOT__fetch_stage__DOT__read_exception = 1U;
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0U != (3U & vlSelfRef.core__DOT__fetch_stage__DOT__pc))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: instructmem.sv:47: Assertion failed in %Ncore.fetch_stage.program_counter.inst: %10#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.core__DOT__fetch_stage__DOT__pc);
            VL_STOP_MT("source/instructmem.sv", 47, "", false);
        }
    }
    vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
        = ((0x80000000U > vlSelfRef.core__DOT__fetch_stage__DOT__pc)
            ? 0x00000013U : vlSelfRef.core__DOT__fetch_stage__DOT__program_counter__DOT__inst__DOT__mem
           [(0x0000ffffU & ((vlSelfRef.core__DOT__fetch_stage__DOT__pc 
                             - (IData)(0x80000000U)) 
                            >> 2U))]);
    if (vlSelfRef.core__DOT__ins_hold__DOT__ps) {
        vlSelfRef.core__DOT__ins_hold__DOT__ns = 1U;
        if ((1U & (~ (IData)(vlSelfRef.core__DOT__stall)))) {
            vlSelfRef.core__DOT__ins_hold__DOT__ns = 0U;
        }
        vlSelfRef.core__DOT__hold_out[0U] = vlSelfRef.core__DOT__ins_hold__DOT__instr_hold[0U];
        vlSelfRef.core__DOT__hold_out[1U] = vlSelfRef.core__DOT__ins_hold__DOT__instr_hold[1U];
        vlSelfRef.core__DOT__hold_out[2U] = vlSelfRef.core__DOT__ins_hold__DOT__instr_hold[2U];
        vlSelfRef.core__DOT__hold_out[3U] = vlSelfRef.core__DOT__ins_hold__DOT__instr_hold[3U];
    } else {
        vlSelfRef.core__DOT__ins_hold__DOT__ns = 0U;
        if (vlSelfRef.core__DOT__stall) {
            vlSelfRef.core__DOT__ins_hold__DOT__ns = 1U;
        }
        vlSelfRef.core__DOT__hold_out[0U] = vlSelfRef.core__DOT__pipe_out[0U];
        vlSelfRef.core__DOT__hold_out[1U] = vlSelfRef.core__DOT__pipe_out[1U];
        vlSelfRef.core__DOT__hold_out[2U] = vlSelfRef.core__DOT__pipe_out[2U];
        vlSelfRef.core__DOT__hold_out[3U] = vlSelfRef.core__DOT__pipe_out[3U];
    }
    vlSelfRef.core__DOT__registers__DOT__enable_bus = 0U;
    if (((IData)(vlSelfRef.core__DOT__RegWrite) & (0U 
                                                   != (IData)(vlSelfRef.rd_out)))) {
        vlSelfRef.core__DOT__registers__DOT__enable_bus 
            = (vlSelfRef.core__DOT__registers__DOT__enable_bus 
               | (0x00000000ffffffffULL & ((IData)(1U) 
                                           << (IData)(vlSelfRef.rd_out))));
    }
    vlSelfRef.core__DOT__div_fu__DOT__a_lt_b = (vlSelfRef.core__DOT__div_fu__DOT__abs_sor 
                                                > vlSelfRef.core__DOT__div_fu__DOT__abs_end);
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__i1 
        = ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
           >> 0x0000001fU);
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x0000001eU));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x0000001dU));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x0000001cU));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x0000001bU));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x0000001aU));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x00000019U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x00000018U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x00000017U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x00000016U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x00000015U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x00000014U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x00000013U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x00000012U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x00000011U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x00000010U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x0000000fU));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x0000000eU));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x0000000dU));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x0000000cU));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x0000000bU));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x0000000aU));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 9U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 8U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 7U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 6U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 5U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 4U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 3U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 2U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 1U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__0__KET____DOT__addi__DOT__i1 
        = (1U & (vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__i1 
        = ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
           >> 0x0000001fU);
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x0000001eU));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x0000001dU));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x0000001cU));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x0000001bU));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x0000001aU));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x00000019U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x00000018U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x00000017U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x00000016U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x00000015U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x00000014U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x00000013U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x00000012U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x00000011U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x00000010U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x0000000fU));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x0000000eU));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x0000000dU));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x0000000cU));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x0000000bU));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x0000000aU));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 9U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 8U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 7U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 6U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 5U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 4U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 3U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 2U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 1U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__0__KET____DOT__addi__DOT__i1 
        = (1U & (vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b));
    vlSelfRef.core__DOT__reservation_stations__DOT____VdfgRegularize_h1542825a_0_0 
        = ((IData)(vlSelfRef.core__DOT__mispredicted) 
           | (IData)(vlSelfRef.core__DOT____Vcellinp__adder_fu_0__reset));
    vlSelfRef.core__DOT__generate_new_pc__DOT__pipe_taken 
        = (((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__pred_bus[
             (0x0000001fU & (((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history) 
                              ^ vlSelfRef.core__DOT__fetch_stage__DOT__pc) 
                             >> 5U))] >> (0x0000001fU 
                                          & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history) 
                                             ^ vlSelfRef.core__DOT__fetch_stage__DOT__pc))) 
            & (0x63U == (0x0000007fU & vlSelfRef.core__DOT__fetch_stage__DOT__instruction))) 
           | (0x6fU == (0x0000007fU & vlSelfRef.core__DOT__fetch_stage__DOT__instruction)));
    core__DOT__fetch_stage__DOT____VdfgRegularize_h7b9f36a4_0_0 
        = ((1U == (0x0000001fU & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                  >> 0x0000000fU))) 
           | (5U == (0x0000001fU & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                    >> 0x0000000fU))));
    core__DOT__fetch_stage__DOT____VdfgExtracted_h5b55025d__0 
        = ((1U == (0x0000001fU & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                  >> 7U))) | (5U == 
                                              (0x0000001fU 
                                               & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                  >> 7U))));
    vlSelfRef.core__DOT__rs_dest = ((0U == (0x0000007fU 
                                            & (vlSelfRef.core__DOT__hold_out[1U] 
                                               >> 0x00000010U)))
                                     ? 4U : ((2U & 
                                              vlSelfRef.core__DOT__reservation_stations__DOT__rs0__DOT__q_reg[0U])
                                              ? ((2U 
                                                  & vlSelfRef.core__DOT__reservation_stations__DOT__rs1__DOT__q_reg[0U])
                                                  ? 
                                                 ((2U 
                                                   & vlSelfRef.core__DOT__reservation_stations__DOT__rs2__DOT__q_reg[0U])
                                                   ? 
                                                  ((2U 
                                                    & vlSelfRef.core__DOT__reservation_stations__DOT__rs3__DOT__q_reg[0U])
                                                    ? 5U
                                                    : 3U)
                                                   : 2U)
                                                  : 1U)
                                              : 0U));
    vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h461c3afd__0 
        = (((- (IData)((1U & (vlSelfRef.core__DOT__hold_out[2U] 
                              >> 0x0000000fU)))) << 0x0000000cU) 
           | (0x00000fffU & (vlSelfRef.core__DOT__hold_out[2U] 
                             >> 4U)));
    vlSelfRef.core__DOT__rs1reg_data = vlSelfRef.core__DOT__registers__DOT__RegData
        [(0x0000001fU & ((vlSelfRef.core__DOT__hold_out[2U] 
                          << 1U) | (vlSelfRef.core__DOT__hold_out[1U] 
                                    >> 0x0000001fU)))];
    __Vfunc_index__1__csr = (0x00000fffU & (vlSelfRef.core__DOT__hold_out[2U] 
                                            >> 4U));
    __Vfunc_index__1__Vfuncout = ((0x0300U == (IData)(__Vfunc_index__1__csr))
                                   ? 0U : ((0x0305U 
                                            == (IData)(__Vfunc_index__1__csr))
                                            ? 1U : 
                                           ((0x0342U 
                                             == (IData)(__Vfunc_index__1__csr))
                                             ? 2U : 
                                            ((0x0341U 
                                              == (IData)(__Vfunc_index__1__csr))
                                              ? 3U : 7U))));
    core__DOT__res_sched__DOT____VdfgExtracted_h69ccd114__0 
        = __Vfunc_index__1__Vfuncout;
    __Vfunc_index__2__csr = (0x00000fffU & (vlSelfRef.core__DOT__hold_out[2U] 
                                            >> 4U));
    __Vfunc_index__2__Vfuncout = ((0x0300U == (IData)(__Vfunc_index__2__csr))
                                   ? 0U : ((0x0305U 
                                            == (IData)(__Vfunc_index__2__csr))
                                            ? 1U : 
                                           ((0x0342U 
                                             == (IData)(__Vfunc_index__2__csr))
                                             ? 2U : 
                                            ((0x0341U 
                                              == (IData)(__Vfunc_index__2__csr))
                                              ? 3U : 7U))));
    core__DOT__res_sched__DOT____VdfgExtracted_h69ccd114__1 
        = __Vfunc_index__2__Vfuncout;
    __Vfunc_index__3__csr = (0x00000fffU & (vlSelfRef.core__DOT__hold_out[2U] 
                                            >> 4U));
    __Vfunc_index__3__Vfuncout = ((0x0300U == (IData)(__Vfunc_index__3__csr))
                                   ? 0U : ((0x0305U 
                                            == (IData)(__Vfunc_index__3__csr))
                                            ? 1U : 
                                           ((0x0342U 
                                             == (IData)(__Vfunc_index__3__csr))
                                             ? 2U : 
                                            ((0x0341U 
                                              == (IData)(__Vfunc_index__3__csr))
                                              ? 3U : 7U))));
    core__DOT__res_sched__DOT____VdfgExtracted_h69ccd114__2 
        = __Vfunc_index__3__Vfuncout;
    vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h018ff82f__0 
        = (IData)(((0x50000000U == (0x70000000U & vlSelfRef.core__DOT__hold_out[1U])) 
                   & (~ (vlSelfRef.core__DOT__hold_out[2U] 
                         >> 0x0000000eU))));
    vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h1374f20a__0 
        = (IData)(((0x50000000U == (0x70000000U & vlSelfRef.core__DOT__hold_out[1U])) 
                   & (vlSelfRef.core__DOT__hold_out[2U] 
                      >> 0x0000000eU)));
    vlSelfRef.core__DOT__rs1reg_busy = (1U & vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                        [(0x0000001fU 
                                          & ((vlSelfRef.core__DOT__hold_out[2U] 
                                              << 1U) 
                                             | (vlSelfRef.core__DOT__hold_out[1U] 
                                                >> 0x0000001fU)))]);
    vlSelfRef.core__DOT__rs2reg_data = vlSelfRef.core__DOT__registers__DOT__RegData
        [(0x0000001fU & (vlSelfRef.core__DOT__hold_out[2U] 
                         >> 4U))];
    vlSelfRef.core__DOT__rs2reg_busy = (1U & vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                        [(0x0000001fU 
                                          & (vlSelfRef.core__DOT__hold_out[2U] 
                                             >> 4U))]);
    vlSelfRef.core__DOT__Q_k = (0x0000000fU & (vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                               [(0x0000001fU 
                                                 & (vlSelfRef.core__DOT__hold_out[2U] 
                                                    >> 4U))] 
                                               >> 1U));
    vlSelfRef.core__DOT__Q_j = (0x0000000fU & (vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                               [(0x0000001fU 
                                                 & ((vlSelfRef.core__DOT__hold_out[2U] 
                                                     << 1U) 
                                                    | (vlSelfRef.core__DOT__hold_out[1U] 
                                                       >> 0x0000001fU)))] 
                                               >> 1U));
    vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h221b8606__0 
        = (1U & ((vlSelfRef.core__DOT__hold_out[1U] 
                  >> 0x0000000dU) | (0x67U == (0x0000007fU 
                                               & (vlSelfRef.core__DOT__hold_out[1U] 
                                                  >> 0x00000010U)))));
    vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_hae399222__0 
        = ((0x37U == (0x0000007fU & (vlSelfRef.core__DOT__hold_out[1U] 
                                     >> 0x00000010U))) 
           | (0x17U == (0x0000007fU & (vlSelfRef.core__DOT__hold_out[1U] 
                                       >> 0x00000010U))));
    vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h64cec59c__0 
        = ((2U == (7U & (vlSelfRef.core__DOT__hold_out[1U] 
                         >> 0x0000001cU))) | (6U == 
                                              (7U & 
                                               (vlSelfRef.core__DOT__hold_out[1U] 
                                                >> 0x0000001cU))));
    vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h64f3f406__0 
        = ((1U == (7U & (vlSelfRef.core__DOT__hold_out[1U] 
                         >> 0x0000001cU))) | (5U == 
                                              (7U & 
                                               (vlSelfRef.core__DOT__hold_out[1U] 
                                                >> 0x0000001cU))));
    vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h6618c944__0 
        = ((3U == (7U & (vlSelfRef.core__DOT__hold_out[1U] 
                         >> 0x0000001cU))) | (7U == 
                                              (7U & 
                                               (vlSelfRef.core__DOT__hold_out[1U] 
                                                >> 0x0000001cU))));
    vlSelfRef.core__DOT__issue_csr_op = (IData)(((0x00730000U 
                                                  == 
                                                  (0x007f0000U 
                                                   & vlSelfRef.core__DOT__hold_out[1U])) 
                                                 & (0U 
                                                    != 
                                                    (7U 
                                                     & (vlSelfRef.core__DOT__hold_out[1U] 
                                                        >> 0x0000001cU)))));
    vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ns 
        = ((4U & (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps))
            ? ((2U & (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps))
                ? 0U : ((1U & (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps))
                         ? ((8U & (IData)(vlSelfRef.core__DOT__yumi_bus))
                             ? 0U : 5U) : 5U)) : ((2U 
                                                   & (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelfRef.core__DOT__div_fu__DOT__div)
                                                     ? 4U
                                                     : 5U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps))
                                                    ? 
                                                   ((0U 
                                                     == vlSelfRef.core__DOT__div_fu__DOT__P)
                                                     ? 2U
                                                     : 1U)
                                                    : 
                                                   ((1U 
                                                     & ((~ (IData)(vlSelfRef.core__DOT__div_fu__DOT__a_lt_b)) 
                                                        & ((IData)(vlSelfRef.core__DOT__valid_in_bus) 
                                                           >> 3U)))
                                                     ? 1U
                                                     : 
                                                    ((((IData)(vlSelfRef.core__DOT__valid_in_bus) 
                                                       >> 3U) 
                                                      & (IData)(vlSelfRef.core__DOT__div_fu__DOT__a_lt_b))
                                                      ? 5U
                                                      : 0U)))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__c_in 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 | ((vlSelfRef.core__DOT__ALU_op >> 2U) 
                    & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__0__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__c_in 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 | ((vlSelfRef.core__DOT__ALU_op >> 6U) 
                    & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__0__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__fetch_stage__DOT__push = (
                                                   (0x6fU 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.core__DOT__fetch_stage__DOT__instruction))
                                                    ? (IData)(core__DOT__fetch_stage__DOT____VdfgExtracted_h5b55025d__0)
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.core__DOT__fetch_stage__DOT__instruction)) 
                                                    && (IData)(core__DOT__fetch_stage__DOT____VdfgExtracted_h5b55025d__0)));
    vlSelfRef.core__DOT__fetch_stage__DOT__pop = ((0x6fU 
                                                   != 
                                                   (0x0000007fU 
                                                    & vlSelfRef.core__DOT__fetch_stage__DOT__instruction)) 
                                                  && ((0x67U 
                                                       == 
                                                       (0x0000007fU 
                                                        & vlSelfRef.core__DOT__fetch_stage__DOT__instruction)) 
                                                      && (((1U 
                                                            != 
                                                            (0x0000001fU 
                                                             & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                                >> 7U))) 
                                                           & ((5U 
                                                               != 
                                                               (0x0000001fU 
                                                                & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                                   >> 7U))) 
                                                              & (IData)(core__DOT__fetch_stage__DOT____VdfgRegularize_h7b9f36a4_0_0))) 
                                                          || ((IData)(core__DOT__fetch_stage__DOT____VdfgExtracted_h5b55025d__0) 
                                                              & ((IData)(core__DOT__fetch_stage__DOT____VdfgRegularize_h7b9f36a4_0_0) 
                                                                 & ((0x0000001fU 
                                                                     & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                                        >> 7U)) 
                                                                    != 
                                                                    (0x0000001fU 
                                                                     & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                                        >> 0x0000000fU))))))));
    vlSelfRef.core__DOT__rs1rob_data = ((vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                         [vlSelfRef.core__DOT__Q_j][3U] 
                                         << 0x0000000aU) 
                                        | (vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                           [vlSelfRef.core__DOT__Q_j][2U] 
                                           >> 0x00000016U));
    vlSelfRef.core__DOT__rs1rob_ready = (1U & (vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                               [vlSelfRef.core__DOT__Q_j][2U] 
                                               >> 0x00000013U));
    vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U] 
        = (0xfff7ffffU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U]);
    vlSelfRef.core__DOT__res_sched__DOT__alu_op = 0U;
    if ((0x33U == (0x0000007fU & (vlSelfRef.core__DOT__hold_out[1U] 
                                  >> 0x00000010U)))) {
        vlSelfRef.core__DOT__res_sched__DOT__alu_op 
            = ((IData)(((0U == (0x70000000U & vlSelfRef.core__DOT__hold_out[1U])) 
                        & (0x00000200U == (0x0000fe00U 
                                           & vlSelfRef.core__DOT__hold_out[2U]))))
                ? 0x0cU : ((IData)(((0x10000000U == 
                                     (0x70000000U & 
                                      vlSelfRef.core__DOT__hold_out[1U])) 
                                    & (0x00000200U 
                                       == (0x0000fe00U 
                                           & vlSelfRef.core__DOT__hold_out[2U]))))
                            ? 0x0dU : ((IData)(((0x40000000U 
                                                 == 
                                                 (0x70000000U 
                                                  & vlSelfRef.core__DOT__hold_out[1U])) 
                                                & (0x00000200U 
                                                   == 
                                                   (0x0000fe00U 
                                                    & vlSelfRef.core__DOT__hold_out[2U]))))
                                        ? 0x0bU : ((IData)(
                                                           ((0x70000000U 
                                                             == 
                                                             (0x70000000U 
                                                              & vlSelfRef.core__DOT__hold_out[1U])) 
                                                            & (0x00000200U 
                                                               == 
                                                               (0x0000fe00U 
                                                                & vlSelfRef.core__DOT__hold_out[2U]))))
                                                    ? 0x0aU
                                                    : 
                                                   ((IData)(
                                                            ((0U 
                                                              == 
                                                              (0x70000000U 
                                                               & vlSelfRef.core__DOT__hold_out[1U])) 
                                                             & (0U 
                                                                == 
                                                                (0x0000fe00U 
                                                                 & vlSelfRef.core__DOT__hold_out[2U]))))
                                                     ? 0U
                                                     : 
                                                    ((IData)(
                                                             ((0U 
                                                               == 
                                                               (0x70000000U 
                                                                & vlSelfRef.core__DOT__hold_out[1U])) 
                                                              & (0x00004000U 
                                                                 == 
                                                                 (0x0000fe00U 
                                                                  & vlSelfRef.core__DOT__hold_out[2U]))))
                                                      ? 4U
                                                      : 
                                                     ((IData)(
                                                              ((0x40000000U 
                                                                == 
                                                                (0x70000000U 
                                                                 & vlSelfRef.core__DOT__hold_out[1U])) 
                                                               & (0U 
                                                                  == 
                                                                  (0x0000fe00U 
                                                                   & vlSelfRef.core__DOT__hold_out[2U]))))
                                                       ? 1U
                                                       : 
                                                      ((IData)(
                                                               ((0x60000000U 
                                                                 == 
                                                                 (0x70000000U 
                                                                  & vlSelfRef.core__DOT__hold_out[1U])) 
                                                                & (0U 
                                                                   == 
                                                                   (0x0000fe00U 
                                                                    & vlSelfRef.core__DOT__hold_out[2U]))))
                                                        ? 2U
                                                        : 
                                                       ((IData)(
                                                                ((0x70000000U 
                                                                  == 
                                                                  (0x70000000U 
                                                                   & vlSelfRef.core__DOT__hold_out[1U])) 
                                                                 & (0U 
                                                                    == 
                                                                    (0x0000fe00U 
                                                                     & vlSelfRef.core__DOT__hold_out[2U]))))
                                                         ? 3U
                                                         : 
                                                        ((IData)(
                                                                 ((0x10000000U 
                                                                   == 
                                                                   (0x70000000U 
                                                                    & vlSelfRef.core__DOT__hold_out[1U])) 
                                                                  & (0U 
                                                                     == 
                                                                     (0x0000fe00U 
                                                                      & vlSelfRef.core__DOT__hold_out[2U]))))
                                                          ? 0x0fU
                                                          : 
                                                         ((IData)(
                                                                  ((0x50000000U 
                                                                    == 
                                                                    (0x70000000U 
                                                                     & vlSelfRef.core__DOT__hold_out[1U])) 
                                                                   & (0U 
                                                                      == 
                                                                      (0x0000fe00U 
                                                                       & vlSelfRef.core__DOT__hold_out[2U]))))
                                                           ? 8U
                                                           : 
                                                          ((IData)(
                                                                   ((0x50000000U 
                                                                     == 
                                                                     (0x70000000U 
                                                                      & vlSelfRef.core__DOT__hold_out[1U])) 
                                                                    & (0x00004000U 
                                                                       == 
                                                                       (0x0000fe00U 
                                                                        & vlSelfRef.core__DOT__hold_out[2U]))))
                                                            ? 9U
                                                            : 
                                                           ((IData)(
                                                                    ((0x20000000U 
                                                                      == 
                                                                      (0x70000000U 
                                                                       & vlSelfRef.core__DOT__hold_out[1U])) 
                                                                     & (0U 
                                                                        == 
                                                                        (0x0000fe00U 
                                                                         & vlSelfRef.core__DOT__hold_out[2U]))))
                                                             ? 7U
                                                             : 6U)))))))))))));
        vlSelfRef.core__DOT__res_sched__DOT__issue_writes_temp = 1U;
    } else if ((0x00004000U & vlSelfRef.core__DOT__hold_out[1U])) {
        vlSelfRef.core__DOT__res_sched__DOT__alu_op = 4U;
        vlSelfRef.core__DOT__res_sched__DOT__issue_writes_temp = 0U;
    } else if ((0x13U == (0x0000007fU & (vlSelfRef.core__DOT__hold_out[1U] 
                                         >> 0x00000010U)))) {
        vlSelfRef.core__DOT__res_sched__DOT__alu_op 
            = ((0U == (7U & (vlSelfRef.core__DOT__hold_out[1U] 
                             >> 0x0000001cU))) ? 0U
                : ((4U == (7U & (vlSelfRef.core__DOT__hold_out[1U] 
                                 >> 0x0000001cU))) ? 1U
                    : ((6U == (7U & (vlSelfRef.core__DOT__hold_out[1U] 
                                     >> 0x0000001cU)))
                        ? 2U : ((7U == (7U & (vlSelfRef.core__DOT__hold_out[1U] 
                                              >> 0x0000001cU)))
                                 ? 3U : ((1U == (7U 
                                                 & (vlSelfRef.core__DOT__hold_out[1U] 
                                                    >> 0x0000001cU)))
                                          ? 0x0fU : 
                                         ((IData)(vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h018ff82f__0)
                                           ? 8U : ((IData)(vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h1374f20a__0)
                                                    ? 9U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.core__DOT__hold_out[1U] 
                                                         >> 0x0000001cU)))
                                                     ? 7U
                                                     : 6U))))))));
        vlSelfRef.core__DOT__res_sched__DOT__issue_writes_temp = 1U;
    } else if (vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h221b8606__0) {
        vlSelfRef.core__DOT__res_sched__DOT__alu_op = 0U;
        vlSelfRef.core__DOT__res_sched__DOT__issue_writes_temp = 1U;
    } else if ((3U == (0x0000007fU & (vlSelfRef.core__DOT__hold_out[1U] 
                                      >> 0x00000010U)))) {
        vlSelfRef.core__DOT__res_sched__DOT__alu_op = 0U;
        vlSelfRef.core__DOT__res_sched__DOT__issue_writes_temp = 1U;
    } else if (vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_hae399222__0) {
        vlSelfRef.core__DOT__res_sched__DOT__alu_op = 0U;
        vlSelfRef.core__DOT__res_sched__DOT__issue_writes_temp = 1U;
    } else if ((0x23U == (0x0000007fU & (vlSelfRef.core__DOT__hold_out[1U] 
                                         >> 0x00000010U)))) {
        vlSelfRef.core__DOT__res_sched__DOT__alu_op = 0U;
        vlSelfRef.core__DOT__res_sched__DOT__issue_writes_temp = 0U;
    } else if ((0x73U == (0x0000007fU & (vlSelfRef.core__DOT__hold_out[1U] 
                                         >> 0x00000010U)))) {
        vlSelfRef.core__DOT__res_sched__DOT__issue_writes_temp = 0U;
        if ((0U != (7U & (vlSelfRef.core__DOT__hold_out[1U] 
                          >> 0x0000001cU)))) {
            if (vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h64f3f406__0) {
                vlSelfRef.core__DOT__res_sched__DOT__alu_op = 0U;
                if ((0U != (0x0000001fU & (vlSelfRef.core__DOT__hold_out[1U] 
                                           >> 0x00000017U)))) {
                    vlSelfRef.core__DOT__res_sched__DOT__issue_writes_temp = 1U;
                }
            } else if (vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h6618c944__0) {
                vlSelfRef.core__DOT__res_sched__DOT__alu_op = 5U;
                vlSelfRef.core__DOT__res_sched__DOT__issue_writes_temp = 1U;
            } else if (vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h64cec59c__0) {
                vlSelfRef.core__DOT__res_sched__DOT__alu_op = 2U;
                vlSelfRef.core__DOT__res_sched__DOT__issue_writes_temp = 1U;
            }
        }
    } else {
        vlSelfRef.core__DOT__res_sched__DOT__alu_op = 0U;
        vlSelfRef.core__DOT__res_sched__DOT__issue_writes_temp = 0U;
    }
    vlSelfRef.core__DOT__res_sched__DOT__illegal = 0U;
    vlSelfRef.core__DOT__res_sched__DOT__csr_valid_read_temp = 0U;
    vlSelfRef.core__DOT__res_sched__DOT__issue_csr_write_select = 7U;
    vlSelfRef.core__DOT__valid_packet = (1U & (~ (IData)(vlSelfRef.core__DOT__stall)));
    vlSelfRef.core__DOT__res_sched__DOT__csr_valid_write_temp = 0U;
    if ((0x33U != (0x0000007fU & (vlSelfRef.core__DOT__hold_out[1U] 
                                  >> 0x00000010U)))) {
        if ((1U & (~ (vlSelfRef.core__DOT__hold_out[1U] 
                      >> 0x0000000eU)))) {
            if ((0x13U != (0x0000007fU & (vlSelfRef.core__DOT__hold_out[1U] 
                                          >> 0x00000010U)))) {
                if ((1U & (~ (IData)(vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h221b8606__0)))) {
                    if ((3U != (0x0000007fU & (vlSelfRef.core__DOT__hold_out[1U] 
                                               >> 0x00000010U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_hae399222__0)))) {
                            if ((0x23U != (0x0000007fU 
                                           & (vlSelfRef.core__DOT__hold_out[1U] 
                                              >> 0x00000010U)))) {
                                if ((0x73U == (0x0000007fU 
                                               & (vlSelfRef.core__DOT__hold_out[1U] 
                                                  >> 0x00000010U)))) {
                                    if ((0U != (7U 
                                                & (vlSelfRef.core__DOT__hold_out[1U] 
                                                   >> 0x0000001cU)))) {
                                        if ((1U & (~ (IData)(vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h64f3f406__0)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h6618c944__0)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h64cec59c__0)))) {
                                                    vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U] 
                                                        = 
                                                        (0x00080000U 
                                                         | vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U]);
                                                }
                                            }
                                        }
                                        if (vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h64f3f406__0) {
                                            if ((0U 
                                                 != 
                                                 (0x0000001fU 
                                                  & (vlSelfRef.core__DOT__hold_out[1U] 
                                                     >> 0x00000017U)))) {
                                                vlSelfRef.core__DOT__res_sched__DOT__csr_valid_read_temp = 1U;
                                            }
                                            vlSelfRef.core__DOT__res_sched__DOT__issue_csr_write_select 
                                                = core__DOT__res_sched__DOT____VdfgExtracted_h69ccd114__0;
                                            vlSelfRef.core__DOT__res_sched__DOT__csr_valid_write_temp = 1U;
                                        } else if (vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h6618c944__0) {
                                            vlSelfRef.core__DOT__res_sched__DOT__csr_valid_read_temp = 1U;
                                            vlSelfRef.core__DOT__res_sched__DOT__issue_csr_write_select 
                                                = core__DOT__res_sched__DOT____VdfgExtracted_h69ccd114__1;
                                            if ((0U 
                                                 != 
                                                 (0x0000001fU 
                                                  & ((vlSelfRef.core__DOT__hold_out[2U] 
                                                      << 1U) 
                                                     | (vlSelfRef.core__DOT__hold_out[1U] 
                                                        >> 0x0000001fU))))) {
                                                vlSelfRef.core__DOT__res_sched__DOT__csr_valid_write_temp = 1U;
                                            }
                                        } else if (vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h64cec59c__0) {
                                            vlSelfRef.core__DOT__res_sched__DOT__csr_valid_read_temp = 1U;
                                            vlSelfRef.core__DOT__res_sched__DOT__issue_csr_write_select 
                                                = core__DOT__res_sched__DOT____VdfgExtracted_h69ccd114__2;
                                            if ((0U 
                                                 != 
                                                 (0x0000001fU 
                                                  & ((vlSelfRef.core__DOT__hold_out[2U] 
                                                      << 1U) 
                                                     | (vlSelfRef.core__DOT__hold_out[1U] 
                                                        >> 0x0000001fU))))) {
                                                vlSelfRef.core__DOT__res_sched__DOT__csr_valid_write_temp = 1U;
                                            }
                                        }
                                    }
                                    if ((0U == (7U 
                                                & (vlSelfRef.core__DOT__hold_out[1U] 
                                                   >> 0x0000001cU)))) {
                                        if ((0U != 
                                             (0x00000fffU 
                                              & (vlSelfRef.core__DOT__hold_out[2U] 
                                                 >> 4U)))) {
                                            if ((0x0302U 
                                                 != 
                                                 (0x00000fffU 
                                                  & (vlSelfRef.core__DOT__hold_out[2U] 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     != 
                                                     (0x00000fffU 
                                                      & (vlSelfRef.core__DOT__hold_out[2U] 
                                                         >> 4U)))) {
                                                    vlSelfRef.core__DOT__res_sched__DOT__illegal = 1U;
                                                }
                                            }
                                        }
                                        vlSelfRef.core__DOT__valid_packet = 0U;
                                    } else if ((1U 
                                                & (~ (IData)(vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h64f3f406__0)))) {
                                        if ((1U & (~ (IData)(vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h6618c944__0)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h64cec59c__0)))) {
                                                vlSelfRef.core__DOT__res_sched__DOT__illegal = 1U;
                                                vlSelfRef.core__DOT__valid_packet = 0U;
                                            }
                                        }
                                    }
                                } else {
                                    vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U] 
                                        = (0x00080000U 
                                           | vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U]);
                                    vlSelfRef.core__DOT__res_sched__DOT__illegal = 0U;
                                    vlSelfRef.core__DOT__valid_packet = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.core__DOT__csr_read_select = ((IData)(vlSelfRef.core__DOT__issue_csr_op)
                                             ? ([&]() {
                vlSelfRef.__Vfunc_index__0__csr = (0x00000fffU 
                                                   & (vlSelfRef.core__DOT__hold_out[2U] 
                                                      >> 4U));
                vlSelfRef.__Vfunc_index__0__Vfuncout 
                    = ((0x0300U == (IData)(vlSelfRef.__Vfunc_index__0__csr))
                        ? 0U : ((0x0305U == (IData)(vlSelfRef.__Vfunc_index__0__csr))
                                 ? 1U : ((0x0342U == (IData)(vlSelfRef.__Vfunc_index__0__csr))
                                          ? 2U : ((0x0341U 
                                                   == (IData)(vlSelfRef.__Vfunc_index__0__csr))
                                                   ? 3U
                                                   : 7U))));
            }(), (IData)(vlSelfRef.__Vfunc_index__0__Vfuncout))
                                             : 7U);
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 1U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 1U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__fetch_stage__DOT__newpc = 
        ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pop)
          ? ((IData)(vlSelfRef.reset) ? 0U : ((IData)(vlSelfRef.core__DOT__mispredicted)
                                               ? vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__ras_stack
                                              [(0x0000000fU 
                                                & ((IData)(vlSelfRef.core__DOT__commit_unit__DOT__commit_ras_pointer) 
                                                   - (IData)(1U)))]
                                               : vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__ras_stack
                                              [vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__sp]))
          : (((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_0)
               ? vlSelfRef.core__DOT__committed_pc : 
              ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_1)
                ? 0U : vlSelfRef.core__DOT__fetch_stage__DOT__pc)) 
             + ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_0)
                 ? (((~ (IData)(vlSelfRef.core__DOT__commit_result)) 
                     & (IData)(vlSelfRef.core__DOT__commit_prediction))
                     ? 4U : vlSelfRef.core__DOT__commit_imm_se)
                 : ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_1)
                     ? vlSelfRef.core__DOT__jalr_actual_address
                     : (((0x63U == (0x0000007fU & vlSelfRef.core__DOT__fetch_stage__DOT__instruction)) 
                         & (IData)(vlSelfRef.core__DOT__generate_new_pc__DOT__pipe_taken))
                         ? (((- (IData)((vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                         >> 0x0000001fU))) 
                             << 0x0000000dU) | ((((2U 
                                                   & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                      >> 0x0000001eU)) 
                                                  | (1U 
                                                     & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                        >> 7U))) 
                                                 << 0x0000000bU) 
                                                | ((0x000007e0U 
                                                    & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                       >> 0x00000014U)) 
                                                   | (0x0000001eU 
                                                      & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                         >> 7U)))))
                         : ((0x6fU == (0x0000007fU 
                                       & vlSelfRef.core__DOT__fetch_stage__DOT__instruction))
                             ? ((((0x00000ffeU & ((- (IData)(
                                                             (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                              >> 0x0000001fU))) 
                                                  << 1U)) 
                                  | (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                     >> 0x0000001fU)) 
                                 << 0x00000014U) | 
                                ((((0x000001feU & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                   >> 0x0000000bU)) 
                                   | (1U & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                            >> 0x00000014U))) 
                                  << 0x0000000bU) | 
                                 (0x000007feU & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                 >> 0x00000014U))))
                             : 4U))))));
    vlSelfRef.core__DOT__jalrq_input[1U] = ((0x0000ffffU 
                                             & vlSelfRef.core__DOT__jalrq_input[1U]) 
                                            | (0xffff0000U 
                                               & (vlSelfRef.core__DOT__hold_out[0U] 
                                                  << 7U)));
    vlSelfRef.core__DOT__jalrq_input[2U] = ((0x00010000U 
                                             & vlSelfRef.core__DOT__jalrq_input[2U]) 
                                            | (0x0000ffffU 
                                               & ((0x0000ff80U 
                                                   & (vlSelfRef.core__DOT__hold_out[1U] 
                                                      << 7U)) 
                                                  | (vlSelfRef.core__DOT__hold_out[0U] 
                                                     >> 0x00000019U))));
    vlSelfRef.core__DOT__jalrq_input[2U] = ((0x0000ffffU 
                                             & vlSelfRef.core__DOT__jalrq_input[2U]) 
                                            | (0x0001ffffU 
                                               & ((IData)(
                                                          ((0x00670000U 
                                                            == 
                                                            (0x007f0000U 
                                                             & vlSelfRef.core__DOT__hold_out[1U])) 
                                                           & (~ (IData)(vlSelfRef.core__DOT__stall)))) 
                                                  << 0x00000010U)));
    vlSelfRef.core__DOT__jalrq_input[0U] = ((0xffff000fU 
                                             & vlSelfRef.core__DOT__jalrq_input[0U]) 
                                            | (0x0000fff0U 
                                               & vlSelfRef.core__DOT__hold_out[2U]));
    if (((((IData)(vlSelfRef.core__DOT__Q_j) == (0x0000000fU 
                                                 & (IData)(
                                                           (vlSelfRef.core__DOT__CDB_out 
                                                            >> 0x00000022U)))) 
          & (0U != (0x0000000fU & (IData)((vlSelfRef.core__DOT__CDB_out 
                                           >> 0x00000022U))))) 
         & (~ (IData)(vlSelfRef.core__DOT__CDB_out)))) {
        vlSelfRef.core__DOT__jalrq_input[0U] = ((0x0000ffffU 
                                                 & vlSelfRef.core__DOT__jalrq_input[0U]) 
                                                | ((IData)(
                                                           (vlSelfRef.core__DOT__CDB_out 
                                                            >> 2U)) 
                                                   << 0x00000010U));
        vlSelfRef.core__DOT__jalrq_input[1U] = ((0xffff0000U 
                                                 & vlSelfRef.core__DOT__jalrq_input[1U]) 
                                                | ((IData)(
                                                           (vlSelfRef.core__DOT__CDB_out 
                                                            >> 2U)) 
                                                   >> 0x00000010U));
        vlSelfRef.core__DOT__jalrq_input[0U] = (0xfffffff0U 
                                                & vlSelfRef.core__DOT__jalrq_input[0U]);
        vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j = 0U;
        vlSelfRef.core__DOT__res_sched__DOT__V_j = (IData)(
                                                           (vlSelfRef.core__DOT__CDB_out 
                                                            >> 2U));
    } else if (vlSelfRef.core__DOT__rs1reg_busy) {
        if (vlSelfRef.core__DOT__rs1rob_ready) {
            vlSelfRef.core__DOT__jalrq_input[0U] = 
                ((0x0000ffffU & vlSelfRef.core__DOT__jalrq_input[0U]) 
                 | (vlSelfRef.core__DOT__rs1rob_data 
                    << 0x00000010U));
            vlSelfRef.core__DOT__jalrq_input[1U] = 
                ((0xffff0000U & vlSelfRef.core__DOT__jalrq_input[1U]) 
                 | (vlSelfRef.core__DOT__rs1rob_data 
                    >> 0x00000010U));
            vlSelfRef.core__DOT__jalrq_input[0U] = 
                (0xfffffff0U & vlSelfRef.core__DOT__jalrq_input[0U]);
            vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j = 0U;
            vlSelfRef.core__DOT__res_sched__DOT__V_j 
                = vlSelfRef.core__DOT__rs1rob_data;
        } else {
            vlSelfRef.core__DOT__jalrq_input[0U] = 
                (0x0000ffffU & vlSelfRef.core__DOT__jalrq_input[0U]);
            vlSelfRef.core__DOT__jalrq_input[1U] = 
                (0xffff0000U & vlSelfRef.core__DOT__jalrq_input[1U]);
            vlSelfRef.core__DOT__jalrq_input[0U] = 
                ((0xfffffff0U & vlSelfRef.core__DOT__jalrq_input[0U]) 
                 | (IData)(vlSelfRef.core__DOT__Q_j));
            vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j 
                = vlSelfRef.core__DOT__Q_j;
            vlSelfRef.core__DOT__res_sched__DOT__V_j = 0U;
        }
    } else {
        vlSelfRef.core__DOT__jalrq_input[0U] = ((0x0000ffffU 
                                                 & vlSelfRef.core__DOT__jalrq_input[0U]) 
                                                | (vlSelfRef.core__DOT__rs1reg_data 
                                                   << 0x00000010U));
        vlSelfRef.core__DOT__jalrq_input[1U] = ((0xffff0000U 
                                                 & vlSelfRef.core__DOT__jalrq_input[1U]) 
                                                | (vlSelfRef.core__DOT__rs1reg_data 
                                                   >> 0x00000010U));
        vlSelfRef.core__DOT__jalrq_input[0U] = (0xfffffff0U 
                                                & vlSelfRef.core__DOT__jalrq_input[0U]);
        vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j = 0U;
        vlSelfRef.core__DOT__res_sched__DOT__V_j = vlSelfRef.core__DOT__rs1reg_data;
    }
    vlSelfRef.core__DOT__reservation_stations__DOT____VdfgRegularize_h1542825a_0_1 
        = ((~ (IData)(vlSelfRef.core__DOT__stall)) 
           & (IData)(vlSelfRef.core__DOT__valid_packet));
    vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus = 0U;
    if (((IData)(vlSelfRef.core__DOT__res_sched__DOT__issue_writes_temp) 
         & (0U != (0x0000001fU & (vlSelfRef.core__DOT__hold_out[1U] 
                                  >> 0x00000017U))))) {
        vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
            = (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
               | (0x00000000ffffffffULL & ((IData)(1U) 
                                           << (0x0000001fU 
                                               & (vlSelfRef.core__DOT__hold_out[1U] 
                                                  >> 0x00000017U)))));
    }
    vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus = 0U;
    if ((((~ (((IData)(vlSelfRef.rd_out) == (0x0000001fU 
                                             & (vlSelfRef.core__DOT__hold_out[1U] 
                                                >> 0x00000017U))) 
              & (IData)(vlSelfRef.core__DOT__res_sched__DOT__issue_writes_temp))) 
          & ((0x0000000fU & (vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                             [vlSelfRef.rd_out] >> 1U)) 
             == (IData)(vlSelfRef.core__DOT__commit_unit__DOT__commit_ROB))) 
         & (0U != (IData)(vlSelfRef.rd_out)))) {
        vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
            = (vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
               | (0x00000000ffffffffULL & ((IData)(1U) 
                                           << (IData)(vlSelfRef.rd_out))));
    }
    vlSelfRef.core__DOT__csr_register_status__DOT__enable_bus = 0U;
    if (((IData)(vlSelfRef.core__DOT__res_sched__DOT__csr_valid_write_temp) 
         & (7U != (IData)(vlSelfRef.core__DOT__csr_read_select)))) {
        vlSelfRef.core__DOT__csr_register_status__DOT__enable_bus 
            = ((IData)(vlSelfRef.core__DOT__csr_register_status__DOT__enable_bus) 
               | (0x00ffU & ((IData)(1U) << (IData)(vlSelfRef.core__DOT__csr_read_select))));
    }
    vlSelfRef.core__DOT__csr_register_status__DOT__reset_bus = 0U;
    if ((((~ (((IData)(vlSelfRef.core__DOT__commit_csr_write_select) 
               == (IData)(vlSelfRef.core__DOT__csr_read_select)) 
              & (IData)(vlSelfRef.core__DOT__res_sched__DOT__csr_valid_write_temp))) 
          & ((0x0000000fU & (vlSelfRef.core__DOT__csr_register_status__DOT__reg_status_table
                             [vlSelfRef.core__DOT__commit_csr_write_select] 
                             >> 1U)) == (IData)(vlSelfRef.core__DOT__commit_unit__DOT__commit_ROB))) 
         & (7U != (IData)(vlSelfRef.core__DOT__commit_csr_write_select)))) {
        vlSelfRef.core__DOT__csr_register_status__DOT__reset_bus 
            = ((IData)(vlSelfRef.core__DOT__csr_register_status__DOT__reset_bus) 
               | (0x00ffU & ((IData)(1U) << (IData)(vlSelfRef.core__DOT__commit_csr_write_select))));
    }
    vlSelfRef.core__DOT__csr_ReadData = ((0x011fU >= 
                                          (0x000001ffU 
                                           & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.core__DOT__csr_read_select), 5U)))
                                          ? (((0U == 
                                               (0x0000001fU 
                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.core__DOT__csr_read_select), 5U)))
                                               ? 0U
                                               : (vlSelfRef.core__DOT__csrs__DOT__csr_data[
                                                  (((IData)(0x0000001fU) 
                                                    + 
                                                    (0x000001ffU 
                                                     & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.core__DOT__csr_read_select), 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.core__DOT__csr_read_select), 5U))))) 
                                             | (vlSelfRef.core__DOT__csrs__DOT__csr_data[
                                                (0x0000000fU 
                                                 & (VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.core__DOT__csr_read_select), 5U) 
                                                    >> 5U))] 
                                                >> 
                                                (0x0000001fU 
                                                 & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.core__DOT__csr_read_select), 5U))))
                                          : 0U);
    vlSelfRef.core__DOT__csr_busy = (1U & vlSelfRef.core__DOT__csr_register_status__DOT__reg_status_table
                                     [vlSelfRef.core__DOT__csr_read_select]);
    vlSelfRef.core__DOT__Q_csr = (0x0000000fU & (vlSelfRef.core__DOT__csr_register_status__DOT__reg_status_table
                                                 [vlSelfRef.core__DOT__csr_read_select] 
                                                 >> 1U));
    if (vlSelfRef.core__DOT__issue_csr_op) {
        vlSelfRef.core__DOT__rs2rob_data = ((vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                             [vlSelfRef.core__DOT__Q_csr][3U] 
                                             << 0x0000000aU) 
                                            | (vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                               [vlSelfRef.core__DOT__Q_csr][2U] 
                                               >> 0x00000016U));
        vlSelfRef.core__DOT__rs2rob_ready = (1U & (
                                                   vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                                   [vlSelfRef.core__DOT__Q_csr][2U] 
                                                   >> 0x00000013U));
        if (((((IData)(vlSelfRef.core__DOT__Q_csr) 
               == (0x0000000fU & (IData)((vlSelfRef.core__DOT__CDB_out 
                                          >> 0x00000022U)))) 
              & (0U != (0x0000000fU & (IData)((vlSelfRef.core__DOT__CDB_out 
                                               >> 0x00000022U))))) 
             & (~ (IData)(vlSelfRef.core__DOT__CDB_out)))) {
            vlSelfRef.core__DOT__res_sched__DOT__Q_temp_k = 0U;
            vlSelfRef.core__DOT__res_sched__DOT__V_k 
                = (IData)((vlSelfRef.core__DOT__CDB_out 
                           >> 2U));
        } else if (vlSelfRef.core__DOT__csr_busy) {
            if (vlSelfRef.core__DOT__rs1rob_ready) {
                vlSelfRef.core__DOT__res_sched__DOT__Q_temp_k = 0U;
                vlSelfRef.core__DOT__res_sched__DOT__V_k 
                    = vlSelfRef.core__DOT__rs2rob_data;
            } else {
                vlSelfRef.core__DOT__res_sched__DOT__Q_temp_k 
                    = vlSelfRef.core__DOT__Q_csr;
                vlSelfRef.core__DOT__res_sched__DOT__V_k = 0U;
            }
        } else {
            vlSelfRef.core__DOT__res_sched__DOT__Q_temp_k = 0U;
            vlSelfRef.core__DOT__res_sched__DOT__V_k 
                = vlSelfRef.core__DOT__csr_ReadData;
        }
    } else {
        vlSelfRef.core__DOT__rs2rob_data = ((vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                             [vlSelfRef.core__DOT__Q_k][3U] 
                                             << 0x0000000aU) 
                                            | (vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                               [vlSelfRef.core__DOT__Q_k][2U] 
                                               >> 0x00000016U));
        vlSelfRef.core__DOT__rs2rob_ready = (1U & (
                                                   vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                                   [vlSelfRef.core__DOT__Q_k][2U] 
                                                   >> 0x00000013U));
        if (((((IData)(vlSelfRef.core__DOT__Q_k) == 
               (0x0000000fU & (IData)((vlSelfRef.core__DOT__CDB_out 
                                       >> 0x00000022U)))) 
              & (0U != (0x0000000fU & (IData)((vlSelfRef.core__DOT__CDB_out 
                                               >> 0x00000022U))))) 
             & (~ (IData)(vlSelfRef.core__DOT__CDB_out)))) {
            vlSelfRef.core__DOT__res_sched__DOT__Q_temp_k = 0U;
            vlSelfRef.core__DOT__res_sched__DOT__V_k 
                = (IData)((vlSelfRef.core__DOT__CDB_out 
                           >> 2U));
        } else if (vlSelfRef.core__DOT__rs2reg_busy) {
            if (vlSelfRef.core__DOT__rs2rob_ready) {
                vlSelfRef.core__DOT__res_sched__DOT__Q_temp_k = 0U;
                vlSelfRef.core__DOT__res_sched__DOT__V_k 
                    = vlSelfRef.core__DOT__rs2rob_data;
            } else {
                vlSelfRef.core__DOT__res_sched__DOT__Q_temp_k 
                    = vlSelfRef.core__DOT__Q_k;
                vlSelfRef.core__DOT__res_sched__DOT__V_k = 0U;
            }
        } else {
            vlSelfRef.core__DOT__res_sched__DOT__Q_temp_k = 0U;
            vlSelfRef.core__DOT__res_sched__DOT__V_k 
                = vlSelfRef.core__DOT__rs2reg_data;
        }
    }
    if ((0x33U != (0x0000007fU & (vlSelfRef.core__DOT__hold_out[1U] 
                                  >> 0x00000010U)))) {
        if ((1U & (~ (vlSelfRef.core__DOT__hold_out[1U] 
                      >> 0x0000000eU)))) {
            if ((0x13U != (0x0000007fU & (vlSelfRef.core__DOT__hold_out[1U] 
                                          >> 0x00000010U)))) {
                if (vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h221b8606__0) {
                    vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j = 0U;
                    vlSelfRef.core__DOT__res_sched__DOT__V_j 
                        = ((vlSelfRef.core__DOT__hold_out[3U] 
                            << 0x00000010U) | (vlSelfRef.core__DOT__hold_out[2U] 
                                               >> 0x00000010U));
                } else if ((3U != (0x0000007fU & (vlSelfRef.core__DOT__hold_out[1U] 
                                                  >> 0x00000010U)))) {
                    if (vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_hae399222__0) {
                        vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j = 0U;
                        vlSelfRef.core__DOT__res_sched__DOT__V_j 
                            = ((0x37U == (0x0000007fU 
                                          & (vlSelfRef.core__DOT__hold_out[1U] 
                                             >> 0x00000010U)))
                                ? 0U : ((vlSelfRef.core__DOT__hold_out[3U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.core__DOT__hold_out[2U] 
                                           >> 0x00000010U)));
                    } else if ((0x23U != (0x0000007fU 
                                          & (vlSelfRef.core__DOT__hold_out[1U] 
                                             >> 0x00000010U)))) {
                        if ((0x73U == (0x0000007fU 
                                       & (vlSelfRef.core__DOT__hold_out[1U] 
                                          >> 0x00000010U)))) {
                            if ((0U != (7U & (vlSelfRef.core__DOT__hold_out[1U] 
                                              >> 0x0000001cU)))) {
                                if (vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h64f3f406__0) {
                                    if ((1U != (7U 
                                                & (vlSelfRef.core__DOT__hold_out[1U] 
                                                   >> 0x0000001cU)))) {
                                        vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j = 0U;
                                        vlSelfRef.core__DOT__res_sched__DOT__V_j 
                                            = (0x0000001fU 
                                               & ((vlSelfRef.core__DOT__hold_out[2U] 
                                                   << 1U) 
                                                  | (vlSelfRef.core__DOT__hold_out[1U] 
                                                     >> 0x0000001fU)));
                                    }
                                } else if (vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h6618c944__0) {
                                    if ((3U != (7U 
                                                & (vlSelfRef.core__DOT__hold_out[1U] 
                                                   >> 0x0000001cU)))) {
                                        vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j = 0U;
                                        vlSelfRef.core__DOT__res_sched__DOT__V_j 
                                            = (0x0000001fU 
                                               & ((vlSelfRef.core__DOT__hold_out[2U] 
                                                   << 1U) 
                                                  | (vlSelfRef.core__DOT__hold_out[1U] 
                                                     >> 0x0000001fU)));
                                    }
                                } else if (vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h64cec59c__0) {
                                    if ((2U != (7U 
                                                & (vlSelfRef.core__DOT__hold_out[1U] 
                                                   >> 0x0000001cU)))) {
                                        vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j = 0U;
                                        vlSelfRef.core__DOT__res_sched__DOT__V_j 
                                            = (0x0000001fU 
                                               & ((vlSelfRef.core__DOT__hold_out[2U] 
                                                   << 1U) 
                                                  | (vlSelfRef.core__DOT__hold_out[1U] 
                                                     >> 0x0000001fU)));
                                    }
                                }
                            }
                        } else {
                            vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j = 0U;
                            vlSelfRef.core__DOT__res_sched__DOT__V_j = 0U;
                        }
                    }
                }
            }
            if ((0x13U == (0x0000007fU & (vlSelfRef.core__DOT__hold_out[1U] 
                                          >> 0x00000010U)))) {
                vlSelfRef.core__DOT__res_sched__DOT__Q_temp_k = 0U;
                vlSelfRef.core__DOT__res_sched__DOT__V_k 
                    = ((0U == (7U & (vlSelfRef.core__DOT__hold_out[1U] 
                                     >> 0x0000001cU)))
                        ? vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h461c3afd__0
                        : ((4U == (7U & (vlSelfRef.core__DOT__hold_out[1U] 
                                         >> 0x0000001cU)))
                            ? vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h461c3afd__0
                            : ((6U == (7U & (vlSelfRef.core__DOT__hold_out[1U] 
                                             >> 0x0000001cU)))
                                ? vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h461c3afd__0
                                : ((7U == (7U & (vlSelfRef.core__DOT__hold_out[1U] 
                                                 >> 0x0000001cU)))
                                    ? vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h461c3afd__0
                                    : ((1U == (7U & 
                                               (vlSelfRef.core__DOT__hold_out[1U] 
                                                >> 0x0000001cU)))
                                        ? (0x0000001fU 
                                           & (vlSelfRef.core__DOT__hold_out[2U] 
                                              >> 4U))
                                        : ((IData)(vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h018ff82f__0)
                                            ? (0x0000001fU 
                                               & (vlSelfRef.core__DOT__hold_out[2U] 
                                                  >> 4U))
                                            : ((IData)(vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h1374f20a__0)
                                                ? (0x0000001fU 
                                                   & (vlSelfRef.core__DOT__hold_out[2U] 
                                                      >> 4U))
                                                : vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h461c3afd__0)))))));
            } else if (vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h221b8606__0) {
                vlSelfRef.core__DOT__res_sched__DOT__Q_temp_k = 0U;
                vlSelfRef.core__DOT__res_sched__DOT__V_k = 4U;
            } else if ((3U == (0x0000007fU & (vlSelfRef.core__DOT__hold_out[1U] 
                                              >> 0x00000010U)))) {
                vlSelfRef.core__DOT__res_sched__DOT__Q_temp_k = 0U;
                vlSelfRef.core__DOT__res_sched__DOT__V_k 
                    = vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h461c3afd__0;
            } else if (vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_hae399222__0) {
                vlSelfRef.core__DOT__res_sched__DOT__Q_temp_k = 0U;
                vlSelfRef.core__DOT__res_sched__DOT__V_k 
                    = ((0x37U == (0x0000007fU & (vlSelfRef.core__DOT__hold_out[1U] 
                                                 >> 0x00000010U)))
                        ? (0xfffff000U & ((vlSelfRef.core__DOT__hold_out[2U] 
                                           << 0x00000010U) 
                                          | (0x0000f000U 
                                             & (vlSelfRef.core__DOT__hold_out[1U] 
                                                >> 0x00000010U))))
                        : (0xfffff000U & ((vlSelfRef.core__DOT__hold_out[2U] 
                                           << 0x00000010U) 
                                          | (0x0000f000U 
                                             & (vlSelfRef.core__DOT__hold_out[1U] 
                                                >> 0x00000010U)))));
            } else if ((0x23U == (0x0000007fU & (vlSelfRef.core__DOT__hold_out[1U] 
                                                 >> 0x00000010U)))) {
                vlSelfRef.core__DOT__res_sched__DOT__Q_temp_k = 0U;
                vlSelfRef.core__DOT__res_sched__DOT__V_k 
                    = (((- (IData)((1U & (vlSelfRef.core__DOT__hold_out[2U] 
                                          >> 0x0000000fU)))) 
                        << 0x0000000cU) | ((0x00000fe0U 
                                            & (vlSelfRef.core__DOT__hold_out[2U] 
                                               >> 4U)) 
                                           | (0x0000001fU 
                                              & (vlSelfRef.core__DOT__hold_out[1U] 
                                                 >> 0x00000017U))));
            } else if ((0x73U == (0x0000007fU & (vlSelfRef.core__DOT__hold_out[1U] 
                                                 >> 0x00000010U)))) {
                if ((0U != (7U & (vlSelfRef.core__DOT__hold_out[1U] 
                                  >> 0x0000001cU)))) {
                    if (vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h64f3f406__0) {
                        vlSelfRef.core__DOT__res_sched__DOT__Q_temp_k = 0U;
                        vlSelfRef.core__DOT__res_sched__DOT__V_k = 0U;
                    } else if (vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h6618c944__0) {
                        vlSelfRef.core__DOT__res_sched__DOT__Q_temp_k = 0U;
                        vlSelfRef.core__DOT__res_sched__DOT__V_k 
                            = vlSelfRef.core__DOT__csr_ReadData;
                    } else if (vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h64cec59c__0) {
                        vlSelfRef.core__DOT__res_sched__DOT__Q_temp_k = 0U;
                        vlSelfRef.core__DOT__res_sched__DOT__V_k 
                            = vlSelfRef.core__DOT__csr_ReadData;
                    }
                }
            } else {
                vlSelfRef.core__DOT__res_sched__DOT__Q_temp_k = 0U;
                vlSelfRef.core__DOT__res_sched__DOT__V_k = 0U;
            }
        }
    }
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 2U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 2U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__fetch_stage__DOT__program_counter__DOT__new_pc 
        = (((~ (IData)(vlSelfRef.core__DOT__mispredicted)) 
            & (IData)(vlSelfRef.core__DOT__ins_hold__DOT__ps))
            ? vlSelfRef.core__DOT__fetch_stage__DOT__pc
            : vlSelfRef.core__DOT__fetch_stage__DOT__newpc);
    vlSelfRef.core__DOT__res_sched__DOT__rob_input[0U] 
        = ((vlSelfRef.core__DOT__hold_out[2U] << 0x00000010U) 
           | (vlSelfRef.core__DOT__hold_out[1U] >> 0x00000010U));
    vlSelfRef.core__DOT__res_sched__DOT__rob_input[1U] 
        = ((0x0003ffffU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[1U]) 
           | (0xfffc0000U & (vlSelfRef.core__DOT__hold_out[2U] 
                             << 2U)));
    vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U] 
        = ((0xfffc0000U & vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U]) 
           | (0x0003ffffU & ((0x0003fffcU & (vlSelfRef.core__DOT__hold_out[3U] 
                                             << 2U)) 
                             | (vlSelfRef.core__DOT__hold_out[2U] 
                                >> 0x0000001eU))));
    vlSelfRef.core__DOT__res_sched__DOT__rob_input[5U] 
        = ((7U & vlSelfRef.core__DOT__res_sched__DOT__rob_input[5U]) 
           | (0x0000007fU & ((((IData)(vlSelfRef.core__DOT__stall) 
                               | (0U == (0x0000007fU 
                                         & (vlSelfRef.core__DOT__hold_out[1U] 
                                            >> 0x00000010U))))
                               ? 0U : (IData)(vlSelfRef.core__DOT__ROB_entry)) 
                             << 3U)));
    vlSelfRef.core__DOT__res_sched__DOT__rob_input[5U] 
        = ((0x00000079U & vlSelfRef.core__DOT__res_sched__DOT__rob_input[5U]) 
           | (4U & (vlSelfRef.core__DOT__hold_out[1U] 
                    >> 0x0000000dU)));
    vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U] 
        = ((0xfffbffffU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U]) 
           | ((0x67U == (0x0000007fU & (vlSelfRef.core__DOT__hold_out[1U] 
                                        >> 0x00000010U))) 
              << 0x00000012U));
    vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U] 
        = ((0xfc3fffffU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U]) 
           | (0x03c00000U & (vlSelfRef.core__DOT__hold_out[1U] 
                             << 0x0000000dU)));
    vlSelfRef.core__DOT__res_sched__DOT__rob_input[1U] 
        = ((0xffffff8fU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[1U]) 
           | (0xfffffff0U & ((((IData)(vlSelfRef.core__DOT__res_sched__DOT__csr_valid_write_temp) 
                               & (IData)(vlSelfRef.core__DOT__valid_packet)) 
                              << 6U) | (((IData)(vlSelfRef.core__DOT__res_sched__DOT__csr_valid_read_temp) 
                                         & (IData)(vlSelfRef.core__DOT__valid_packet)) 
                                        << 5U))));
    vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U] 
        = ((0x03ffffffU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U]) 
           | (0xfc000000U & (0x08000000U | (((IData)(vlSelfRef.core__DOT__res_sched__DOT__issue_writes_temp)
                                              ? (0x0000001fU 
                                                 & (vlSelfRef.core__DOT__hold_out[1U] 
                                                    >> 0x00000017U))
                                              : 0U) 
                                            << 0x0000001cU))));
    vlSelfRef.core__DOT__res_sched__DOT__rob_input[5U] 
        = ((0x0000007eU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[5U]) 
           | (0x0000007fU & (((IData)(vlSelfRef.core__DOT__res_sched__DOT__issue_writes_temp)
                               ? (0x0000001fU & (vlSelfRef.core__DOT__hold_out[1U] 
                                                 >> 0x00000017U))
                               : 0U) >> 4U)));
    vlSelfRef.core__DOT__res_sched__DOT__rob_input[1U] 
        = (0x00000380U | vlSelfRef.core__DOT__res_sched__DOT__rob_input[1U]);
    vlSelfRef.core__DOT__res_sched__DOT__rob_input[1U] 
        = ((0xfffffff0U & vlSelfRef.core__DOT__res_sched__DOT__rob_input[1U]) 
           | (((IData)(vlSelfRef.core__DOT__csr_busy) 
               & (IData)(vlSelfRef.core__DOT__issue_csr_op))
               ? (IData)(vlSelfRef.core__DOT__Q_csr)
               : 0U));
    vlSelfRef.core__DOT__res_sched__DOT__rob_input[1U] 
        = (0xfffc03ffU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[1U]);
    if ((1U & vlSelfRef.core__DOT__hold_out[0U])) {
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[1U] 
            = ((0xfffc03ffU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[1U]) 
               | (0x0003fc00U & (vlSelfRef.core__DOT__hold_out[0U] 
                                 << 9U)));
    } else if (vlSelfRef.core__DOT__res_sched__DOT__illegal) {
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[1U] 
            = (0x00000800U | (0xfffc03ffU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[1U]));
    }
    if ((0x23U == (0x0000007fU & (vlSelfRef.core__DOT__hold_out[1U] 
                                  >> 0x00000010U)))) {
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U] 
            = (0x00180000U | ((0x0007ffffU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U]) 
                              | ((IData)((QData)((IData)(vlSelfRef.core__DOT__rs2reg_data))) 
                                 << 0x00000016U)));
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[3U] 
            = ((0x0007ffffU & ((IData)((QData)((IData)(vlSelfRef.core__DOT__rs2reg_data))) 
                               >> 0x0000000aU)) | (
                                                   (0x00380000U 
                                                    & ((IData)((QData)((IData)(vlSelfRef.core__DOT__rs2reg_data))) 
                                                       >> 0x0000000aU)) 
                                                   | ((IData)(
                                                              ((QData)((IData)(vlSelfRef.core__DOT__rs2reg_data)) 
                                                               >> 0x00000020U)) 
                                                      << 0x00000016U)));
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U] 
            = ((0xffc00000U & vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U]) 
               | ((0x0007ffffU & ((IData)(((QData)((IData)(vlSelfRef.core__DOT__rs2reg_data)) 
                                           >> 0x00000020U)) 
                                  >> 0x0000000aU)) 
                  | (0x00380000U & ((IData)(((QData)((IData)(vlSelfRef.core__DOT__rs2reg_data)) 
                                             >> 0x00000020U)) 
                                    >> 0x0000000aU))));
    } else if ((0x00004000U & vlSelfRef.core__DOT__hold_out[1U])) {
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U] 
            = ((0x0007ffffU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U]) 
               | (((0x00003f00U & (vlSelfRef.core__DOT__hold_out[2U] 
                                   >> 1U)) | (0x000000f0U 
                                              & (vlSelfRef.core__DOT__hold_out[1U] 
                                                 >> 0x00000014U))) 
                  << 0x00000013U));
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[3U] 
            = ((0xfffffffeU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[3U]) 
               | (((0x00003f00U & (vlSelfRef.core__DOT__hold_out[2U] 
                                   >> 1U)) | (0x000000f0U 
                                              & (vlSelfRef.core__DOT__hold_out[1U] 
                                                 >> 0x00000014U))) 
                  >> 0x0000000dU));
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[3U] 
            = ((0xffc00001U & vlSelfRef.core__DOT__res_sched__DOT__rob_input[3U]) 
               | (((0x001ffffcU & ((- (IData)((1U & 
                                               (vlSelfRef.core__DOT__hold_out[2U] 
                                                >> 0x0000000fU)))) 
                                   << 2U)) | ((2U & 
                                               (vlSelfRef.core__DOT__hold_out[2U] 
                                                >> 0x0000000eU)) 
                                              | (1U 
                                                 & (vlSelfRef.core__DOT__hold_out[1U] 
                                                    >> 0x00000017U)))) 
                  << 1U));
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[3U] 
            = ((0x003fffffU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[3U]) 
               | (0xffc00000U & (vlSelfRef.core__DOT__hold_out[2U] 
                                 << 6U)));
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U] 
            = ((0xffc00000U & vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U]) 
               | (0x003fffffU & ((0x003fffc0U & (vlSelfRef.core__DOT__hold_out[3U] 
                                                 << 6U)) 
                                 | (vlSelfRef.core__DOT__hold_out[2U] 
                                    >> 0x0000001aU))));
    } else if ((3U == (0x0000007fU & (vlSelfRef.core__DOT__hold_out[1U] 
                                      >> 0x00000010U)))) {
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U] 
            = (0x00300000U | (0x0007ffffU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U]));
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[3U] 
            = (0x07c00000U & (vlSelfRef.core__DOT__hold_out[1U] 
                              >> 1U));
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U] 
            = (0xffc00000U & vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U]);
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U] 
            = ((0x0fffffffU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U]) 
               | (0xf0000000U & (vlSelfRef.core__DOT__hold_out[1U] 
                                 << 5U)));
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[5U] 
            = ((0x0000007eU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[5U]) 
               | (1U & (vlSelfRef.core__DOT__hold_out[1U] 
                        >> 0x0000001bU)));
    } else if ((0x73U == (0x0000007fU & (vlSelfRef.core__DOT__hold_out[1U] 
                                         >> 0x00000010U)))) {
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U] 
            = (0x00200000U | (0x000fffffU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U]));
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[3U] = 0U;
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U] 
            = (0xffc00000U & vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U]);
        if ((0U == (7U & (vlSelfRef.core__DOT__hold_out[1U] 
                          >> 0x0000001cU)))) {
            vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U] 
                = (0x00080000U | vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U]);
            vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U] 
                = (0x003fffffU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U]);
            vlSelfRef.core__DOT__res_sched__DOT__rob_input[3U] = 0U;
            vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U] 
                = (0xffc00000U & vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U]);
            if ((0U == (0x00000fffU & (vlSelfRef.core__DOT__hold_out[2U] 
                                       >> 4U)))) {
                vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U] 
                    = (0x04000000U | (0xf3ffffffU & 
                                      vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U]));
                vlSelfRef.core__DOT__res_sched__DOT__rob_input[1U] 
                    = (0x00002000U | (0xfffc03ffU & 
                                      vlSelfRef.core__DOT__res_sched__DOT__rob_input[1U]));
            } else if ((0x0302U == (0x00000fffU & (
                                                   vlSelfRef.core__DOT__hold_out[2U] 
                                                   >> 4U)))) {
                vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U] 
                    = (0xf3ffffffU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U]);
            } else if ((1U == (0x00000fffU & (vlSelfRef.core__DOT__hold_out[2U] 
                                              >> 4U)))) {
                vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U] 
                    = (0x0c000000U | vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U]);
                vlSelfRef.core__DOT__res_sched__DOT__rob_input[1U] 
                    = (0x00000c00U | (0xfffc03ffU & 
                                      vlSelfRef.core__DOT__res_sched__DOT__rob_input[1U]));
            }
        } else if (vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h64f3f406__0) {
            vlSelfRef.core__DOT__res_sched__DOT__rob_input[1U] 
                = ((0xfffffc7fU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[1U]) 
                   | ((IData)(vlSelfRef.core__DOT__res_sched__DOT__issue_csr_write_select) 
                      << 7U));
            vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U] 
                = ((0x003fffffU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U]) 
                   | ((IData)(((QData)((IData)(vlSelfRef.core__DOT__csr_ReadData)) 
                               << 0x00000020U)) << 0x00000016U));
            vlSelfRef.core__DOT__res_sched__DOT__rob_input[3U] 
                = (((IData)(((QData)((IData)(vlSelfRef.core__DOT__csr_ReadData)) 
                             << 0x00000020U)) >> 0x0000000aU) 
                   | ((IData)((((QData)((IData)(vlSelfRef.core__DOT__csr_ReadData)) 
                                << 0x00000020U) >> 0x00000020U)) 
                      << 0x00000016U));
            vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U] 
                = ((0xffc00000U & vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U]) 
                   | ((IData)((((QData)((IData)(vlSelfRef.core__DOT__csr_ReadData)) 
                                << 0x00000020U) >> 0x00000020U)) 
                      >> 0x0000000aU));
        } else if (vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h6618c944__0) {
            vlSelfRef.core__DOT__res_sched__DOT__rob_input[1U] 
                = ((0xfffffc7fU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[1U]) 
                   | ((IData)(vlSelfRef.core__DOT__res_sched__DOT__issue_csr_write_select) 
                      << 7U));
            vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U] 
                = ((0x003fffffU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U]) 
                   | ((IData)(((QData)((IData)(vlSelfRef.core__DOT__csr_ReadData)) 
                               << 0x00000020U)) << 0x00000016U));
            vlSelfRef.core__DOT__res_sched__DOT__rob_input[3U] 
                = (((IData)(((QData)((IData)(vlSelfRef.core__DOT__csr_ReadData)) 
                             << 0x00000020U)) >> 0x0000000aU) 
                   | ((IData)((((QData)((IData)(vlSelfRef.core__DOT__csr_ReadData)) 
                                << 0x00000020U) >> 0x00000020U)) 
                      << 0x00000016U));
            vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U] 
                = ((0xffc00000U & vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U]) 
                   | ((IData)((((QData)((IData)(vlSelfRef.core__DOT__csr_ReadData)) 
                                << 0x00000020U) >> 0x00000020U)) 
                      >> 0x0000000aU));
        } else if (vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h64cec59c__0) {
            vlSelfRef.core__DOT__res_sched__DOT__rob_input[1U] 
                = ((0xfffffc7fU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[1U]) 
                   | ((IData)(vlSelfRef.core__DOT__res_sched__DOT__issue_csr_write_select) 
                      << 7U));
            vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U] 
                = ((0x003fffffU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U]) 
                   | ((IData)(((QData)((IData)(vlSelfRef.core__DOT__csr_ReadData)) 
                               << 0x00000020U)) << 0x00000016U));
            vlSelfRef.core__DOT__res_sched__DOT__rob_input[3U] 
                = (((IData)(((QData)((IData)(vlSelfRef.core__DOT__csr_ReadData)) 
                             << 0x00000020U)) >> 0x0000000aU) 
                   | ((IData)((((QData)((IData)(vlSelfRef.core__DOT__csr_ReadData)) 
                                << 0x00000020U) >> 0x00000020U)) 
                      << 0x00000016U));
            vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U] 
                = ((0xffc00000U & vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U]) 
                   | ((IData)((((QData)((IData)(vlSelfRef.core__DOT__csr_ReadData)) 
                                << 0x00000020U) >> 0x00000020U)) 
                      >> 0x0000000aU));
        }
    } else if (vlSelfRef.core__DOT__valid_packet) {
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U] 
            = (0x00200000U | (0x000fffffU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U]));
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[3U] 
            = (0x07c00000U & (vlSelfRef.core__DOT__hold_out[1U] 
                              >> 1U));
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U] 
            = (0xffc00000U & vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U]);
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U] 
            = ((0x0fffffffU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U]) 
               | (0xf0000000U & (vlSelfRef.core__DOT__hold_out[1U] 
                                 << 5U)));
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[5U] 
            = ((0x0000007eU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[5U]) 
               | (1U & (vlSelfRef.core__DOT__hold_out[1U] 
                        >> 0x0000001bU)));
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U] 
            = (0xfff7ffffU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U]);
    } else {
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U] 
            = (0x00200000U | (0x000fffffU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U]));
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[3U] = 0U;
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U] 
            = (0xffc00000U & vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U]);
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U] 
            = (0x0fffffffU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[4U]);
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[5U] 
            = (0x0000007eU & vlSelfRef.core__DOT__res_sched__DOT__rob_input[5U]);
        vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U] 
            = (0x00080000U | vlSelfRef.core__DOT__res_sched__DOT__rob_input[2U]);
    }
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 3U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 3U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__reorder_buffer__DOT__wr_en 
        = ((0x0000000fU & (vlSelfRef.core__DOT__res_sched__DOT__rob_input[5U] 
                           >> 3U)) == (IData)(vlSelfRef.core__DOT__reorder_buffer__DOT__wptr));
    if (vlSelfRef.core__DOT__stall) {
        vlSelfRef.core__DOT__lsq_input[0U] = ((0x0000000fU 
                                               & vlSelfRef.core__DOT__lsq_input[0U]) 
                                              | ((IData)(vlSelfRef.core__DOT__Q_k) 
                                                 << 4U));
        vlSelfRef.core__DOT__lsq_input[1U] = ((IData)(vlSelfRef.core__DOT__Q_k) 
                                              >> 0x0000001cU);
        vlSelfRef.core__DOT__lsq_input[2U] = 0U;
    } else {
        if ((0U == (7U & (vlSelfRef.core__DOT__hold_out[1U] 
                          >> 0x0000001cU)))) {
            vlSelfRef.core__DOT__lsq_input[0U] = (3U 
                                                  | (0xfffffff0U 
                                                     & vlSelfRef.core__DOT__lsq_input[0U]));
        } else if ((1U == (7U & (vlSelfRef.core__DOT__hold_out[1U] 
                                 >> 0x0000001cU)))) {
            vlSelfRef.core__DOT__lsq_input[0U] = (5U 
                                                  | (0xfffffff0U 
                                                     & vlSelfRef.core__DOT__lsq_input[0U]));
        } else if ((2U == (7U & (vlSelfRef.core__DOT__hold_out[1U] 
                                 >> 0x0000001cU)))) {
            vlSelfRef.core__DOT__lsq_input[0U] = (9U 
                                                  | (0xfffffff0U 
                                                     & vlSelfRef.core__DOT__lsq_input[0U]));
        } else if ((4U == (7U & (vlSelfRef.core__DOT__hold_out[1U] 
                                 >> 0x0000001cU)))) {
            vlSelfRef.core__DOT__lsq_input[0U] = (2U 
                                                  | (0xfffffff0U 
                                                     & vlSelfRef.core__DOT__lsq_input[0U]));
        } else if ((5U == (7U & (vlSelfRef.core__DOT__hold_out[1U] 
                                 >> 0x0000001cU)))) {
            vlSelfRef.core__DOT__lsq_input[0U] = (4U 
                                                  | (0xfffffff0U 
                                                     & vlSelfRef.core__DOT__lsq_input[0U]));
        }
        if ((3U == (0x0000007fU & (vlSelfRef.core__DOT__hold_out[1U] 
                                   >> 0x00000010U)))) {
            vlSelfRef.core__DOT__lsq_input[0U] = (0x00001fffU 
                                                  & vlSelfRef.core__DOT__lsq_input[0U]);
            vlSelfRef.core__DOT__lsq_input[1U] = 0U;
            vlSelfRef.core__DOT__lsq_input[2U] = (0x00004000U 
                                                  & ((~ (IData)(vlSelfRef.core__DOT__stall)) 
                                                     << 0x0000000eU));
            vlSelfRef.core__DOT__lsq_input[0U] = ((0xffffe1ffU 
                                                   & vlSelfRef.core__DOT__lsq_input[0U]) 
                                                  | ((((IData)(vlSelfRef.core__DOT__stall) 
                                                       | (0U 
                                                          == 
                                                          (0x0000007fU 
                                                           & (vlSelfRef.core__DOT__hold_out[1U] 
                                                              >> 0x00000010U))))
                                                       ? 0U
                                                       : (IData)(vlSelfRef.core__DOT__ROB_entry)) 
                                                     << 9U));
            vlSelfRef.core__DOT__lsq_input[0U] = (0xfffffe0fU 
                                                  & vlSelfRef.core__DOT__lsq_input[0U]);
        } else if ((0x23U == (0x0000007fU & (vlSelfRef.core__DOT__hold_out[1U] 
                                             >> 0x00000010U)))) {
            vlSelfRef.core__DOT__lsq_input[1U] = ((0x00001fffU 
                                                   & vlSelfRef.core__DOT__lsq_input[1U]) 
                                                  | ((IData)(
                                                             ((QData)((IData)(
                                                                              (1U 
                                                                               & (~ (IData)(vlSelfRef.core__DOT__stall))))) 
                                                              << 0x00000020U)) 
                                                     << 0x0000000dU));
            vlSelfRef.core__DOT__lsq_input[2U] = (0x00007fffU 
                                                  & (((IData)(
                                                              ((QData)((IData)(
                                                                               (1U 
                                                                                & (~ (IData)(vlSelfRef.core__DOT__stall))))) 
                                                               << 0x00000020U)) 
                                                      >> 0x00000013U) 
                                                     | ((IData)(
                                                                (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ (IData)(vlSelfRef.core__DOT__stall))))) 
                                                                  << 0x00000020U) 
                                                                 >> 0x00000020U)) 
                                                        << 0x0000000dU)));
            if (((((0x0000000fU & (IData)((vlSelfRef.core__DOT__CDB_out 
                                           >> 0x00000022U))) 
                   == (IData)(vlSelfRef.core__DOT__Q_k)) 
                  & (0U != (0x0000000fU & (IData)((vlSelfRef.core__DOT__CDB_out 
                                                   >> 0x00000022U))))) 
                 & (~ (IData)(vlSelfRef.core__DOT__CDB_out)))) {
                vlSelfRef.core__DOT__lsq_input[0U] 
                    = ((0x00001fffU & vlSelfRef.core__DOT__lsq_input[0U]) 
                       | ((IData)((vlSelfRef.core__DOT__CDB_out 
                                   >> 2U)) << 0x0000000dU));
                vlSelfRef.core__DOT__lsq_input[1U] 
                    = ((0xffffe000U & vlSelfRef.core__DOT__lsq_input[1U]) 
                       | ((IData)((vlSelfRef.core__DOT__CDB_out 
                                   >> 2U)) >> 0x00000013U));
                vlSelfRef.core__DOT__lsq_input[0U] 
                    = (0xffffff0fU & vlSelfRef.core__DOT__lsq_input[0U]);
            } else if (vlSelfRef.core__DOT__rs2reg_busy) {
                if (vlSelfRef.core__DOT__rs2rob_ready) {
                    vlSelfRef.core__DOT__lsq_input[0U] 
                        = ((0x00001fffU & vlSelfRef.core__DOT__lsq_input[0U]) 
                           | (vlSelfRef.core__DOT__rs2rob_data 
                              << 0x0000000dU));
                    vlSelfRef.core__DOT__lsq_input[1U] 
                        = ((0xffffe000U & vlSelfRef.core__DOT__lsq_input[1U]) 
                           | (vlSelfRef.core__DOT__rs2rob_data 
                              >> 0x00000013U));
                    vlSelfRef.core__DOT__lsq_input[0U] 
                        = (0xffffff0fU & vlSelfRef.core__DOT__lsq_input[0U]);
                } else {
                    vlSelfRef.core__DOT__lsq_input[0U] 
                        = (0x00001fffU & vlSelfRef.core__DOT__lsq_input[0U]);
                    vlSelfRef.core__DOT__lsq_input[1U] 
                        = (0xffffe000U & vlSelfRef.core__DOT__lsq_input[1U]);
                    vlSelfRef.core__DOT__lsq_input[0U] 
                        = ((0xffffff0fU & vlSelfRef.core__DOT__lsq_input[0U]) 
                           | ((IData)(vlSelfRef.core__DOT__Q_k) 
                              << 4U));
                }
            } else {
                vlSelfRef.core__DOT__lsq_input[0U] 
                    = ((0x00001fffU & vlSelfRef.core__DOT__lsq_input[0U]) 
                       | (vlSelfRef.core__DOT__rs2reg_data 
                          << 0x0000000dU));
                vlSelfRef.core__DOT__lsq_input[1U] 
                    = ((0xffffe000U & vlSelfRef.core__DOT__lsq_input[1U]) 
                       | (vlSelfRef.core__DOT__rs2reg_data 
                          >> 0x00000013U));
                vlSelfRef.core__DOT__lsq_input[0U] 
                    = (0xffffff0fU & vlSelfRef.core__DOT__lsq_input[0U]);
            }
            vlSelfRef.core__DOT__lsq_input[0U] = ((0xffffe1ffU 
                                                   & vlSelfRef.core__DOT__lsq_input[0U]) 
                                                  | ((((IData)(vlSelfRef.core__DOT__stall) 
                                                       | (0U 
                                                          == 
                                                          (0x0000007fU 
                                                           & (vlSelfRef.core__DOT__hold_out[1U] 
                                                              >> 0x00000010U))))
                                                       ? 0U
                                                       : (IData)(vlSelfRef.core__DOT__ROB_entry)) 
                                                     << 9U));
            vlSelfRef.core__DOT__lsq_input[0U] = (0xfffffeffU 
                                                  & vlSelfRef.core__DOT__lsq_input[0U]);
        } else {
            vlSelfRef.core__DOT__lsq_input[0U] = 0U;
            vlSelfRef.core__DOT__lsq_input[1U] = 0U;
            vlSelfRef.core__DOT__lsq_input[2U] = 0U;
        }
    }
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 4U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 4U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__rs_input[0U] = ((0xffffe000U 
                                          & vlSelfRef.core__DOT__rs_input[0U]) 
                                         | ((((IData)(vlSelfRef.core__DOT__stall)
                                               ? 0U
                                               : (IData)(vlSelfRef.core__DOT__ROB_entry)) 
                                             << 9U) 
                                            | (((IData)(vlSelfRef.core__DOT__res_sched__DOT__alu_op) 
                                                << 5U) 
                                               | ((((0x33U 
                                                     == 
                                                     (0x0000007fU 
                                                      & (vlSelfRef.core__DOT__hold_out[1U] 
                                                         >> 0x00000010U)))
                                                     ? 2U
                                                     : 
                                                    ((0x00004000U 
                                                      & vlSelfRef.core__DOT__hold_out[1U])
                                                      ? 
                                                     (7U 
                                                      & (vlSelfRef.core__DOT__hold_out[1U] 
                                                         >> 0x0000001cU))
                                                      : 2U)) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((~ (IData)(vlSelfRef.core__DOT__stall)) 
                                                         << 1U)) 
                                                     | ((0x33U 
                                                         != 
                                                         (0x0000007fU 
                                                          & (vlSelfRef.core__DOT__hold_out[1U] 
                                                             >> 0x00000010U))) 
                                                        && ((1U 
                                                             & (~ 
                                                                (vlSelfRef.core__DOT__hold_out[1U] 
                                                                 >> 0x0000000eU))) 
                                                            && ((0x13U 
                                                                 != 
                                                                 (0x0000007fU 
                                                                  & (vlSelfRef.core__DOT__hold_out[1U] 
                                                                     >> 0x00000010U))) 
                                                                && ((1U 
                                                                     & (~ (IData)(vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h221b8606__0))) 
                                                                    && ((3U 
                                                                         == 
                                                                         (0x0000007fU 
                                                                          & (vlSelfRef.core__DOT__hold_out[1U] 
                                                                             >> 0x00000010U))) 
                                                                        || ((1U 
                                                                             & (~ (IData)(vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_hae399222__0))) 
                                                                            && (0x23U 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & (vlSelfRef.core__DOT__hold_out[1U] 
                                                                                >> 0x00000010U))))))))))))));
    vlSelfRef.core__DOT__rs_input[0U] = ((0x00001fffU 
                                          & vlSelfRef.core__DOT__rs_input[0U]) 
                                         | ((IData)(
                                                    (((QData)((IData)(vlSelfRef.core__DOT__res_sched__DOT__V_j)) 
                                                      << 0x00000020U) 
                                                     | (QData)((IData)(vlSelfRef.core__DOT__res_sched__DOT__V_k)))) 
                                            << 0x0000000dU));
    vlSelfRef.core__DOT__rs_input[1U] = (((IData)((
                                                   ((QData)((IData)(vlSelfRef.core__DOT__res_sched__DOT__V_j)) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.core__DOT__res_sched__DOT__V_k)))) 
                                          >> 0x00000013U) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelfRef.core__DOT__res_sched__DOT__V_j)) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(vlSelfRef.core__DOT__res_sched__DOT__V_k))) 
                                                     >> 0x00000020U)) 
                                            << 0x0000000dU));
    vlSelfRef.core__DOT__rs_input[2U] = (0x001fffffU 
                                         & (((IData)(
                                                     ((((QData)((IData)(vlSelfRef.core__DOT__res_sched__DOT__V_j)) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSelfRef.core__DOT__res_sched__DOT__V_k))) 
                                                      >> 0x00000020U)) 
                                             >> 0x00000013U) 
                                            | (((IData)(vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j) 
                                                << 0x00000011U) 
                                               | ((IData)(vlSelfRef.core__DOT__res_sched__DOT__Q_temp_k) 
                                                  << 0x0000000dU))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 5U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 5U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 6U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 6U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 7U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 7U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 8U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 8U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 9U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 9U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x0000000aU) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x0000000aU) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x0000000bU) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x0000000bU) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x0000000cU) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x0000000cU) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x0000000dU) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x0000000dU) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x0000000eU) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x0000000eU) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x0000000fU) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x0000000fU) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x00000010U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x00000010U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x00000011U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x00000011U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x00000012U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x00000012U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x00000013U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x00000013U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x00000014U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x00000014U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x00000015U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x00000015U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x00000016U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x00000016U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x00000017U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x00000017U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x00000018U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x00000018U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x00000019U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x00000019U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x0000001aU) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x0000001aU) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x0000001bU) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x0000001bU) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x0000001cU) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x0000001cU) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x0000001dU) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x0000001dU) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x0000001eU) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x0000001eU) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__carry = (1U 
                                                   & (((vlSelfRef.core__DOT__fu_bus[0U] 
                                                        & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                                       >> 0x0000001fU) 
                                                      | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in) 
                                                         & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__negative 
        = ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in) 
           ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__i1));
    vlSelfRef.core__DOT__adder_fu_1__DOT__carry = (1U 
                                                   & (((vlSelfRef.core__DOT__fu_bus[2U] 
                                                        & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                                       >> 0x0000001fU) 
                                                      | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in) 
                                                         & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__negative 
        = ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in) 
           ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__i1));
    vlSelfRef.core__DOT__adder_fu_0__DOT____VdfgRegularize_h58454f79_0_0 
        = ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__negative) 
           ^ ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in) 
              ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__carry)));
    vlSelfRef.core__DOT__adder_fu_0__DOT__s = (((((
                                                   ((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__negative) 
                                                      << 3U) 
                                                     | (((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__c_in) 
                                                         ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__i1)) 
                                                        << 2U)) 
                                                    | ((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__c_in) 
                                                         ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__i1)) 
                                                        << 1U) 
                                                       | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__c_in) 
                                                          ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__i1)))) 
                                                   << 0x0000000cU) 
                                                  | ((((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__c_in) 
                                                         ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__i1)) 
                                                        << 3U) 
                                                       | (((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__c_in) 
                                                           ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__i1)) 
                                                          << 2U)) 
                                                      | ((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__c_in) 
                                                           ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__i1)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__i1)))) 
                                                     << 8U)) 
                                                 | (((((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__c_in) 
                                                         ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__i1)) 
                                                        << 3U) 
                                                       | (((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__c_in) 
                                                           ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__i1)) 
                                                          << 2U)) 
                                                      | ((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__c_in) 
                                                           ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__i1)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__i1)))) 
                                                     << 4U) 
                                                    | (((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__c_in) 
                                                          ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__i1)) 
                                                         << 3U) 
                                                        | (((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__i1)) 
                                                           << 2U)) 
                                                       | ((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__i1)) 
                                                           << 1U) 
                                                          | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__c_in) 
                                                             ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__i1)))))) 
                                                << 0x00000010U) 
                                               | ((((((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__c_in) 
                                                        ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__i1)) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__c_in) 
                                                          ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__i1)) 
                                                         << 2U)) 
                                                     | ((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__c_in) 
                                                          ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__i1)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__c_in) 
                                                           ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__i1)))) 
                                                    << 0x0000000cU) 
                                                   | ((((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__c_in) 
                                                          ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__i1)) 
                                                         << 3U) 
                                                        | (((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__i1)) 
                                                           << 2U)) 
                                                       | ((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__i1)) 
                                                           << 1U) 
                                                          | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__c_in) 
                                                             ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__i1)))) 
                                                      << 8U)) 
                                                  | (((((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__c_in) 
                                                          ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__i1)) 
                                                         << 3U) 
                                                        | (((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__i1)) 
                                                           << 2U)) 
                                                       | ((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__i1)) 
                                                           << 1U) 
                                                          | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__c_in) 
                                                             ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__i1)))) 
                                                      << 4U) 
                                                     | (((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__c_in) 
                                                           ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__i1)) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__c_in) 
                                                             ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__i1)) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__c_in) 
                                                             ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__i1)) 
                                                            << 1U) 
                                                           | (1U 
                                                              & ((vlSelfRef.core__DOT__ALU_op 
                                                                  >> 2U) 
                                                                 ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__0__KET____DOT__addi__DOT__i1))))))));
    vlSelfRef.core__DOT__adder_fu_1__DOT____VdfgRegularize_h58454f79_0_0 
        = ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__negative) 
           ^ ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in) 
              ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__carry)));
    vlSelfRef.core__DOT__adder_fu_1__DOT__s = (((((
                                                   ((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__negative) 
                                                      << 3U) 
                                                     | (((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__c_in) 
                                                         ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__i1)) 
                                                        << 2U)) 
                                                    | ((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__c_in) 
                                                         ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__i1)) 
                                                        << 1U) 
                                                       | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__c_in) 
                                                          ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__i1)))) 
                                                   << 0x0000000cU) 
                                                  | ((((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__c_in) 
                                                         ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__i1)) 
                                                        << 3U) 
                                                       | (((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__c_in) 
                                                           ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__i1)) 
                                                          << 2U)) 
                                                      | ((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__c_in) 
                                                           ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__i1)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__i1)))) 
                                                     << 8U)) 
                                                 | (((((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__c_in) 
                                                         ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__i1)) 
                                                        << 3U) 
                                                       | (((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__c_in) 
                                                           ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__i1)) 
                                                          << 2U)) 
                                                      | ((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__c_in) 
                                                           ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__i1)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__i1)))) 
                                                     << 4U) 
                                                    | (((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__c_in) 
                                                          ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__i1)) 
                                                         << 3U) 
                                                        | (((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__i1)) 
                                                           << 2U)) 
                                                       | ((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__i1)) 
                                                           << 1U) 
                                                          | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__c_in) 
                                                             ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__i1)))))) 
                                                << 0x00000010U) 
                                               | ((((((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__c_in) 
                                                        ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__i1)) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__c_in) 
                                                          ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__i1)) 
                                                         << 2U)) 
                                                     | ((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__c_in) 
                                                          ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__i1)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__c_in) 
                                                           ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__i1)))) 
                                                    << 0x0000000cU) 
                                                   | ((((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__c_in) 
                                                          ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__i1)) 
                                                         << 3U) 
                                                        | (((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__i1)) 
                                                           << 2U)) 
                                                       | ((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__i1)) 
                                                           << 1U) 
                                                          | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__c_in) 
                                                             ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__i1)))) 
                                                      << 8U)) 
                                                  | (((((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__c_in) 
                                                          ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__i1)) 
                                                         << 3U) 
                                                        | (((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__i1)) 
                                                           << 2U)) 
                                                       | ((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__i1)) 
                                                           << 1U) 
                                                          | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__c_in) 
                                                             ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__i1)))) 
                                                      << 4U) 
                                                     | (((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__c_in) 
                                                           ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__i1)) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__c_in) 
                                                             ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__i1)) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__c_in) 
                                                             ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__i1)) 
                                                            << 1U) 
                                                           | (1U 
                                                              & ((vlSelfRef.core__DOT__ALU_op 
                                                                  >> 6U) 
                                                                 ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__0__KET____DOT__addi__DOT__i1))))))));
}

void Vcore___024root___nba_sequent__TOP__0(Vcore___024root* vlSelf);
void Vcore___024root___nba_sequent__TOP__1(Vcore___024root* vlSelf);

void Vcore___024root___eval_nba(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_nba\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcore___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        Vcore___024root___nba_sequent__TOP__1(vlSelf);
        Vcore___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void Vcore___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vcore___024root___eval_triggers__act(Vcore___024root* vlSelf);

bool Vcore___024root___eval_phase__act(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_phase__act\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcore___024root___eval_triggers__act(vlSelf);
    Vcore___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vcore___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vcore___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vcore___024root___eval_phase__nba(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_phase__nba\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vcore___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vcore___024root___eval_nba(vlSelf);
        Vcore___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vcore___024root___eval_phase__ico(Vcore___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vcore___024root___eval(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vcore___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("source/core.sv", 7, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vcore___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcore___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("source/core.sv", 7, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcore___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("source/core.sv", 7, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vcore___024root___eval_phase__act(vlSelf));
    } while (Vcore___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vcore___024root___eval_debug_assertions(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_debug_assertions\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.mem_wr_en & 0xfeU)))) {
        Verilated::overWidthError("mem_wr_en");
    }
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
}
#endif  // VL_DEBUG
