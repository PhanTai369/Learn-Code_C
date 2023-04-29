#include<stdio.h>
#include<math.h>
#include<conio.h>
  int Nhap(int n){
  	do{
  		printf("Nhap n= ");scanf("%d",&n);
  		if(n<=0){
		printf("Yeu cau bn hay nhap (n>0): ");  
		  }
	  }while(n<=0);
  }
  int TinhtongdungFor(int n){
  	int s=0;
    for(int i=1;i<=n;i++){
	  s+=pow(i,2);
	}
      return s;
  }
  int Tinhtongsudungham_while(int n){
    int i=1,s=0;
    while(i<=n){
    	s+=pow(i,2);
    	i++;
		}
     return s;
  }
  int main(){
    int n;
    n=Nhap(n);
    printf("Tinh tong binh phuwong %d\n ",TinhtongdungFor(n));
    printf("Tinh tong binh phuwong %d ",Tinhtongsudungham_while(n));
    return 0;
    
  
  
  
  
  }
