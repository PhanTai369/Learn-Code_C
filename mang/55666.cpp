#include <math.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
void nhapmang(int a[],int n){ 
 srand(time(NULL));
 for(int i=0;i<n;i++){
 	a[i]=rand()%100;
 }
}
void inmang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
int tinhtong(int a[],int n){
	int s=0;
	for(int i=0;i<n;i++){
		if(a[i]>10){
			s=s+a[i];
		}
	}
	return s;
}
int main(){
	int a[100];
	int n;
	printf("\nNhap vao so nguyen n: ");
	scanf("%d",&n);
	nhapmang(a,n);
	inmang(a,n);
	printf("\nTong la : %d",tinhtong(a,n));
}
	
	
