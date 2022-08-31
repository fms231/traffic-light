`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:36:12 12/28/2021
// Design Name:   top
// Module Name:   D:/szdl/jiaotongdeng/test.v
// Project Name:  jiaotongdeng
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg clk;
	reg clr;
	reg stopa;
	reg stopb;
	reg pause;

	// Outputs
	wire [3:0] an;
	wire [7:0] seg;
	wire [2:0] light1;
	wire [2:0] light2;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.clr(clr), 
		.stopa(stopa), 
		.stopb(stopb), 
		.pause(pause), 
		.an(an), 
		.seg(seg), 
		.light1(light1), 
		.light2(light2)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		clr = 1;
		stopa = 0;
		stopb = 0;
		pause = 0;

		// Wait 100 ns for global reset to finish
		#100;
		clr = 0;
		stopa = 0;
		stopb = 0;
		pause = 0;

		// Wait 100 ns for global reset to finish
		#100;
		// Add stimulus here

	end
      always #20 begin clk=~clk; end
endmodule

