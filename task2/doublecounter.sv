module doublecounter #(
    parameter WIDTH = 8
)(
    // interface signals 
    input logic               clk,      // clock
    input logic               rst,      // reset 
    input logic               en,       // count enable 
    input logic   [WIDTH-1:0] incr,     // input
    input logic   [WIDTH-1:0] offset,   // offset input
    output logic  [WIDTH-1:0] count,    // count output 
    output logic  [WIDTH-1:0] count_offset // count output with offset 
);

    logic [WIDTH-1:0] counter_value;
    logic [WIDTH-1:0] counter_offset_value;

    always_ff @ (posedge clk) begin
        if (rst) begin
            counter_value <= {WIDTH{1'b0}};
            counter_offset_value <= {WIDTH{1'b0}};
        end
        else if (en) begin
            counter_value <= counter_value + incr;
            counter_offset_value <= counter_value + incr + offset;
        end
    end 

    assign count = counter_value;
    assign count_offset = counter_offset_value;

endmodule

