#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
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
   	int main(){
   		char tenfile[50];
   		int n;
   		printf("Nhap n= ");scanf("%d",&n);
   		fflush(stdin);
   		printf("Nhap ten file: ");gets(tenfile);
   		FILE *f=fopen(tenfile,"w");
   		 if(f==NULL){
   		 	printf("Loi mo file");
			}
		 for(int i=1;i<=n;i++){
		 	if(Ktrasonguyento(i)){
		 		fprintf(f,"%d\t",i);
			 }
		 }	
		 fclose(f);
	   }
