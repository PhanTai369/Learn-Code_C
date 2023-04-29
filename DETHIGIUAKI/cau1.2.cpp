#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
 int main(){
 	int dem=0;
 	char st[50];
 	while(1){
 		 	printf("Nhap chuoi: ");gets(st);
 		if(stricmp(st,"done")==0 ){
 			break;
		 }
		 dem++;
	 }
	printf("So ki tu: %d", dem);
	
 }
