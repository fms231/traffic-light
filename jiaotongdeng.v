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

module top(clk,clr,stopa,stopb,pause,an,seg,light1,light2);//����ģ��
	input clk,clr,stopa,stopb,pause; //ʱ�ӣ���λ�����ɵ��������θɵ�����,��ͣϵͳ
	output [3:0] an; //λѡ�ź�
	output [7:0] seg;  //��ѡ�ź�
	output[2:0] light1,light2;//���̻�
	
	wire clk_s,clk_d; //��Ƶ��1ʵ�������ˢ�£���Ƶ��2ʵ��������ϵ�����ˢ��
	wire[15:0] data; // ���ɵ��Լ��θɵ�������
	
	clk_show s(clk,clk_s); //����ܵķ�Ƶ
	clk_data d(clr,clk,clk_d); ///����������ֵķ�Ƶ
	light l(clk_d,clr,stopa,stopb,pause,light1,light2,data); //��ͨ�ƿ���ģ�飬����ģ��
	show sshow(clr,clk_s,stopa,stopb,data,an,seg);  //�������ʾģ��
endmodule

///////////////////////////////////////////////////////////////////////////////////////////////////

module light(clk,clr,stopa,stopb,pause,A,B,data);//��ͨ�ƿ���ģ��
input clk,clr,stopa,stopb,pause;
output  reg[2:0] A; //���ɵ����̻�
output  reg[2:0] B; //�θɵ����̻�
output reg[15:0] data; //������Ϣ

reg[2:0] state; //״̬
parameter state4 = 3'b000, state3 = 3'b100, state2 = 3'b010, state1 = 3'b001; //�ĸ�״̬
          //state4���ɵ���������θɵ��Ƶ��� state3���ɵ���������θɵ��̵��� state2���ɵ��Ƶ������θɵ������ state1���ɵ��̵������θɵ������ 
