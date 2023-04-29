#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
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
   void docfile(char tenfile[50], int a[], int &n){
   	FILE *f=fopen(tenfile,"r");
   	if(f==NULL){
   		printf("Loi moi file");
	   }
	fscanf(f,"%d",&n);
	for(int i=0;i<n;i++){
		fscanf(f,"%d",&a[i]);
	}
	for(int i=0;i<=n;i++){
		if(Ktrasonguyento(i)){
			printf("%d\t",i);
		}
	}
	fclose(f);
   }
   void ghiFile(char tenfile[50], int a[50], int n){
   	FILE *f=fopen(tenfile,"w");
   		if(f==NULL){
   			printf("Loi mo file");
		   }
	 for(int i=0;i<=n;i++){
	 	if(Ktrasonguyento(i)){
	 		fprintf(f,"%d\t",i);
		 }
	 }
	 fclose(f);
   }
   int main(){
   	int a[100];
   	int n;
   	char tenfile[100];
	docfile("SONGUYENTO.txt",a,n);
	printf("\nNhap ten file: ");gets(tenfile);
	ghiFile(tenfile,a,n);
	return 0;      
	      }
  
