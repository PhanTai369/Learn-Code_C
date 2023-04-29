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
   void Bai(int n){
   	int s=0;
   	for(int i=1;i<=n;i++){
   	if(i%2!=0){
   		printf("%d\t",i);
   		s+=i;
	   }
    } 
	   printf("Tong cac so le: %d\n ",s);
}
	 int main(){
	 	int n=Nhap();
	 	Bai(n);
	 } 
	   
