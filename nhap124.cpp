#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
    void Ghibaitho(char tenfile[30]){
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
		fprintf(f,"\nTu 'huong' xuat hien %d lan trong bai",dem);
	    fclose(f);
	}
	void CoppyTho(char st1[30], char st2[30]){
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
		Ghibaitho("THO.txt");
		CoppyTho("THO.txt","COOPYTHO.txt");
	}
	 
	 
	 
