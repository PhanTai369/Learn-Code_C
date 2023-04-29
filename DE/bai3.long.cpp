#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<ctype.h>
#include<stdlib.h>
    void Nhapmang(int a[], int n){
    	for(int i=0;i<n;i++){
    		printf("a[%d]: ",i);
    		scanf("%d",&a[i]);
		}
	}
	void Inmang(int a[], int n){
		for(int i=0;i<n;i++){
			printf("%d\t",a[i]);
		}
	}
	bool Ktrasonguyento(int n){
		if(n<2){
			return false;
		}
		for(int i=2;i<=n/2;i++){
			if(n%i==0){
				return false;
			}
		}
		return true;
	}
	void Songuyento(int a[], int n){
		int dem=0;
			printf("\nCac so nguyen to: ");
		for(int i=0;i<=n;i++){
			if(Ktrasonguyento(a[i])){
				printf("%d\t",a[i]);
				dem++;
			}
		}
		printf("\nMang gom %d so nguyen to",dem);
	}
  int Timtong(int n, int a[], int k){
  	int max=0, s=0;
  	for(int i=0;i<k;i++){
  		s+=a[i];
  }
       max=s;
    for(int i=k;i<n;i++){
    	s=s+a[i]-a[i-k];
    	if(s>max){
    		max=s;
		}
	}
      return max;
   }
	void Sapxepmangtangdan(int a[], int n){
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
		}
	
	int main(){
		int n,k;
		int a[30];
		printf("Nhap n= ");scanf("%d",&n);
		Nhapmang(a,n);
		Inmang(a,n);
		Songuyento(a,n);
		printf("\nNhap k: ");
        scanf("%d", &k);
        printf("Tong lon nhat cua day con lien tiep %d phan tu la: %d", k,Timtong(n,a,k));
        Sapxepmangtangdan(a,n);
        printf("Cac so sap xep tang dan:");
        Inmang(a,n);
        return 0;
	}
