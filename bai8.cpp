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
  float tinhTong(int n){
  	float s2=0;
  	int tuso =1;
  	for(int i=1;i<=n;i++){
  		s2=s2+tuso/pow(2*i,2);
  		tuso*=(-1);
  }
  return s2;
}
// 
 void Bai18(int n){
 	int s=0;
 	for(int i=1;i<=n;i+=2){
 		printf("%d\t",i);
 		s+=1;
	 }
	 printf("Tong = %d",s);
 }
  int main(){
  	int n=Nhap();
  	float s2=tinhTong(n);
    printf("ket qua %.3f\n",s2);	
	printf("-----------------------------\n");
	Bai18(n); 	
  }
