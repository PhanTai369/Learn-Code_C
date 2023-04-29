#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
   int main(){
   	char st[50];
   	printf("Nhap Ho ten: ");gets(st);
   	strupr(st);// chuyen toan bo thanh IN Hoa;
   	printf("Chuyen thuong thanh hoa: %s",st);
   	printf("\n----Xu ly tung ki tu mot:---\n");
   	for(int i=0;i<strlen(st);i++){
   		st[i]=toupper(st[i]);
	   }
	  printf("Chuyen thuong thanh hoa: %s",st); 
   }
