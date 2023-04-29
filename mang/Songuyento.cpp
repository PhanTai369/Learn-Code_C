#include <math.h>
#include <stdio.h>
#include<conio.h>
  bool Ktrasonguyento(int n){
  	if(n<2){
  		return false;
		  }
	for(int i=2;i<n;i++){
	   if(n%i==0){
	    return false;
	   }
	}
	return true;	  	
  	}
   void Songuyento(int a[], int n){
     printf("\ncac so nguyen to \n");
          for(int i=0;i<n;i++){
   	     if(Ktrasonguyento(a[i])){
		printf("%d\t",a[i]);		
		}
	  }
   }
  	void Nhapmang(int a[], int n){
  		for(int i=0;i<n;i++){
  			printf("cac phan tu thu %d ",i);
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
		inmang(a,n);
	    Songuyento(a,n);
		}
  	
  	
  	
  	
  	
