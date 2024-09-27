// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

extern const VlUnpacked<CData/*2:0*/, 128> Vtop__ConstPool__TABLE_h3a0056b7_0;

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = ((((0xf0U == (IData)(vlSelf->top__DOT__scan_code))
                       ? 1U : (((0x14U == (IData)(vlSelf->top__DOT__scan_code)) 
                                | ((0x12U == (IData)(vlSelf->top__DOT__scan_code)) 
                                   | (0x59U == (IData)(vlSelf->top__DOT__scan_code))))
                                ? 2U : 0U)) << 5U) 
                    | (((IData)(vlSelf->nextdata_n) 
                        << 4U) | (((IData)(vlSelf->ready) 
                                   << 3U) | (IData)(vlSelf->top__DOT__fsm1__DOT__state))));
    vlSelf->top__DOT__fsm1__DOT__nextstate = Vtop__ConstPool__TABLE_h3a0056b7_0
        [__Vtableidx1];
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*0:0*/, 8> Vtop__ConstPool__TABLE_hf2143fec_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtop__ConstPool__TABLE_h220bd5b0_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ top__DOT__display;
    top__DOT__display = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*2:0*/ __Vdly__top__DOT__ps2_keyboard1__DOT__ps2_clk_sync;
    __Vdly__top__DOT__ps2_keyboard1__DOT__ps2_clk_sync = 0;
    CData/*2:0*/ __Vdly__top__DOT__ps2_keyboard1__DOT__r_ptr;
    __Vdly__top__DOT__ps2_keyboard1__DOT__r_ptr = 0;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__ps2_keyboard1__DOT__fifo__v0;
    __Vdlyvdim0__top__DOT__ps2_keyboard1__DOT__fifo__v0 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__ps2_keyboard1__DOT__fifo__v0;
    __Vdlyvval__top__DOT__ps2_keyboard1__DOT__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ps2_keyboard1__DOT__fifo__v0;
    __Vdlyvset__top__DOT__ps2_keyboard1__DOT__fifo__v0 = 0;
    CData/*2:0*/ __Vdly__top__DOT__ps2_keyboard1__DOT__w_ptr;
    __Vdly__top__DOT__ps2_keyboard1__DOT__w_ptr = 0;
    CData/*3:0*/ __Vdly__top__DOT__ps2_keyboard1__DOT__count;
    __Vdly__top__DOT__ps2_keyboard1__DOT__count = 0;
    CData/*7:0*/ __Vdly__top__DOT__scan_code;
    __Vdly__top__DOT__scan_code = 0;
    CData/*7:0*/ __Vdly__top__DOT__count_key;
    __Vdly__top__DOT__count_key = 0;
    // Body
    __Vdly__top__DOT__ps2_keyboard1__DOT__ps2_clk_sync 
        = vlSelf->top__DOT__ps2_keyboard1__DOT__ps2_clk_sync;
    __Vdly__top__DOT__count_key = vlSelf->top__DOT__count_key;
    __Vdly__top__DOT__scan_code = vlSelf->top__DOT__scan_code;
    __Vdly__top__DOT__ps2_keyboard1__DOT__count = vlSelf->top__DOT__ps2_keyboard1__DOT__count;
    __Vdly__top__DOT__ps2_keyboard1__DOT__w_ptr = vlSelf->top__DOT__ps2_keyboard1__DOT__w_ptr;
    __Vdly__top__DOT__ps2_keyboard1__DOT__r_ptr = vlSelf->top__DOT__ps2_keyboard1__DOT__r_ptr;
    __Vdlyvset__top__DOT__ps2_keyboard1__DOT__fifo__v0 = 0U;
    __Vdly__top__DOT__ps2_keyboard1__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelf->top__DOT__ps2_keyboard1__DOT__ps2_clk_sync) 
                  << 1U)) | (IData)(vlSelf->ps2_clk));
    __Vdly__top__DOT__scan_code = (((IData)(vlSelf->ready) 
                                    & (~ (IData)(vlSelf->nextdata_n)))
                                    ? (IData)(vlSelf->top__DOT__data)
                                    : (IData)(vlSelf->top__DOT__scan_code));
    vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data 
        = (((~ (IData)(vlSelf->nextdata_n)) & (IData)(vlSelf->ready))
            ? ((0x1cU == (IData)(vlSelf->top__DOT__data))
                ? ((IData)(vlSelf->top__DOT__combination)
                    ? 0x41U : 0x61U) : ((0x32U == (IData)(vlSelf->top__DOT__data))
                                         ? ((IData)(vlSelf->top__DOT__combination)
                                             ? 0x42U
                                             : 0x62U)
                                         : ((0x21U 
                                             == (IData)(vlSelf->top__DOT__data))
                                             ? ((IData)(vlSelf->top__DOT__combination)
                                                 ? 0x43U
                                                 : 0x63U)
                                             : (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))))
            : (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data));
    if (vlSelf->clrn) {
        if (vlSelf->top__DOT__fsm1__DOT__count_tag) {
            __Vdly__top__DOT__count_key = (0xffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__count_key)));
            vlSelf->top__DOT__fsm1__DOT__count_tag = 0U;
        } else {
            __Vdly__top__DOT__count_key = vlSelf->top__DOT__count_key;
        }
        vlSelf->top__DOT__fsm1__DOT__count_tag = (((IData)(vlSelf->ready) 
                                                   & (~ (IData)(vlSelf->nextdata_n))) 
                                                  & (0xf0U 
                                                     == (IData)(vlSelf->top__DOT__scan_code)));
        if (vlSelf->ready) {
            if ((1U & (~ (IData)(vlSelf->nextdata_n)))) {
                __Vdly__top__DOT__ps2_keyboard1__DOT__r_ptr 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ps2_keyboard1__DOT__r_ptr)));
                if (((IData)(vlSelf->top__DOT__ps2_keyboard1__DOT__w_ptr) 
                     == (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ps2_keyboard1__DOT__r_ptr))))) {
                    vlSelf->ready = 0U;
                }
            }
        }
        if ((IData)((4U == (6U & (IData)(vlSelf->top__DOT__ps2_keyboard1__DOT__ps2_clk_sync))))) {
            if ((0xaU == (IData)(vlSelf->top__DOT__ps2_keyboard1__DOT__count))) {
                if ((((~ (IData)(vlSelf->top__DOT__ps2_keyboard1__DOT__buffer)) 
                      & (IData)(vlSelf->ps2_data)) 
                     & VL_REDXOR_32((0x1ffU & ((IData)(vlSelf->top__DOT__ps2_keyboard1__DOT__buffer) 
                                               >> 1U))))) {
                    __Vdlyvval__top__DOT__ps2_keyboard1__DOT__fifo__v0 
                        = (0xffU & ((IData)(vlSelf->top__DOT__ps2_keyboard1__DOT__buffer) 
                                    >> 1U));
                    __Vdlyvset__top__DOT__ps2_keyboard1__DOT__fifo__v0 = 1U;
                    __Vdlyvdim0__top__DOT__ps2_keyboard1__DOT__fifo__v0 
                        = vlSelf->top__DOT__ps2_keyboard1__DOT__w_ptr;
                    vlSelf->ready = 1U;
                    __Vdly__top__DOT__ps2_keyboard1__DOT__w_ptr 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ps2_keyboard1__DOT__w_ptr)));
                    vlSelf->overflow = ((IData)(vlSelf->overflow) 
                                        | ((IData)(vlSelf->top__DOT__ps2_keyboard1__DOT__r_ptr) 
                                           == (7U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__ps2_keyboard1__DOT__w_ptr)))));
                }
                __Vdly__top__DOT__ps2_keyboard1__DOT__count = 0U;
            } else {
                vlSelf->top__DOT__ps2_keyboard1__DOT____Vlvbound_h1a91ade8__0 
                    = vlSelf->ps2_data;
                if ((9U >= (IData)(vlSelf->top__DOT__ps2_keyboard1__DOT__count))) {
                    vlSelf->top__DOT__ps2_keyboard1__DOT__buffer 
                        = (((~ ((IData)(1U) << (IData)(vlSelf->top__DOT__ps2_keyboard1__DOT__count))) 
                            & (IData)(vlSelf->top__DOT__ps2_keyboard1__DOT__buffer)) 
                           | (0x3ffU & ((IData)(vlSelf->top__DOT__ps2_keyboard1__DOT____Vlvbound_h1a91ade8__0) 
                                        << (IData)(vlSelf->top__DOT__ps2_keyboard1__DOT__count))));
                }
                __Vdly__top__DOT__ps2_keyboard1__DOT__count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__ps2_keyboard1__DOT__count)));
            }
        }
        vlSelf->top__DOT__fsm1__DOT__state = vlSelf->top__DOT__fsm1__DOT__nextstate;
    } else {
        __Vdly__top__DOT__count_key = 0U;
        vlSelf->top__DOT__fsm1__DOT__count_tag = 0U;
        __Vdly__top__DOT__ps2_keyboard1__DOT__count = 0U;
        __Vdly__top__DOT__ps2_keyboard1__DOT__w_ptr = 0U;
        __Vdly__top__DOT__ps2_keyboard1__DOT__r_ptr = 0U;
        vlSelf->overflow = 0U;
        vlSelf->ready = 0U;
        vlSelf->top__DOT__fsm1__DOT__state = 0U;
    }
    vlSelf->top__DOT__count_key = __Vdly__top__DOT__count_key;
    vlSelf->top__DOT__scan_code = __Vdly__top__DOT__scan_code;
    vlSelf->top__DOT__ps2_keyboard1__DOT__ps2_clk_sync 
        = __Vdly__top__DOT__ps2_keyboard1__DOT__ps2_clk_sync;
    vlSelf->top__DOT__ps2_keyboard1__DOT__w_ptr = __Vdly__top__DOT__ps2_keyboard1__DOT__w_ptr;
    vlSelf->top__DOT__ps2_keyboard1__DOT__count = __Vdly__top__DOT__ps2_keyboard1__DOT__count;
    vlSelf->top__DOT__ps2_keyboard1__DOT__r_ptr = __Vdly__top__DOT__ps2_keyboard1__DOT__r_ptr;
    if (__Vdlyvset__top__DOT__ps2_keyboard1__DOT__fifo__v0) {
        vlSelf->top__DOT__ps2_keyboard1__DOT__fifo[__Vdlyvdim0__top__DOT__ps2_keyboard1__DOT__fifo__v0] 
            = __Vdlyvval__top__DOT__ps2_keyboard1__DOT__fifo__v0;
    }
    vlSelf->o_seg_3_1 = (0xffU & ((8U & (IData)(vlSelf->top__DOT__count_key))
                                   ? ((4U & (IData)(vlSelf->top__DOT__count_key))
                                       ? ((2U & (IData)(vlSelf->top__DOT__count_key))
                                           ? ((1U & (IData)(vlSelf->top__DOT__count_key))
                                               ? (~ 
                                                  vlSelf->top__DOT__seg3_1__DOT__segs
                                                  [0xfU])
                                               : (~ 
                                                  vlSelf->top__DOT__seg3_1__DOT__segs
                                                  [0xeU]))
                                           : ((1U & (IData)(vlSelf->top__DOT__count_key))
                                               ? (~ 
                                                  vlSelf->top__DOT__seg3_1__DOT__segs
                                                  [0xdU])
                                               : (~ 
                                                  vlSelf->top__DOT__seg3_1__DOT__segs
                                                  [0xcU])))
                                       : ((2U & (IData)(vlSelf->top__DOT__count_key))
                                           ? ((1U & (IData)(vlSelf->top__DOT__count_key))
                                               ? (~ 
                                                  vlSelf->top__DOT__seg3_1__DOT__segs
                                                  [0xbU])
                                               : (~ 
                                                  vlSelf->top__DOT__seg3_1__DOT__segs
                                                  [0xaU]))
                                           : ((1U & (IData)(vlSelf->top__DOT__count_key))
                                               ? (~ 
                                                  vlSelf->top__DOT__seg3_1__DOT__segs
                                                  [9U])
                                               : (~ 
                                                  vlSelf->top__DOT__seg3_1__DOT__segs
                                                  [8U]))))
                                   : ((4U & (IData)(vlSelf->top__DOT__count_key))
                                       ? ((2U & (IData)(vlSelf->top__DOT__count_key))
                                           ? ((1U & (IData)(vlSelf->top__DOT__count_key))
                                               ? (~ 
                                                  vlSelf->top__DOT__seg3_1__DOT__segs
                                                  [7U])
                                               : (~ 
                                                  vlSelf->top__DOT__seg3_1__DOT__segs
                                                  [6U]))
                                           : ((1U & (IData)(vlSelf->top__DOT__count_key))
                                               ? (~ 
                                                  vlSelf->top__DOT__seg3_1__DOT__segs
                                                  [5U])
                                               : (~ 
                                                  vlSelf->top__DOT__seg3_1__DOT__segs
                                                  [4U])))
                                       : ((2U & (IData)(vlSelf->top__DOT__count_key))
                                           ? ((1U & (IData)(vlSelf->top__DOT__count_key))
                                               ? (~ 
                                                  vlSelf->top__DOT__seg3_1__DOT__segs
                                                  [3U])
                                               : (~ 
                                                  vlSelf->top__DOT__seg3_1__DOT__segs
                                                  [2U]))
                                           : ((1U & (IData)(vlSelf->top__DOT__count_key))
                                               ? (~ 
                                                  vlSelf->top__DOT__seg3_1__DOT__segs
                                                  [1U])
                                               : (~ 
                                                  vlSelf->top__DOT__seg3_1__DOT__segs
                                                  [0U]))))));
    vlSelf->o_seg_3_2 = (0xffU & ((0x80U & (IData)(vlSelf->top__DOT__count_key))
                                   ? ((0x40U & (IData)(vlSelf->top__DOT__count_key))
                                       ? ((0x20U & (IData)(vlSelf->top__DOT__count_key))
                                           ? ((0x10U 
                                               & (IData)(vlSelf->top__DOT__count_key))
                                               ? (~ 
                                                  vlSelf->top__DOT__seg3_2__DOT__segs
                                                  [0xfU])
                                               : (~ 
                                                  vlSelf->top__DOT__seg3_2__DOT__segs
                                                  [0xeU]))
                                           : ((0x10U 
                                               & (IData)(vlSelf->top__DOT__count_key))
                                               ? (~ 
                                                  vlSelf->top__DOT__seg3_2__DOT__segs
                                                  [0xdU])
                                               : (~ 
                                                  vlSelf->top__DOT__seg3_2__DOT__segs
                                                  [0xcU])))
                                       : ((0x20U & (IData)(vlSelf->top__DOT__count_key))
                                           ? ((0x10U 
                                               & (IData)(vlSelf->top__DOT__count_key))
                                               ? (~ 
                                                  vlSelf->top__DOT__seg3_2__DOT__segs
                                                  [0xbU])
                                               : (~ 
                                                  vlSelf->top__DOT__seg3_2__DOT__segs
                                                  [0xaU]))
                                           : ((0x10U 
                                               & (IData)(vlSelf->top__DOT__count_key))
                                               ? (~ 
                                                  vlSelf->top__DOT__seg3_2__DOT__segs
                                                  [9U])
                                               : (~ 
                                                  vlSelf->top__DOT__seg3_2__DOT__segs
                                                  [8U]))))
                                   : ((0x40U & (IData)(vlSelf->top__DOT__count_key))
                                       ? ((0x20U & (IData)(vlSelf->top__DOT__count_key))
                                           ? ((0x10U 
                                               & (IData)(vlSelf->top__DOT__count_key))
                                               ? (~ 
                                                  vlSelf->top__DOT__seg3_2__DOT__segs
                                                  [7U])
                                               : (~ 
                                                  vlSelf->top__DOT__seg3_2__DOT__segs
                                                  [6U]))
                                           : ((0x10U 
                                               & (IData)(vlSelf->top__DOT__count_key))
                                               ? (~ 
                                                  vlSelf->top__DOT__seg3_2__DOT__segs
                                                  [5U])
                                               : (~ 
                                                  vlSelf->top__DOT__seg3_2__DOT__segs
                                                  [4U])))
                                       : ((0x20U & (IData)(vlSelf->top__DOT__count_key))
                                           ? ((0x10U 
                                               & (IData)(vlSelf->top__DOT__count_key))
                                               ? (~ 
                                                  vlSelf->top__DOT__seg3_2__DOT__segs
                                                  [3U])
                                               : (~ 
                                                  vlSelf->top__DOT__seg3_2__DOT__segs
                                                  [2U]))
                                           : ((0x10U 
                                               & (IData)(vlSelf->top__DOT__count_key))
                                               ? (~ 
                                                  vlSelf->top__DOT__seg3_2__DOT__segs
                                                  [1U])
                                               : (~ 
                                                  vlSelf->top__DOT__seg3_2__DOT__segs
                                                  [0U]))))));
    vlSelf->top__DOT__data = vlSelf->top__DOT__ps2_keyboard1__DOT__fifo
        [vlSelf->top__DOT__ps2_keyboard1__DOT__r_ptr];
    __Vtableidx1 = ((((0xf0U == (IData)(vlSelf->top__DOT__scan_code))
                       ? 1U : (((0x14U == (IData)(vlSelf->top__DOT__scan_code)) 
                                | ((0x12U == (IData)(vlSelf->top__DOT__scan_code)) 
                                   | (0x59U == (IData)(vlSelf->top__DOT__scan_code))))
                                ? 2U : 0U)) << 5U) 
                    | (((IData)(vlSelf->nextdata_n) 
                        << 4U) | (((IData)(vlSelf->ready) 
                                   << 3U) | (IData)(vlSelf->top__DOT__fsm1__DOT__state))));
    vlSelf->top__DOT__fsm1__DOT__nextstate = Vtop__ConstPool__TABLE_h3a0056b7_0
        [__Vtableidx1];
    __Vtableidx2 = vlSelf->top__DOT__fsm1__DOT__state;
    top__DOT__display = Vtop__ConstPool__TABLE_hf2143fec_0
        [__Vtableidx2];
    vlSelf->top__DOT__combination = Vtop__ConstPool__TABLE_h220bd5b0_0
        [__Vtableidx2];
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
        vlSelf->o_seg_2_1 = (0xffU & ((8U & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                       ? ((4U & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                           ? ((2U & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                               ? ((1U 
                                                   & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_1__DOT__segs
                                                   [0xfU])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_1__DOT__segs
                                                   [0xeU]))
                                               : ((1U 
                                                   & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_1__DOT__segs
                                                   [0xdU])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_1__DOT__segs
                                                   [0xcU])))
                                           : ((2U & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                               ? ((1U 
                                                   & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_1__DOT__segs
                                                   [0xbU])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_1__DOT__segs
                                                   [0xaU]))
                                               : ((1U 
                                                   & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_1__DOT__segs
                                                   [9U])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_1__DOT__segs
                                                   [8U]))))
                                       : ((4U & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                           ? ((2U & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                               ? ((1U 
                                                   & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_1__DOT__segs
                                                   [7U])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_1__DOT__segs
                                                   [6U]))
                                               : ((1U 
                                                   & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_1__DOT__segs
                                                   [5U])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_1__DOT__segs
                                                   [4U])))
                                           : ((2U & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                               ? ((1U 
                                                   & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_1__DOT__segs
                                                   [3U])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_1__DOT__segs
                                                   [2U]))
                                               : ((1U 
                                                   & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_1__DOT__segs
                                                   [1U])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_1__DOT__segs
                                                   [0U]))))));
        vlSelf->o_seg_2_2 = (0xffU & ((0x80U & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                       ? ((0x40U & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                           ? ((0x20U 
                                               & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                               ? ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_2__DOT__segs
                                                   [0xfU])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_2__DOT__segs
                                                   [0xeU]))
                                               : ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_2__DOT__segs
                                                   [0xdU])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_2__DOT__segs
                                                   [0xcU])))
                                           : ((0x20U 
                                               & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                               ? ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_2__DOT__segs
                                                   [0xbU])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_2__DOT__segs
                                                   [0xaU]))
                                               : ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_2__DOT__segs
                                                   [9U])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_2__DOT__segs
                                                   [8U]))))
                                       : ((0x40U & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                           ? ((0x20U 
                                               & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                               ? ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_2__DOT__segs
                                                   [7U])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_2__DOT__segs
                                                   [6U]))
                                               : ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_2__DOT__segs
                                                   [5U])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_2__DOT__segs
                                                   [4U])))
                                           : ((0x20U 
                                               & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                               ? ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_2__DOT__segs
                                                   [3U])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_2__DOT__segs
                                                   [2U]))
                                               : ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__keyboard_decoder_rom1__DOT__data))
                                                   ? 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_2__DOT__segs
                                                   [1U])
                                                   : 
                                                  (~ 
                                                   vlSelf->top__DOT__seg2_2__DOT__segs
                                                   [0U]))))));
    } else {
        vlSelf->o_seg_1_1 = 0xffU;
        vlSelf->o_seg_1_2 = 0xffU;
        vlSelf->o_seg_2_1 = 0xffU;
        vlSelf->o_seg_2_2 = 0xffU;
    }
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
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
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/juniezhang/Desktop/lab7_v3.0/vsrc/top.v", 2, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
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
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/juniezhang/Desktop/lab7_v3.0/vsrc/top.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/juniezhang/Desktop/lab7_v3.0/vsrc/top.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->clrn & 0xfeU))) {
        Verilated::overWidthError("clrn");}
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
    if (VL_UNLIKELY((vlSelf->ps2_data & 0xfeU))) {
        Verilated::overWidthError("ps2_data");}
    if (VL_UNLIKELY((vlSelf->nextdata_n & 0xfeU))) {
        Verilated::overWidthError("nextdata_n");}
}
#endif  // VL_DEBUG
