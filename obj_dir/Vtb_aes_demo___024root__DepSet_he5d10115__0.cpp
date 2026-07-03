// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_aes_demo.h for the primary calling header

#include "Vtb_aes_demo__pch.h"
#include "Vtb_aes_demo___024root.h"

VL_ATTR_COLD void Vtb_aes_demo___024root___eval_initial__TOP(Vtb_aes_demo___024root* vlSelf);
VlCoroutine Vtb_aes_demo___024root___eval_initial__TOP__Vtiming__0(Vtb_aes_demo___024root* vlSelf);
VlCoroutine Vtb_aes_demo___024root___eval_initial__TOP__Vtiming__1(Vtb_aes_demo___024root* vlSelf);
VlCoroutine Vtb_aes_demo___024root___eval_initial__TOP__Vtiming__2(Vtb_aes_demo___024root* vlSelf);

void Vtb_aes_demo___024root___eval_initial(Vtb_aes_demo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_aes_demo___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_aes_demo___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_aes_demo___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_aes_demo___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_aes_demo__DOT__dut__DOT__passkey__DOT__w__0 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_aes_demo__DOT__dut__DOT__passkey__DOT__w__1 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_aes_demo__DOT__clk__0 
        = vlSelfRef.tb_aes_demo__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_aes_demo___024root___eval_initial__TOP__Vtiming__0(Vtb_aes_demo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_aes_demo__DOT__clk = 0U;
    vlSelfRef.tb_aes_demo__DOT__start = 0U;
    vlSelfRef.tb_aes_demo__DOT__count = 0U;
    vlSelfRef.tb_aes_demo__DOT__plain_txt[0U] = 0xe0370734U;
    vlSelfRef.tb_aes_demo__DOT__plain_txt[1U] = 0x313198a2U;
    vlSelfRef.tb_aes_demo__DOT__plain_txt[2U] = 0x885a308dU;
    vlSelfRef.tb_aes_demo__DOT__plain_txt[3U] = 0x3243f6a8U;
    co_await vlSelfRef.__VdlySched.delay(0x14ULL, nullptr, 
                                         "newaes_desihn_tb.v", 
                                         35);
    vlSelfRef.tb_aes_demo__DOT__start_time = (IData)(VL_TIME_UNITED_Q(1));
    vlSelfRef.tb_aes_demo__DOT__start = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "newaes_desihn_tb.v", 
                                         40);
    vlSelfRef.tb_aes_demo__DOT__start = 0U;
}

VL_INLINE_OPT VlCoroutine Vtb_aes_demo___024root___eval_initial__TOP__Vtiming__1(Vtb_aes_demo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                         nullptr, "newaes_desihn_tb.v", 
                                         65);
    VL_WRITEF_NX("\n==== PERFORMANCE REPORT ====\nTotal Blocks = %0d\nTotal Time   = %0t ns\n",0,
                 32,vlSelfRef.tb_aes_demo__DOT__count,
                 64,((QData)(VL_TIME_UNITED_Q(1)) - (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__start_time))),
                 -12);
    if (VL_UNLIKELY((VL_TIME_UNITED_Q(1) > (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__start_time))))) {
        VL_WRITEF_NX("Throughput   \342\211\210 %0f blocks/sec\n",0,
                     64,((1.00000000000000000e+09 * 
                          VL_ISTOR_D_I(32, vlSelfRef.tb_aes_demo__DOT__count)) 
                         / VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                            - (QData)((IData)(vlSelfRef.tb_aes_demo__DOT__start_time))))));
    }
    VL_WRITEF_NX("============================\n\n",0);
    VL_FINISH_MT("newaes_desihn_tb.v", 78, "");
}

VL_INLINE_OPT VlCoroutine Vtb_aes_demo___024root___eval_initial__TOP__Vtiming__2(Vtb_aes_demo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root___eval_initial__TOP__Vtiming__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "newaes_desihn_tb.v", 
                                             25);
        vlSelfRef.tb_aes_demo__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_aes_demo__DOT__clk)));
    }
}

void Vtb_aes_demo___024root___act_sequent__TOP__0(Vtb_aes_demo___024root* vlSelf);

