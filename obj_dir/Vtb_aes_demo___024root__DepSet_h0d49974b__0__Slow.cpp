// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_aes_demo.h for the primary calling header

#include "Vtb_aes_demo__pch.h"
#include "Vtb_aes_demo__Syms.h"
#include "Vtb_aes_demo___024root.h"

VL_ATTR_COLD void Vtb_aes_demo___024root___eval_initial__TOP(Vtb_aes_demo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__0__KET____DOT__dut__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__1__KET____DOT__dut__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__2__KET____DOT__dut__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__3__KET____DOT__dut__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__4__KET____DOT__dut__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__5__KET____DOT__dut__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__6__KET____DOT__dut__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__7__KET____DOT__dut__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__8__KET____DOT__dut__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__9__KET____DOT__dut__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__10__KET____DOT__dut__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__11__KET____DOT__dut__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__12__KET____DOT__dut__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__13__KET____DOT__dut__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__14__KET____DOT__dut__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__15__KET____DOT__dut__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"sbox.mem"}
                 ,  &(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem)
                 , 0, ~0ULL);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_aes_demo___024root___dump_triggers__stl(Vtb_aes_demo___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_aes_demo___024root___eval_triggers__stl(Vtb_aes_demo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.set(1U, vlSelfRef.__Vtrigprevexpr___TOP__tb_aes_demo__DOT__dut__DOT__passkey__DOT__w__0.neq(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_aes_demo__DOT__dut__DOT__passkey__DOT__w__0.assign(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__w);
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VstlDidInit))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_aes_demo___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
