#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
   void NhapMang(int a[], int n){
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
   int Timsochancuoicung(int a[], int n){
   	int chan=0;
   	for(int i=0;i<n;i++){
   		if(a[i]%2==0){
   			chan=a[i];
		   }
	   }
	if(chan==0){
		printf("Trong mang khong co so chan nao!");
	}
	return chan;
   }   
  int Tonglientiep(int a[], int n){
  	int s=0;
  	for(int i=0;i<n-1;i++){
  		if(a[i]+a[i+1]>s){
  			s=a[i]+a[i+1];
		  }
	  }
	  return s;
  } 
  int main(){
  	int n;
  	int a[30];
  	printf("Nhap n= ");scanf("%d",&n);
  	while(0>=n || n>50){
  		printf("Moi nhap lai: ");scanf("%d",&n);
	  }
	NhapMang(a,n);
	Inmang(a,n);
	printf("\nSo  chan cuoi cung cua mang la: %d",Timsochancuoicung(a,n));
	printf("\nTong lien tiep lon nhat la:%d ",Tonglientiep(a,n));
  }
