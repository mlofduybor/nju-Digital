// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+37,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+39,"outsegL",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+40,"outsegH",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+37,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"LFSR_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+39,"outsegL",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+40,"outsegH",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->pushNamePrefix("bcd7seg1 ");
    tracep->declBus(c+34,"bcd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+39,"o_seg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,"segs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 7,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bcd7seg2 ");
    tracep->declBus(c+35,"bcd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+40,"o_seg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+17+i*1,"segs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 7,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lfsr1 ");
    tracep->declBit(c+37,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"LFSR_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+33,"number",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,"CLK_NUM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+36,"count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__bcd7seg1__DOT__segs[0]),8);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__bcd7seg1__DOT__segs[1]),8);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__bcd7seg1__DOT__segs[2]),8);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__bcd7seg1__DOT__segs[3]),8);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__bcd7seg1__DOT__segs[4]),8);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__bcd7seg1__DOT__segs[5]),8);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__bcd7seg1__DOT__segs[6]),8);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__bcd7seg1__DOT__segs[7]),8);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__bcd7seg1__DOT__segs[8]),8);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__bcd7seg1__DOT__segs[9]),8);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__bcd7seg1__DOT__segs[10]),8);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__bcd7seg1__DOT__segs[11]),8);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__bcd7seg1__DOT__segs[12]),8);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__bcd7seg1__DOT__segs[13]),8);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__bcd7seg1__DOT__segs[14]),8);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__bcd7seg1__DOT__segs[15]),8);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__bcd7seg2__DOT__segs[0]),8);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__bcd7seg2__DOT__segs[1]),8);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__bcd7seg2__DOT__segs[2]),8);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__bcd7seg2__DOT__segs[3]),8);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__bcd7seg2__DOT__segs[4]),8);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__bcd7seg2__DOT__segs[5]),8);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__bcd7seg2__DOT__segs[6]),8);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__bcd7seg2__DOT__segs[7]),8);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__bcd7seg2__DOT__segs[8]),8);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__bcd7seg2__DOT__segs[9]),8);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__bcd7seg2__DOT__segs[10]),8);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__bcd7seg2__DOT__segs[11]),8);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__bcd7seg2__DOT__segs[12]),8);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__bcd7seg2__DOT__segs[13]),8);
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__bcd7seg2__DOT__segs[14]),8);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__bcd7seg2__DOT__segs[15]),8);
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__lfsr1__DOT__number),8);
    bufp->fullCData(oldp+34,((0xfU & (IData)(vlSelf->top__DOT__lfsr1__DOT__number))),4);
    bufp->fullCData(oldp+35,((0xfU & ((IData)(vlSelf->top__DOT__lfsr1__DOT__number) 
                                      >> 4U))),4);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__lfsr1__DOT__count),32);
    bufp->fullBit(oldp+37,(vlSelf->clk));
    bufp->fullBit(oldp+38,(vlSelf->rst));
    bufp->fullCData(oldp+39,(vlSelf->outsegL),8);
    bufp->fullCData(oldp+40,(vlSelf->outsegH),8);
    bufp->fullIData(oldp+41,(0x42c1d80U),32);
}
