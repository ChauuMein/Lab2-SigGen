// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdoublesinegen.h"
#include "Vdoublesinegen__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdoublesinegen::Vdoublesinegen(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdoublesinegen__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , incr{vlSymsp->TOP.incr}
    , offset{vlSymsp->TOP.offset}
    , dout1{vlSymsp->TOP.dout1}
    , dout2{vlSymsp->TOP.dout2}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdoublesinegen::Vdoublesinegen(const char* _vcname__)
    : Vdoublesinegen(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdoublesinegen::~Vdoublesinegen() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vdoublesinegen___024root___eval_initial(Vdoublesinegen___024root* vlSelf);
void Vdoublesinegen___024root___eval_settle(Vdoublesinegen___024root* vlSelf);
void Vdoublesinegen___024root___eval(Vdoublesinegen___024root* vlSelf);
#ifdef VL_DEBUG
void Vdoublesinegen___024root___eval_debug_assertions(Vdoublesinegen___024root* vlSelf);
#endif  // VL_DEBUG
void Vdoublesinegen___024root___final(Vdoublesinegen___024root* vlSelf);

static void _eval_initial_loop(Vdoublesinegen__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vdoublesinegen___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vdoublesinegen___024root___eval_settle(&(vlSymsp->TOP));
        Vdoublesinegen___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vdoublesinegen::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdoublesinegen::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdoublesinegen___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vdoublesinegen___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vdoublesinegen::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vdoublesinegen::final() {
    Vdoublesinegen___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdoublesinegen::hierName() const { return vlSymsp->name(); }
const char* Vdoublesinegen::modelName() const { return "Vdoublesinegen"; }
unsigned Vdoublesinegen::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vdoublesinegen::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdoublesinegen___024root__trace_init_top(Vdoublesinegen___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdoublesinegen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdoublesinegen___024root*>(voidSelf);
    Vdoublesinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vdoublesinegen___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vdoublesinegen___024root__trace_register(Vdoublesinegen___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdoublesinegen::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdoublesinegen___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
