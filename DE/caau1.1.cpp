#include <stdio.h>
#include <string.h>
#include<ctype.h>
   void Nhapmang(char a[], int n){
   	for(int i=0;i<n;i++){
   		printf("nhap vao phan tu thu %d :  ",i);
   		scanf("%c",&a[i]);
   		fflush(stdin);
	   }
   }
   void Inmang(char a[], int n ){
   	for(int i=0;i<n;i++){
   		printf("%c\t",a[i]);
	   }
   }
   void sapxep(char a[], int n){
   	 int temp;
   	 for(int i=0;i<n-1;i++){
   	 	for(int j=i+1;j<n;j++){
   	 		if(a[i]>a[j]){
   	 			temp=a[i];
   	 			a[i]=a[j];
   	 			a[j]=temp;
				}
			}
		}
		printf("\nMang da sau khi nhap mang : ");
		for(int i=0;i<n;i++){
			printf("%c\t",a[i]);
		}
   }
   int main(){
   	char a[50];
   	int n;
   	printf("Nhap n= ");scanf("%d",&n);
   	fflush(stdin);
   	Nhapmang(a,n);
   		fflush(stdin);
   	Inmang(a,n);
    sapxep(a,n);
    
   }
