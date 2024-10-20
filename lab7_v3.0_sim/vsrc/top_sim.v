`timescale 1ns / 1ps
module top_sim(clk, clrn, data, scan_code, acsill_code, count_key, display, ready, overflow);
/* parameter */
parameter [31:0] clock_period = 10;

/* ps2_keyboard interface signals */
output reg clk,clrn;
output wire [7:0] data;
output wire [7:0] scan_code;
output wire [7:0] acsill_code;
output wire [7:0] count_key;
output wire display;
output wire ready,overflow;
wire kbd_clk, kbd_data;
reg nextdata_n;

ps2_keyboard_model model(
    .ps2_clk(kbd_clk),
    .ps2_data(kbd_data)
);

top top1(
    .clk(clk),
    .clrn(clrn),
    .ps2_clk(kbd_clk),
    .ps2_data(kbd_data),
    .data(data),
    .scan_code(scan_code),
    .acsill_code(acsill_code),
    .count_key(count_key),
    .display(display),
    .ready(ready),
    .nextdata_n(nextdata_n),
    .overflow(overflow)
);

initial begin /* clock driver */
    clk = 0;
    forever
        #(clock_period/2) clk = ~clk;
end

initial begin
    clrn = 1'b0;  #20;
    clrn = 1'b1;  #20;
    model.kbd_sendcode(8'h1C); // press 'a'
    #20 nextdata_n =1'b0; #20 nextdata_n =1'b1;//read data
    model.kbd_sendcode(8'hF0); // break code
    #20 nextdata_n =1'b0; #20 nextdata_n =1'b1; //read data
    model.kbd_sendcode(8'h1C); // release 'a'
    #20 nextdata_n =1'b0; #20 nextdata_n =1'b1; //read data
    model.kbd_sendcode(8'h32); // press 'b'
    #20 model.kbd_sendcode(8'h32); // keep pressing 'b'
    #20 model.kbd_sendcode(8'h32); // keep pressing 'b'
    model.kbd_sendcode(8'hF0); // break code
    model.kbd_sendcode(8'h32); // release 'b'
    #20;
    $finish;
end

endmodule   
