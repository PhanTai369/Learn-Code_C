#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
  int main(){
  	int n;
	  float gt=1, s=1;
  	printf("nhap n ");scanf("%d",&n);
  	for(int i=1;i<=n;i++){
  		gt=gt*i;
    s=s+pow(-1,i)*gt/(i+1);
	  }
	  printf("%.2f",s);
  }
