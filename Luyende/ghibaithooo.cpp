 #include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>
void ghibaitho(char tenfile[50]){
	FILE *f=fopen(tenfile,"w");
	if(f==NULL){
		printf("Loi mo file!");
	}
	fprintf(f,"Que huong la gi ha me\n");
	fprintf(f,"Ma co day phai yeu\n");
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
		printf("Loi mo file!");
	}
	fprintf(f,"\nDoan tho tren lap lai tu 'huong' %d lan",dem);
	fclose(f);
}
int main(){
	ghibaitho("Thoo.txt");
	return 0;
}

