module SimReg#(parameter WIDTH = 8,
         parameter INIT_VALUE = 0)
        (clk, reset, state_din, state_dout, state_wen);
    input clk;
    input reset;
    input [WIDTH-1:0] state_din;
    output reg [WIDTH-1:0] state_dout;
    input state_wen;

    always @(posedge clk)
    begin
        if (!reset)
            state_dout <= INIT_VALUE;
        else if (state_wen)
            state_dout <= state_din;
        else 
            state_dout <= state_dout;
    end

endmodule
