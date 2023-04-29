#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
   int main(){
   	int n;
   	int temp=0; int hs=1;
   	printf("Nhap n= ");scanf("%d",&n);
   	while(n<1){
   		printf("Moi nhap lai: ");scanf("%d",&n);
	   }
	while(n>0){
	   int a=n%10;
	   if(a!=0){
	   	  temp=a*hs+temp;
	   	  hs=hs*10;
		   }
		n/=10;
	}
	printf("So: %d",temp);
	}
