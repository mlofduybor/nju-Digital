// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop_sim__Syms.h"


void Vtop_sim___024root__trace_chg_sub_0(Vtop_sim___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop_sim___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root__trace_chg_top_0\n"); );
    // Init
    Vtop_sim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_sim___024root*>(voidSelf);
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop_sim___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_sim___024root__trace_chg_sub_0(Vtop_sim___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->top_sim__DOT__kbd_clk));
        bufp->chgBit(oldp+1,(vlSelf->top_sim__DOT__kbd_data));
        bufp->chgBit(oldp+2,(vlSelf->top_sim__DOT__nextdata_n));
        bufp->chgIData(oldp+3,(vlSelf->top_sim__DOT__model__DOT__kbd_sendcode__Vstatic__i),32);
        bufp->chgSData(oldp+4,(vlSelf->top_sim__DOT__model__DOT__kbd_sendcode__Vstatic__send_buffer),11);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+5,(vlSelf->top_sim__DOT__top1__DOT__fsm1__DOT__state),2);
        bufp->chgBit(oldp+6,(vlSelf->top_sim__DOT__top1__DOT__fsm1__DOT__count_tag));
        bufp->chgCData(oldp+7,(vlSelf->top_sim__DOT__top1__DOT__keyboard_decoder_rom1__DOT__data),8);
        bufp->chgSData(oldp+8,(vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__buffer),10);
        bufp->chgCData(oldp+9,(vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__fifo[0]),8);
        bufp->chgCData(oldp+10,(vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__fifo[1]),8);
        bufp->chgCData(oldp+11,(vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__fifo[2]),8);
        bufp->chgCData(oldp+12,(vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__fifo[3]),8);
        bufp->chgCData(oldp+13,(vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__fifo[4]),8);
        bufp->chgCData(oldp+14,(vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__fifo[5]),8);
        bufp->chgCData(oldp+15,(vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__fifo[6]),8);
        bufp->chgCData(oldp+16,(vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__fifo[7]),8);
        bufp->chgCData(oldp+17,(vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__w_ptr),3);
        bufp->chgCData(oldp+18,(vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__r_ptr),3);
        bufp->chgCData(oldp+19,(vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__count),4);
        bufp->chgCData(oldp+20,(vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__ps2_clk_sync),3);
        bufp->chgBit(oldp+21,((IData)((4U == (6U & (IData)(vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__ps2_clk_sync))))));
    }
    bufp->chgBit(oldp+22,(vlSelf->clk));
    bufp->chgBit(oldp+23,(vlSelf->clrn));
    bufp->chgCData(oldp+24,(vlSelf->data),8);
    bufp->chgCData(oldp+25,(vlSelf->scan_code),8);
    bufp->chgCData(oldp+26,(vlSelf->acsill_code),8);
    bufp->chgCData(oldp+27,(vlSelf->count_key),8);
    bufp->chgBit(oldp+28,(vlSelf->display));
    bufp->chgBit(oldp+29,(vlSelf->ready));
    bufp->chgBit(oldp+30,(vlSelf->overflow));
    bufp->chgBit(oldp+31,((0xf0U == (IData)(vlSelf->scan_code))));
    bufp->chgCData(oldp+32,(vlSelf->top_sim__DOT__top1__DOT__fsm1__DOT__nextstate),2);
    bufp->chgBit(oldp+33,(((~ (IData)(vlSelf->top_sim__DOT__nextdata_n)) 
                           & (IData)(vlSelf->ready))));
}

void Vtop_sim___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root__trace_cleanup\n"); );
    // Init
    Vtop_sim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_sim___024root*>(voidSelf);
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
