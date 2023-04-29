#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
   int main(){
   	int n;
   	int max=0;
   	printf("Nhap n= ");scanf("%d",&n);
   	while(n<1){
   		printf("Moi nhap lai");scanf("%d",&n);
	   }
	while(n>0){
		int a=n%10;
		if(a>max){
			max=a;
		}
		n=n/10;
	}
	printf("So lon nhat %d",max);
   }
