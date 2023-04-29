#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
    int main(){
	FILE *f1, *f2;
	char tenfile[20];
	printf("Nhap ten file ghi ket qua: "); gets(tenfile);
	f1=fopen("input.txt","r");//mo file de doc
	f2=fopen(tenfile,"w");
	if(f1==NULL && f2==NULL){
	printf("Loi tao/mo file!");
	}
	// doc tung ki tu trong file
	// doc tung ki tu có phai la chu thuong hay ko
	int c;
	int dem=0;
	while(!feof(f1)){
	 c=getc(f1);// doc tung ki tu trong file va gan vao bien c
	 if(islower(c)){
	 	dem++;
	}
	}
	fclose(f1);
	printf("So ky tu thuong trong file: %d",dem);
	fprintf(f2,"So ki tu thuong trong file: %d",dem);
	fclose(f2);
	}
