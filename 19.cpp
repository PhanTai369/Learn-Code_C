#include<stdio.h>
#include<conio.h>
#include<math.h>
  int main(){
  	int years;
  	printf("nhap nam : ");
  	scanf("%d", &years);
  	(years%400==0)?printf("nam do la nam nhuan:%d ",years):
  		(years%4==0 && years%100!=0)?printf("nam do la nam nhuan:%d ",years):printf("nam do ko phai la nam nhuan: ",years);
  		return 0;
  		}
