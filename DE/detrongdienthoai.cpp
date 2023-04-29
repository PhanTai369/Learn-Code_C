#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h> 
   bool KtraSoNT(int n){
    if(n<2){
	 return 0;
	}
	for(int i=2;i<=n/2;i++){
	if(n%i==0){
		return 0;
		break;
	}
  }
	return 1;
    }
   int main(){
    int n;
	FILE *f;
    char tenfile[20];
    printf("Nhap n= ");scanf("%d",&n);
    while(n<=0){
    	printf("Nhap lai n: ");scanf("%d",&n);
   }
   printf("Nhap ten file: ");
   fflush(stdin);
   gets(tenfile);
   f=fopen(tenfile,"w");
   if(f==NULL){
   printf("Loi mo file");
   }
   for(int i=1;i<=n;i++){
   	 if(KtraSoNT(i)){
		fprintf(f,"%d\t",i);
		}
	   }
   fclose(f);
   
   }
   
