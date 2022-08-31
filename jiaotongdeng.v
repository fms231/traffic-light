`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:30:43 12/27/2021 
// Design Name: 
// Module Name:    jiaotongdeng 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

module top(clk,clr,stopa,stopb,pause,an,seg,light1,light2);//顶层模块
	input clk,clr,stopa,stopb,pause; //时钟，复位，主干道阻塞，次干道阻塞,暂停系统
	output [3:0] an; //位选信号
	output [7:0] seg;  //段选信号
	output[2:0] light1,light2;//红绿黄
	
	wire clk_s,clk_d; //分频器1实现数码管刷新，分频器2实现数码管上的数字刷新
	wire[15:0] data; // 主干道以及次干道的秒数
	
	clk_show s(clk,clk_s); //数码管的分频
	clk_data d(clr,clk,clk_d); ///数码管上数字的分频
	light l(clk_d,clr,stopa,stopb,pause,light1,light2,data); //交通灯控制模块，核心模块
	show sshow(clr,clk_s,stopa,stopb,data,an,seg);  //数码管显示模块
endmodule

///////////////////////////////////////////////////////////////////////////////////////////////////

module light(clk,clr,stopa,stopb,pause,A,B,data);//交通灯控制模块
input clk,clr,stopa,stopb,pause;
output  reg[2:0] A; //主干道红绿黄
output  reg[2:0] B; //次干道红绿黄
output reg[15:0] data; //秒数信息

reg[2:0] state; //状态
parameter state4 = 3'b000, state3 = 3'b100, state2 = 3'b010, state1 = 3'b001; //四个状态
          //state4主干道红灯亮，次干道黄灯亮 state3主干道红灯亮，次干道绿灯亮 state2主干道黄灯亮，次干道红灯亮 state1主干道绿灯亮，次干道红灯亮 
always @ (posedge clk or posedge clr)
    begin 
        if(clr)//复位操作
            begin  
               state <= state4; //初始一个默认状态
					A <= 3'b100;	//主干道红灯亮
					B <= 3'b100;	//次干道红灯亮
					data <= 16'b0000000000000101; 
            end
		  else if(stopa) //主干道阻塞
				begin
					state <= state4; //初始一个默认状态
					A <= 3'b100; //主干道红灯亮
					B <= 3'b010; //次干道绿灯亮
					data <= 16'b0000000000000101; 
				end
		  else if(stopb) //次干道阻塞
				begin
					state <= state4;	//初始一个默认状态			
					A <= 3'b010; //主干道绿灯亮
					B <= 3'b100; //次干道红灯亮
					data <= 16'b0000000000000101; 
				end
        else if(~pause)   //没有暂停
            case (state)              //交通灯状态变换
                state4 : //主干道红灯，次干道黄灯
						 begin 
						    if(data==0) //进入下一个状态
								 begin
									 data <= 16'b0011_0101_0000_0000; 
									 state <= state1; //主绿次红
								end
							 else if(data[3:0] == 0 && !data[7:4] == 0) //低位减到零，而高位不是零
								 begin
								 	 A <= 3'b100; //主干道红灯亮
									 B <= 3'b001; //次干道黄灯亮
									 data[7:4] <= data[7:4] - 1'b1; //高位减1
									 data[3:0] <= 4'b1001; //低位置9
								 end
							 else if(!data[3:0] == 0) //低位没有减到零
								 begin
								 	A <= 3'b100;
									B <= 3'b001;
									data[3:0] <= data[3:0] - 1'b1; //低位减一
								 end 
							 else state <= state4;	//其他情况则保持状态不变
						 end
                state1 : //主干道绿灯亮，次干道红灯亮
						 begin 
							 if(data==0) //进入下一个状态
								 begin  
								 data <= 16'b0000_0101_0000_0000;
								 state <= state2; //主黄次红
								 end
							 else if(data[11:8] == 0 && !data[15:12] == 0)  //低位减到零，而高位不是零
								 begin
									 A <= 3'b010; //主干道绿灯亮
									 B <= 3'b100;	//次干道红灯亮			 
									 data[15:12] <= data[15:12] - 1'b1; 
									 data[11:8] <= 4'b1001;
								 end
							 else if(!data[11:8] == 0) //低位不是零
								 begin
									A <= 3'b010;
									B <= 3'b100;								 
									data[11:8] <= data[11:8] - 1'b1;
								 end 
							 else  state <= state1; 		//其他情况则保持不变
						 end 
                state2 : //主干道黄灯亮，次干道红灯亮
						 begin 
							 if(data==0) 
								 begin
									 data <= 16'b0000_0000_0010_0101;
									 state <= state3; //主红次绿
								 end
							 else if(data[11:8] == 0 && !data[15:12] == 0) //低位减到零，而高位不是零
								 begin
									 A <= 3'b001;  //主干道黄灯亮
									 B <= 3'b100;	//次干道红灯亮				 
									 data[15:12] <= data[15:12] - 1'b1;
									 data[11:8] <= 4'b1001;
								 end
							 else if(!data[11:8] == 0) //低位不是零
								 begin
									A <= 3'b001;
									B <= 3'b100;								 
									data[11:8] <= data[11:8] - 1'b1;
								 end 
							 else state <= state2;		//其他情况则保持不变					
						 end
					state3: //主干道红灯亮，次干道绿灯亮
						 begin 
							 if(data==0) 
								 begin
									 data <= 16'b0000_0000_0000_0101;
									 state <= state4; //主红次黄
								 end
							 else if(data[3:0] == 0 && !data[7:4] == 0) //低位减到零，而高位不是零
								 begin
									 A <= 3'b100; //主干道红灯亮
									 B <= 3'b010;	//次干道绿灯亮				 
									 data[7:4] <= data[7:4] - 1'b1;
									 data[3:0] <= 4'b1001;
								 end
							 else if(!data[3:0] == 0) //低位不是零
								 begin
									A <= 3'b100;
									B <= 3'b010;									 
									data[3:0] <= data[3:0] - 1'b1;
								 end 
							 else   state <= state3; 	//其他情况则保持不变						
						 end
                default : state <= state4 ; //其他情况则默认为主干道红灯亮，次干道黄灯亮
            endcase
    end

endmodule


///////////////////////////////////////////////////////////////////////////////////////////////////


 module show (clr,clk,stopa,stopb,Data,an,seg);//数码管显示模块
	input clk,clr,stopa,stopb;
	input[15:0] Data;
	output reg[3:0] an;
	output reg[7:0] seg;

	reg[1:0] BitSel = 2'b0; //选择用哪一个数码管显示
	reg[3:0] data; //数码管所需要显示的数字
	//数码管显示数字模块
	always@(*)
	begin
		case(data)
			4'b0000: seg[7:0]<=8'b00000011;
			4'b0001: seg[7:0]<=8'b10011111;
			4'b0010: seg[7:0]<=8'b00100101;
			4'b0011: seg[7:0]<=8'b00001101;
			4'b0100: seg[7:0]<=8'b10011001;
			4'b0101: seg[7:0]<=8'b01001001;
			4'b0110: seg[7:0]<=8'b01000001;
			4'b0111: seg[7:0]<=8'b00011111;
			4'b1000: seg[7:0]<=8'b00000001;
			4'b1001: seg[7:0]<=8'b00001001;
			4'b1010: seg[7:0]<=8'b11111101; //数码管显示“----”
			default: seg[7:0]<=8'b11111111; //数码管没有显示
		endcase
	end
	
	always@( posedge clk)
		begin
				begin
					BitSel <= BitSel + 1'b1;
							case(BitSel)
						2'b00: 
							begin 
								an<=4'b1011;
								if(clr) data <= 4'b1010;
								else if(stopa | stopb) data <=4'b1111;
								else data<=Data[3:0];  //将次干道的读秒低位放入
							end
						2'b01: 
							begin
								an<=4'b1010;							
								if(clr) data <= 4'b1010; 
								else if(stopa | stopb) data <=4'b1111;
								else data<=Data[7:4];	//将次干道的读秒高位放入
							end
						2'b10: 
							begin
								an<=4'b1001;
								if(clr) data <= 4'b1010;
								else if(stopa | stopb) data <=4'b1111;
								else data<=Data[11:8];//将主干道的读秒低位放入
							end
						2'b11: 
							begin
								an<=4'b1000;
								if(clr) data <= 4'b1010;
								else if(stopa | stopb) data <=4'b1111;
								else data<=Data[15:12];//将主干道的读秒高位放入
							end							
						default: //其他情况
							begin
								an<=4'b0000;
								data<=4'bzzzz;
							end
					endcase		
				end
		end

endmodule

///////////////////////////////////////////////////////////////////////////////////////////////////

module clk_show(clk_in,clk_out);//分频器1数码管刷新
	input clk_in;
	reg[11:0] counter = 12'b0;
	output reg clk_out = 1'b0;
	always @(posedge clk_in)
	begin
		if(counter == 11'd2000)
			begin
				clk_out <= ~clk_out;
				counter <= 12'b0;
			end	 
      else
			counter <= counter+1'b1;
   end
endmodule

///////////////////////////////////////////////////////////////////////////////////////////////////

module clk_data(clr,clk_in,clk_out);//分频器2数据刷新
	input clr,clk_in;
	integer counter;
	output reg clk_out;
	always @(posedge clk_in or posedge clr)
	begin
		if (clr)
			begin
				counter <= 0;
				clk_out <= 0;
			end
		else if(counter == 8000000)
			begin
				clk_out <= ~clk_out;
				counter <= 0;
			end	 
      else
			counter <= counter+1;
   end
endmodule
