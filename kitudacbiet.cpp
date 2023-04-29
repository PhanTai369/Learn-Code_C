#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
   int main(){
   	char a[50];
   	int dem=0;
   	printf("Nhap chuoi: ");
   	gets(a);
   	for(int i=0;a[i]!='\0';i++){
   		if(ispunct(a[i])&& a[i]!='/'){
   			dem++;
		   }
	   }
	   printf("So ki tu dac biet %d ", dem);
   }
