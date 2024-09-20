// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFSM_bin.h for the primary calling header

#include "verilated.h"

#include "VFSM_bin___024root.h"

VL_INLINE_OPT void VFSM_bin___024root___ico_sequent__TOP__0(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___ico_sequent__TOP__0\n"); );
    // Init
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
}

void VFSM_bin___024root___eval_ico(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VFSM_bin___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VFSM_bin___024root___eval_act(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*0:0*/, 16> VFSM_bin__ConstPool__TABLE_h5e08d17a_0;
extern const VlUnpacked<CData/*0:0*/, 16> VFSM_bin__ConstPool__TABLE_h7d902788_0;

VL_INLINE_OPT void VFSM_bin___024root___nba_sequent__TOP__0(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ FSM_bin__DOT__outMux__DOT__tag;
    FSM_bin__DOT__outMux__DOT__tag = 0;
    CData/*0:0*/ FSM_bin__DOT__outMux__DOT__out_tmp;
    FSM_bin__DOT__outMux__DOT__out_tmp = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->state_dout = ((IData)(vlSelf->reset) ? 
                          ((IData)(vlSelf->FSM_bin__DOT__stateMux__DOT__tag)
                            ? (IData)(vlSelf->FSM_bin__DOT__stateMux__DOT__out_tmp)
                            : 0U) : 0U);
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
    __Vtableidx1 = vlSelf->state_dout;
    FSM_bin__DOT__outMux__DOT__tag = VFSM_bin__ConstPool__TABLE_h5e08d17a_0
        [__Vtableidx1];
    FSM_bin__DOT__outMux__DOT__out_tmp = VFSM_bin__ConstPool__TABLE_h7d902788_0
        [__Vtableidx1];
    vlSelf->out = ((IData)(FSM_bin__DOT__outMux__DOT__out_tmp) 
                   & (IData)(FSM_bin__DOT__outMux__DOT__tag));
}

void VFSM_bin___024root___eval_nba(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VFSM_bin___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VFSM_bin___024root___eval_triggers__ico(VFSM_bin___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_bin___024root___dump_triggers__ico(VFSM_bin___024root* vlSelf);
#endif  // VL_DEBUG
void VFSM_bin___024root___eval_triggers__act(VFSM_bin___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_bin___024root___dump_triggers__act(VFSM_bin___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_bin___024root___dump_triggers__nba(VFSM_bin___024root* vlSelf);
#endif  // VL_DEBUG

void VFSM_bin___024root___eval(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VFSM_bin___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VFSM_bin___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/juniezhang/Desktop/lab6/vsrc/FSM_bin.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VFSM_bin___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VFSM_bin___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VFSM_bin___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/juniezhang/Desktop/lab6/vsrc/FSM_bin.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VFSM_bin___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VFSM_bin___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/juniezhang/Desktop/lab6/vsrc/FSM_bin.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VFSM_bin___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VFSM_bin___024root___eval_debug_assertions(VFSM_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->in & 0xfeU))) {
        Verilated::overWidthError("in");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
