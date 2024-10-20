// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_sim.h for the primary calling header

#include "verilated.h"

#include "Vtop_sim__Syms.h"
#include "Vtop_sim___024root.h"

VL_ATTR_COLD void Vtop_sim___024root___eval_static(Vtop_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop_sim___024root___eval_initial__TOP(Vtop_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top_sim__DOT__kbd_clk = 1U;
}

VL_ATTR_COLD void Vtop_sim___024root___eval_final(Vtop_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop_sim___024root___eval_triggers__stl(Vtop_sim___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_sim___024root___dump_triggers__stl(Vtop_sim___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop_sim___024root___eval_stl(Vtop_sim___024root* vlSelf);

VL_ATTR_COLD void Vtop_sim___024root___eval_settle(Vtop_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop_sim___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop_sim___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/juniezhang/Desktop/nju-digital/lab7_v3.0_sim/vsrc/top_sim.v", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop_sim___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_sim___024root___dump_triggers__stl(Vtop_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_sim___024root___stl_sequent__TOP__0(Vtop_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->display = ((0U != (IData)(vlSelf->top_sim__DOT__top1__DOT__fsm1__DOT__state)) 
                       & ((1U != (IData)(vlSelf->top_sim__DOT__top1__DOT__fsm1__DOT__state)) 
                          & (2U == (IData)(vlSelf->top_sim__DOT__top1__DOT__fsm1__DOT__state))));
    vlSelf->acsill_code = vlSelf->top_sim__DOT__top1__DOT__keyboard_decoder_rom1__DOT__data;
    vlSelf->data = vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__fifo
        [vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__r_ptr];
    if (((IData)(vlSelf->ready) & (~ (IData)(vlSelf->top_sim__DOT__nextdata_n)))) {
        vlSelf->top_sim__DOT__top1__DOT__fsm1__DOT__nextstate 
            = ((0U == (IData)(vlSelf->top_sim__DOT__top1__DOT__fsm1__DOT__state))
                ? ((0xf0U == (IData)(vlSelf->scan_code))
                    ? 1U : 2U) : ((1U == (IData)(vlSelf->top_sim__DOT__top1__DOT__fsm1__DOT__state))
                                   ? ((0xf0U == (IData)(vlSelf->scan_code))
                                       ? 1U : 2U) : 
                                  ((2U == (IData)(vlSelf->top_sim__DOT__top1__DOT__fsm1__DOT__state))
                                    ? ((0xf0U == (IData)(vlSelf->scan_code))
                                        ? 1U : 2U) : 1U)));
    }
}

VL_ATTR_COLD void Vtop_sim___024root___eval_stl(Vtop_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop_sim___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_sim___024root___dump_triggers__act(Vtop_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_sim___024root___dump_triggers__nba(Vtop_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_sim___024root___ctor_var_reset(Vtop_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->clrn = VL_RAND_RESET_I(1);
    vlSelf->data = VL_RAND_RESET_I(8);
    vlSelf->scan_code = VL_RAND_RESET_I(8);
    vlSelf->acsill_code = VL_RAND_RESET_I(8);
    vlSelf->count_key = VL_RAND_RESET_I(8);
    vlSelf->display = VL_RAND_RESET_I(1);
    vlSelf->ready = VL_RAND_RESET_I(1);
    vlSelf->overflow = VL_RAND_RESET_I(1);
    vlSelf->top_sim__DOT__kbd_clk = VL_RAND_RESET_I(1);
    vlSelf->top_sim__DOT__kbd_data = VL_RAND_RESET_I(1);
    vlSelf->top_sim__DOT__nextdata_n = VL_RAND_RESET_I(1);
    vlSelf->top_sim__DOT__model__DOT__kbd_sendcode__Vstatic__i = VL_RAND_RESET_I(32);
    vlSelf->top_sim__DOT__model__DOT__kbd_sendcode__Vstatic__send_buffer = VL_RAND_RESET_I(11);
    vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__buffer = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__fifo[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__w_ptr = VL_RAND_RESET_I(3);
    vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__r_ptr = VL_RAND_RESET_I(3);
    vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__ps2_clk_sync = VL_RAND_RESET_I(3);
    vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT____Vlvbound_h4321e8f0__0 = VL_RAND_RESET_I(1);
    vlSelf->top_sim__DOT__top1__DOT__keyboard_decoder_rom1__DOT__data = VL_RAND_RESET_I(8);
    vlSelf->top_sim__DOT__top1__DOT__fsm1__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->top_sim__DOT__top1__DOT__fsm1__DOT__nextstate = VL_RAND_RESET_I(2);
    vlSelf->top_sim__DOT__top1__DOT__fsm1__DOT__count_tag = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
