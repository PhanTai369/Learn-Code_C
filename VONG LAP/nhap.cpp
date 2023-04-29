#include<stdio.h>
#include<math.h>
#include<conio.h>
  void Tinhtong(int n){
  int s=0;
  for(int i=1; i<=n;i++){
  	s+=i;
	  }
	  	printf("Tong = %d",s); 
  }
  int main(){
  	int n;
  	printf("nhap n ");scanf("%d",&n);
  	Tinhtong(n);
  
	  
	  }
