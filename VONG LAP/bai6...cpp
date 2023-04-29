#include<stdio.h>
#include<math.h>
#include<conio.h>
 float S2Tinhtong(float n){
 	float g=1,s=0;
 	for(int i=1;i<=n;i++){
 		g=g*i;
 	    s=s+1/g;
		 }
	 return s;	 
	 }
 int S6Tinhtong(int n){
 	int s2=0;
    for(int i=1;i<=n;i++){
	 int h=i;
	 int sohang=0;
	 while(h<=n){
	     sohang+=h;
	     h++;
	 }
	 s2+=sohang;
	}
	return s2;
 }
   int main(){
    int n;
    printf("Nhap n= ");scanf("%d",&n);
    printf("IN RA KQ %.2f\n",S2Tinhtong(n));
    printf("IN RA KQ S6: %d\n",S6Tinhtong(n));
   }
   
 
 
 
 
   
 
 
 	 
