module sigdelay #(
    parameter   A_WIDTH=9,
                D_WIDTH=8


)(
    //interface signals
    input logic                 clk,     //clock
    input logic                 rst,     //reset
    input logic                 en,      //enable
    input logic                 wr,    //write enable 
    input logic                 rd,    //read enable 
    input logic [A_WIDTH-1:0]   incr,    //increment for addr counter
    input logic  [A_WIDTH-1:0] offset,   // offset input
    input logic [D_WIDTH-1:0]   din,     //input dataq  
    output logic [D_WIDTH-1:0]  dout     //output data

    

);


  
    logic [A_WIDTH-1:0]         address1;
    logic [A_WIDTH-1:0]         address2;


counter addrCounter (
    .clk (clk),
    .rst (rst),
    .en (en),
    .incr (incr),
    .offset (offset),
    .count (address1),
    .count_offset (address2)

);

ram2 sigRam (
    .clk (clk),
    .wr (wr),
    .rd (rd),
    .wr_addr (address1),
    .rd_addr (address2),
    .din (din),
    .dout (dout)
   
);

endmodule
