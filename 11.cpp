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
  void demnghiem(){
  	int dem=0;
  	for(int i=1;i<100;i++){
  		if(i%3==0 || i%7==0){
  			printf("%d\t",i);
  			dem++;
		  }
	  }
	  printf("\nSL cac so chia het chp 3va 7: %d",dem);
  }
  int main(){
  	demnghiem();
 }
