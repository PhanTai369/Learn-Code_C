#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
 int Nhap(){
 	int n;
 	printf("Nhap n=");scanf("%d",&n);
    return n;
 }
  void TBC(){
  	int n;
  	int dem=0,s=0;
  	do{
  		int n=Nhap();
  		if(n<0){
		  n=Nhap();
		  }
		if(n==0){
		break;
		}
		  s+=n;
		  dem++;
	  }while(n!=0);
	  if(dem==0){
	  printf("khong co s=nguyen duan ");
	  }else{
	  	printf("TBC: %f",(float)s/dem);
	  }
  }
  int main(){
   TBC();
  }
 
