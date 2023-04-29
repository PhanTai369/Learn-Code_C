#include<stdio.h>
#include<conio.h>
#include<math.h>
  int main(){
  	 int a;
  	 printf("nhap vao so nguyen");
  	 scanf("%d",&a);
  	 a=abs(a);//abs ham lay tri tuyet doi
  	 int n=sqrt(a);//can bac 2 cua a
  	// if(sqrt(a)-(int)sqrt(a)==0){
  	if(n*n==a){
  	 	printf("so chinh phuong:%d",a);
	   }else{
	   	printf("khong phai la so chinh phuong:%d",a);
	   }
  	 return 0;
	  }				
