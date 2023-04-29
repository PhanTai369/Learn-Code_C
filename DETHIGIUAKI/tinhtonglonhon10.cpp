#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
  void Nhapmangngaunhien(int a[], int n){
  	srand(time(NULL));
  	for(int i=0;i<n;i++){
  		a[i]=rand()%100;
	  }
  }
  void Inmang(int a[], int n){
  	for(int i=0;i<n;i++){
  		printf("%d\t",a[i]);
	  }
  }
  void Tinhtong(int a[], int n){
  	int s=0;
  	for(int i=0;i<n;i++){
  		if(a[i]>10){
  			s+=a[i];
		  }
	  }
	  printf("\nTong cac so lon hon 10 la: %d",s);
  }
  int main(){
  	int a[30];
  	int n;
  	printf("Nhap n= ");scanf("%d",&n);
  	Nhapmangngaunhien(a,n);
  	Inmang(a,n);
  	Tinhtong(a,n);
  }
