#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
  int main(){
     int n, max=0;
     printf("Nhap n= ");scanf("%d",&n);
     while(n<1){
     	printf("Moi nhap lai!");scanf("%d",&n);
	 }
	 while(n>=1){
	 	int x=n%10;
	 	if(x>max){
	 		max=x;
		 }
		n=n/10;
	 }
	 printf("So lon nhat la: %d",max);
	 return 0;
  }
