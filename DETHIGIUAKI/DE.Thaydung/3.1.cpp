#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
   void Sohoanhao(int n){
   	int s=0;
      for(int i=1;i<n;i++){
      	if(n%i==0){
      		s+=i;
		  }
	  }
	  if(s==n){
	  	printf("%d la so hoan hao",n);
	  }else{
	  	printf("%d khong phai la so hoan hao",n);
	  }
   
   }
   int main(){
   	int n;
   	printf("Nhap n= ");scanf("%d", &n);
   	Sohoanhao(n);
   }
