#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
 int main(){
 char st[50];
 int dem=0;
 int i;
 printf("Nhpa chuoi: ");gets(st);
 for(int i=0;i<strlen(st);i++){
     if(st[i]!=' '){
     	st[i]=st[i+1];
	dem++;
	while(st[i]!=' ' && i<strlen(st)){
		i++;
	} }
 }
 printf("cac tu: %d",dem);
 return 0;
 }
