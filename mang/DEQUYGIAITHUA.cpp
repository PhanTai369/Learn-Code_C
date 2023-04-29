#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
   int tinhGT(int n){
   	if(n==0){
   		return 1;
	   }else{	   
	 return n*tinhGT(n-1);
}
   }
   int Tinhymux(int y, int x){
   	if(x==0){
   		return 1;
	   }else{
	   	return y*Tinhymux(y,x-1);
	   }
   }
    int Tinhtong(int n ){
   	if(n==0){
   		return 0;
	   }else{
	   	return n+Tinhtong(n-1);
	   }
   }
   
   int main(){
   	int n, y,x;
   	printf("Nhap n= ");scanf("%d",&n);
     printf("%d!= %d\n",n,tinhGT(n));
    printf("tinh tong: %d",Tinhtong(n));
   	printf("\nNhap co so: ");scanf("%d",&y);
   	printf("Nhap so mu: ");scanf("%d",&x);
   	printf(" Y mu X: %d",Tinhymux(y,x));
   	return 0;
   }
