// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_aes_demo__Syms.h"


void Vtb_aes_demo___024root__trace_chg_0_sub_0(Vtb_aes_demo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_aes_demo___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root__trace_chg_0\n"); );
    // Init
    Vtb_aes_demo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_aes_demo___024root*>(voidSelf);
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_aes_demo___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_aes_demo___024root__trace_chg_0_sub_0(Vtb_aes_demo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                               [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b0]),8);
        bufp->chgCData(oldp+1,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                               [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b1]),8);
        bufp->chgCData(oldp+2,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                               [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b2]),8);
        bufp->chgCData(oldp+3,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                               [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b3]),8);
        bufp->chgIData(oldp+4,((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                  [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b3] 
                                  << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                               [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b2] 
                                               << 0x10U)) 
                                | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                    [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b1] 
                                    << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                   [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b0]))),32);
        bufp->chgCData(oldp+5,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                               [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b0]),8);
        bufp->chgCData(oldp+6,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                               [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b1]),8);
        bufp->chgCData(oldp+7,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                               [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b2]),8);
        bufp->chgCData(oldp+8,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                               [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b3]),8);
        bufp->chgIData(oldp+9,((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                  [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b3] 
                                  << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                               [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b2] 
                                               << 0x10U)) 
                                | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                    [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b1] 
                                    << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                   [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b0]))),32);
        bufp->chgCData(oldp+10,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b0]),8);
        bufp->chgCData(oldp+11,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b1]),8);
        bufp->chgCData(oldp+12,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b2]),8);
        bufp->chgCData(oldp+13,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b3]),8);
        bufp->chgIData(oldp+14,((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                   [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b3] 
                                   << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b2] 
                                                << 0x10U)) 
                                 | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                     [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b1] 
                                     << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                    [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b0]))),32);
        bufp->chgCData(oldp+15,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b0]),8);
        bufp->chgCData(oldp+16,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b1]),8);
        bufp->chgCData(oldp+17,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b2]),8);
        bufp->chgCData(oldp+18,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b3]),8);
        bufp->chgIData(oldp+19,((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                   [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b3] 
                                   << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b2] 
                                                << 0x10U)) 
                                 | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                     [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b1] 
                                     << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                    [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b0]))),32);
        bufp->chgCData(oldp+20,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b0]),8);
        bufp->chgCData(oldp+21,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b1]),8);
        bufp->chgCData(oldp+22,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b2]),8);
        bufp->chgCData(oldp+23,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b3]),8);
        bufp->chgIData(oldp+24,((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                   [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b3] 
                                   << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b2] 
                                                << 0x10U)) 
                                 | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                     [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b1] 
                                     << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                    [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b0]))),32);
        bufp->chgCData(oldp+25,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b0]),8);
        bufp->chgCData(oldp+26,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b1]),8);
        bufp->chgCData(oldp+27,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b2]),8);
        bufp->chgCData(oldp+28,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b3]),8);
        bufp->chgIData(oldp+29,((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                   [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b3] 
                                   << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b2] 
                                                << 0x10U)) 
                                 | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                     [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b1] 
                                     << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                    [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b0]))),32);
        bufp->chgCData(oldp+30,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b0]),8);
        bufp->chgCData(oldp+31,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b1]),8);
        bufp->chgCData(oldp+32,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b2]),8);
        bufp->chgCData(oldp+33,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b3]),8);
        bufp->chgIData(oldp+34,((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                   [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b3] 
                                   << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b2] 
                                                << 0x10U)) 
                                 | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                     [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b1] 
                                     << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                    [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b0]))),32);
        bufp->chgCData(oldp+35,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b0]),8);
        bufp->chgCData(oldp+36,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b1]),8);
        bufp->chgCData(oldp+37,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b2]),8);
        bufp->chgCData(oldp+38,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b3]),8);
        bufp->chgIData(oldp+39,((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                   [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b3] 
                                   << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b2] 
                                                << 0x10U)) 
                                 | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                     [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b1] 
                                     << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                    [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b0]))),32);
        bufp->chgCData(oldp+40,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b0]),8);
        bufp->chgCData(oldp+41,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b1]),8);
        bufp->chgCData(oldp+42,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b2]),8);
        bufp->chgCData(oldp+43,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b3]),8);
        bufp->chgIData(oldp+44,((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                   [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b3] 
                                   << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b2] 
                                                << 0x10U)) 
                                 | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                     [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b1] 
                                     << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                    [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b0]))),32);
        bufp->chgCData(oldp+45,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b0]),8);
        bufp->chgCData(oldp+46,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b1]),8);
        bufp->chgCData(oldp+47,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b2]),8);
        bufp->chgCData(oldp+48,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b3]),8);
        bufp->chgIData(oldp+49,((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                   [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b3] 
                                   << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b2] 
                                                << 0x10U)) 
                                 | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                     [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b1] 
                                     << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                    [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b0]))),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [3U]))) {
        __Vtemp_1[1U] = (IData)((((QData)((IData)((
                                                   ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__15__KET____DOT__dut__DOT__sbox_mem
                                                     [
                                                     (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                                                      >> 0x18U)] 
                                                     << 0x18U) 
                                                    | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__10__KET____DOT__dut__DOT__sbox_mem
                                                       [
                                                       (0xffU 
                                                        & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                                                           >> 0x10U))] 
                                                       << 0x10U)) 
                                                   | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__5__KET____DOT__dut__DOT__sbox_mem
                                                       [
                                                       (0xffU 
                                                        & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                                                           >> 8U))] 
                                                       << 8U) 
                                                      | vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__0__KET____DOT__dut__DOT__sbox_mem
                                                      [
                                                      (0xffU 
                                                       & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U])])))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__11__KET____DOT__dut__DOT__sbox_mem
                                                                 [
                                                                 (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                                                                  >> 0x18U)] 
                                                                 << 0x18U) 
                                                                | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__6__KET____DOT__dut__DOT__sbox_mem
                                                                   [
                                                                   (0xffU 
                                                                    & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                                                                       >> 0x10U))] 
                                                                   << 0x10U)) 
                                                               | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__1__KET____DOT__dut__DOT__sbox_mem
                                                                   [
                                                                   (0xffU 
                                                                    & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                                                                       >> 8U))] 
                                                                   << 8U) 
                                                                  | vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__12__KET____DOT__dut__DOT__sbox_mem
                                                                  [
                                                                  (0xffU 
                                                                   & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U])]))))));
        __Vtemp_1[2U] = (IData)(((((QData)((IData)(
                                                   (((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__15__KET____DOT__dut__DOT__sbox_mem
                                                      [
                                                      (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                                                       >> 0x18U)] 
                                                      << 0x18U) 
                                                     | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__10__KET____DOT__dut__DOT__sbox_mem
                                                        [
                                                        (0xffU 
                                                         & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                                                            >> 0x10U))] 
                                                        << 0x10U)) 
                                                    | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__5__KET____DOT__dut__DOT__sbox_mem
                                                        [
                                                        (0xffU 
                                                         & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                                                            >> 8U))] 
                                                        << 8U) 
                                                       | vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__0__KET____DOT__dut__DOT__sbox_mem
                                                       [
                                                       (0xffU 
                                                        & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U])])))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__11__KET____DOT__dut__DOT__sbox_mem
                                                                  [
                                                                  (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                                                                   >> 0x18U)] 
                                                                  << 0x18U) 
                                                                 | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__6__KET____DOT__dut__DOT__sbox_mem
                                                                    [
                                                                    (0xffU 
                                                                     & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                                                                        >> 0x10U))] 
                                                                    << 0x10U)) 
                                                                | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__1__KET____DOT__dut__DOT__sbox_mem
                                                                    [
                                                                    (0xffU 
                                                                     & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                                                                        >> 8U))] 
                                                                    << 8U) 
                                                                   | vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__12__KET____DOT__dut__DOT__sbox_mem
                                                                   [
                                                                   (0xffU 
                                                                    & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U])]))))) 
                                 >> 0x20U));
        __Vtemp_2[0U] = (((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__3__KET____DOT__dut__DOT__sbox_mem
                           [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                             >> 0x18U)] << 0x18U) | 
                          (vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__14__KET____DOT__dut__DOT__sbox_mem
                           [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                                      >> 0x10U))] << 0x10U)) 
                         | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__9__KET____DOT__dut__DOT__sbox_mem
                             [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                                        >> 8U))] << 8U) 
                            | vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__4__KET____DOT__dut__DOT__sbox_mem
                            [(0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U])]));
        __Vtemp_2[1U] = (((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__7__KET____DOT__dut__DOT__sbox_mem
                           [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                             >> 0x18U)] << 0x18U) | 
                          (vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__2__KET____DOT__dut__DOT__sbox_mem
                           [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                                      >> 0x10U))] << 0x10U)) 
                         | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__13__KET____DOT__dut__DOT__sbox_mem
                             [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                                        >> 8U))] << 8U) 
                            | vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__8__KET____DOT__dut__DOT__sbox_mem
                            [(0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U])]));
        __Vtemp_2[2U] = __Vtemp_1[1U];
        __Vtemp_2[3U] = __Vtemp_1[2U];
        bufp->chgWData(oldp+50,(__Vtemp_2),128);
        bufp->chgIData(oldp+54,((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__15__KET____DOT__dut__DOT__sbox_mem
                                   [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                                     >> 0x18U)] << 0x18U) 
                                  | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__10__KET____DOT__dut__DOT__sbox_mem
                                     [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                                                >> 0x10U))] 
                                     << 0x10U)) | (
                                                   (vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__5__KET____DOT__dut__DOT__sbox_mem
                                                    [
                                                    (0xffU 
                                                     & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                                                        >> 8U))] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__0__KET____DOT__dut__DOT__sbox_mem
                                                   [
                                                   (0xffU 
                                                    & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U])]))),32);
        bufp->chgIData(oldp+55,((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__11__KET____DOT__dut__DOT__sbox_mem
                                   [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                                     >> 0x18U)] << 0x18U) 
                                  | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__6__KET____DOT__dut__DOT__sbox_mem
                                     [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                                                >> 0x10U))] 
                                     << 0x10U)) | (
                                                   (vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__1__KET____DOT__dut__DOT__sbox_mem
                                                    [
                                                    (0xffU 
                                                     & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                                                        >> 8U))] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__12__KET____DOT__dut__DOT__sbox_mem
                                                   [
                                                   (0xffU 
                                                    & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U])]))),32);
        bufp->chgIData(oldp+56,((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__7__KET____DOT__dut__DOT__sbox_mem
                                   [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                                     >> 0x18U)] << 0x18U) 
                                  | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__2__KET____DOT__dut__DOT__sbox_mem
                                     [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                                                >> 0x10U))] 
                                     << 0x10U)) | (
                                                   (vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__13__KET____DOT__dut__DOT__sbox_mem
                                                    [
                                                    (0xffU 
                                                     & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                                                        >> 8U))] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__8__KET____DOT__dut__DOT__sbox_mem
                                                   [
                                                   (0xffU 
                                                    & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U])]))),32);
        bufp->chgIData(oldp+57,((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__3__KET____DOT__dut__DOT__sbox_mem
                                   [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                                     >> 0x18U)] << 0x18U) 
                                  | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__14__KET____DOT__dut__DOT__sbox_mem
                                     [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                                                >> 0x10U))] 
                                     << 0x10U)) | (
                                                   (vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__9__KET____DOT__dut__DOT__sbox_mem
                                                    [
                                                    (0xffU 
                                                     & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                                                        >> 8U))] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__4__KET____DOT__dut__DOT__sbox_mem
                                                   [
                                                   (0xffU 
                                                    & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U])]))),32);
        bufp->chgCData(oldp+58,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__0__KET____DOT__dut__DOT__sbox_mem
                                [(0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U])]),8);
        bufp->chgCData(oldp+59,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__10__KET____DOT__dut__DOT__sbox_mem
                                [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                                           >> 0x10U))]),8);
        bufp->chgCData(oldp+60,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__11__KET____DOT__dut__DOT__sbox_mem
                                [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                                  >> 0x18U)]),8);
        bufp->chgCData(oldp+61,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__12__KET____DOT__dut__DOT__sbox_mem
                                [(0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U])]),8);
        bufp->chgCData(oldp+62,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__13__KET____DOT__dut__DOT__sbox_mem
                                [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                                           >> 8U))]),8);
        bufp->chgCData(oldp+63,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__14__KET____DOT__dut__DOT__sbox_mem
                                [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                                           >> 0x10U))]),8);
        bufp->chgCData(oldp+64,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__15__KET____DOT__dut__DOT__sbox_mem
                                [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                                  >> 0x18U)]),8);
        bufp->chgCData(oldp+65,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__1__KET____DOT__dut__DOT__sbox_mem
                                [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                                           >> 8U))]),8);
        bufp->chgCData(oldp+66,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__2__KET____DOT__dut__DOT__sbox_mem
                                [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                                           >> 0x10U))]),8);
        bufp->chgCData(oldp+67,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__3__KET____DOT__dut__DOT__sbox_mem
                                [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                                  >> 0x18U)]),8);
        bufp->chgCData(oldp+68,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__4__KET____DOT__dut__DOT__sbox_mem
                                [(0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U])]),8);
        bufp->chgCData(oldp+69,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__5__KET____DOT__dut__DOT__sbox_mem
                                [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                                           >> 8U))]),8);
        bufp->chgCData(oldp+70,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__6__KET____DOT__dut__DOT__sbox_mem
                                [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                                           >> 0x10U))]),8);
        bufp->chgCData(oldp+71,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__7__KET____DOT__dut__DOT__sbox_mem
                                [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                                  >> 0x18U)]),8);
        bufp->chgCData(oldp+72,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__8__KET____DOT__dut__DOT__sbox_mem
                                [(0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U])]),8);
        bufp->chgCData(oldp+73,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__9__KET____DOT__dut__DOT__sbox_mem
                                [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                                           >> 8U))]),8);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+74,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b0),8);
        bufp->chgCData(oldp+75,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b1),8);
        bufp->chgCData(oldp+76,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b2),8);
        bufp->chgCData(oldp+77,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b3),8);
        bufp->chgCData(oldp+78,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b0),8);
        bufp->chgCData(oldp+79,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b1),8);
        bufp->chgCData(oldp+80,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b2),8);
        bufp->chgCData(oldp+81,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b3),8);
        bufp->chgCData(oldp+82,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b0),8);
        bufp->chgCData(oldp+83,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b1),8);
        bufp->chgCData(oldp+84,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b2),8);
        bufp->chgCData(oldp+85,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b3),8);
        bufp->chgCData(oldp+86,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b0),8);
        bufp->chgCData(oldp+87,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b1),8);
        bufp->chgCData(oldp+88,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b2),8);
        bufp->chgCData(oldp+89,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b3),8);
        bufp->chgCData(oldp+90,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b0),8);
        bufp->chgCData(oldp+91,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b1),8);
        bufp->chgCData(oldp+92,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b2),8);
        bufp->chgCData(oldp+93,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b3),8);
        bufp->chgCData(oldp+94,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b0),8);
        bufp->chgCData(oldp+95,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b1),8);
        bufp->chgCData(oldp+96,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b2),8);
        bufp->chgCData(oldp+97,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b3),8);
        bufp->chgCData(oldp+98,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b0),8);
        bufp->chgCData(oldp+99,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b1),8);
        bufp->chgCData(oldp+100,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b2),8);
        bufp->chgCData(oldp+101,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b3),8);
        bufp->chgCData(oldp+102,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b0),8);
        bufp->chgCData(oldp+103,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b1),8);
        bufp->chgCData(oldp+104,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b2),8);
        bufp->chgCData(oldp+105,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b3),8);
        bufp->chgCData(oldp+106,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b0),8);
        bufp->chgCData(oldp+107,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b1),8);
        bufp->chgCData(oldp+108,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b2),8);
        bufp->chgCData(oldp+109,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b3),8);
        bufp->chgCData(oldp+110,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b0),8);
        bufp->chgCData(oldp+111,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b1),8);
        bufp->chgCData(oldp+112,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b2),8);
        bufp->chgCData(oldp+113,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b3),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U] 
                     | vlSelfRef.__Vm_traceActivity
                     [3U]))) {
        bufp->chgWData(oldp+114,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw),1408);
        bufp->chgWData(oldp+158,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[0]),128);
        bufp->chgWData(oldp+162,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[1]),128);
        bufp->chgWData(oldp+166,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[2]),128);
        bufp->chgWData(oldp+170,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[3]),128);
        bufp->chgWData(oldp+174,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[4]),128);
        bufp->chgWData(oldp+178,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[5]),128);
        bufp->chgWData(oldp+182,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[6]),128);
        bufp->chgWData(oldp+186,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[7]),128);
        bufp->chgWData(oldp+190,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[8]),128);
        bufp->chgWData(oldp+194,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[9]),128);
        bufp->chgWData(oldp+198,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[10]),128);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+202,(vlSelfRef.tb_aes_demo__DOT__done));
        bufp->chgWData(oldp+203,(vlSelfRef.tb_aes_demo__DOT__cipher_txt),128);
        bufp->chgCData(oldp+207,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__ps),3);
        bufp->chgWData(oldp+208,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state),128);
        bufp->chgWData(oldp+212,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__key),128);
        bufp->chgWData(oldp+216,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sbout),128);
        __Vtemp_4[0U] = ((((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out0) 
                           << 0x18U) | ((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out1) 
                                        << 0x10U)) 
                         | (((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out2) 
                             << 8U) | (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out3)));
        __Vtemp_4[1U] = ((((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out0) 
                           << 0x18U) | ((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out1) 
                                        << 0x10U)) 
                         | (((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out2) 
                             << 8U) | (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out3)));
        __Vtemp_4[2U] = (IData)((((QData)((IData)((
                                                   (((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out0) 
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
                                                                  | (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__out3)))))));
        __Vtemp_4[3U] = (IData)(((((QData)((IData)(
                                                   ((((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out0) 
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
                                 >> 0x20U));
        bufp->chgWData(oldp+220,(__Vtemp_4),128);
        bufp->chgCData(oldp+224,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round),4);
        bufp->chgIData(oldp+225,(((((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out0) 
                                    << 0x18U) | ((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out1) 
                                                 << 0x10U)) 
                                  | (((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out2) 
                                      << 8U) | (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out3)))),32);
        bufp->chgCData(oldp+226,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__s0),8);
        bufp->chgCData(oldp+227,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__s1),8);
        bufp->chgCData(oldp+228,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__s2),8);
        bufp->chgCData(oldp+229,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__s3),8);
        bufp->chgCData(oldp+230,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out0),8);
        bufp->chgCData(oldp+231,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out1),8);
        bufp->chgCData(oldp+232,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out2),8);
        bufp->chgCData(oldp+233,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out3),8);
        bufp->chgIData(oldp+234,(((((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__out0) 
                                    << 0x18U) | ((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__out1) 
                                                 << 0x10U)) 
                                  | (((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__out2) 
                                      << 8U) | (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__out3)))),32);
        bufp->chgCData(oldp+235,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__s0),8);
        bufp->chgCData(oldp+236,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__s1),8);
        bufp->chgCData(oldp+237,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__s2),8);
        bufp->chgCData(oldp+238,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__s3),8);
        bufp->chgCData(oldp+239,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__out0),8);
        bufp->chgCData(oldp+240,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__out1),8);
        bufp->chgCData(oldp+241,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__out2),8);
        bufp->chgCData(oldp+242,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__out3),8);
        bufp->chgIData(oldp+243,(((((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out0) 
                                    << 0x18U) | ((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out1) 
                                                 << 0x10U)) 
                                  | (((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out2) 
                                      << 8U) | (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out3)))),32);
        bufp->chgCData(oldp+244,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__s0),8);
        bufp->chgCData(oldp+245,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__s1),8);
        bufp->chgCData(oldp+246,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__s2),8);
        bufp->chgCData(oldp+247,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__s3),8);
        bufp->chgCData(oldp+248,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out0),8);
        bufp->chgCData(oldp+249,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out1),8);
        bufp->chgCData(oldp+250,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out2),8);
        bufp->chgCData(oldp+251,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out3),8);
        bufp->chgIData(oldp+252,(((((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out0) 
                                    << 0x18U) | ((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out1) 
                                                 << 0x10U)) 
                                  | (((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out2) 
                                      << 8U) | (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out3)))),32);
        bufp->chgCData(oldp+253,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__s0),8);
        bufp->chgCData(oldp+254,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__s1),8);
        bufp->chgCData(oldp+255,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__s2),8);
        bufp->chgCData(oldp+256,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__s3),8);
        bufp->chgCData(oldp+257,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out0),8);
        bufp->chgCData(oldp+258,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out1),8);
        bufp->chgCData(oldp+259,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out2),8);
        bufp->chgCData(oldp+260,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out3),8);
        bufp->chgCData(oldp+261,((0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U])),8);
        bufp->chgCData(oldp+262,((0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+263,((vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+264,((0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U])),8);
        bufp->chgCData(oldp+265,((0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+266,((0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+267,((vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+268,((0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+269,((0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+270,((vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+271,((0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U])),8);
        bufp->chgCData(oldp+272,((0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+273,((0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+274,((vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+275,((0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U])),8);
        bufp->chgCData(oldp+276,((0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                                           >> 8U))),8);
    }
    bufp->chgBit(oldp+277,(vlSelfRef.tb_aes_demo__DOT__clk));
    bufp->chgBit(oldp+278,(vlSelfRef.tb_aes_demo__DOT__start));
    bufp->chgWData(oldp+279,(vlSelfRef.tb_aes_demo__DOT__plain_txt),128);
    bufp->chgIData(oldp+283,(vlSelfRef.tb_aes_demo__DOT__count),32);
    bufp->chgIData(oldp+284,(vlSelfRef.tb_aes_demo__DOT__start_time),32);
}

void Vtb_aes_demo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root__trace_cleanup\n"); );
    // Init
    Vtb_aes_demo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_aes_demo___024root*>(voidSelf);
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
