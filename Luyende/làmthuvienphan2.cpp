#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
#include<stdlib.h>
   void Timmax(int a[], int n){
   	int max=0;
   	for(int i=0;i<n;i++){
   		if(a[i]>max){
   			max=a[i];
		   }
	   }
	   printf("Gia tri lon nhat trong mang la: %d",max);
   }
void Timvitri(int a[], int n, int x){
	int index=-1;
	for(int i=0;i<n;i++){
		if(a[i]==x){
			index=i;
		}
	}
   if(index==-1){
   	printf("Khong co vi tri dau tien");
   }else{
   	printf("Vi tri dau tien trong mang la: %d",index);
   }	
}
 void Sapxeptangdan(int a[], int n){
 	for(int i=0;i<n-1;i++){
 		for(int j=i+1;j<n;j++){
 			if(a[i]>a[j]){
 				int temp=a[i];
 				a[i]=a[j];
 				a[j]=temp;
			 }
		 }
	 }
	 printf("Mang sap xep tang dan la: ");
	 for(int i=0;i<n;i++){
	 	printf("%d\t",a[i]);
	 }
 }
 
