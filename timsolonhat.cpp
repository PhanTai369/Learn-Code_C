#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>
 int main(){
 	int n, max=0;
 	printf("Nhap n= ");scanf("%d",&n);
 	while(n<1){
 		printf("Moi nhap lai: ");scanf("%d",&n);
	 }
	 while(n>0){
	 	int a=n%10;
	 	if(a>max){
	 		max=a;
		 }
		 n/=10;
	 }
	 printf("So lon nhat la: %d",max);
 }
