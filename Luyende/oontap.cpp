#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
void nhapMangngaunhien(int a[20], int &n){
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
 
 void swap(int &x, int &y){
 	int temp=x;x=y;y=temp;
 }
 void sapxep(int a[10], int n){
 	for(int i=0;i<n-1;i++){
 		for(int j=i+1;j<n;j++){
 			if(a[i]>a[j]){
 				swap(a[i],a[j]);
			 }
		 }
	 }
 }
  int main(){
//  	int A[]={2,3,-7,2,4,-12};
//  	int n=sizeof(A)/4;
//  	printf("Kich thuoc mang %d",n);
//mang ngau nhien
  	int a[20];
  	int n=5;
  	nhapMangngaunhien(a,n);
  	Inmang(a,n);
  	sapxep(a,n);
  	sapxep(a,n);
  	printf("\n--------------------------\n");
  	Inmang(a,n);
  }
