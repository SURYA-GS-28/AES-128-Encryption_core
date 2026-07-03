// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_aes_demo.h for the primary calling header

#include "Vtb_aes_demo__pch.h"
#include "Vtb_aes_demo___024root.h"

VL_ATTR_COLD void Vtb_aes_demo___024root___eval_static(Vtb_aes_demo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_aes_demo___024root___eval_final(Vtb_aes_demo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_aes_demo___024root___dump_triggers__stl(Vtb_aes_demo___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_aes_demo___024root___eval_phase__stl(Vtb_aes_demo___024root* vlSelf);

VL_ATTR_COLD void Vtb_aes_demo___024root___eval_settle(Vtb_aes_demo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_aes_demo___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("newaes_desihn_tb.v", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_aes_demo___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_aes_demo___024root___dump_triggers__stl(Vtb_aes_demo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] tb_aes_demo.dut.passkey.w)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_aes_demo___024root___stl_sequent__TOP__0(Vtb_aes_demo___024root* vlSelf);
VL_ATTR_COLD void Vtb_aes_demo___024root____Vm_traceActivitySetAll(Vtb_aes_demo___024root* vlSelf);
VL_ATTR_COLD void Vtb_aes_demo___024root___stl_sequent__TOP__1(Vtb_aes_demo___024root* vlSelf);
VL_ATTR_COLD void Vtb_aes_demo___024root___stl_comb__TOP__0(Vtb_aes_demo___024root* vlSelf);

VL_ATTR_COLD void Vtb_aes_demo___024root___eval_stl(Vtb_aes_demo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_aes_demo___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_aes_demo___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_aes_demo___024root___stl_sequent__TOP__1(vlSelf);
        Vtb_aes_demo___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_aes_demo___024root___stl_comb__TOP__0(vlSelf);
        Vtb_aes_demo___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_aes_demo___024root___stl_sequent__TOP__0(Vtb_aes_demo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[0U][0U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__key[0U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[0U][1U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__key[1U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[0U][2U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__key[2U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[0U][3U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__key[3U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__shift_out[0U] 
        = (((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__3__KET____DOT__dut__DOT__sbox_mem
             [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
               >> 0x18U)] << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__14__KET____DOT__dut__DOT__sbox_mem
                                       [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                                                  >> 0x10U))] 
                                       << 0x10U)) | 
           ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__9__KET____DOT__dut__DOT__sbox_mem
             [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                        >> 8U))] << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__4__KET____DOT__dut__DOT__sbox_mem
            [(0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U])]));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__shift_out[1U] 
        = (((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__7__KET____DOT__dut__DOT__sbox_mem
             [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
               >> 0x18U)] << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__2__KET____DOT__dut__DOT__sbox_mem
                                       [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                                                  >> 0x10U))] 
                                       << 0x10U)) | 
           ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__13__KET____DOT__dut__DOT__sbox_mem
             [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                        >> 8U))] << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__8__KET____DOT__dut__DOT__sbox_mem
            [(0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U])]));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__shift_out[2U] 
        = (((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__11__KET____DOT__dut__DOT__sbox_mem
             [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
               >> 0x18U)] << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__6__KET____DOT__dut__DOT__sbox_mem
                                       [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                                                  >> 0x10U))] 
                                       << 0x10U)) | 
           ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__1__KET____DOT__dut__DOT__sbox_mem
             [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                        >> 8U))] << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__12__KET____DOT__dut__DOT__sbox_mem
            [(0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U])]));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__shift_out[3U] 
        = (((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__15__KET____DOT__dut__DOT__sbox_mem
             [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
               >> 0x18U)] << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__10__KET____DOT__dut__DOT__sbox_mem
                                       [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                                                  >> 0x10U))] 
                                       << 0x10U)) | 
           ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__5__KET____DOT__dut__DOT__sbox_mem
             [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                        >> 8U))] << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__0__KET____DOT__dut__DOT__sbox_mem
            [(0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U])]));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__sbout[0U] 
        = (((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__3__KET____DOT__dut__DOT__sbox_mem
             [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
               >> 0x18U)] << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__2__KET____DOT__dut__DOT__sbox_mem
                                       [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                                                  >> 0x10U))] 
                                       << 0x10U)) | 
           ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__1__KET____DOT__dut__DOT__sbox_mem
             [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                        >> 8U))] << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__0__KET____DOT__dut__DOT__sbox_mem
            [(0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U])]));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__sbout[1U] 
        = (((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__7__KET____DOT__dut__DOT__sbox_mem
             [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
               >> 0x18U)] << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__6__KET____DOT__dut__DOT__sbox_mem
                                       [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                                                  >> 0x10U))] 
                                       << 0x10U)) | 
           ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__5__KET____DOT__dut__DOT__sbox_mem
             [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                        >> 8U))] << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__4__KET____DOT__dut__DOT__sbox_mem
            [(0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U])]));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__sbout[2U] 
        = (((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__11__KET____DOT__dut__DOT__sbox_mem
             [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
               >> 0x18U)] << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__10__KET____DOT__dut__DOT__sbox_mem
                                       [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                                                  >> 0x10U))] 
                                       << 0x10U)) | 
           ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__9__KET____DOT__dut__DOT__sbox_mem
             [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                        >> 8U))] << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__8__KET____DOT__dut__DOT__sbox_mem
            [(0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U])]));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__sbout[3U] 
        = (((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__15__KET____DOT__dut__DOT__sbox_mem
             [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
               >> 0x18U)] << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__14__KET____DOT__dut__DOT__sbox_mem
                                       [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                                                  >> 0x10U))] 
                                       << 0x10U)) | 
           ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__13__KET____DOT__dut__DOT__sbox_mem
             [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                        >> 8U))] << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__12__KET____DOT__dut__DOT__sbox_mem
            [(0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U])]));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__s0 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__15__KET____DOT__dut__DOT__sbox_mem
        [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
          >> 0x18U)];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__s1 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__10__KET____DOT__dut__DOT__sbox_mem
        [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                   >> 0x10U))];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__s2 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__5__KET____DOT__dut__DOT__sbox_mem
        [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                   >> 8U))];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__s3 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__0__KET____DOT__dut__DOT__sbox_mem
        [(0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U])];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__s0 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__11__KET____DOT__dut__DOT__sbox_mem
        [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
          >> 0x18U)];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__s1 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__6__KET____DOT__dut__DOT__sbox_mem
        [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                   >> 0x10U))];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__s2 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__1__KET____DOT__dut__DOT__sbox_mem
        [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                   >> 8U))];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__s3 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__12__KET____DOT__dut__DOT__sbox_mem
        [(0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U])];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__s0 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__7__KET____DOT__dut__DOT__sbox_mem
        [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
          >> 0x18U)];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__s1 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__2__KET____DOT__dut__DOT__sbox_mem
        [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                   >> 0x10U))];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__s2 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__13__KET____DOT__dut__DOT__sbox_mem
        [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                   >> 8U))];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__s3 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__8__KET____DOT__dut__DOT__sbox_mem
        [(0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U])];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__s0 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__3__KET____DOT__dut__DOT__sbox_mem
        [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
          >> 0x18U)];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__s1 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__14__KET____DOT__dut__DOT__sbox_mem
        [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                   >> 0x10U))];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__s2 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__9__KET____DOT__dut__DOT__sbox_mem
        [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                   >> 8U))];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__s3 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__4__KET____DOT__dut__DOT__sbox_mem
        [(0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U])];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__key[3U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[1U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__key[2U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[2U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__key[1U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[3U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__key[0U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out0 
        = (((([&]() {
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__0__a 
                            = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__s0;
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__0__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__0__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__0__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__0__Vfuncout)) 
             ^ ([&]() {
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x3__1__b 
                            = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__s1;
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x3__1__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__2__a 
                                        = vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x3__1__b;
                                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__2__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__2__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__2__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__2__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x3__1__b));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x3__1__Vfuncout))) 
            ^ (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__s2)) 
           ^ (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__s3));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out1 
        = ((((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__s0) 
             ^ ([&]() {
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__3__a 
                            = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__s1;
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__3__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__3__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__3__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__3__Vfuncout))) 
            ^ ([&]() {
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x3__4__b 
                        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__s2;
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x3__4__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__5__a 
                                    = vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x3__4__b;
                                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__5__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__5__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__5__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__5__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x3__4__b));
                }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x3__4__Vfuncout))) 
           ^ (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__s3));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out2 
        = ((((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__s0) 
             ^ (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__s1)) 
            ^ ([&]() {
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__6__a 
                        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__s2;
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__6__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__6__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__6__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__6__Vfuncout))) 
           ^ ([&]() {
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x3__7__b 
                    = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__s3;
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x3__7__Vfuncout 
                    = (([&]() {
                            vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__8__a 
                                = vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x3__7__b;
                            vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__8__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__8__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__8__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__8__Vfuncout)) 
                       ^ (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x3__7__b));
            }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x3__7__Vfuncout)));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out3 
        = (((([&]() {
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x3__9__b 
                            = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__s0;
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x3__9__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__10__a 
                                        = vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x3__9__b;
                                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__10__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__10__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__10__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__10__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x3__9__b));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x3__9__Vfuncout)) 
             ^ (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__s1)) 
            ^ (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__s2)) 
           ^ ([&]() {
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__11__a 
                    = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__s3;
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__11__Vfuncout 
                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__11__a), 1U) 
                                ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__11__a))
                                    ? 0x1bU : 0U)));
            }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__11__Vfuncout)));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__out0 
        = (((([&]() {
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__12__a 
                            = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__s0;
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__12__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__12__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__12__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__12__Vfuncout)) 
             ^ ([&]() {
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x3__13__b 
                            = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__s1;
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x3__13__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__14__a 
                                        = vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x3__13__b;
                                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__14__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__14__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__14__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__14__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x3__13__b));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x3__13__Vfuncout))) 
            ^ (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__s2)) 
           ^ (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__s3));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__out1 
        = ((((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__s0) 
             ^ ([&]() {
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__15__a 
                            = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__s1;
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__15__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__15__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__15__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__15__Vfuncout))) 
            ^ ([&]() {
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x3__16__b 
                        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__s2;
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x3__16__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__17__a 
                                    = vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x3__16__b;
                                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__17__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__17__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__17__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__17__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x3__16__b));
                }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x3__16__Vfuncout))) 
           ^ (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__s3));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__out2 
        = ((((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__s0) 
             ^ (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__s1)) 
            ^ ([&]() {
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__18__a 
                        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__s2;
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__18__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__18__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__18__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__18__Vfuncout))) 
           ^ ([&]() {
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x3__19__b 
                    = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__s3;
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x3__19__Vfuncout 
                    = (([&]() {
                            vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__20__a 
                                = vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x3__19__b;
                            vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__20__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__20__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__20__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__20__Vfuncout)) 
                       ^ (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x3__19__b));
            }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x3__19__Vfuncout)));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__out3 
        = (((([&]() {
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x3__21__b 
                            = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__s0;
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x3__21__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__22__a 
                                        = vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x3__21__b;
                                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__22__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__22__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__22__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__22__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x3__21__b));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x3__21__Vfuncout)) 
             ^ (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__s1)) 
            ^ (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__s2)) 
           ^ ([&]() {
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__23__a 
                    = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__s3;
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__23__Vfuncout 
                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__23__a), 1U) 
                                ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__23__a))
                                    ? 0x1bU : 0U)));
            }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__23__Vfuncout)));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out0 
        = (((([&]() {
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__24__a 
                            = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__s0;
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__24__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__24__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__24__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__24__Vfuncout)) 
             ^ ([&]() {
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x3__25__b 
                            = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__s1;
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x3__25__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__26__a 
                                        = vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x3__25__b;
                                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__26__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__26__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__26__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__26__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x3__25__b));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x3__25__Vfuncout))) 
            ^ (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__s2)) 
           ^ (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__s3));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out1 
        = ((((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__s0) 
             ^ ([&]() {
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__27__a 
                            = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__s1;
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__27__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__27__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__27__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__27__Vfuncout))) 
            ^ ([&]() {
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x3__28__b 
                        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__s2;
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x3__28__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__29__a 
                                    = vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x3__28__b;
                                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__29__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__29__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__29__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__29__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x3__28__b));
                }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x3__28__Vfuncout))) 
           ^ (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__s3));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out2 
        = ((((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__s0) 
             ^ (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__s1)) 
            ^ ([&]() {
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__30__a 
                        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__s2;
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__30__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__30__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__30__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__30__Vfuncout))) 
           ^ ([&]() {
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x3__31__b 
                    = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__s3;
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x3__31__Vfuncout 
                    = (([&]() {
                            vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__32__a 
                                = vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x3__31__b;
                            vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__32__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__32__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__32__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__32__Vfuncout)) 
                       ^ (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x3__31__b));
            }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x3__31__Vfuncout)));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out3 
        = (((([&]() {
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x3__33__b 
                            = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__s0;
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x3__33__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__34__a 
                                        = vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x3__33__b;
                                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__34__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__34__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__34__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__34__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x3__33__b));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x3__33__Vfuncout)) 
             ^ (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__s1)) 
            ^ (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__s2)) 
           ^ ([&]() {
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__35__a 
                    = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__s3;
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__35__Vfuncout 
                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__35__a), 1U) 
                                ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__35__a))
                                    ? 0x1bU : 0U)));
            }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__35__Vfuncout)));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out0 
        = (((([&]() {
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__36__a 
                            = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__s0;
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__36__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__36__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__36__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__36__Vfuncout)) 
             ^ ([&]() {
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x3__37__b 
                            = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__s1;
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x3__37__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__38__a 
                                        = vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x3__37__b;
                                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__38__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__38__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__38__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__38__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x3__37__b));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x3__37__Vfuncout))) 
            ^ (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__s2)) 
           ^ (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__s3));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out1 
        = ((((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__s0) 
             ^ ([&]() {
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__39__a 
                            = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__s1;
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__39__Vfuncout 
                            = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__39__a), 1U) 
                                        ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__39__a))
                                            ? 0x1bU
                                            : 0U)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__39__Vfuncout))) 
            ^ ([&]() {
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x3__40__b 
                        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__s2;
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x3__40__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__41__a 
                                    = vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x3__40__b;
                                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__41__Vfuncout 
                                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__41__a), 1U) 
                                                ^ (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__41__a))
                                                    ? 0x1bU
                                                    : 0U)));
                            }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__41__Vfuncout)) 
                           ^ (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x3__40__b));
                }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x3__40__Vfuncout))) 
           ^ (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__s3));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out2 
        = ((((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__s0) 
             ^ (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__s1)) 
            ^ ([&]() {
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__42__a 
                        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__s2;
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__42__Vfuncout 
                        = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__42__a), 1U) 
                                    ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__42__a))
                                        ? 0x1bU : 0U)));
                }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__42__Vfuncout))) 
           ^ ([&]() {
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x3__43__b 
                    = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__s3;
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x3__43__Vfuncout 
                    = (([&]() {
                            vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__44__a 
                                = vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x3__43__b;
                            vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__44__Vfuncout 
                                = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__44__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__44__a))
                                                ? 0x1bU
                                                : 0U)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__44__Vfuncout)) 
                       ^ (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x3__43__b));
            }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x3__43__Vfuncout)));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out3 
        = (((([&]() {
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x3__45__b 
                            = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__s0;
                        vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x3__45__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__46__a 
                                        = vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x3__45__b;
                                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__46__Vfuncout 
                                        = (0xffU & 
                                           (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__46__a), 1U) 
                                            ^ ((0x80U 
                                                & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__46__a))
                                                ? 0x1bU
                                                : 0U)));
                                }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__46__Vfuncout)) 
                               ^ (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x3__45__b));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x3__45__Vfuncout)) 
             ^ (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__s1)) 
            ^ (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__s2)) 
           ^ ([&]() {
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__47__a 
                    = vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__s3;
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__47__Vfuncout 
                    = (0xffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__47__a), 1U) 
                                ^ ((0x80U & (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__47__a))
                                    ? 0x1bU : 0U)));
            }(), (IData)(vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__47__Vfuncout)));
}

