#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
   int main(){
   	int dem=0;
   	char st[30];
   	char ch;
   	printf("Nhap chuoi: ");gets(st);
   	printf("Nhap ki tu: ");scanf("%c",&ch);
   	for(int i=0;i<strlen(st);i++){
   		if(st[i]==ch){
   			dem++
		   ;}
	   }
	   printf("ki tu %c xuat hien %d lan ",ch,dem);
   }
