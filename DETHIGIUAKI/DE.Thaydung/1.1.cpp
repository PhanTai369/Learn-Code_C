#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
 int main(){
 	int n, s=0;
 	printf("Nhap n= ");scanf("%d",&n);
 	while(0>=n || n>=10){
 		printf("Moi ban nhap lai (0<n<=10): ");scanf("%d",&n);
	 }
   for(int i=1;i<=n;i++){
 	 s+=i;
 }
 printf("Tong: %d",s);
}
