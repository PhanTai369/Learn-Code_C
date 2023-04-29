#include<stdio.h>
#include<math.h>
   void Nhapmang(int a[],int n){
   	for(int i=0;i<n;i++){
   		printf("Phan tu thu %d: ",i);
   		scanf("%d",&a[i]);
	   }
   }
   void TONGAm(int a[], int n){
      int s=0;
      for(int i=0;i<n;i++){
      	if(a[i] < 0){
      		s+=a[i];
		  }
	  }
	  printf("Tong cac so am la %d",s);
}
   int main(){
   	int a[30];
   	int n;
   	printf("Nhap n= ");scanf("%d",&n);
   	Nhapmang(a,n);
   	TONGAm(a,n);
   	return 0;
   }
