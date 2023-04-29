#include<stdio.h>
#include<math.h>
#include<conio.h>
 int Timsochanlonnnhat(int a[], int n){
   int max=-1;
   for(int i=0;i<n;i++){
     if(a[i]%2==0 && a[i]>max){
	 max=a[i];
	 }
   }
   return max;
 }
 int Timsolenhonhat(int a[], int n){
  int min=1000;
  for(int i=0;i<n;i++){
   if(a[i]%2!=0 && a[i]<min){
   min=a[i];
   }
  }
   return min;
 }
 void InraKQ(int a[], int n){
  int max=Timsochanlonnnhat(a,n);
  if(max!=-1){
  	printf("\nso chan lon nhat %d\n",max);
  	}else{
  		printf("Khong co so chan nao\n");
   }
   int min=Timsolenhonhat(a,n);
   if(min!=1000){
   	printf("\nSo le nho nhat %d\n", min);
   	}else{
   		printf("Khong so le nao\n");
	   }
 }

  void Nhapmang(int a[], int n){
  	for(int i=0;i<n;i++){
  		printf("Nhap phan tu thu %d ",i);
  		scanf("%d",&a[i]);
  		}
    }
   void inmang(int a[], int n){
    for(int i=0;i<n;i++){
    	printf("%d\t",a[i]);
    	}
   }
   
   int main(){
   	int a[20];
   	 int n;
   	 printf("Nhap n= ");scanf("%d",&n);
   	 Nhapmang(a,n);
   	 Timsochanlonnnhat(a,n);
   	 Timsolenhonhat(a,n);
   	 inmang(a,n);
   	 InraKQ(a,n);
   
	   }
