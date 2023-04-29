#include<stdio.h>
#include<conio.h>
#include<math.h>
   int tinhTong(int n){
   	int s=0;
   	for(int i=1;i<=n;i++){
   		s+=i;
	   }
	return s;   
   }
   int main(){
   	int n;
    printf("nhap n= "); scanf("%d",&n);
   	printf("Tong =%d",tinhTong(n));
   }
