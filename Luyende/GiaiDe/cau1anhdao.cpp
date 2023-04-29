#include<stdio.h>
#include<conio.h>
   int Timmax(int a , int b, int c){
      int max=0;
      if(a%2==0 && a>max){
      	  max=a;
		  }
	  if(b%2==0 && b>max){
	     max=b;
	  }
	  if(c%2==0 && c>max){
	     max=c;
	  }
	  return max;
   }
   int main(){
     int a,b,c;
     printf("Nhap a b c"); scanf("%d%d%d",&a,&b,&c);
     int max=Timmax(a,b,c);
     if(max==0){
	 printf("Khong co so chan");
	 }else{
	 	printf("So chan lon nhat: %d",max);
	 }
   }

