#include<stdio.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<ctype.h>
#include<stdlib.h>
  int main(){
  	int n, s=0;
  	printf("Nhap n= ");scanf("%d",&n);
  	for(int i=1;i<n;i++){
  		if(n%i==0){
  			s+=i;
		  }
	  }
	  if(s==n){
	  	printf("%d la hoan hao",n);
	  }else{
	  	printf(" %d khong phai la so hoan hao",n);
	  }
  }
