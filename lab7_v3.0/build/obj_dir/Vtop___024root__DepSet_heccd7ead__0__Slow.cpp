// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__seg1_1__DOT__segs[0U] = 0xfcU;
    vlSelf->top__DOT__seg1_1__DOT__segs[1U] = 0x60U;
    vlSelf->top__DOT__seg1_1__DOT__segs[2U] = 0xdaU;
    vlSelf->top__DOT__seg1_1__DOT__segs[3U] = 0xf2U;
    vlSelf->top__DOT__seg1_1__DOT__segs[4U] = 0x66U;
    vlSelf->top__DOT__seg1_1__DOT__segs[5U] = 0xb6U;
    vlSelf->top__DOT__seg1_1__DOT__segs[6U] = 0xbeU;
    vlSelf->top__DOT__seg1_1__DOT__segs[7U] = 0xe0U;
    vlSelf->top__DOT__seg1_1__DOT__segs[8U] = 0xfeU;
    vlSelf->top__DOT__seg1_1__DOT__segs[9U] = 0xf6U;
    vlSelf->top__DOT__seg1_1__DOT__segs[0xaU] = 0xeeU;
    vlSelf->top__DOT__seg1_1__DOT__segs[0xbU] = 0x3eU;
    vlSelf->top__DOT__seg1_1__DOT__segs[0xcU] = 0x9cU;
    vlSelf->top__DOT__seg1_1__DOT__segs[0xdU] = 0x7aU;
    vlSelf->top__DOT__seg1_1__DOT__segs[0xeU] = 0x9eU;
    vlSelf->top__DOT__seg1_1__DOT__segs[0xfU] = 0x8eU;
    vlSelf->top__DOT__seg1_2__DOT__segs[0U] = 0xfcU;
    vlSelf->top__DOT__seg1_2__DOT__segs[1U] = 0x60U;
    vlSelf->top__DOT__seg1_2__DOT__segs[2U] = 0xdaU;
    vlSelf->top__DOT__seg1_2__DOT__segs[3U] = 0xf2U;
    vlSelf->top__DOT__seg1_2__DOT__segs[4U] = 0x66U;
    vlSelf->top__DOT__seg1_2__DOT__segs[5U] = 0xb6U;
    vlSelf->top__DOT__seg1_2__DOT__segs[6U] = 0xbeU;
    vlSelf->top__DOT__seg1_2__DOT__segs[7U] = 0xe0U;
    vlSelf->top__DOT__seg1_2__DOT__segs[8U] = 0xfeU;
    vlSelf->top__DOT__seg1_2__DOT__segs[9U] = 0xf6U;
    vlSelf->top__DOT__seg1_2__DOT__segs[0xaU] = 0xeeU;
    vlSelf->top__DOT__seg1_2__DOT__segs[0xbU] = 0x3eU;
    vlSelf->top__DOT__seg1_2__DOT__segs[0xcU] = 0x9cU;
    vlSelf->top__DOT__seg1_2__DOT__segs[0xdU] = 0x7aU;
    vlSelf->top__DOT__seg1_2__DOT__segs[0xeU] = 0x9eU;
    vlSelf->top__DOT__seg1_2__DOT__segs[0xfU] = 0x8eU;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/juniezhang/Desktop/lab7_v3.0/vsrc/top.v", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ top__DOT__display;
    top__DOT__display = 0;
    // Body
    if (((IData)(vlSelf->ready) & (~ (IData)(vlSelf->nextdata_n)))) {
        vlSelf->top__DOT__fsm1__DOT__nextstate = ((0U 
                                                   == (IData)(vlSelf->top__DOT__fsm1__DOT__state))
                                                   ? 
                                                  ((0xf0U 
                                                    == (IData)(vlSelf->top__DOT__scan_code))
                                                    ? 1U
                                                    : 2U)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->top__DOT__fsm1__DOT__state))
                                                    ? 
                                                   ((0xf0U 
                                                     == (IData)(vlSelf->top__DOT__scan_code))
                                                     ? 1U
                                                     : 2U)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__fsm1__DOT__state))
                                                     ? 
                                                    ((0xf0U 
                                                      == (IData)(vlSelf->top__DOT__scan_code))
                                                      ? 1U
                                                      : 2U)
                                                     : 1U)));
    }
    top__DOT__display = ((0U != (IData)(vlSelf->top__DOT__fsm1__DOT__state)) 
                         & ((1U != (IData)(vlSelf->top__DOT__fsm1__DOT__state)) 
                            & (2U == (IData)(vlSelf->top__DOT__fsm1__DOT__state))));
    if (top__DOT__display) {
        vlSelf->o_seg_1_1 = (0xffU & ((8U & (IData)(vlSelf->top__DOT__scan_code))
                                       ? ((4U & (IData)(vlSelf->top__DOT__scan_code))
                                           ? ((2U & (IData)(vlSelf->top__DOT__scan_code))
                                               ? ((1U 
                                                   & (IData)(vlSelf->top__DOT__scan_code))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_1__DOT__segs
                                                   [0xfU])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_1__DOT__segs
                                                   [0xeU]))
                                               : ((1U 
                                                   & (IData)(vlSelf->top__DOT__scan_code))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_1__DOT__segs
                                                   [0xdU])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_1__DOT__segs
                                                   [0xcU])))
                                           : ((2U & (IData)(vlSelf->top__DOT__scan_code))
                                               ? ((1U 
                                                   & (IData)(vlSelf->top__DOT__scan_code))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_1__DOT__segs
                                                   [0xbU])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_1__DOT__segs
                                                   [0xaU]))
                                               : ((1U 
                                                   & (IData)(vlSelf->top__DOT__scan_code))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_1__DOT__segs
                                                   [9U])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_1__DOT__segs
                                                   [8U]))))
                                       : ((4U & (IData)(vlSelf->top__DOT__scan_code))
                                           ? ((2U & (IData)(vlSelf->top__DOT__scan_code))
                                               ? ((1U 
                                                   & (IData)(vlSelf->top__DOT__scan_code))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_1__DOT__segs
                                                   [7U])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_1__DOT__segs
                                                   [6U]))
                                               : ((1U 
                                                   & (IData)(vlSelf->top__DOT__scan_code))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_1__DOT__segs
                                                   [5U])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_1__DOT__segs
                                                   [4U])))
                                           : ((2U & (IData)(vlSelf->top__DOT__scan_code))
                                               ? ((1U 
                                                   & (IData)(vlSelf->top__DOT__scan_code))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_1__DOT__segs
                                                   [3U])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_1__DOT__segs
                                                   [2U]))
                                               : ((1U 
                                                   & (IData)(vlSelf->top__DOT__scan_code))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_1__DOT__segs
                                                   [1U])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_1__DOT__segs
                                                   [0U]))))));
        vlSelf->o_seg_1_2 = (0xffU & ((0x80U & (IData)(vlSelf->top__DOT__scan_code))
                                       ? ((0x40U & (IData)(vlSelf->top__DOT__scan_code))
                                           ? ((0x20U 
                                               & (IData)(vlSelf->top__DOT__scan_code))
                                               ? ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__scan_code))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_2__DOT__segs
                                                   [0xfU])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_2__DOT__segs
                                                   [0xeU]))
                                               : ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__scan_code))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_2__DOT__segs
                                                   [0xdU])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_2__DOT__segs
                                                   [0xcU])))
                                           : ((0x20U 
                                               & (IData)(vlSelf->top__DOT__scan_code))
                                               ? ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__scan_code))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_2__DOT__segs
                                                   [0xbU])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_2__DOT__segs
                                                   [0xaU]))
                                               : ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__scan_code))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_2__DOT__segs
                                                   [9U])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_2__DOT__segs
                                                   [8U]))))
                                       : ((0x40U & (IData)(vlSelf->top__DOT__scan_code))
                                           ? ((0x20U 
                                               & (IData)(vlSelf->top__DOT__scan_code))
                                               ? ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__scan_code))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_2__DOT__segs
                                                   [7U])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_2__DOT__segs
                                                   [6U]))
                                               : ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__scan_code))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_2__DOT__segs
                                                   [5U])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_2__DOT__segs
                                                   [4U])))
                                           : ((0x20U 
                                               & (IData)(vlSelf->top__DOT__scan_code))
                                               ? ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__scan_code))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_2__DOT__segs
                                                   [3U])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_2__DOT__segs
                                                   [2U]))
                                               : ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__scan_code))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_2__DOT__segs
                                                   [1U])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg1_2__DOT__segs
                                                   [0U]))))));
    } else {
        vlSelf->o_seg_1_1 = 0xffU;
        vlSelf->o_seg_1_2 = 0xffU;
    }
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->clrn = 0;
    vlSelf->ps2_clk = 0;
    vlSelf->ps2_data = 0;
    vlSelf->nextdata_n = 0;
    vlSelf->overflow = 0;
    vlSelf->ready = 0;
    vlSelf->o_seg_1_1 = 0;
    vlSelf->o_seg_1_2 = 0;
    vlSelf->o_seg_3_1 = 0;
    vlSelf->o_seg_3_2 = 0;
    vlSelf->top__DOT__scan_code = 0;
    vlSelf->top__DOT__ps2_keyboard1__DOT__buffer = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__ps2_keyboard1__DOT__fifo[__Vi0] = 0;
    }
    vlSelf->top__DOT__ps2_keyboard1__DOT__w_ptr = 0;
    vlSelf->top__DOT__ps2_keyboard1__DOT__r_ptr = 0;
    vlSelf->top__DOT__ps2_keyboard1__DOT__count = 0;
    vlSelf->top__DOT__ps2_keyboard1__DOT__ps2_clk_sync = 0;
    vlSelf->top__DOT__ps2_keyboard1__DOT____Vlvbound_h1a91ade8__0 = 0;
    vlSelf->top__DOT__fsm1__DOT__state = 0;
    vlSelf->top__DOT__fsm1__DOT__nextstate = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__seg1_1__DOT__segs[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__seg1_2__DOT__segs[__Vi0] = 0;
    }
    vlSelf->__Vtrigrprev__TOP__clk = 0;
}
