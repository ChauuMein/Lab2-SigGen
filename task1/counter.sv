module counter #(
    parameter WIDTH = 8
)(
    // interface signals 
    input logic               clk,      // clock
    input logic               rst,      // reset 
    input logic               en,       //count enable 
    input logic   [WIDTH-1:0] incr,     // input
    output logic  [WIDTH-1:0] count     // count output 

);

always_ff @ (posedge clk) 
    if (rst) count <= {WIDTH{1'b0}};
    else     count <= count + incr + {{WIDTH-1{1'b0}}, en}; // if reset isn't asserted, counter is incremented 


endmodule
