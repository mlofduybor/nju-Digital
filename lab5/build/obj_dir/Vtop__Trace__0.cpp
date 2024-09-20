// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__bcd7seg1__DOT__segs[0]),8);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__bcd7seg1__DOT__segs[1]),8);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__bcd7seg1__DOT__segs[2]),8);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__bcd7seg1__DOT__segs[3]),8);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__bcd7seg1__DOT__segs[4]),8);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__bcd7seg1__DOT__segs[5]),8);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__bcd7seg1__DOT__segs[6]),8);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__bcd7seg1__DOT__segs[7]),8);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__bcd7seg1__DOT__segs[8]),8);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__bcd7seg1__DOT__segs[9]),8);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__bcd7seg1__DOT__segs[10]),8);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__bcd7seg1__DOT__segs[11]),8);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__bcd7seg1__DOT__segs[12]),8);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__bcd7seg1__DOT__segs[13]),8);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__bcd7seg1__DOT__segs[14]),8);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__bcd7seg1__DOT__segs[15]),8);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__bcd7seg2__DOT__segs[0]),8);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__bcd7seg2__DOT__segs[1]),8);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__bcd7seg2__DOT__segs[2]),8);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__bcd7seg2__DOT__segs[3]),8);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__bcd7seg2__DOT__segs[4]),8);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__bcd7seg2__DOT__segs[5]),8);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__bcd7seg2__DOT__segs[6]),8);
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__bcd7seg2__DOT__segs[7]),8);
        bufp->chgCData(oldp+24,(vlSelf->top__DOT__bcd7seg2__DOT__segs[8]),8);
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__bcd7seg2__DOT__segs[9]),8);
        bufp->chgCData(oldp+26,(vlSelf->top__DOT__bcd7seg2__DOT__segs[10]),8);
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__bcd7seg2__DOT__segs[11]),8);
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__bcd7seg2__DOT__segs[12]),8);
        bufp->chgCData(oldp+29,(vlSelf->top__DOT__bcd7seg2__DOT__segs[13]),8);
        bufp->chgCData(oldp+30,(vlSelf->top__DOT__bcd7seg2__DOT__segs[14]),8);
        bufp->chgCData(oldp+31,(vlSelf->top__DOT__bcd7seg2__DOT__segs[15]),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+32,(vlSelf->top__DOT__lfsr1__DOT__number),8);
        bufp->chgCData(oldp+33,((0xfU & (IData)(vlSelf->top__DOT__lfsr1__DOT__number))),4);
        bufp->chgCData(oldp+34,((0xfU & ((IData)(vlSelf->top__DOT__lfsr1__DOT__number) 
                                         >> 4U))),4);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__lfsr1__DOT__count),32);
    }
    bufp->chgBit(oldp+36,(vlSelf->clk));
    bufp->chgBit(oldp+37,(vlSelf->rst));
    bufp->chgCData(oldp+38,(vlSelf->outsegL),8);
    bufp->chgCData(oldp+39,(vlSelf->outsegH),8);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
