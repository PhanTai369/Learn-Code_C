#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
   int F(int a, int b){
   	if(b==0){
   		return a;
	   }
	else{//b!=0
		return F(b,a%b);
	}
   }
   int main(){
   	printf("Ket qua: %d",F(9,12));
   }
