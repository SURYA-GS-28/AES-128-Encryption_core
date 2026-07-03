// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_aes_demo__Syms.h"


VL_ATTR_COLD void Vtb_aes_demo___024root__trace_init_sub__TOP__0(Vtb_aes_demo___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_aes_demo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+278,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+280,0,"plain_txt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+203,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+204,0,"cipher_txt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+284,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+285,0,"start_time",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+280,0,"plain_txt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+279,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+204,0,"cipher_txt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+208,0,"ps",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+209,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+213,0,"key",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+217,0,"sbout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+51,0,"shift_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+221,0,"mix_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+115,0,"r_key_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1407,0);
    tracep->pushPrefix("round_key", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declArray(c+159+i*4,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 127,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+225,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+286,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+287,0,"LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+288,0,"KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+289,0,"ROUND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+290,0,"LAST_ROUND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+291,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("m0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+55,0,"mix_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+226,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+228,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+229,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+230,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+231,0,"out0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+232,0,"out1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+233,0,"out2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+234,0,"out3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("m1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+56,0,"mix_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+237,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+238,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+239,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+240,0,"out0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+241,0,"out1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+242,0,"out2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+243,0,"out3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("m2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+57,0,"mix_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+244,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+246,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+247,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+248,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+249,0,"out0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+250,0,"out1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+251,0,"out2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+252,0,"out3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("m3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+58,0,"mix_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+255,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+256,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+257,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+258,0,"out0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+259,0,"out1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+260,0,"out2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+261,0,"out3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("passkey", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+213,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+115,0,"r_key",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1407,0);
    tracep->pushPrefix("key_gen[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("spl_key", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+75,0,"b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+76,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+77,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+78,0,"b3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"sbout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+292,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+293,0,"Rcon_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("bx0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+78,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+77,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+76,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("key_gen[16]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("spl_key", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+79,0,"b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+80,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+81,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+82,0,"b3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,0,"sbout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+294,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"Rcon_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("bx0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+82,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+81,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+80,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+79,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("key_gen[20]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("spl_key", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+11,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+83,0,"b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+84,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+85,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+86,0,"b3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"sbout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+297,0,"Rcon_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("bx0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+86,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+85,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+84,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+83,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("key_gen[24]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("spl_key", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+16,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+17,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+87,0,"b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+88,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+89,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+90,0,"b3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+20,0,"sbout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+298,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"Rcon_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("bx0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+90,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+89,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+88,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+17,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+87,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("key_gen[28]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("spl_key", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+21,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+91,0,"b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+92,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+93,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+94,0,"b3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"sbout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"Rcon_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("bx0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+94,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+93,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+92,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+91,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+21,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("key_gen[32]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("spl_key", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+26,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+27,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+28,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+95,0,"b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+96,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+97,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+98,0,"b3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+30,0,"sbout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+302,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+303,0,"Rcon_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("bx0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+98,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+97,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+28,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+96,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+27,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+95,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+26,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("key_gen[36]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("spl_key", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+31,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+32,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+33,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+34,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+99,0,"b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+100,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+101,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+102,0,"b3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+35,0,"sbout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+304,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+305,0,"Rcon_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("bx0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+102,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+34,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+101,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+33,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+100,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+32,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+99,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+31,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("key_gen[40]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("spl_key", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+36,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+37,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+38,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+103,0,"b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+104,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+105,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+106,0,"b3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+40,0,"sbout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+306,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"Rcon_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("bx0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+106,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+105,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+38,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+104,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+37,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+103,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+36,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("key_gen[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("spl_key", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+41,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+42,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+44,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+107,0,"b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+108,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+109,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+110,0,"b3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+45,0,"sbout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+308,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+309,0,"Rcon_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("bx0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+110,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+44,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+109,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+108,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+42,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+107,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("key_gen[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("spl_key", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+46,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+47,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+48,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+49,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+111,0,"b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+112,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+113,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+114,0,"b3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+50,0,"sbout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+311,0,"Rcon_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("bx0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+114,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+49,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+113,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+48,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+112,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+47,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("bx3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+111,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+46,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+209,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+217,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("sbox_inst[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+262,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+59,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sbox_inst[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+263,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+60,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sbox_inst[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+264,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+61,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sbox_inst[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+265,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+62,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sbox_inst[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+266,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+63,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sbox_inst[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+267,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+64,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sbox_inst[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+268,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+65,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sbox_inst[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+269,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+66,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sbox_inst[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+270,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+67,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sbox_inst[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+271,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+68,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sbox_inst[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+272,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+69,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sbox_inst[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+273,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+70,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sbox_inst[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+274,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+71,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sbox_inst[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+275,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+72,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sbox_inst[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+276,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+73,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sbox_inst[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+277,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+74,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+217,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+51,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_aes_demo___024root__trace_init_top(Vtb_aes_demo___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_aes_demo___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_aes_demo___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_aes_demo___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_aes_demo___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_aes_demo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_aes_demo___024root__trace_register(Vtb_aes_demo___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_aes_demo___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_aes_demo___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_aes_demo___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_aes_demo___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_aes_demo___024root__trace_const_0_sub_0(Vtb_aes_demo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_aes_demo___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root__trace_const_0\n"); );
    // Init
    Vtb_aes_demo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_aes_demo___024root*>(voidSelf);
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_aes_demo___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_aes_demo___024root__trace_const_0_sub_0(Vtb_aes_demo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+286,(0U),3);
    bufp->fullCData(oldp+287,(1U),3);
    bufp->fullCData(oldp+288,(2U),3);
    bufp->fullCData(oldp+289,(3U),3);
    bufp->fullCData(oldp+290,(4U),3);
    bufp->fullCData(oldp+291,(5U),3);
    bufp->fullIData(oldp+292,(3U),32);
    bufp->fullCData(oldp+293,(3U),4);
    bufp->fullIData(oldp+294,(4U),32);
    bufp->fullCData(oldp+295,(4U),4);
    bufp->fullIData(oldp+296,(5U),32);
    bufp->fullCData(oldp+297,(5U),4);
    bufp->fullIData(oldp+298,(6U),32);
    bufp->fullCData(oldp+299,(6U),4);
    bufp->fullIData(oldp+300,(7U),32);
    bufp->fullCData(oldp+301,(7U),4);
    bufp->fullIData(oldp+302,(8U),32);
    bufp->fullCData(oldp+303,(8U),4);
    bufp->fullIData(oldp+304,(9U),32);
    bufp->fullCData(oldp+305,(9U),4);
    bufp->fullIData(oldp+306,(0xaU),32);
    bufp->fullCData(oldp+307,(0xaU),4);
    bufp->fullIData(oldp+308,(1U),32);
    bufp->fullCData(oldp+309,(1U),4);
    bufp->fullIData(oldp+310,(2U),32);
    bufp->fullCData(oldp+311,(2U),4);
}

VL_ATTR_COLD void Vtb_aes_demo___024root__trace_full_0_sub_0(Vtb_aes_demo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_aes_demo___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root__trace_full_0\n"); );
    // Init
    Vtb_aes_demo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_aes_demo___024root*>(voidSelf);
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_aes_demo___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_aes_demo___024root__trace_full_0_sub_0(Vtb_aes_demo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_aes_demo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_aes_demo___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                            [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b0]),8);
    bufp->fullCData(oldp+2,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                            [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b1]),8);
    bufp->fullCData(oldp+3,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                            [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b2]),8);
    bufp->fullCData(oldp+4,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                            [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b3]),8);
    bufp->fullIData(oldp+5,((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                               [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b3] 
                               << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                            [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b2] 
                                            << 0x10U)) 
                             | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                 [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b1] 
                                 << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b0]))),32);
    bufp->fullCData(oldp+6,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                            [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b0]),8);
    bufp->fullCData(oldp+7,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                            [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b1]),8);
    bufp->fullCData(oldp+8,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                            [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b2]),8);
    bufp->fullCData(oldp+9,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                            [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b3]),8);
    bufp->fullIData(oldp+10,((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b3] 
                                << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b2] 
                                             << 0x10U)) 
                              | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                  [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b1] 
                                  << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                 [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b0]))),32);
    bufp->fullCData(oldp+11,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b0]),8);
    bufp->fullCData(oldp+12,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b1]),8);
    bufp->fullCData(oldp+13,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b2]),8);
    bufp->fullCData(oldp+14,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b3]),8);
    bufp->fullIData(oldp+15,((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b3] 
                                << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b2] 
                                             << 0x10U)) 
                              | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                  [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b1] 
                                  << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                 [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b0]))),32);
    bufp->fullCData(oldp+16,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b0]),8);
    bufp->fullCData(oldp+17,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b1]),8);
    bufp->fullCData(oldp+18,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b2]),8);
    bufp->fullCData(oldp+19,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b3]),8);
    bufp->fullIData(oldp+20,((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b3] 
                                << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b2] 
                                             << 0x10U)) 
                              | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                  [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b1] 
                                  << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                 [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b0]))),32);
    bufp->fullCData(oldp+21,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b0]),8);
    bufp->fullCData(oldp+22,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b1]),8);
    bufp->fullCData(oldp+23,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b2]),8);
    bufp->fullCData(oldp+24,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b3]),8);
    bufp->fullIData(oldp+25,((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b3] 
                                << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b2] 
                                             << 0x10U)) 
                              | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                  [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b1] 
                                  << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                 [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b0]))),32);
    bufp->fullCData(oldp+26,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b0]),8);
    bufp->fullCData(oldp+27,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b1]),8);
    bufp->fullCData(oldp+28,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b2]),8);
    bufp->fullCData(oldp+29,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b3]),8);
    bufp->fullIData(oldp+30,((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b3] 
                                << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b2] 
                                             << 0x10U)) 
                              | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                  [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b1] 
                                  << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                 [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b0]))),32);
    bufp->fullCData(oldp+31,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b0]),8);
    bufp->fullCData(oldp+32,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b1]),8);
    bufp->fullCData(oldp+33,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b2]),8);
    bufp->fullCData(oldp+34,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b3]),8);
    bufp->fullIData(oldp+35,((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b3] 
                                << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b2] 
                                             << 0x10U)) 
                              | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                  [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b1] 
                                  << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                 [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b0]))),32);
    bufp->fullCData(oldp+36,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b0]),8);
    bufp->fullCData(oldp+37,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b1]),8);
    bufp->fullCData(oldp+38,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b2]),8);
    bufp->fullCData(oldp+39,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b3]),8);
    bufp->fullIData(oldp+40,((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b3] 
                                << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b2] 
                                             << 0x10U)) 
                              | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                  [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b1] 
                                  << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                 [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b0]))),32);
    bufp->fullCData(oldp+41,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b0]),8);
    bufp->fullCData(oldp+42,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b1]),8);
    bufp->fullCData(oldp+43,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b2]),8);
    bufp->fullCData(oldp+44,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b3]),8);
    bufp->fullIData(oldp+45,((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b3] 
                                << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b2] 
                                             << 0x10U)) 
                              | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                  [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b1] 
                                  << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                 [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b0]))),32);
    bufp->fullCData(oldp+46,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b0]),8);
    bufp->fullCData(oldp+47,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b1]),8);
    bufp->fullCData(oldp+48,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b2]),8);
    bufp->fullCData(oldp+49,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b3]),8);
    bufp->fullIData(oldp+50,((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__bx0__DOT__sbox_mem
                                [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b3] 
                                << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__bx1__DOT__sbox_mem
                                             [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b2] 
                                             << 0x10U)) 
                              | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__bx2__DOT__sbox_mem
                                  [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b1] 
                                  << 8U) | vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__bx3__DOT__sbox_mem
                                 [vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b0]))),32);
    __Vtemp_1[1U] = (IData)((((QData)((IData)((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__15__KET____DOT__dut__DOT__sbox_mem
                                                 [(
                                                   vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
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
    __Vtemp_1[2U] = (IData)(((((QData)((IData)((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__15__KET____DOT__dut__DOT__sbox_mem
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
                         >> 0x18U)] << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__14__KET____DOT__dut__DOT__sbox_mem
                                                 [(0xffU 
                                                   & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                                                      >> 0x10U))] 
                                                 << 0x10U)) 
                     | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__9__KET____DOT__dut__DOT__sbox_mem
                         [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                                    >> 8U))] << 8U) 
                        | vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__4__KET____DOT__dut__DOT__sbox_mem
                        [(0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U])]));
    __Vtemp_2[1U] = (((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__7__KET____DOT__dut__DOT__sbox_mem
                       [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                         >> 0x18U)] << 0x18U) | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__2__KET____DOT__dut__DOT__sbox_mem
                                                 [(0xffU 
                                                   & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                                                      >> 0x10U))] 
                                                 << 0x10U)) 
                     | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__13__KET____DOT__dut__DOT__sbox_mem
                         [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                                    >> 8U))] << 8U) 
                        | vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__8__KET____DOT__dut__DOT__sbox_mem
                        [(0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U])]));
    __Vtemp_2[2U] = __Vtemp_1[1U];
    __Vtemp_2[3U] = __Vtemp_1[2U];
    bufp->fullWData(oldp+51,(__Vtemp_2),128);
    bufp->fullIData(oldp+55,((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__15__KET____DOT__dut__DOT__sbox_mem
                                [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                                  >> 0x18U)] << 0x18U) 
                               | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__10__KET____DOT__dut__DOT__sbox_mem
                                  [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                                             >> 0x10U))] 
                                  << 0x10U)) | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__5__KET____DOT__dut__DOT__sbox_mem
                                                 [(0xffU 
                                                   & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                                                      >> 8U))] 
                                                 << 8U) 
                                                | vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__0__KET____DOT__dut__DOT__sbox_mem
                                                [(0xffU 
                                                  & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U])]))),32);
    bufp->fullIData(oldp+56,((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__11__KET____DOT__dut__DOT__sbox_mem
                                [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                                  >> 0x18U)] << 0x18U) 
                               | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__6__KET____DOT__dut__DOT__sbox_mem
                                  [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                                             >> 0x10U))] 
                                  << 0x10U)) | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__1__KET____DOT__dut__DOT__sbox_mem
                                                 [(0xffU 
                                                   & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                                                      >> 8U))] 
                                                 << 8U) 
                                                | vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__12__KET____DOT__dut__DOT__sbox_mem
                                                [(0xffU 
                                                  & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U])]))),32);
    bufp->fullIData(oldp+57,((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__7__KET____DOT__dut__DOT__sbox_mem
                                [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                                  >> 0x18U)] << 0x18U) 
                               | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__2__KET____DOT__dut__DOT__sbox_mem
                                  [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                                             >> 0x10U))] 
                                  << 0x10U)) | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__13__KET____DOT__dut__DOT__sbox_mem
                                                 [(0xffU 
                                                   & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                                                      >> 8U))] 
                                                 << 8U) 
                                                | vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__8__KET____DOT__dut__DOT__sbox_mem
                                                [(0xffU 
                                                  & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U])]))),32);
    bufp->fullIData(oldp+58,((((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__3__KET____DOT__dut__DOT__sbox_mem
                                [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                                  >> 0x18U)] << 0x18U) 
                               | (vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__14__KET____DOT__dut__DOT__sbox_mem
                                  [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                                             >> 0x10U))] 
                                  << 0x10U)) | ((vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__9__KET____DOT__dut__DOT__sbox_mem
                                                 [(0xffU 
                                                   & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                                                      >> 8U))] 
                                                 << 8U) 
                                                | vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__4__KET____DOT__dut__DOT__sbox_mem
                                                [(0xffU 
                                                  & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U])]))),32);
    bufp->fullCData(oldp+59,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__0__KET____DOT__dut__DOT__sbox_mem
                             [(0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U])]),8);
    bufp->fullCData(oldp+60,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__10__KET____DOT__dut__DOT__sbox_mem
                             [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                                        >> 0x10U))]),8);
    bufp->fullCData(oldp+61,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__11__KET____DOT__dut__DOT__sbox_mem
                             [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                               >> 0x18U)]),8);
    bufp->fullCData(oldp+62,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__12__KET____DOT__dut__DOT__sbox_mem
                             [(0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U])]),8);
    bufp->fullCData(oldp+63,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__13__KET____DOT__dut__DOT__sbox_mem
                             [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                                        >> 8U))]),8);
    bufp->fullCData(oldp+64,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__14__KET____DOT__dut__DOT__sbox_mem
                             [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                                        >> 0x10U))]),8);
    bufp->fullCData(oldp+65,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__15__KET____DOT__dut__DOT__sbox_mem
                             [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                               >> 0x18U)]),8);
    bufp->fullCData(oldp+66,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__1__KET____DOT__dut__DOT__sbox_mem
                             [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                                        >> 8U))]),8);
    bufp->fullCData(oldp+67,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__2__KET____DOT__dut__DOT__sbox_mem
                             [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                                        >> 0x10U))]),8);
    bufp->fullCData(oldp+68,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__3__KET____DOT__dut__DOT__sbox_mem
                             [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                               >> 0x18U)]),8);
    bufp->fullCData(oldp+69,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__4__KET____DOT__dut__DOT__sbox_mem
                             [(0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U])]),8);
    bufp->fullCData(oldp+70,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__5__KET____DOT__dut__DOT__sbox_mem
                             [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                                        >> 8U))]),8);
    bufp->fullCData(oldp+71,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__6__KET____DOT__dut__DOT__sbox_mem
                             [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                                        >> 0x10U))]),8);
    bufp->fullCData(oldp+72,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__7__KET____DOT__dut__DOT__sbox_mem
                             [(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                               >> 0x18U)]),8);
    bufp->fullCData(oldp+73,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__8__KET____DOT__dut__DOT__sbox_mem
                             [(0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U])]),8);
    bufp->fullCData(oldp+74,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sb__DOT__sbox_inst__BRA__9__KET____DOT__dut__DOT__sbox_mem
                             [(0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                                        >> 8U))]),8);
    bufp->fullCData(oldp+75,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b0),8);
    bufp->fullCData(oldp+76,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b1),8);
    bufp->fullCData(oldp+77,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b2),8);
    bufp->fullCData(oldp+78,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__12__KET____DOT__spl_key__DOT__b3),8);
    bufp->fullCData(oldp+79,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b0),8);
    bufp->fullCData(oldp+80,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b1),8);
    bufp->fullCData(oldp+81,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b2),8);
    bufp->fullCData(oldp+82,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__16__KET____DOT__spl_key__DOT__b3),8);
    bufp->fullCData(oldp+83,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b0),8);
    bufp->fullCData(oldp+84,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b1),8);
    bufp->fullCData(oldp+85,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b2),8);
    bufp->fullCData(oldp+86,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__20__KET____DOT__spl_key__DOT__b3),8);
    bufp->fullCData(oldp+87,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b0),8);
    bufp->fullCData(oldp+88,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b1),8);
    bufp->fullCData(oldp+89,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b2),8);
    bufp->fullCData(oldp+90,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__24__KET____DOT__spl_key__DOT__b3),8);
    bufp->fullCData(oldp+91,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b0),8);
    bufp->fullCData(oldp+92,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b1),8);
    bufp->fullCData(oldp+93,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b2),8);
    bufp->fullCData(oldp+94,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__28__KET____DOT__spl_key__DOT__b3),8);
    bufp->fullCData(oldp+95,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b0),8);
    bufp->fullCData(oldp+96,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b1),8);
    bufp->fullCData(oldp+97,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b2),8);
    bufp->fullCData(oldp+98,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__32__KET____DOT__spl_key__DOT__b3),8);
    bufp->fullCData(oldp+99,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b0),8);
    bufp->fullCData(oldp+100,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b1),8);
    bufp->fullCData(oldp+101,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b2),8);
    bufp->fullCData(oldp+102,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__36__KET____DOT__spl_key__DOT__b3),8);
    bufp->fullCData(oldp+103,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b0),8);
    bufp->fullCData(oldp+104,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b1),8);
    bufp->fullCData(oldp+105,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b2),8);
    bufp->fullCData(oldp+106,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__40__KET____DOT__spl_key__DOT__b3),8);
    bufp->fullCData(oldp+107,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b0),8);
    bufp->fullCData(oldp+108,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b1),8);
    bufp->fullCData(oldp+109,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b2),8);
    bufp->fullCData(oldp+110,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__4__KET____DOT__spl_key__DOT__b3),8);
    bufp->fullCData(oldp+111,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b0),8);
    bufp->fullCData(oldp+112,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b1),8);
    bufp->fullCData(oldp+113,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b2),8);
    bufp->fullCData(oldp+114,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__passkey__DOT__key_gen__BRA__8__KET____DOT__spl_key__DOT__b3),8);
    bufp->fullWData(oldp+115,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__r_key_raw),1408);
    bufp->fullWData(oldp+159,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[0]),128);
    bufp->fullWData(oldp+163,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[1]),128);
    bufp->fullWData(oldp+167,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[2]),128);
    bufp->fullWData(oldp+171,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[3]),128);
    bufp->fullWData(oldp+175,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[4]),128);
    bufp->fullWData(oldp+179,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[5]),128);
    bufp->fullWData(oldp+183,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[6]),128);
    bufp->fullWData(oldp+187,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[7]),128);
    bufp->fullWData(oldp+191,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[8]),128);
    bufp->fullWData(oldp+195,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[9]),128);
    bufp->fullWData(oldp+199,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round_key[10]),128);
    bufp->fullBit(oldp+203,(vlSelfRef.tb_aes_demo__DOT__done));
    bufp->fullWData(oldp+204,(vlSelfRef.tb_aes_demo__DOT__cipher_txt),128);
    bufp->fullCData(oldp+208,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__ps),3);
    bufp->fullWData(oldp+209,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__state),128);
    bufp->fullWData(oldp+213,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__key),128);
    bufp->fullWData(oldp+217,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__sbout),128);
    __Vtemp_4[0U] = ((((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out0) 
                       << 0x18U) | ((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out1) 
                                    << 0x10U)) | (((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out2) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out3)));
    __Vtemp_4[1U] = ((((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out0) 
                       << 0x18U) | ((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out1) 
                                    << 0x10U)) | (((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out2) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out3)));
    __Vtemp_4[2U] = (IData)((((QData)((IData)(((((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out0) 
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
    __Vtemp_4[3U] = (IData)(((((QData)((IData)(((((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out0) 
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
    bufp->fullWData(oldp+221,(__Vtemp_4),128);
    bufp->fullCData(oldp+225,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__round),4);
    bufp->fullIData(oldp+226,(((((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out0) 
                                 << 0x18U) | ((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out1) 
                                              << 0x10U)) 
                               | (((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out2) 
                                   << 8U) | (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out3)))),32);
    bufp->fullCData(oldp+227,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__s0),8);
    bufp->fullCData(oldp+228,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__s1),8);
    bufp->fullCData(oldp+229,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__s2),8);
    bufp->fullCData(oldp+230,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__s3),8);
    bufp->fullCData(oldp+231,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out0),8);
    bufp->fullCData(oldp+232,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out1),8);
    bufp->fullCData(oldp+233,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out2),8);
    bufp->fullCData(oldp+234,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m0__DOT__out3),8);
    bufp->fullIData(oldp+235,(((((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__out0) 
                                 << 0x18U) | ((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__out1) 
                                              << 0x10U)) 
                               | (((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__out2) 
                                   << 8U) | (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__out3)))),32);
    bufp->fullCData(oldp+236,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__s0),8);
    bufp->fullCData(oldp+237,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__s1),8);
    bufp->fullCData(oldp+238,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__s2),8);
    bufp->fullCData(oldp+239,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__s3),8);
    bufp->fullCData(oldp+240,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__out0),8);
    bufp->fullCData(oldp+241,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__out1),8);
    bufp->fullCData(oldp+242,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__out2),8);
    bufp->fullCData(oldp+243,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m1__DOT__out3),8);
    bufp->fullIData(oldp+244,(((((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out0) 
                                 << 0x18U) | ((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out1) 
                                              << 0x10U)) 
                               | (((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out2) 
                                   << 8U) | (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out3)))),32);
    bufp->fullCData(oldp+245,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__s0),8);
    bufp->fullCData(oldp+246,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__s1),8);
    bufp->fullCData(oldp+247,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__s2),8);
    bufp->fullCData(oldp+248,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__s3),8);
    bufp->fullCData(oldp+249,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out0),8);
    bufp->fullCData(oldp+250,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out1),8);
    bufp->fullCData(oldp+251,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out2),8);
    bufp->fullCData(oldp+252,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m2__DOT__out3),8);
    bufp->fullIData(oldp+253,(((((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out0) 
                                 << 0x18U) | ((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out1) 
                                              << 0x10U)) 
                               | (((IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out2) 
                                   << 8U) | (IData)(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out3)))),32);
    bufp->fullCData(oldp+254,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__s0),8);
    bufp->fullCData(oldp+255,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__s1),8);
    bufp->fullCData(oldp+256,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__s2),8);
    bufp->fullCData(oldp+257,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__s3),8);
    bufp->fullCData(oldp+258,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out0),8);
    bufp->fullCData(oldp+259,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out1),8);
    bufp->fullCData(oldp+260,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out2),8);
    bufp->fullCData(oldp+261,(vlSelfRef.tb_aes_demo__DOT__dut__DOT__m3__DOT__out3),8);
    bufp->fullCData(oldp+262,((0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U])),8);
    bufp->fullCData(oldp+263,((0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+264,((vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+265,((0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U])),8);
    bufp->fullCData(oldp+266,((0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+267,((0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+268,((vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[3U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+269,((0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+270,((0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+271,((vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[0U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+272,((0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U])),8);
    bufp->fullCData(oldp+273,((0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+274,((0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+275,((vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[1U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+276,((0xffU & vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U])),8);
    bufp->fullCData(oldp+277,((0xffU & (vlSelfRef.tb_aes_demo__DOT__dut__DOT__state[2U] 
                                        >> 8U))),8);
    bufp->fullBit(oldp+278,(vlSelfRef.tb_aes_demo__DOT__clk));
    bufp->fullBit(oldp+279,(vlSelfRef.tb_aes_demo__DOT__start));
    bufp->fullWData(oldp+280,(vlSelfRef.tb_aes_demo__DOT__plain_txt),128);
    bufp->fullIData(oldp+284,(vlSelfRef.tb_aes_demo__DOT__count),32);
    bufp->fullIData(oldp+285,(vlSelfRef.tb_aes_demo__DOT__start_time),32);
}
