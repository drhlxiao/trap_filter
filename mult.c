// multiplier

module mult
(
	input [7:0] a,
	input [7:0] b,
	input clk,
    output reg [7:0] out

 
);
	initial begin
      out <= 1;
    end
  
	always @ (posedge clk)
	begin
		out <= a * b;
	end

endmodule



// mult test bench

module mult_tb();
   
  reg [7:0] a;
  reg [7:0] b;
  reg clk;
  wire [7:0] out;
  
  always begin
    #1 clk = ~clk;
  end
  
   initial begin
     clk <= 0;
     
     #2 a=1;
     b=2;
     $display ("result =",out);
     #2 a=2;
     b=2;
     $display ("result =",out);
     #2 a=3;
     b=3;
     $display ("result =",out);
     #2 a=4;
     b=3;
     $display ("result =",out);
   
     
   end
  
  mult first (
 	a,
    b,
 	clk,	
 	out
 );
  
 endmodule