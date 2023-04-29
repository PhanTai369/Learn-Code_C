#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
    void Nhapmang(int a[], int n){
    	for(int i=1;i<=n;i++){
    		printf("a[%d]: ",i);
    		scanf("%d",&a[i]);
		}
	}
	void TONGAM(int a[], int n){
		int s=0, dem=0;
		for(int i=1;i<=n;i++){
			if(a[i]<0){
				s+=a[i];
				dem++;
			}
		}
		if(dem==0){
			printf("Khong co cac so am");
		}else{
			printf("Tong cac so am la: %d",s);		
	}
}
   int main(){
   	int a[20]; int n;
   	printf("Nhap n= ");scanf("%d",&n);
   	Nhapmang(a,n);
   	fflush(stdin);
   	TONGAM(a,n);
   }
 



