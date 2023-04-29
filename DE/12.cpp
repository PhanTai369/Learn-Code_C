#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
 int Nhap(){
 	int n;
 	printf("Nhap n= ");scanf("%d",&n);
 	return n;
 }
 void TinhTBC(){
   int n, dem=0, s=0;
   while(n==0){
   	 n=Nhap();
   	 if(n<0){
   	 	n=Nhap();
		}
	 if(n==0){
	 	break;
	 }
   	s=s+n;
   	dem++;	
}
   if(dem==0){
   	printf("Khong co so nguyen duong");
   }else{
  printf("TBC so nguyen duong la:%f ",(float)s/dem);
  }
}
  int main(){
  	TinhTBC();
  }
