#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	int n, max, min,x;
	printf("Nhap n: ");scanf("%d",&n);
	max=n;
	min=n;
	for(int i=1;i<5;i++){
		printf("Nhap n: ");scanf("%d",&x);
		if(max<x){
			max=x;
		}
		if(min>x){
			min=x;
		}
	}
	printf("Tong max-min la %d+%d=%d",max,min,max+min);
}
