#include<stdio.h>
#include<math.h>
#include<conio.h>
  int Nhap(){
  	int n;
    do{
      printf("nhap so= ");
	  scanf("%d",&n);   	
	}while(n<=0);
	return n;
}
   long Tinhgiaithua(int n){
   	long s=1;
   	for(int i=2;i<=n;i++){
   		s*=i;
	   }
    return s;
   }
   float TinhtoHop(int k, int n){
   	return 1.0*Tinhgiaithua(n)/(Tinhgiaithua(k)*Tinhgiaithua(n-k));
   }
   int main(){
   	int n=Nhap();
   	int k=Nhap();
   	printf("To hop : %.2f",TinhtoHop(k,n));
   }
