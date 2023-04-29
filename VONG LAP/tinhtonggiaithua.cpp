#include<stdio.h>
#include<math.h>
#include<conio.h>
  int main(){
  	int a,b,c;
  	long s1=1,s2=1,s3=1,s=0;
	  do{
	  	printf("Nhap a: ");scanf("%d",&a);
	  	
	  }	while(a<=0);
	  do {
	  	printf("nhap b: ");scanf("%d",&b);
	  } while(b<=0);
	  do{
	  	printf("nhap c: ");scanf("%d",&c);
	  } while(c<=0);
	  //tinh a!
	  for(int i=1;i<=a;i++){
	  	s1*=i;
	  }
	  //tinh b!
	  for(int i=1;i<=b;i++){
	  	s2*=i;
	  }
	  //tinh c!
	  for(int i=1;i<=c;i++){
	  	s3*=i;
	  }
	  printf("Tong bang = %ld",s1+s2+s3);
	  
	  return 0;
  }
