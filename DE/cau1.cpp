#include<stdio.h>
#include<math.h>
#include<conio.h>
int main() {
   int n,  x;
   int min=1000, max=0;
   for(int i=1;i<=3;i++){
    printf("Nhap so ");scanf("%d",&x);
    if(min>x){
	 min=x;
	}
	if(max<x){
	max=x;
	}
   }
  printf("Tong %d+%d=%d ",max,min,max+min);
  }

