#include<stdio.h>
#include<math.h>
#include<conio.h>
 int Nhap(){
  int n;
  do{
  	printf("nhap n= ");
  	scanf("%d",&n);
     }while(n<=0);
     return n;
  }
 bool Songuyento(int n){
	if(n<2) return false;
	else {
		for(int i=2; i<n; i++){
			if(n%i==0) return false;
		}
	}
	return true;
 }
 void soNguyenTo(int n){
 	int dem=0;
 	for(int i=2; i<n; i++){
 		if(Songuyento(i)==true){
 			dem++;
 			printf("%d\t",i);
		 }
	 }
	 printf("\nco tat ca nhung So nguyen to: %d",dem);
 }
    int main(){
    	int n=Nhap();
		soNguyenTo(n);
	}
