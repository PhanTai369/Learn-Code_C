#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
   int main(){
   	char st[1000];
   	int dem=0;
   	printf("Nhap chuoi: ");gets(st);
   	for(int i=0;st[i]!='\0';i++){
   		if(ispunct(st[i]) && st[i]!='/'){
   			dem++;
		   }
	   }
	   printf("chuoi tren co %d ki tu dac biet",dem);
   }
