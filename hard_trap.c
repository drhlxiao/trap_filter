// hard code version

module trap (
    input [7:0] pulse,
    input clk,
    output [7:0] data
);

wire [7:0] pulse;
reg [7:0] data;
reg [7:0] ak;
reg [7:0] akl;
reg [7:0] b;
reg [7:0] c;
reg [7:0] y;
reg [7:0] kdelay1;

  
  always @ (posedge clk)
	begin
      ak = pulse + kdelay1
      task kdelay;
        integer i;
        reg [7:0] b [0:3] = '{0,0,0,0};
  
	   begin
        for(i=0; i<time; i=i+1) begin
            b[i+1] = b[i];
            b[0] = a;
            out = b[3];
        end
         endtask
    endmodule