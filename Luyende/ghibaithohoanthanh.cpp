#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h> 
#include<conio.h>
  void Ghitho(char tenfile[50]){
   	FILE *f=fopen(tenfile,"w");
   	if(f==NULL){
   		printf("Loi mo file");
	   }
	fprintf(f,"Que huong la gi ha me\n");
	fprintf(f,"Ma co giao day phai yeu\n");
	fprintf(f,"Que huong la gi ha me\n");
	fprintf(f,"Ai di xa cung nho nhieu");
	fclose(f);
	   f=fopen(tenfile,"r");
	   int dem=0;
	   char line[100];
	   while(fgets(line,100,f)!=NULL){
	   	   char *p=line;
	   	   while((p=strstr(p,"huong"))!=NULL){
	   	   	dem++;
	   	   	p++;
			  }
	   }
	   fclose(f);
	   f=fopen(tenfile,"a");
	   if(f==NULL){
	   	printf("Loi mo file");
	   }
	   fprintf(f,"\nTu 'huong' xuat hien trong bai %d lan",dem);
	   	fclose(f);
}
    void CoppyTho(char st1[50], char st2[50]){
    	FILE *f1=fopen(st1,"r");
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
   	Ghitho("Tho.txt");
   	CoppyTho("Tho.txt","CoppyTho.txt");
   }
  
