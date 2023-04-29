#include <stdio.h>
#include<math.h>
#include<conio.h>
  void Nhap(int a[], int n){
    for(int i=0; i<n;i++){
	  printf("Nhap phan tu thu a[%d]: ",i);
	  scanf("%d",&a[i]);
     }
  }
  void inmang(int a[],int n){
    for(int i=0;i<n;i++){
	  printf("%d\t",a[i]);
	}
  }
  void DemnhunggiatrinhohonK(int n, int a[], int k){
     int dem=0;
     printf("\nCac mang nho hon %d la : ",k);
     for(int i=0;i<n;i++){
	   if(a[i]<k){
	     printf("%d\t",a[i]);
	     dem++;
	   }
	 }
	  printf("\nTrong mang co %d phan tu nho hon %d ",dem,k);
  }
  int main(){
   int a[30];
   int n, k;
   printf("Nhap n= ");scanf("%d",&n);
   Nhap(a,n);
   inmang(a,n);
   printf("\nNhap k= ");scanf("%d",&k);
   DemnhunggiatrinhohonK(n,a,k);
  
  }
