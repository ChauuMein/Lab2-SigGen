module doublesinegen #(
    parameter   A_WIDTH=8,
                D_WIDTH=8


)(
    //interface signals
    input logic                 clk,     //clock
    input logic                 rst,     //reset
    input logic                 en,      //enable
    input logic [A_WIDTH-1:0]   incr,    //increment for addr counter
    input logic   [A_WIDTH-1:0] offset,   // offset input
    output logic [D_WIDTH-1:0]  dout1,    //output data1
    output logic [D_WIDTH-1:0]  dout2     //output data2

);


    logic [A_WIDTH-1:0]         address1;
    logic [A_WIDTH-1:0]         address2;


doublecounter addrCounter (
    .clk (clk),
    .rst (rst),
    .en (en),
    .incr (incr),
    .offset (offset),
    .count (address1),
    .count_offset (address2)

);

rom2 sineRom (
    .clk (clk),
    .addr1 (address1),
    .addr2 (address2),
    .dout1 (dout1),
    .dout2 (dout2)
);

endmodule