always @ (posedge clk or posedge clr)
    begin 
        if(clr)//��λ����
            begin  
               state <= state4; //��ʼһ��Ĭ��״̬
					A <= 3'b100;	//���ɵ������
					B <= 3'b100;	//�θɵ������
					data <= 16'b0000000000000101; 
            end
		  else if(stopa) //���ɵ�����
				begin
					state <= state4; //��ʼһ��Ĭ��״̬
					A <= 3'b100; //���ɵ������
					B <= 3'b010; //�θɵ��̵���
					data <= 16'b0000000000000101; 
				end
		  else if(stopb) //�θɵ�����
				begin
					state <= state4;	//��ʼһ��Ĭ��״̬			
					A <= 3'b010; //���ɵ��̵���
					B <= 3'b100; //�θɵ������
					data <= 16'b0000000000000101; 
				end
        else if(~pause)   //û����ͣ
            case (state)              //��ͨ��״̬�任
                state4 : //���ɵ���ƣ��θɵ��Ƶ�
						 begin 
						    if(data==0) //������һ��״̬
								 begin
									 data <= 16'b0011_0101_0000_0000; 
									 state <= state1; //���̴κ�
								end
							 else if(data[3:0] == 0 && !data[7:4] == 0) //��λ�����㣬����λ������
								 begin
								 	 A <= 3'b100; //���ɵ������
									 B <= 3'b001; //�θɵ��Ƶ���
									 data[7:4] <= data[7:4] - 1'b1; //��λ��1
									 data[3:0] <= 4'b1001; //��λ��9
								 end
							 else if(!data[3:0] == 0) //��λû�м�����
								 begin
								 	A <= 3'b100;
									B <= 3'b001;
									data[3:0] <= data[3:0] - 1'b1; //��λ��һ
								 end 
							 else state <= state4;	//��������򱣳�״̬����
						 end
                state1 : //���ɵ��̵������θɵ������
						 begin 
							 if(data==0) //������һ��״̬
								 begin  
								 data <= 16'b0000_0101_0000_0000;
								 state <= state2; //���ƴκ�
								 end
							 else if(data[11:8] == 0 && !data[15:12] == 0)  //��λ�����㣬����λ������
								 begin
									 A <= 3'b010; //���ɵ��̵���
									 B <= 3'b100;	//�θɵ������			 
									 data[15:12] <= data[15:12] - 1'b1; 
									 data[11:8] <= 4'b1001;
								 end
							 else if(!data[11:8] == 0) //��λ������
								 begin
									A <= 3'b010;
									B <= 3'b100;								 
									data[11:8] <= data[11:8] - 1'b1;
								 end 
							 else  state <= state1; 		//��������򱣳ֲ���
						 end 
                state2 : //���ɵ��Ƶ������θɵ������
						 begin 
							 if(data==0) 
								 begin
									 data <= 16'b0000_0000_0010_0101;
									 state <= state3; //�������
								 end
							 else if(data[11:8] == 0 && !data[15:12] == 0) //��λ�����㣬����λ������
								 begin
									 A <= 3'b001;  //���ɵ��Ƶ���
									 B <= 3'b100;	//�θɵ������				 
									 data[15:12] <= data[15:12] - 1'b1;
									 data[11:8] <= 4'b1001;
								 end
							 else if(!data[11:8] == 0) //��λ������
								 begin
									A <= 3'b001;
									B <= 3'b100;								 
									data[11:8] <= data[11:8] - 1'b1;
								 end 
							 else state <= state2;		//��������򱣳ֲ���					
						 end
					state3: //���ɵ���������θɵ��̵���
						 begin 
							 if(data==0) 
								 begin
									 data <= 16'b0000_0000_0000_0101;
									 state <= state4; //����λ�
								 end
							 else if(data[3:0] == 0 && !data[7:4] == 0) //��λ�����㣬����λ������
								 begin
									 A <= 3'b100; //���ɵ������
									 B <= 3'b010;	//�θɵ��̵���				 
									 data[7:4] <= data[7:4] - 1'b1;
									 data[3:0] <= 4'b1001;
								 end
							 else if(!data[3:0] == 0) //��λ������
								 begin
									A <= 3'b100;
									B <= 3'b010;									 
									data[3:0] <= data[3:0] - 1'b1;
								 end 
							 else   state <= state3; 	//��������򱣳ֲ���						
						 end
                default : state <= state4 ; //���������Ĭ��Ϊ���ɵ���������θɵ��Ƶ���
            endcase
    end

endmodule


///////////////////////////////////////////////////////////////////////////////////////////////////


 module show (clr,clk,stopa,stopb,Data,an,seg);//�������ʾģ��
	input clk,clr,stopa,stopb;
	input[15:0] Data;
	output reg[3:0] an;
	output reg[7:0] seg;

	reg[1:0] BitSel = 2'b0; //ѡ������һ���������ʾ
	reg[3:0] data; //���������Ҫ��ʾ������
	//�������ʾ����ģ��
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
			4'b1010: seg[7:0]<=8'b11111101; //�������ʾ��----��
			default: seg[7:0]<=8'b11111111; //�����û����ʾ
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
								else data<=Data[3:0];  //���θɵ��Ķ����λ����
							end
						2'b01: 
							begin
								an<=4'b1010;							
								if(clr) data <= 4'b1010; 
								else if(stopa | stopb) data <=4'b1111;
								else data<=Data[7:4];	//���θɵ��Ķ����λ����
							end
						2'b10: 
							begin
								an<=4'b1001;
								if(clr) data <= 4'b1010;
								else if(stopa | stopb) data <=4'b1111;
								else data<=Data[11:8];//�����ɵ��Ķ����λ����
							end
						2'b11: 
							begin
								an<=4'b1000;
								if(clr) data <= 4'b1010;
								else if(stopa | stopb) data <=4'b1111;
								else data<=Data[15:12];//�����ɵ��Ķ����λ����
							end							
						default: //�������
							begin
								an<=4'b0000;
								data<=4'bzzzz;
							end
					endcase		
				end
		end

endmodule

///////////////////////////////////////////////////////////////////////////////////////////////////

module clk_show(clk_in,clk_out);//��Ƶ��1�����ˢ��
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

module clk_data(clr,clk_in,clk_out);//��Ƶ��2����ˢ��
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
