// adder module

module adder
(
	input [7:0] a,
	input [7:0] b,
	input clk,
    output reg [7:0] out
);

    // every clock cycle out the sum of the two inputs will be assigned to the variable out

	always @ (posedge clk)
	begin
		out <= a + b;
	end

endmodule
    
    
    
    
    
//adder test bench

module adder_tb();
   
    reg [7:0] add1;
    reg [7:0] add2;
    reg [7:0] add3;
    reg clk;
    wire [7:0] sum1;
  
    always begin
        #1 clk = ~clk;
    end
  
    initial begin
        clk <= 0;
        add1 <= 2;
        add2 <= 5;
        #2 $display ("sum =",sum1);
        add1 <= 1;
        add2 <= 8;
        #2 $display ("sum =",sum1);
        add1 <= 12;
        add2 <= 3;
        #2 $display ("sum =",sum1);
        add1 <= 2;
        add2 <= 2;
        #2 $display ("sum =",sum1);
    end
  
  adder first (
 	add1,
    add2,
 	clk,	
 	sum1
 );
  
  
 endmodule
     
     
     
     
sum =  7
sum =  9
sum = 15
sum =  4     