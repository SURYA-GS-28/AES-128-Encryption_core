// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_aes_demo.h for the primary calling header

#include "Vtb_aes_demo__pch.h"
#include "Vtb_aes_demo__Syms.h"
#include "Vtb_aes_demo___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_aes_demo___024root___dump_triggers__act(Vtb_aes_demo___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_aes_demo___024root___eval_triggers__act(Vtb_aes_demo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, vlSelfRef.__Vtrigprevexpr___TOP__tb_aes_demo__DOT__dut__DOT__passkey__DOT__w__1.neq(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.tb_aes_demo__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_aes_demo__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_aes_demo__DOT__dut__DOT__passkey__DOT__w__1.assign(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_aes_demo__DOT__clk__0 
        = vlSelfRef.tb_aes_demo__DOT__clk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_aes_demo___024root___dump_triggers__act(vlSelf);
    }
#endif
}
