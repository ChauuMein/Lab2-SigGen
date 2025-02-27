// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdoublesinegen.h for the primary calling header

#ifndef VERILATED_VDOUBLESINEGEN___024ROOT_H_
#define VERILATED_VDOUBLESINEGEN___024ROOT_H_  // guard

#include "verilated.h"

class Vdoublesinegen__Syms;

class Vdoublesinegen___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_IN8(incr,7,0);
    VL_IN8(offset,7,0);
    VL_OUT8(dout1,7,0);
    VL_OUT8(dout2,7,0);
    CData/*7:0*/ doublesinegen__DOT__addrCounter__DOT__counter_value;
    CData/*7:0*/ doublesinegen__DOT__addrCounter__DOT__counter_offset_value;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*7:0*/, 256> doublesinegen__DOT__sineRom__DOT__rom_array;

    // INTERNAL VARIABLES
    Vdoublesinegen__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdoublesinegen___024root(Vdoublesinegen__Syms* symsp, const char* name);
    ~Vdoublesinegen___024root();
    VL_UNCOPYABLE(Vdoublesinegen___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
