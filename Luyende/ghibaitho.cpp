#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
  void ghifile(char tenfile[50]){
  	FILE *f=fopen(tenfile,"w");
  	if(f==NULL){
  		printf("Loi mo file");
	  }
	fprintf(f,"Que huong la gi ha me\n");
	fprintf(f,"Ma co giao day phai yeu\n");
	fprintf(f,"Que huong la gi ha me\n");
	fprintf(f,"Ai di xa cung nho nhieu");
	fclose(f);
  }
  void Coppytho(char st[50], char st2[50]){
  	FILE *f1=fopen(st,"r");
  	FILE *f2=fopen(st2,"w");
  	if(f1==NULL && f2==NULL){
  		printf("Loi mo file");
	  }
	  int c;
	  while(!feof(f1)){
	  	c=getc(f1);
	  	if(feof(f1)){
	  		break;
		  }
	  	putc(toupper(c),f2);
	  }
	  fclose(f1);
	  fclose(f2);
	  
  }
  int main(){
  	ghifile("tho.txt");
  	Coppytho("tho.txt","THOCOPPY.txt");
  }
