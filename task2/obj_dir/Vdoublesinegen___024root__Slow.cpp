// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdoublesinegen.h for the primary calling header

#include "verilated.h"

#include "Vdoublesinegen__Syms.h"
#include "Vdoublesinegen___024root.h"

void Vdoublesinegen___024root___ctor_var_reset(Vdoublesinegen___024root* vlSelf);

Vdoublesinegen___024root::Vdoublesinegen___024root(Vdoublesinegen__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdoublesinegen___024root___ctor_var_reset(this);
}

void Vdoublesinegen___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vdoublesinegen___024root::~Vdoublesinegen___024root() {
}
