// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop_sim__Syms.h"


VL_ATTR_COLD void Vtop_sim___024root__trace_init_sub__TOP__0(Vtop_sim___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+23,"clk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"clrn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+25,"data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+26,"scan_code",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+27,"acsill_code",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+28,"count_key",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+29,"display",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top_sim ");
    tracep->declBus(c+35,"clock_period",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+23,"clk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"clrn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+25,"data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+26,"scan_code",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+27,"acsill_code",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+28,"count_key",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+29,"display",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"kbd_clk",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"kbd_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"nextdata_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("model ");
    tracep->declBit(c+1,"ps2_clk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"ps2_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"kbd_clk_period",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+4,"kbd_sendcode__Vstatic__i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5,"kbd_sendcode__Vstatic__send_buffer",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 10,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("top1 ");
    tracep->declBit(c+1,"ps2_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"ps2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"clrn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"nextdata_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+25,"data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+26,"scan_code",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+27,"acsill_code",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+28,"count_key",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+29,"display",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("fsm1 ");
    tracep->declBit(c+23,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"clrn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+25,"data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+30,"ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"nextdata_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"display",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+28,"count_key",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+26,"data_reg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+32,"tag",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+6,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+33,"nextstate",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+7,"count_tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+37,"s0",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+38,"s1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+39,"s2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("keyboard_decoder_rom1 ");
    tracep->declBit(c+23,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"nextdata_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+25,"scan_code",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+27,"dout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+34,"read_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ps2_keyboard1 ");
    tracep->declBit(c+23,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"clrn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"ps2_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"ps2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"nextdata_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+25,"data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+30,"ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+9,"buffer",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+10+i*1,"fifo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->declBus(c+18,"w_ptr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+19,"r_ptr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+20,"count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+21,"ps2_clk_sync",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+22,"sampling",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop_sim___024root__trace_init_top(Vtop_sim___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root__trace_init_top\n"); );
    // Body
    Vtop_sim___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop_sim___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop_sim___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop_sim___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop_sim___024root__trace_register(Vtop_sim___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop_sim___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop_sim___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop_sim___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop_sim___024root__trace_full_sub_0(Vtop_sim___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop_sim___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root__trace_full_top_0\n"); );
    // Init
    Vtop_sim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_sim___024root*>(voidSelf);
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop_sim___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_sim___024root__trace_full_sub_0(Vtop_sim___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top_sim__DOT__kbd_clk));
    bufp->fullBit(oldp+2,(vlSelf->top_sim__DOT__kbd_data));
    bufp->fullBit(oldp+3,(vlSelf->top_sim__DOT__nextdata_n));
    bufp->fullIData(oldp+4,(vlSelf->top_sim__DOT__model__DOT__kbd_sendcode__Vstatic__i),32);
    bufp->fullSData(oldp+5,(vlSelf->top_sim__DOT__model__DOT__kbd_sendcode__Vstatic__send_buffer),11);
    bufp->fullCData(oldp+6,(vlSelf->top_sim__DOT__top1__DOT__fsm1__DOT__state),2);
    bufp->fullBit(oldp+7,(vlSelf->top_sim__DOT__top1__DOT__fsm1__DOT__count_tag));
    bufp->fullCData(oldp+8,(vlSelf->top_sim__DOT__top1__DOT__keyboard_decoder_rom1__DOT__data),8);
    bufp->fullSData(oldp+9,(vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__buffer),10);
    bufp->fullCData(oldp+10,(vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__fifo[0]),8);
    bufp->fullCData(oldp+11,(vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__fifo[1]),8);
    bufp->fullCData(oldp+12,(vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__fifo[2]),8);
    bufp->fullCData(oldp+13,(vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__fifo[3]),8);
    bufp->fullCData(oldp+14,(vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__fifo[4]),8);
    bufp->fullCData(oldp+15,(vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__fifo[5]),8);
    bufp->fullCData(oldp+16,(vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__fifo[6]),8);
    bufp->fullCData(oldp+17,(vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__fifo[7]),8);
    bufp->fullCData(oldp+18,(vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__w_ptr),3);
    bufp->fullCData(oldp+19,(vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__r_ptr),3);
    bufp->fullCData(oldp+20,(vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__count),4);
    bufp->fullCData(oldp+21,(vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+22,((IData)((4U == (6U & (IData)(vlSelf->top_sim__DOT__top1__DOT__ps2_keyboard1__DOT__ps2_clk_sync))))));
    bufp->fullBit(oldp+23,(vlSelf->clk));
    bufp->fullBit(oldp+24,(vlSelf->clrn));
    bufp->fullCData(oldp+25,(vlSelf->data),8);
    bufp->fullCData(oldp+26,(vlSelf->scan_code),8);
    bufp->fullCData(oldp+27,(vlSelf->acsill_code),8);
    bufp->fullCData(oldp+28,(vlSelf->count_key),8);
    bufp->fullBit(oldp+29,(vlSelf->display));
    bufp->fullBit(oldp+30,(vlSelf->ready));
    bufp->fullBit(oldp+31,(vlSelf->overflow));
    bufp->fullBit(oldp+32,((0xf0U == (IData)(vlSelf->scan_code))));
    bufp->fullCData(oldp+33,(vlSelf->top_sim__DOT__top1__DOT__fsm1__DOT__nextstate),2);
    bufp->fullBit(oldp+34,(((~ (IData)(vlSelf->top_sim__DOT__nextdata_n)) 
                            & (IData)(vlSelf->ready))));
    bufp->fullIData(oldp+35,(0xaU),32);
    bufp->fullIData(oldp+36,(0x3cU),32);
    bufp->fullCData(oldp+37,(0U),2);
    bufp->fullCData(oldp+38,(1U),2);
    bufp->fullCData(oldp+39,(2U),2);
}