VL_ATTR_COLD void Vtb_aes_demo___024root___stl_sequent__TOP__1(Vtb_aes_demo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root___stl_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[5U] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [4U] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [1U]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[6U] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [5U] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [2U]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[7U] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [6U] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [3U]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[9U] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [8U] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [5U]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0xaU] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [9U] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [6U]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0xbU] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0xaU] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [7U]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0xdU] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0xcU] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [9U]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0xeU] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0xdU] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0xaU]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0xfU] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0xeU] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0xbU]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0x11U] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x10U] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0xdU]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0x12U] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x11U] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0xeU]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0x13U] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x12U] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0xfU]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0x15U] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x14U] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x11U]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0x16U] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x15U] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x12U]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0x17U] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x16U] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x13U]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0x19U] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x18U] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x15U]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0x1aU] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x19U] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x16U]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0x1bU] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x1aU] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x17U]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0x1dU] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x1cU] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x19U]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0x1eU] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x1dU] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x1aU]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0x1fU] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x1eU] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x1bU]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0x21U] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x20U] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x1dU]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0x22U] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x21U] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x1eU]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0x23U] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x22U] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x1fU]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0x25U] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x24U] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x21U]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0x26U] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x25U] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x22U]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0x27U] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x26U] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x23U]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0x29U] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x28U] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x25U]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0x2aU] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x29U] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x26U]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0x2bU] 
        = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x2aU] ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
           [0x27U]);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b3 
        = (([&]() {
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__48__x 
                    = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                    [3U];
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__48__Vfuncout 
                    = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__48__x 
                        << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__48__x 
                                  >> 0x18U));
            }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__48__Vfuncout) 
           >> 0x18U);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b2 
        = (0xffU & (([&]() {
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__49__x 
                        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                        [3U];
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__49__Vfuncout 
                        = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__49__x 
                            << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__49__x 
                                      >> 0x18U));
                }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__49__Vfuncout) 
                    >> 0x10U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b1 
        = (0xffU & (([&]() {
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__50__x 
                        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                        [3U];
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__50__Vfuncout 
                        = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__50__x 
                            << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__50__x 
                                      >> 0x18U));
                }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__50__Vfuncout) 
                    >> 8U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b0 
        = (0xffU & ([&]() {
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__51__x 
                    = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                    [3U];
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__51__Vfuncout 
                    = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__51__x 
                        << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__51__x 
                                  >> 0x18U));
            }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__51__Vfuncout));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b3 
        = (([&]() {
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__53__x 
                    = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                    [7U];
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__53__Vfuncout 
                    = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__53__x 
                        << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__53__x 
                                  >> 0x18U));
            }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__53__Vfuncout) 
           >> 0x18U);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b2 
        = (0xffU & (([&]() {
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__54__x 
                        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                        [7U];
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__54__Vfuncout 
                        = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__54__x 
                            << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__54__x 
                                      >> 0x18U));
                }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__54__Vfuncout) 
                    >> 0x10U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b1 
        = (0xffU & (([&]() {
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__55__x 
                        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                        [7U];
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__55__Vfuncout 
                        = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__55__x 
                            << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__55__x 
                                      >> 0x18U));
                }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__55__Vfuncout) 
                    >> 8U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b0 
        = (0xffU & ([&]() {
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__56__x 
                    = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                    [7U];
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__56__Vfuncout 
                    = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__56__x 
                        << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__56__x 
                                  >> 0x18U));
            }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__56__Vfuncout));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b3 
        = (([&]() {
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__58__x 
                    = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                    [0xbU];
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__58__Vfuncout 
                    = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__58__x 
                        << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__58__x 
                                  >> 0x18U));
            }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__58__Vfuncout) 
           >> 0x18U);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b2 
        = (0xffU & (([&]() {
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__59__x 
                        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                        [0xbU];
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__59__Vfuncout 
                        = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__59__x 
                            << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__59__x 
                                      >> 0x18U));
                }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__59__Vfuncout) 
                    >> 0x10U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b1 
        = (0xffU & (([&]() {
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__60__x 
                        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                        [0xbU];
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__60__Vfuncout 
                        = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__60__x 
                            << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__60__x 
                                      >> 0x18U));
                }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__60__Vfuncout) 
                    >> 8U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b0 
        = (0xffU & ([&]() {
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__61__x 
                    = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                    [0xbU];
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__61__Vfuncout 
                    = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__61__x 
                        << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__61__x 
                                  >> 0x18U));
            }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__61__Vfuncout));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b3 
        = (([&]() {
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__63__x 
                    = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                    [0xfU];
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__63__Vfuncout 
                    = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__63__x 
                        << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__63__x 
                                  >> 0x18U));
            }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__63__Vfuncout) 
           >> 0x18U);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b2 
        = (0xffU & (([&]() {
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__64__x 
                        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                        [0xfU];
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__64__Vfuncout 
                        = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__64__x 
                            << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__64__x 
                                      >> 0x18U));
                }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__64__Vfuncout) 
                    >> 0x10U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b1 
        = (0xffU & (([&]() {
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__65__x 
                        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                        [0xfU];
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__65__Vfuncout 
                        = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__65__x 
                            << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__65__x 
                                      >> 0x18U));
                }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__65__Vfuncout) 
                    >> 8U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b0 
        = (0xffU & ([&]() {
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__66__x 
                    = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                    [0xfU];
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__66__Vfuncout 
                    = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__66__x 
                        << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__66__x 
                                  >> 0x18U));
            }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__66__Vfuncout));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b3 
        = (([&]() {
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__68__x 
                    = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                    [0x13U];
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__68__Vfuncout 
                    = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__68__x 
                        << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__68__x 
                                  >> 0x18U));
            }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__68__Vfuncout) 
           >> 0x18U);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b2 
        = (0xffU & (([&]() {
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__69__x 
                        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                        [0x13U];
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__69__Vfuncout 
                        = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__69__x 
                            << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__69__x 
                                      >> 0x18U));
                }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__69__Vfuncout) 
                    >> 0x10U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b1 
        = (0xffU & (([&]() {
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__70__x 
                        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                        [0x13U];
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__70__Vfuncout 
                        = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__70__x 
                            << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__70__x 
                                      >> 0x18U));
                }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__70__Vfuncout) 
                    >> 8U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b0 
        = (0xffU & ([&]() {
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__71__x 
                    = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                    [0x13U];
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__71__Vfuncout 
                    = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__71__x 
                        << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__71__x 
                                  >> 0x18U));
            }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__71__Vfuncout));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b3 
        = (([&]() {
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__73__x 
                    = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                    [0x17U];
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__73__Vfuncout 
                    = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__73__x 
                        << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__73__x 
                                  >> 0x18U));
            }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__73__Vfuncout) 
           >> 0x18U);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b2 
        = (0xffU & (([&]() {
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__74__x 
                        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                        [0x17U];
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__74__Vfuncout 
                        = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__74__x 
                            << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__74__x 
                                      >> 0x18U));
                }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__74__Vfuncout) 
                    >> 0x10U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b1 
        = (0xffU & (([&]() {
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__75__x 
                        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                        [0x17U];
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__75__Vfuncout 
                        = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__75__x 
                            << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__75__x 
                                      >> 0x18U));
                }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__75__Vfuncout) 
                    >> 8U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b0 
        = (0xffU & ([&]() {
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__76__x 
                    = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                    [0x17U];
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__76__Vfuncout 
                    = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__76__x 
                        << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__76__x 
                                  >> 0x18U));
            }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__76__Vfuncout));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b3 
        = (([&]() {
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__78__x 
                    = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                    [0x1bU];
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__78__Vfuncout 
                    = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__78__x 
                        << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__78__x 
                                  >> 0x18U));
            }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__78__Vfuncout) 
           >> 0x18U);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b2 
        = (0xffU & (([&]() {
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__79__x 
                        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                        [0x1bU];
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__79__Vfuncout 
                        = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__79__x 
                            << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__79__x 
                                      >> 0x18U));
                }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__79__Vfuncout) 
                    >> 0x10U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b1 
        = (0xffU & (([&]() {
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__80__x 
                        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                        [0x1bU];
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__80__Vfuncout 
                        = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__80__x 
                            << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__80__x 
                                      >> 0x18U));
                }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__80__Vfuncout) 
                    >> 8U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b0 
        = (0xffU & ([&]() {
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__81__x 
                    = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                    [0x1bU];
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__81__Vfuncout 
                    = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__81__x 
                        << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__81__x 
                                  >> 0x18U));
            }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__81__Vfuncout));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b3 
        = (([&]() {
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__83__x 
                    = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                    [0x1fU];
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__83__Vfuncout 
                    = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__83__x 
                        << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__83__x 
                                  >> 0x18U));
            }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__83__Vfuncout) 
           >> 0x18U);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b2 
        = (0xffU & (([&]() {
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__84__x 
                        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                        [0x1fU];
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__84__Vfuncout 
                        = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__84__x 
                            << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__84__x 
                                      >> 0x18U));
                }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__84__Vfuncout) 
                    >> 0x10U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b1 
        = (0xffU & (([&]() {
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__85__x 
                        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                        [0x1fU];
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__85__Vfuncout 
                        = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__85__x 
                            << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__85__x 
                                      >> 0x18U));
                }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__85__Vfuncout) 
                    >> 8U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b0 
        = (0xffU & ([&]() {
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__86__x 
                    = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                    [0x1fU];
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__86__Vfuncout 
                    = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__86__x 
                        << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__86__x 
                                  >> 0x18U));
            }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__86__Vfuncout));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b3 
        = (([&]() {
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__88__x 
                    = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                    [0x23U];
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__88__Vfuncout 
                    = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__88__x 
                        << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__88__x 
                                  >> 0x18U));
            }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__88__Vfuncout) 
           >> 0x18U);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b2 
        = (0xffU & (([&]() {
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__89__x 
                        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                        [0x23U];
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__89__Vfuncout 
                        = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__89__x 
                            << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__89__x 
                                      >> 0x18U));
                }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__89__Vfuncout) 
                    >> 0x10U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b1 
        = (0xffU & (([&]() {
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__90__x 
                        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                        [0x23U];
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__90__Vfuncout 
                        = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__90__x 
                            << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__90__x 
                                      >> 0x18U));
                }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__90__Vfuncout) 
                    >> 8U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b0 
        = (0xffU & ([&]() {
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__91__x 
                    = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                    [0x23U];
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__91__Vfuncout 
                    = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__91__x 
                        << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__91__x 
                                  >> 0x18U));
            }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__91__Vfuncout));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b3 
        = (([&]() {
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__93__x 
                    = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                    [0x27U];
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__93__Vfuncout 
                    = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__93__x 
                        << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__93__x 
                                  >> 0x18U));
            }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__93__Vfuncout) 
           >> 0x18U);
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b2 
        = (0xffU & (([&]() {
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__94__x 
                        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                        [0x27U];
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__94__Vfuncout 
                        = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__94__x 
                            << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__94__x 
                                      >> 0x18U));
                }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__94__Vfuncout) 
                    >> 0x10U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b1 
        = (0xffU & (([&]() {
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__95__x 
                        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                        [0x27U];
                    vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__95__Vfuncout 
                        = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__95__x 
                            << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__95__x 
                                      >> 0x18U));
                }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__95__Vfuncout) 
                    >> 8U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b0 
        = (0xffU & ([&]() {
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__96__x 
                    = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                    [0x27U];
                vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__96__Vfuncout 
                    = ((vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__96__x 
                        << 8U) | (vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__96__x 
                                  >> 0x18U));
            }(), vlSelfRef.__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__96__Vfuncout));
}

