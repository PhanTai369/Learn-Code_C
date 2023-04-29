#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
  void ghibaitho(char tenfile[50]){
  	FILE *f=fopen(tenfile,"w");
  	if(f==NULL){
  		printf("Loi mo File!");
	  }
	  fprintf(f,"Que huong la gi ha me\n");
	  fprintf(f,"Ma co giao day phai yeu\n");
	  fprintf(f,"Que huong la gi ha me\n");
	  fprintf(f,"Ai di xa cung nho nhieu");
	fclose(f);
	f=fopen(tenfile,"r");
	   int dem=0;
       char ten[100];
       while(fgets(ten,100,f)!=NULL){
       	  char *p=ten;
       	   while((p=strstr(p,"huong"))!=NULL){
       	   	    dem++;
       	   	    p++;
			  }
	   }
	   fclose(f);
	f=fopen(tenfile,"a");
	if(f==NULL){
	printf("LOi mo file" );
	}
		fprintf(f,"Tu 'huong' xuat hien %d lan",dem);
	fclose(f);
}
   int main(){
   	ghibaitho("Doantho.txt");
   }
	
  	
  	
  	
  
