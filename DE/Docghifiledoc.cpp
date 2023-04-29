#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
  void ghibaitho(char tenFile[50]){
  	FILE *f, *f2;
  	f=fopen(tenFile,"w");
  	f2=fopen("Docghifiledoc.cpp","r");
  	if(f==NULL && f2 == NULL){
  		printf("Loi mo File");
	  }
	  char c;
	  while(!feof(f2)){
	  c=getc(f2); 
	  if(feof(f2))break;
	fprintf(f,"%c",c);
}
	  fprintf(f,"Toi muon tat nang di\n");
	  fprintf(f,"Cho mau dung nhat mat\n");
	  fprintf(f,"Toi muon buoc gio lai\n");
	  fprintf(f,"Cho huong dung bay di");
	fclose(f);
	fclose(f2);
	}
	int main(){
		ghibaitho("TAILIEU.doc");
		return 0;
	}
 





