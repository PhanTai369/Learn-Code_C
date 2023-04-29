#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
  int Uocchunglonnhat(int a, int b){
  	if(a==b){
  		return a;
	  } 
	  else if(a>b){     
		return Uocchunglonnhat(a-b,b);
	}else{
		return Uocchunglonnhat(b-a,a);
	}
  }
  int main(){
  	int a, b;
  	printf("Nhap a va b: "); scanf("%d%d",&a,&b);
  	printf("UOC CHUNG LON NHAT: %d",Uocchunglonnhat(a,b));
  	return 0;
  }
