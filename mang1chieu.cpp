#include<stdio.h>
#include<math.h>
#include<conio.h>
  void Nhapmang(int a[], int n){
  	// kich thuoc cua mang
    // nhap mang
    for(int i=0;i<n;i++){
	 printf("Nhap phan tu thu %d: ",i);
	 scanf("%d",&a[i]);
	}
 }
 // tinh tong cac phan tu co trong mang
 int Tinhtong(int a[], int n){
 	int s=0;
   for(int i=0;i<n;i++){
    s+=a[i];
   
   }
   return s;
 }
	// in mang
	void inmang(int a[], int n){
	for(int i=0;i<=n;i++){
	printf("%d\t",a[i]);
	}
 }
	 int main(){
	 	int a[20];
	 	int n;
	 printf("Nhap kich thuoc mang: ");scanf("%d",&n);	
	 Nhapmang(a,n);
     printf("\n------------------------------------------\n");
	 inmang(a,n);
	 printf("\nTong 2 phan tu: %d",Tinhtong(a,n));
	 } 
  
