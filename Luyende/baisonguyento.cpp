#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
   bool KtraSNT(int n){
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
  	int n;char tenfile[200];
  	printf("Nhap n= ");
  	scanf("%d",&n);
  	while(n<=0){
  		printf("Nhap lai: ");scanf("%d",&n);
	  }
	printf("Nhap ten file: ");
	fflush(stdin);
	gets(tenfile);
  	FILE *f=fopen(tenfile,"w");
  	if(f==NULL){
  		printf("Loi mo file!");
	  }
	  for(int i=1;i<=n;i++){
	  	 if(KtraSNT(i)){
	  	 	fprintf(f,"%d\t",i);
		   }
	  }
	  fclose(f);
  	
  }
