// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VFSM_bin.h"
#include "VFSM_bin__Syms.h"

//============================================================
// Constructors

VFSM_bin::VFSM_bin(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VFSM_bin__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , in{vlSymsp->TOP.in}
    , reset{vlSymsp->TOP.reset}
    , out{vlSymsp->TOP.out}
    , state_dout{vlSymsp->TOP.state_dout}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VFSM_bin::VFSM_bin(const char* _vcname__)
    : VFSM_bin(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VFSM_bin::~VFSM_bin() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VFSM_bin___024root___eval_debug_assertions(VFSM_bin___024root* vlSelf);
#endif  // VL_DEBUG
void VFSM_bin___024root___eval_static(VFSM_bin___024root* vlSelf);
void VFSM_bin___024root___eval_initial(VFSM_bin___024root* vlSelf);
void VFSM_bin___024root___eval_settle(VFSM_bin___024root* vlSelf);
void VFSM_bin___024root___eval(VFSM_bin___024root* vlSelf);

void VFSM_bin::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFSM_bin::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VFSM_bin___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VFSM_bin___024root___eval_static(&(vlSymsp->TOP));
        VFSM_bin___024root___eval_initial(&(vlSymsp->TOP));
        VFSM_bin___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VFSM_bin___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VFSM_bin::eventsPending() { return false; }

uint64_t VFSM_bin::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VFSM_bin::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VFSM_bin___024root___eval_final(VFSM_bin___024root* vlSelf);

VL_ATTR_COLD void VFSM_bin::final() {
    VFSM_bin___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VFSM_bin::hierName() const { return vlSymsp->name(); }
const char* VFSM_bin::modelName() const { return "VFSM_bin"; }
unsigned VFSM_bin::threads() const { return 1; }
