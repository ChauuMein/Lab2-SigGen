// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdoublesinegen__Syms.h"


void Vdoublesinegen___024root__trace_chg_sub_0(Vdoublesinegen___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdoublesinegen___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesinegen___024root__trace_chg_top_0\n"); );
    // Init
    Vdoublesinegen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdoublesinegen___024root*>(voidSelf);
    Vdoublesinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdoublesinegen___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vdoublesinegen___024root__trace_chg_sub_0(Vdoublesinegen___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesinegen___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst));
    bufp->chgBit(oldp+2,(vlSelf->en));
    bufp->chgCData(oldp+3,(vlSelf->incr),8);
    bufp->chgCData(oldp+4,(vlSelf->offset),8);
    bufp->chgCData(oldp+5,(vlSelf->dout1),8);
    bufp->chgCData(oldp+6,(vlSelf->dout2),8);
    bufp->chgCData(oldp+7,(vlSelf->doublesinegen__DOT__addrCounter__DOT__counter_value),8);
    bufp->chgCData(oldp+8,(vlSelf->doublesinegen__DOT__addrCounter__DOT__counter_offset_value),8);
}

void Vdoublesinegen___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesinegen___024root__trace_cleanup\n"); );
    // Init
    Vdoublesinegen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdoublesinegen___024root*>(voidSelf);
    Vdoublesinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
