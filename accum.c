// accumulator

module accum
(
	input [7:0] a,
	input clk,
    output reg [7:0] out

 
);
	initial begin
      out <= 0;
    end
  
	always @ (posedge clk)
	begin
		out <= a + out;
	end

endmodule
    
    
    
    
    
//accum test bench

module accum_tb();
   
  reg [7:0] add1;
  reg clk;
  wire [7:0] sum1;
  
  always begin
    #1 clk = ~clk;
  end
  
   initial begin
     clk <= 0;
     add1 <= 2;
     add2 <= 5;
     add3 <= 1;
     #2 $display ("sum =",sum1);
     #2 $display ("sum =",sum1);
     #2 $display ("sum =",sum1);
     #2 $display ("sum =",sum1);
     #2 $display ("sum =",sum1);
     #2 $display ("sum =",sum1);
     #2 $display ("sum =",sum1);
     #2 $display ("sum =",sum1);
   end
  
  adder first (
 	add1,
 	clk,	
 	sum1
 );
  
  
 endmodule