VL_ATTR_COLD void Vtb_aes_demo___024root___stl_comb__TOP__0(Vtb_aes_demo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root___stl_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[4U] 
        = (0x1000000U ^ (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                         [0U] ^ (((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                   [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b3] 
                                   << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b2] 
                                                << 0x10U)) 
                                 | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                     [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b1] 
                                     << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                    [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b0]))));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[8U] 
        = (0x2000000U ^ (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                         [4U] ^ (((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                   [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b3] 
                                   << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b2] 
                                                << 0x10U)) 
                                 | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                     [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b1] 
                                     << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                    [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b0]))));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0xcU] 
        = (0x4000000U ^ (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                         [8U] ^ (((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                   [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b3] 
                                   << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b2] 
                                                << 0x10U)) 
                                 | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                     [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b1] 
                                     << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                    [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b0]))));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0x10U] 
        = (0x8000000U ^ (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                         [0xcU] ^ (((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                     [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b3] 
                                     << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                                  [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b2] 
                                                  << 0x10U)) 
                                   | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                       [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b1] 
                                       << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                      [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b0]))));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0x14U] 
        = (0x10000000U ^ (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                          [0x10U] ^ (((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                       [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b3] 
                                       << 0x18U) | 
                                      (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                       [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b2] 
                                       << 0x10U)) | 
                                     ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                       [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b1] 
                                       << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                      [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b0]))));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0x18U] 
        = (0x20000000U ^ (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                          [0x14U] ^ (((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                       [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b3] 
                                       << 0x18U) | 
                                      (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                       [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b2] 
                                       << 0x10U)) | 
                                     ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                       [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b1] 
                                       << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                      [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b0]))));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0x1cU] 
        = (0x40000000U ^ (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                          [0x18U] ^ (((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                       [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b3] 
                                       << 0x18U) | 
                                      (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                       [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b2] 
                                       << 0x10U)) | 
                                     ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                       [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b1] 
                                       << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                      [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b0]))));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0x20U] 
        = (0x80000000U ^ (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                          [0x1cU] ^ (((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                       [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b3] 
                                       << 0x18U) | 
                                      (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                       [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b2] 
                                       << 0x10U)) | 
                                     ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                       [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b1] 
                                       << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                      [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b0]))));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0x24U] 
        = (0x1b000000U ^ (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                          [0x20U] ^ (((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                       [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b3] 
                                       << 0x18U) | 
                                      (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                       [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b2] 
                                       << 0x10U)) | 
                                     ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                       [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b1] 
                                       << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                      [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b0]))));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0x28U] 
        = (0x36000000U ^ (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                          [0x24U] ^ (((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                       [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b3] 
                                       << 0x18U) | 
                                      (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                       [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b2] 
                                       << 0x10U)) | 
                                     ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                       [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b1] 
                                       << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                      [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b0]))));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__key[0U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[1U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__key[1U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[2U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__key[2U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[3U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__key[3U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[4U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                    [6U])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                     [7U]))));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[5U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                     [6U])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                      [7U]))) >> 0x20U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[6U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [5U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[7U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                    [0xbU])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                     [4U]))));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[8U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                     [0xbU])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                      [4U]))) >> 0x20U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[9U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0xaU];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0xaU] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                    [8U])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                     [9U]))));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0xbU] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                     [8U])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                      [9U]))) >> 0x20U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0xcU] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0xfU];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0xdU] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                    [0xdU])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                     [0xeU]))));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0xeU] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                     [0xdU])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                      [0xeU]))) >> 0x20U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0xfU] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0xcU];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0x10U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                    [0x12U])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                     [0x13U]))));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0x11U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                     [0x12U])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                      [0x13U]))) >> 0x20U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0x12U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x11U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0x13U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                    [0x17U])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                     [0x10U]))));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0x14U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                     [0x17U])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                      [0x10U]))) >> 0x20U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0x15U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x16U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0x16U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                    [0x14U])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                     [0x15U]))));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0x17U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                     [0x14U])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                      [0x15U]))) >> 0x20U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0x18U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x1bU];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0x19U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                    [0x19U])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                     [0x1aU]))));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0x1aU] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                     [0x19U])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                      [0x1aU]))) >> 0x20U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0x1bU] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x18U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0x1cU] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                    [0x1eU])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                     [0x1fU]))));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0x1dU] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                     [0x1eU])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                      [0x1fU]))) >> 0x20U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0x1eU] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x1dU];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0x1fU] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                    [0x23U])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                     [0x1cU]))));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0x20U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                     [0x23U])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                      [0x1cU]))) >> 0x20U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0x21U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x22U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0x22U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                    [0x20U])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                     [0x21U]))));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0x23U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                     [0x20U])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                      [0x21U]))) >> 0x20U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0x24U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x27U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0x25U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                    [0x25U])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                     [0x26U]))));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0x26U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                     [0x25U])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                      [0x26U]))) >> 0x20U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0x27U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x24U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0x28U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                    [0x2aU])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                     [0x2bU]))));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0x29U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                     [0x2aU])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                      [0x2bU]))) >> 0x20U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0x2aU] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                    [0x28U])) << 0x20U) 
                   | (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                     [0x29U]))));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw[0x2bU] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                     [0x28U])) << 0x20U) 
                    | (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
                                      [0x29U]))) >> 0x20U));
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[1U][0U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [7U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[1U][1U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [6U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[1U][2U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [5U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[1U][3U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [4U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[2U][0U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0xbU];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[2U][1U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0xaU];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[2U][2U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [9U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[2U][3U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [8U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[3U][0U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0xfU];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[3U][1U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0xeU];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[3U][2U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0xdU];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[3U][3U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0xcU];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[4U][0U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x13U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[4U][1U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x12U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[4U][2U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x11U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[4U][3U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x10U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[5U][0U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x17U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[5U][1U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x16U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[5U][2U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x15U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[5U][3U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x14U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[6U][0U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x1bU];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[6U][1U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x1aU];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[6U][2U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x19U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[6U][3U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x18U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[7U][0U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x1fU];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[7U][1U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x1eU];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[7U][2U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x1dU];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[7U][3U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x1cU];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[8U][0U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x23U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[8U][1U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x22U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[8U][2U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x21U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[8U][3U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x20U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[9U][0U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x27U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[9U][1U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x26U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[9U][2U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x25U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[9U][3U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x24U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[0xaU][0U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x2bU];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[0xaU][1U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x2aU];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[0xaU][2U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x29U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[0xaU][3U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w
        [0x28U];
}

VL_ATTR_COLD void Vtb_aes_demo___024root___eval_triggers__stl(Vtb_aes_demo___024root* vlSelf);

VL_ATTR_COLD bool Vtb_aes_demo___024root___eval_phase__stl(Vtb_aes_demo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_aes_demo___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_aes_demo___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_aes_demo___024root___dump_triggers__act(Vtb_aes_demo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] tb_aes_demo.dut.passkey.w)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_aes_demo.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_aes_demo___024root___dump_triggers__nba(Vtb_aes_demo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] tb_aes_demo.dut.passkey.w)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_aes_demo.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_aes_demo___024root____Vm_traceActivitySetAll(Vtb_aes_demo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vtb_aes_demo___024root___ctor_var_reset(Vtb_aes_demo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_aes_demo__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_aes_demo__DOT__start = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->tb_aes_demo__DOT__plain_txt);
    vlSelf->tb_aes_demo__DOT__done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->tb_aes_demo__DOT__cipher_txt);
    vlSelf->tb_aes_demo__DOT__count = VL_RAND_RESET_I(32);
    vlSelf->tb_aes_demo__DOT__start_time = VL_RAND_RESET_I(32);
    vlSelf->tb_aes_demo__DOT__dut__DOT__ps = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, vlSelf->tb_aes_demo__DOT__dut__DOT__state);
    VL_RAND_RESET_W(128, vlSelf->tb_aes_demo__DOT__dut__DOT__key);
    VL_RAND_RESET_W(128, vlSelf->tb_aes_demo__DOT__dut__DOT__sbout);
    VL_RAND_RESET_W(128, vlSelf->tb_aes_demo__DOT__dut__DOT__shift_out);
    VL_RAND_RESET_W(1408, vlSelf->tb_aes_demo__DOT__dut__DOT__r_key_raw);
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->tb_aes_demo__DOT__dut__DOT__round_key[__Vi0]);
    }
    vlSelf->tb_aes_demo__DOT__dut__DOT__round = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__0__KET____DOT__dut__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__1__KET____DOT__dut__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__2__KET____DOT__dut__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__3__KET____DOT__dut__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__4__KET____DOT__dut__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__5__KET____DOT__dut__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__6__KET____DOT__dut__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__7__KET____DOT__dut__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__8__KET____DOT__dut__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__9__KET____DOT__dut__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__10__KET____DOT__dut__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__11__KET____DOT__dut__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__12__KET____DOT__dut__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__13__KET____DOT__dut__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__14__KET____DOT__dut__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__15__KET____DOT__dut__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_aes_demo__DOT__dut__DOT__m0__DOT__s0 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m0__DOT__s1 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m0__DOT__s2 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m0__DOT__s3 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m0__DOT__out0 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m0__DOT__out1 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m0__DOT__out2 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m0__DOT__out3 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m1__DOT__s0 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m1__DOT__s1 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m1__DOT__s2 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m1__DOT__s3 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m1__DOT__out0 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m1__DOT__out1 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m1__DOT__out2 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m1__DOT__out3 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m2__DOT__s0 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m2__DOT__s1 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m2__DOT__s2 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m2__DOT__s3 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m2__DOT__out0 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m2__DOT__out1 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m2__DOT__out2 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m2__DOT__out3 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m3__DOT__s0 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m3__DOT__s1 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m3__DOT__s2 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m3__DOT__s3 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m3__DOT__out0 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m3__DOT__out1 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m3__DOT__out2 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__m3__DOT__out3 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 44; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b0 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b1 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b2 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b3 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b0 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b1 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b2 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b3 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b0 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b1 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b2 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b3 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b0 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b1 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b2 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b3 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b0 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b1 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b2 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b3 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b0 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b1 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b2 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b3 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b0 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b1 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b2 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b3 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b0 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b1 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b2 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b3 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b0 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b1 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b2 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b3 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b0 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b1 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b2 = VL_RAND_RESET_I(8);
    vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b3 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__0__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__0__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x3__1__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x3__1__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__2__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__2__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__3__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__3__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x3__4__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x3__4__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__5__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__5__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__6__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__6__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x3__7__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x3__7__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__8__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__8__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x3__9__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x3__9__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__10__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__10__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__11__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m0__DOT__x2__11__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__12__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__12__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x3__13__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x3__13__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__14__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__14__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__15__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__15__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x3__16__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x3__16__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__17__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__17__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__18__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__18__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x3__19__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x3__19__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__20__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__20__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x3__21__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x3__21__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__22__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__22__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__23__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m1__DOT__x2__23__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__24__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__24__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x3__25__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x3__25__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__26__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__26__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__27__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__27__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x3__28__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x3__28__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__29__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__29__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__30__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__30__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x3__31__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x3__31__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__32__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__32__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x3__33__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x3__33__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__34__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__34__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__35__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m2__DOT__x2__35__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__36__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__36__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x3__37__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x3__37__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__38__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__38__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__39__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__39__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x3__40__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x3__40__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__41__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__41__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__42__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__42__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x3__43__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x3__43__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__44__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__44__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x3__45__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x3__45__b = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__46__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__46__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__47__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__m3__DOT__x2__47__a = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__48__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__48__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__49__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__49__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__50__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__50__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__51__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__51__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__53__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__53__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__54__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__54__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__55__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__55__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__56__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__56__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__58__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__58__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__59__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__59__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__60__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__60__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__61__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__61__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__63__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__63__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__64__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__64__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__65__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__65__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__66__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__66__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__68__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__68__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__69__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__69__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__70__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__70__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__71__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__71__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__73__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__73__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__74__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__74__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__75__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__75__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__76__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__76__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__78__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__78__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__79__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__79__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__80__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__80__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__81__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__81__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__83__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__83__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__84__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__84__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__85__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__85__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__86__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__86__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__88__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__88__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__89__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__89__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__90__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__90__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__91__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__91__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__93__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__93__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__94__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__94__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__95__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__95__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__96__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_aes_demo__DOT__dut__DOT__passkey__DOT__RotWord__96__x = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 44; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_aes_demo__DOT__dut__DOT__passkey__DOT__w__0[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 44; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__tb_aes_demo__DOT__dut__DOT__passkey__DOT__w__1[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_aes_demo__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
