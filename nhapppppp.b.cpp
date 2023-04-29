#include<stdio.h>
#include<math.h>
#include<conio.h>
  int main(){
  	int a=2;
  	int year=2020;
  	char c='a'+a;
  	switch(c){
  		case 'a':printf("ket qua = %d",year);
  		case 'b':;
  		case 'c':printf("ket qua = %d",year+1);
  		case 'd':break;
  		default:printf("ket qua=%d",year+2);}
   	
   	
   	
   	
   	return 0;
   	}
