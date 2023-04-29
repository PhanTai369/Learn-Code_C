#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
   int main(){
      int a,b,gcd;
    do{
       printf("nhap vao hai so nguyen duong a va b: ");
	   scanf("%d%d",&a,&b);
	   if(a<0){
	     printf("\nMoi Nhap lai a!\n");
		 }else if(b<0){
		 printf("Moi nhap lai b!\n");
		 }
	}while(a<0 || b<0);
  for(int i=1;i<=a && i<=b;i++){// hàm for tìm uoc chung se chay tu i=1 den i<=a va i<=b
    if(a%i==0 && b%i==0){
    	gcd=i;
  } 
}
  printf("\nuoc chung lon nhat cua %d va %d la %d",a,b,gcd);
  return 0;
  }
   
