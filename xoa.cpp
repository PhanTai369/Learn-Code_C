#include<stdio.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<ctype.h>
#include<stdlib.h>
 void xoakitu(int a[],int n, int x){
 	for(int i=x;i<n-1;i++){
 		a[i]=a[i+1];
	 }
	 n--;
	 printf("mang sau khi xoa la: ");
	 for(int i=0;i<n;i++){
	 	printf("%d\t",a[i]);
	 }
 }
 int main(){
 	int a[]={2,3,4,5,6};
 	int n=sizeof(a)/4;
 	int k;
 	printf("nhap k: ");scanf("%d",&k);
 	xoakitu(a,n,k);
 }
