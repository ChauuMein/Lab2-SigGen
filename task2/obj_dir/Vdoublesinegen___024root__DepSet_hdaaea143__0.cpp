// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdoublesinegen.h for the primary calling header

#include "verilated.h"

#include "Vdoublesinegen___024root.h"

VL_INLINE_OPT void Vdoublesinegen___024root___sequent__TOP__0(Vdoublesinegen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesinegen___024root___sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__doublesinegen__DOT__addrCounter__DOT__counter_value;
    // Body
    __Vdly__doublesinegen__DOT__addrCounter__DOT__counter_value 
        = vlSelf->doublesinegen__DOT__addrCounter__DOT__counter_value;
    vlSelf->dout1 = vlSelf->doublesinegen__DOT__sineRom__DOT__rom_array
        [vlSelf->doublesinegen__DOT__addrCounter__DOT__counter_value];
    vlSelf->dout2 = vlSelf->doublesinegen__DOT__sineRom__DOT__rom_array
        [vlSelf->doublesinegen__DOT__addrCounter__DOT__counter_offset_value];
    if (vlSelf->rst) {
        __Vdly__doublesinegen__DOT__addrCounter__DOT__counter_value = 0U;
        vlSelf->doublesinegen__DOT__addrCounter__DOT__counter_offset_value = 0U;
    } else if (vlSelf->en) {
        __Vdly__doublesinegen__DOT__addrCounter__DOT__counter_value 
            = (0xffU & ((IData)(vlSelf->doublesinegen__DOT__addrCounter__DOT__counter_value) 
                        + (IData)(vlSelf->incr)));
        vlSelf->doublesinegen__DOT__addrCounter__DOT__counter_offset_value 
            = (0xffU & (((IData)(vlSelf->doublesinegen__DOT__addrCounter__DOT__counter_value) 
                         + (IData)(vlSelf->incr)) + (IData)(vlSelf->offset)));
    }
    vlSelf->doublesinegen__DOT__addrCounter__DOT__counter_value 
        = __Vdly__doublesinegen__DOT__addrCounter__DOT__counter_value;
}

void Vdoublesinegen___024root___eval(Vdoublesinegen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesinegen___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vdoublesinegen___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vdoublesinegen___024root___eval_debug_assertions(Vdoublesinegen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesinegen___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
