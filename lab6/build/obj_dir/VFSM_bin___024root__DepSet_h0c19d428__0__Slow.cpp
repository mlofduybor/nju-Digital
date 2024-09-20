// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFSM_bin.h for the primary calling header

#include "verilated.h"

#include "VFSM_bin___024root.h"

VL_ATTR_COLD void VFSM_bin___024root___eval_static(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_static\n"); );
}

VL_ATTR_COLD void VFSM_bin___024root___eval_initial(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void VFSM_bin___024root___eval_final(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_final\n"); );
}

VL_ATTR_COLD void VFSM_bin___024root___eval_triggers__stl(VFSM_bin___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_bin___024root___dump_triggers__stl(VFSM_bin___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VFSM_bin___024root___eval_stl(VFSM_bin___024root* vlSelf);

VL_ATTR_COLD void VFSM_bin___024root___eval_settle(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VFSM_bin___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VFSM_bin___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/juniezhang/Desktop/lab6/vsrc/FSM_bin.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VFSM_bin___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_bin___024root___dump_triggers__stl(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*0:0*/, 16> VFSM_bin__ConstPool__TABLE_h5e08d17a_0;
extern const VlUnpacked<CData/*0:0*/, 16> VFSM_bin__ConstPool__TABLE_h7d902788_0;

VL_ATTR_COLD void VFSM_bin___024root___stl_sequent__TOP__0(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ FSM_bin__DOT__outMux__DOT__tag;
    FSM_bin__DOT__outMux__DOT__tag = 0;
    CData/*0:0*/ FSM_bin__DOT__outMux__DOT__out_tmp;
    FSM_bin__DOT__outMux__DOT__out_tmp = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h573b1681__0;
    // Body
    __Vtemp_h573b1681__0[1U] = (IData)(((0x1020304000000000ULL 
                                         | (((QData)((IData)(
                                                             ((IData)(vlSelf->in)
                                                               ? 5U
                                                               : 2U))) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                ((IData)(vlSelf->in)
                                                                  ? 5U
                                                                  : 3U))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   ((IData)(vlSelf->in)
                                                                     ? 5U
                                                                     : 4U))) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(
                                                                      ((IData)(vlSelf->in)
                                                                        ? 5U
                                                                        : 4U))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (0x50607080U 
                                                                        | ((((IData)(vlSelf->in)
                                                                              ? 6U
                                                                              : 1U) 
                                                                            << 0x18U) 
                                                                           | ((((IData)(vlSelf->in)
                                                                                 ? 7U
                                                                                 : 1U) 
                                                                               << 0x10U) 
                                                                              | ((((IData)(vlSelf->in)
                                                                                 ? 8U
                                                                                 : 1U) 
                                                                                << 8U) 
                                                                                | ((IData)(vlSelf->in)
                                                                                 ? 8U
                                                                                 : 1U)))))))))))) 
                                        >> 0x20U));
    vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut[0U] 
        = (IData)((0x1020304000000000ULL | (((QData)((IData)(
                                                             ((IData)(vlSelf->in)
                                                               ? 5U
                                                               : 2U))) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                ((IData)(vlSelf->in)
                                                                  ? 5U
                                                                  : 3U))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   ((IData)(vlSelf->in)
                                                                     ? 5U
                                                                     : 4U))) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(
                                                                      ((IData)(vlSelf->in)
                                                                        ? 5U
                                                                        : 4U))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (0x50607080U 
                                                                        | ((((IData)(vlSelf->in)
                                                                              ? 6U
                                                                              : 1U) 
                                                                            << 0x18U) 
                                                                           | ((((IData)(vlSelf->in)
                                                                                 ? 7U
                                                                                 : 1U) 
                                                                               << 0x10U) 
                                                                              | ((((IData)(vlSelf->in)
                                                                                 ? 8U
                                                                                 : 1U) 
                                                                                << 8U) 
                                                                                | ((IData)(vlSelf->in)
                                                                                 ? 8U
                                                                                 : 1U)))))))))))));
    vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut[1U] 
        = __Vtemp_h573b1681__0[1U];
    vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut[2U] 
        = ((IData)(vlSelf->in) ? 5U : 1U);
    __Vtableidx1 = vlSelf->state_dout;
    FSM_bin__DOT__outMux__DOT__tag = VFSM_bin__ConstPool__TABLE_h5e08d17a_0
        [__Vtableidx1];
    FSM_bin__DOT__outMux__DOT__out_tmp = VFSM_bin__ConstPool__TABLE_h7d902788_0
        [__Vtableidx1];
    vlSelf->FSM_bin__DOT__stateMux__DOT__out_tmp = 0U;
    if (((IData)(vlSelf->state_dout) == (0xfU & (vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut[0U] 
                                                 >> 4U)))) {
        vlSelf->FSM_bin__DOT__stateMux__DOT__out_tmp 
            = (0xfU & vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut[0U]);
    }
    if (((IData)(vlSelf->state_dout) == (0xfU & (vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut[0U] 
                                                 >> 0xcU)))) {
        vlSelf->FSM_bin__DOT__stateMux__DOT__out_tmp 
            = (0xfU & (vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut[0U] 
                       >> 8U));
    }
    if (((IData)(vlSelf->state_dout) == (0xfU & (vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut[0U] 
                                                 >> 0x14U)))) {
        vlSelf->FSM_bin__DOT__stateMux__DOT__out_tmp 
            = (0xfU & (vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut[0U] 
                       >> 0x10U));
    }
    if (((IData)(vlSelf->state_dout) == (vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut[0U] 
                                         >> 0x1cU))) {
        vlSelf->FSM_bin__DOT__stateMux__DOT__out_tmp 
            = (0xfU & (vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut[0U] 
                       >> 0x18U));
    }
    if (((IData)(vlSelf->state_dout) == (0xfU & (vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut[1U] 
                                                 >> 4U)))) {
        vlSelf->FSM_bin__DOT__stateMux__DOT__out_tmp 
            = (0xfU & vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut[1U]);
    }
    if (((IData)(vlSelf->state_dout) == (0xfU & (vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut[1U] 
                                                 >> 0xcU)))) {
        vlSelf->FSM_bin__DOT__stateMux__DOT__out_tmp 
            = (0xfU & (vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut[1U] 
                       >> 8U));
    }
    if (((IData)(vlSelf->state_dout) == (0xfU & (vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut[1U] 
                                                 >> 0x14U)))) {
        vlSelf->FSM_bin__DOT__stateMux__DOT__out_tmp 
            = (0xfU & (vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut[1U] 
                       >> 0x10U));
    }
    if (((IData)(vlSelf->state_dout) == (vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut[1U] 
                                         >> 0x1cU))) {
        vlSelf->FSM_bin__DOT__stateMux__DOT__out_tmp 
            = (0xfU & (vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut[1U] 
                       >> 0x18U));
    }
    vlSelf->FSM_bin__DOT__stateMux__DOT__tag = 0U;
    if (((IData)(vlSelf->state_dout) == (0xfU & (vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut[0U] 
                                                 >> 4U)))) {
        vlSelf->FSM_bin__DOT__stateMux__DOT__tag = 1U;
    }
    if (((IData)(vlSelf->state_dout) == (0xfU & (vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut[0U] 
                                                 >> 0xcU)))) {
        vlSelf->FSM_bin__DOT__stateMux__DOT__tag = 1U;
    }
    if (((IData)(vlSelf->state_dout) == (0xfU & (vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut[0U] 
                                                 >> 0x14U)))) {
        vlSelf->FSM_bin__DOT__stateMux__DOT__tag = 1U;
    }
    if (((IData)(vlSelf->state_dout) == (vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut[0U] 
                                         >> 0x1cU))) {
        vlSelf->FSM_bin__DOT__stateMux__DOT__tag = 1U;
    }
    if (((IData)(vlSelf->state_dout) == (0xfU & (vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut[1U] 
                                                 >> 4U)))) {
        vlSelf->FSM_bin__DOT__stateMux__DOT__tag = 1U;
    }
    if (((IData)(vlSelf->state_dout) == (0xfU & (vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut[1U] 
                                                 >> 0xcU)))) {
        vlSelf->FSM_bin__DOT__stateMux__DOT__tag = 1U;
    }
    if (((IData)(vlSelf->state_dout) == (0xfU & (vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut[1U] 
                                                 >> 0x14U)))) {
        vlSelf->FSM_bin__DOT__stateMux__DOT__tag = 1U;
    }
    if (((IData)(vlSelf->state_dout) == (vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut[1U] 
                                         >> 0x1cU))) {
        vlSelf->FSM_bin__DOT__stateMux__DOT__tag = 1U;
    }
    if (((IData)(vlSelf->state_dout) == (0xfU & (vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut[2U] 
                                                 >> 4U)))) {
        vlSelf->FSM_bin__DOT__stateMux__DOT__out_tmp 
            = (0xfU & vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut[2U]);
        vlSelf->FSM_bin__DOT__stateMux__DOT__tag = 1U;
    }
    vlSelf->out = ((IData)(FSM_bin__DOT__outMux__DOT__out_tmp) 
                   & (IData)(FSM_bin__DOT__outMux__DOT__tag));
}

VL_ATTR_COLD void VFSM_bin___024root___eval_stl(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VFSM_bin___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_bin___024root___dump_triggers__ico(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VFSM_bin___024root___dump_triggers__act(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VFSM_bin___024root___dump_triggers__nba(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VFSM_bin___024root___ctor_var_reset(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->in = 0;
    vlSelf->reset = 0;
    vlSelf->out = 0;
    vlSelf->state_dout = 0;
    VL_ZERO_RESET_W(72, vlSelf->FSM_bin__DOT____Vcellinp__stateMux__lut);
    vlSelf->FSM_bin__DOT__stateMux__DOT__tag = 0;
    vlSelf->FSM_bin__DOT__stateMux__DOT__out_tmp = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
}
