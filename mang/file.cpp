#include<math.h>
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>
    int main(){
    	FILE *f1, *f2;
    	char tenfile[30];
    	printf("Nhap ten file: ");gets(tenfile);
    	f1=fopen("output.txt","r");
    	f2=fopen(tenfile,"w");
    	if(f1==NULL && f2==NULL){
    		printf("LOI TAO FILE");
		}
		int c;
		int dem=0;
		while(!feof(f1)){
			c=getc(f1);
			if(islower(c)){
				dem++;
			}
		}
		fclose(f1);
		printf("so ki tu thuong trong file: %d",dem);
		fprintf(f2,"so ki tu thuong trong file: %d",dem);
		fclose(f2);
	}
		
		
		
		
		
