#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>
  void ghibaitho(char tenFile[50]){
  	FILE *f;
  	f=fopen(tenFile,"w");
  	if(f==NULL){
  		printf("Loi mo File");
	  }
	  fprintf(f,"Que huong la gi ha me\n");
	  fprintf(f,"Ma co giao day phai yeu\n");
	  fprintf(f,"Que huong la gi ha me\n");
	  fprintf(f,"Ai di xa cung nho nhieu");
	fclose(f);
	}
	void coppytho(char st1[20], char st2[20]){//st1: ten file nguon, st2: ten file mo
	  FILE *f1,*f2;
	  f1=fopen(st1,"r"); // mo file nguon co ten st1 de doc
	  f2=fopen(st2,"w");//mo file dich co ten st2 de ghi
	  if(f1==NULL && f2==NULL){
	   printf("Loi mo file");
	  }
	int c;
	while(!feof(f1)){
		if(feof(f1)){
		 break;
		}
		c=getc(f1);// doc tung ki ti f1
		putc(toupper(c),f2);// ghi tung ki tu tu file f1 sang file f2
		}
		fclose(f1);
		fclose(f2);
	}
  
  
   int main(){
     ghibaitho("tho.txt");
     coppytho("tho.txt","THOCOPPY.txt");
  	}
