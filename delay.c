// delay module

module delay
(
	input [7:0] a,
	input clk,
    output reg [7:0] out

 
);  
  
  integer i;
  reg [7:0] b [0:3] = '{0,0,0,0};
  
	always @ (posedge clk)
	begin
      for(i=0; i<4; i=i+1) begin
        b[i+1] = b[i];
        b[0] = a;
        out = b[3];
      end
      
	end

endmodule
    
    
// delay test bench    

module delay_tb();
   
  reg [7:0] in;
  reg [7:0] time;
  reg clk;
  wire [7:0] out;
  
  always begin
    #1 clk = ~clk;
  end
  
   initial begin
     clk <= 0;
     
     #2 in=1; 
     $display ("sum =",out);
     #2 in=2; 
     $display ("sum =",out);
     #2 in=3; 
     $display ("sum =",out);
     #2 in=4; 
     $display ("sum =",out);
     #2 in=5; 
     $display ("sum =",out);
     #2 in=6; 
     $display ("sum =",out);
     #2 in=6; 
     $display ("sum =",out);
     #2 in=6; 
     $display ("sum =",out);
     #2 in=6; 
     $display ("sum =",out);
     #2 in=6;
     $display ("sum =",out);
     #2 in=6;
     $display ("sum =",out);

   end
  
  delay first (
 	in,
    time,
 	clk,	
 	out
 );
  

  
 endmodule