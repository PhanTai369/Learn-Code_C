#include<stdio.h>
#include<math.h>
#include<conio.h>
  int F(int a, int b){
  	if(b==0){
  		return a;
	  }else{
	  	return F(b,a%b);
	  }
  }
   int main(){
   	printf("%d",F(9,12));
   }
