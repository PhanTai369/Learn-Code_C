#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
   void  Nhaphoten(char st[50]){
   	  char holot[100], ten[100], ho[100];
   	  printf("Nhap ho: "); scanf("%s", &ho);
   	  printf("Nhap ho lot: "); scanf("%s", &holot);
   	  printf("Nhap ten: "); scanf("%s", &ten);
   	  // ham strat noi chuoi nhu sau: no lau ho lot noi voi dau cach sau do tiep tuc lay ho noi voi holot roi tiep tuc noi voi dau cach r noi voi 
   	  strcat(ho," ");
   	  strcat(ho, holot);
   	  strcat(ho, " ");
   	  strcat(ho, ten);
   	  printf("Ho va ten: %s", ho);
   }
   int main(){
   	char st[50];
   	Nhaphoten(st);
   }
   	     

