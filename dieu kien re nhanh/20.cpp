#include<stdio.h>
#include<math.h>
#include<conio.h>
  int main(){
  	int a,b;
  	char kitu;
  	printf("nhap vao a va b\n");
  	scanf("%d%d",&a,&b);
  	fflush(stdin);
  	printf("nhap vao 1 ki tu sau(+,-,*,/): ");
  	scanf("%c",&kitu);
  	switch(kitu){
  		case '+': printf("a+b=%d",a+b);break;
  		case '-': printf("a-b=%d",a-b);break;
  		case '/': printf("a/b=%d",a/b);break;
  		case '*': printf("a*b=%d",a*b);break;
  		default:printf("ban nhap sai hay nhap lai");
	  }
  	
  	return 0;
  }
