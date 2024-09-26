`timescale 1ns / 1ps
module top(clk, clrn, ps2_clk, ps2_data, nextdata_n, overflow, ready,
           o_seg_1_1, o_seg_1_2, o_seg_3_1, o_seg_3_2);
    
    input ps2_clk; 
    input ps2_data;
    input clk;
    input clrn;

    input nextdata_n;
            
    output ready;
    
    output overflow;

    output [7:0] o_seg_1_1;
    output [7:0] o_seg_1_2;

    output [7:0] o_seg_3_1;
    output [7:0] o_seg_3_2;

    wire [7:0] data;
    wire [7:0] scan_code;
    //wire [7:0] count_key;
    wire display;


    ps2_keyboard ps2_keyboard1(clk, clrn, ps2_clk, ps2_data, data, ready, nextdata_n, overflow);


    fsm fsm1(clk, clrn, data, ready, nextdata_n, display, scan_code);


    bcd7seg seg1_1(scan_code[3:0], o_seg_1_1, display);
    bcd7seg seg1_2(scan_code[7:4], o_seg_1_2, display);


    // bcd7seg seg3_1(count_key[3:0], o_seg_3_1, 1);
    // bcd7seg seg3_2(count_key[7:4], o_seg_3_2, 1);


endmodule

