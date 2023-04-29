#include<stdio.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<ctype.h>
#include<stdlib.h>
  
   void docfile(char st[30]){
   	int a[30], n;
     FILE *f=fopen(st,"r");
     if(f==NULL){
	  printf("Loi mo file");
	 }
	 fscanf(f,"%d",&n);
	 for(int i=0;i<n;i++){
	    fscanf(f,"%d",&a[i]);
	 }
	 for(int i=0;i<n;i++){
	 if(a[i]%2==0){
	   printf("%d\t",a[i]);
	 }
	 }
	 fclose(f);
	 }
	int main(){
	  docfile("input.txt");
	
	}
   

