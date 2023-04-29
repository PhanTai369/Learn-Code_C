#include<stdio.h>
#include<conio.h>
#include<math.h>
  void nhapmang(int a[], int n){
   for(int i=0;i<n;i++){
    printf("Nhap phan tu thu %d ",i);
    scanf("%d",&a[i]);   
   }
  }
  int Demsochan(int a[], int n){
  	int dem=0;
   for(int i=0;i<n;i++){
   	if(a[i]%2==0){
   		dem++;
   		}
   	}
	   return dem;	
  }
  int main(){
   int a[10];
   int n;
   printf("Nhap kich thuoc mang: ");scanf("%d",&n);	
   nhapmang(a,n);
   printf("So luong co trong mang la %d",Demsochan(a,n));
  
  }
