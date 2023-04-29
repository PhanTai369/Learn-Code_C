#include<stdio.h>
#include<math.h>
#include<conio.h>
   bool Ktrasonguyen(int n){
   	   if(n<2){
   	   	return 0;
   	   	}
   	   	for(int i=2;i<=n/2;i++){
			  if(n%i==0){
			  	return 0;
			  	}
			  }
		return 1;
	}	
	void Songuyento(int n){
	 int dem=0;
	 for(int i=2;i<=n;i++){
	 	if(Ktrasonguyen(i)==1){
	 		dem++;
	 		printf("%d\t",i);
		 }
		 }
		 printf("Tong tat ca cac so nguyen to %d",dem);
	}  
	int main(){
		int n;
		printf("Nhap n= ");
		scanf("%d",&n);
		Songuyento(n);
		}
