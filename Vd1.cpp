#include<stdio.h>
#include<conio.h>
#include<math.h>//thu vien toan hoc
int main(){
	const float PI=3.14159;//khai bao hang
	float r = 5; //r: ban kinh
	float s; //s:dien tich
	s=PI*r*r;
	printf("dien tich hinh tron %f voi ban kinh %f\n: ",s,r);
	r=20;//thay doi gia tri r
	s=PI*pow(r,2);//dung ham pow thay cho r*r
	printf("dien tich hinh tron %f voi ban kinh %f\n: ", s,r);
	return 0;
	} 
