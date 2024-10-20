// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop_sim.h"
#include "Vtop_sim__Syms.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vtop_sim::Vtop_sim(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop_sim__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , clrn{vlSymsp->TOP.clrn}
    , data{vlSymsp->TOP.data}
    , scan_code{vlSymsp->TOP.scan_code}
    , acsill_code{vlSymsp->TOP.acsill_code}
    , count_key{vlSymsp->TOP.count_key}
    , display{vlSymsp->TOP.display}
    , ready{vlSymsp->TOP.ready}
    , overflow{vlSymsp->TOP.overflow}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop_sim::Vtop_sim(const char* _vcname__)
    : Vtop_sim(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop_sim::~Vtop_sim() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop_sim___024root___eval_debug_assertions(Vtop_sim___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop_sim___024root___eval_static(Vtop_sim___024root* vlSelf);
void Vtop_sim___024root___eval_initial(Vtop_sim___024root* vlSelf);
void Vtop_sim___024root___eval_settle(Vtop_sim___024root* vlSelf);
void Vtop_sim___024root___eval(Vtop_sim___024root* vlSelf);

void Vtop_sim::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop_sim::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop_sim___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop_sim___024root___eval_static(&(vlSymsp->TOP));
        Vtop_sim___024root___eval_initial(&(vlSymsp->TOP));
        Vtop_sim___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop_sim___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtop_sim::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtop_sim::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtop_sim::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop_sim___024root___eval_final(Vtop_sim___024root* vlSelf);

VL_ATTR_COLD void Vtop_sim::final() {
    Vtop_sim___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop_sim::hierName() const { return vlSymsp->name(); }
const char* Vtop_sim::modelName() const { return "Vtop_sim"; }
unsigned Vtop_sim::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vtop_sim::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtop_sim___024root__trace_init_top(Vtop_sim___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop_sim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_sim___024root*>(voidSelf);
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtop_sim___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtop_sim___024root__trace_register(Vtop_sim___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtop_sim::trace(VerilatedFstC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtop_sim::trace()' shall not be called after 'VerilatedFstC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtop_sim___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
