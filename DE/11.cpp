#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
   float Tinh(int n){
   	float s=0,dau=1,gt=1;
   	for(int i=1;i<=n;i++){
   		gt=gt*i;
   		s=s+(dau*i)/gt;
   		dau=dau*(-1);
	   }
	   return s;
   }
   int main(){
   	int n;
   	printf("Nhap n= ");scanf("%d",&n);
    printf("Tong: %.2f",Tinh(n));
   }