void Vtb_aes_demo___024root___eval_act(Vtb_aes_demo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_aes_demo___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_aes_demo___024root___act_sequent__TOP__0(Vtb_aes_demo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root___act_sequent__TOP__0\n"); );
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

void Vtb_aes_demo___024root___nba_sequent__TOP__0(Vtb_aes_demo___024root* vlSelf);

void Vtb_aes_demo___024root___eval_nba(Vtb_aes_demo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_aes_demo___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_aes_demo___024root___nba_sequent__TOP__0(Vtb_aes_demo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vdly__tb_aes_demo__DOT__plain_txt;
    VL_ZERO_W(128, __Vdly__tb_aes_demo__DOT__plain_txt);
    CData/*0:0*/ __Vdly__tb_aes_demo__DOT__start;
    __Vdly__tb_aes_demo__DOT__start = 0;
    CData/*2:0*/ __Vdly__tb_aes_demo__DOT__dut__DOT__ps;
    __Vdly__tb_aes_demo__DOT__dut__DOT__ps = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vdly__tb_aes_demo__DOT__dut__DOT__ps = vlSelfRef.tb_aes_demo__DOT__dut__DOT__ps;
    __Vdly__tb_aes_demo__DOT__plain_txt[0U] = vlSelfRef.tb_aes_demo__DOT__plain_txt[0U];
    __Vdly__tb_aes_demo__DOT__plain_txt[1U] = vlSelfRef.tb_aes_demo__DOT__plain_txt[1U];
    __Vdly__tb_aes_demo__DOT__plain_txt[2U] = vlSelfRef.tb_aes_demo__DOT__plain_txt[2U];
    __Vdly__tb_aes_demo__DOT__plain_txt[3U] = vlSelfRef.tb_aes_demo__DOT__plain_txt[3U];
    __Vdly__tb_aes_demo__DOT__start = vlSelfRef.tb_aes_demo__DOT__start;
    if (VL_UNLIKELY(vlSelfRef.tb_aes_demo__DOT__done)) {
        vlSelfRef.tb_aes_demo__DOT__count = ((IData)(1U) 
                                             + vlSelfRef.tb_aes_demo__DOT__count);
        VL_WRITEF_NX("Time=%0t ns | Block %0d \342\206\222 %x\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,32,
                     vlSelfRef.tb_aes_demo__DOT__count,
                     128,vlSelfRef.tb_aes_demo__DOT__cipher_txt.data());
        __Vtemp_2[0U] = vlSelfRef.tb_aes_demo__DOT__count;
        __Vtemp_2[1U] = 0U;
        __Vtemp_2[2U] = 0U;
        __Vtemp_2[3U] = 0U;
        VL_ADD_W(4, __Vdly__tb_aes_demo__DOT__plain_txt, vlSelfRef.tb_aes_demo__DOT__plain_txt, __Vtemp_2);
        __Vdly__tb_aes_demo__DOT__start = 1U;
    } else {
        __Vdly__tb_aes_demo__DOT__start = 0U;
    }
    if ((4U & (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__ps))) {
        if ((2U & (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__ps))) {
            __Vdly__tb_aes_demo__DOT__dut__DOT__ps = 0U;
        } else if ((1U & (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__ps))) {
            vlSelfRef.tb_aes_demo__DOT__cipher_txt[0U] 
                = vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U];
            vlSelfRef.tb_aes_demo__DOT__cipher_txt[1U] 
                = vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U];
            vlSelfRef.tb_aes_demo__DOT__cipher_txt[2U] 
                = vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U];
            vlSelfRef.tb_aes_demo__DOT__cipher_txt[3U] 
                = vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U];
            vlSelfRef.tb_aes_demo__DOT__done = 1U;
            __Vdly__tb_aes_demo__DOT__dut__DOT__ps = 0U;
        } else {
            vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__shift_out[0U] 
                   ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key
                   [0xaU][0U]);
            vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__shift_out[1U] 
                   ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key
                   [0xaU][1U]);
            vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__shift_out[2U] 
                   ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key
                   [0xaU][2U]);
            vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                = (vlSelfRef.tb_aes_demo__DOT__dut__DOT__shift_out[3U] 
                   ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key
                   [0xaU][3U]);
            __Vdly__tb_aes_demo__DOT__dut__DOT__ps = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__ps))) {
        if ((1U & (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__ps))) {
            vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                = (((((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out0) 
                      << 0x18U) | ((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out1) 
                                   << 0x10U)) | (((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out2) 
                                                  << 8U) 
                                                 | (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out3))) 
                   ^ ((0xaU >= (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round))
                       ? vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key
                      [vlSelfRef.tb_aes_demo__DOT__dut__DOT__round][0U]
                       : 0U));
            vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                = (((((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out0) 
                      << 0x18U) | ((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out1) 
                                   << 0x10U)) | (((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out2) 
                                                  << 8U) 
                                                 | (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out3))) 
                   ^ ((0xaU >= (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round))
                       ? vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key
                      [vlSelfRef.tb_aes_demo__DOT__dut__DOT__round][1U]
                       : 0U));
            vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                = ((IData)((((QData)((IData)(((((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out0) 
                                                << 0x18U) 
                                               | ((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out1) 
                                                  << 0x10U)) 
                                              | (((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out2) 
                                                  << 8U) 
                                                 | (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out3))))) 
                             << 0x20U) | (QData)((IData)(
                                                         ((((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__out0) 
                                                            << 0x18U) 
                                                           | ((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__out1) 
                                                              << 0x10U)) 
                                                          | (((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__out2) 
                                                              << 8U) 
                                                             | (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__out3))))))) 
                   ^ ((0xaU >= (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round))
                       ? vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key
                      [vlSelfRef.tb_aes_demo__DOT__dut__DOT__round][2U]
                       : 0U));
            vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                = ((IData)(((((QData)((IData)(((((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out0) 
                                                 << 0x18U) 
                                                | ((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out1) 
                                                   << 0x10U)) 
                                               | (((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out2) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out3))))) 
                              << 0x20U) | (QData)((IData)(
                                                          ((((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__out0) 
                                                             << 0x18U) 
                                                            | ((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__out1) 
                                                               << 0x10U)) 
                                                           | (((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__out2) 
                                                               << 8U) 
                                                              | (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__out3)))))) 
                            >> 0x20U)) ^ ((0xaU >= (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round))
                                           ? vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key
                                          [vlSelfRef.tb_aes_demo__DOT__dut__DOT__round][3U]
                                           : 0U));
            if ((9U == (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round))) {
                __Vdly__tb_aes_demo__DOT__dut__DOT__ps = 4U;
            } else {
                vlSelfRef.tb_aes_demo__DOT__dut__DOT__round 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round)));
                __Vdly__tb_aes_demo__DOT__dut__DOT__ps = 3U;
            }
        } else {
            __Vdly__tb_aes_demo__DOT__dut__DOT__ps = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__ps))) {
        vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
            = (vlSelfRef.tb_aes_demo__DOT__plain_txt[0U] 
               ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key
               [0U][0U]);
        vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
            = (vlSelfRef.tb_aes_demo__DOT__plain_txt[1U] 
               ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key
               [0U][1U]);
        vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
            = (vlSelfRef.tb_aes_demo__DOT__plain_txt[2U] 
               ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key
               [0U][2U]);
        vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
            = (vlSelfRef.tb_aes_demo__DOT__plain_txt[3U] 
               ^ vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key
               [0U][3U]);
        __Vdly__tb_aes_demo__DOT__dut__DOT__ps = 3U;
    } else {
        vlSelfRef.tb_aes_demo__DOT__dut__DOT__round = 1U;
        vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] = 0U;
        vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] = 0U;
        vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] = 0U;
        vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] = 0U;
        if (vlSelfRef.tb_aes_demo__DOT__start) {
            vlSelfRef.tb_aes_demo__DOT__dut__DOT__key[0U] = 0x9cf4f3cU;
            vlSelfRef.tb_aes_demo__DOT__dut__DOT__key[1U] = 0xabf71588U;
            vlSelfRef.tb_aes_demo__DOT__dut__DOT__key[2U] = 0x28aed2a6U;
            vlSelfRef.tb_aes_demo__DOT__dut__DOT__key[3U] = 0x2b7e1516U;
            __Vdly__tb_aes_demo__DOT__dut__DOT__ps = 1U;
        } else {
            __Vdly__tb_aes_demo__DOT__dut__DOT__ps = 0U;
        }
    }
    vlSelfRef.tb_aes_demo__DOT__start = __Vdly__tb_aes_demo__DOT__start;
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__ps = __Vdly__tb_aes_demo__DOT__dut__DOT__ps;
    vlSelfRef.tb_aes_demo__DOT__plain_txt[0U] = __Vdly__tb_aes_demo__DOT__plain_txt[0U];
    vlSelfRef.tb_aes_demo__DOT__plain_txt[1U] = __Vdly__tb_aes_demo__DOT__plain_txt[1U];
    vlSelfRef.tb_aes_demo__DOT__plain_txt[2U] = __Vdly__tb_aes_demo__DOT__plain_txt[2U];
    vlSelfRef.tb_aes_demo__DOT__plain_txt[3U] = __Vdly__tb_aes_demo__DOT__plain_txt[3U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[0U][0U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__key[0U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[0U][1U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__key[1U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[0U][2U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__key[2U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[0U][3U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__key[3U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[0U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__key[3U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[1U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__key[2U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[2U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__key[1U];
    vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w[3U] 
        = vlSelfRef.tb_aes_demo__DOT__dut__DOT__key[0U];
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

void Vtb_aes_demo___024root___timing_resume(Vtb_aes_demo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_aes_demo___024root___eval_triggers__act(Vtb_aes_demo___024root* vlSelf);

bool Vtb_aes_demo___024root___eval_phase__act(Vtb_aes_demo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_aes_demo___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_aes_demo___024root___timing_resume(vlSelf);
        Vtb_aes_demo___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_aes_demo___024root___eval_phase__nba(Vtb_aes_demo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_aes_demo___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_aes_demo___024root___dump_triggers__nba(Vtb_aes_demo___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_aes_demo___024root___dump_triggers__act(Vtb_aes_demo___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_aes_demo___024root___eval(Vtb_aes_demo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_aes_demo___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("newaes_desihn_tb.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_aes_demo___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("newaes_desihn_tb.v", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_aes_demo___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_aes_demo___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_aes_demo___024root___eval_debug_assertions(Vtb_aes_demo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
