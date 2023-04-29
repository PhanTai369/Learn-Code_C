#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
    int main(){
      char st[100], ch;
      int dem=0;
      printf("Nhap chuoi: ");gets(st);
       fflush(stdin);
      printf("Nhap ki tu ch: ");scanf("%c",&ch);
      for(int i=0;i<strlen(st);i++){
      	if(st[i]==ch){
      		dem++;
		  }
	  }
	  printf("So lan xuat hien ky tu %c trong chuoi %s la: %d ",ch,st,dem);
	}
