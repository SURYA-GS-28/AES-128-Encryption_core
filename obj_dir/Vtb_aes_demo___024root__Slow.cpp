// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_aes_demo.h for the primary calling header

#include "Vtb_aes_demo__pch.h"
#include "Vtb_aes_demo__Syms.h"
#include "Vtb_aes_demo___024root.h"

void Vtb_aes_demo___024root___ctor_var_reset(Vtb_aes_demo___024root* vlSelf);

Vtb_aes_demo___024root::Vtb_aes_demo___024root(Vtb_aes_demo__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_aes_demo___024root___ctor_var_reset(this);
}

void Vtb_aes_demo___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_aes_demo___024root::~Vtb_aes_demo___024root() {
}
