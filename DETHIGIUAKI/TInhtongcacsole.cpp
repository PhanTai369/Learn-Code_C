#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
#include<stdlib.h>
int main(){
	int n;
	int s=0;
	printf("Nhap n= ");scanf("%d",&n);
	while(n<0){
		printf("Moi nhap lai: ");scanf("%d",&n);
	}
	while(n>0){
		int a=n%10;
		if(a%2!=0){
		   s+=a;
		}
		n/=10;
	}
	printf("Tong cac so le: %d", s);
	}
