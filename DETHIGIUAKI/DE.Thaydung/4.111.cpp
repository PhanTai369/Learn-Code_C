#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
   void sapxeptangdan(int a[], int n){
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
   void docfile(int a[], int &n, char tenfile[50]){
   	   FILE *f=fopen(tenfile,"r");
   	   if(f==NULL){
   	   	printf("Loi mo file");
		  }
		fscanf(f,"%d",&n);
		for(int i=0;i<n;i++){
			fscanf(f,"%d",&a[i]);
		}
	 sapxeptangdan(a,n);
	 printf("Mang sau khi sap xep la: ");
	 for(int i=0;i<n;i++){
	 	printf("%d\t",a[i]);
	 }
	 fclose(f);
   }
    void Ghifile(int a[], int n, char tenfile[40]){
    	FILE *f=fopen(tenfile,"w");
    	if(f==NULL){
    		printf("Loi mo file");
		}
		for(int i=0;i<n;i++){
			fprintf(f,"%d\t",a[i]);
		}
		fclose(f);
	}
   int main(){
   	int a[40];
   	int n;
   	docfile(a,n,"output.txt");
    char tenfile[50];
    printf("Nhap chuoi: ");gets(tenfile);
    Ghifile(a,n,tenfile);
   }
