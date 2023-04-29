#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
  struct Hocsinh{
  	char Tensv[30];
  	int nam;
  	float dtb;
  };
  void Nhap(Hocsinh hs[30], int n){
  	for(int i=0;i<n;i++){
  		printf("\nThong tin sinh vien thu %d\n",i+1);
  		printf("Ten sinh vien: ");gets(hs[i].Tensv);
  		printf("Nam sinh: ");scanf("%d",&hs[i].nam);
  		printf("Diem TB: ");scanf("%f",&hs[i].dtb);
  		fflush(stdin);
	  }
  }
  void Inmang(Hocsinh hs[30], int n){
  	for(int i=0;i<n;i++){
  		printf("%s\t %d\t %f\n",hs[i].Tensv,hs[i].nam,hs[i].dtb);
	  }
  }
  int main(){
  	Hocsinh hs[30];
  	int n;
  	printf("Nhap hoc sinh: ");scanf("%d",&n);
  	fflush(stdin);
  	Nhap(hs,n);
  	char tenfile[30];
  	printf("Nhap ten File: ");gets(tenfile);
  	FILE *f=fopen(tenfile,"wb");
  	if(f==NULL){
  		printf("Loi mo file");
	  }
	fwrite(hs,sizeof(Hocsinh),1,f);
	fclose(f);
	char ten[30];
	printf("Nhap ten File de doc: ");gets(ten);
	FILE *f1=fopen(ten,"rb");
	if(f1==NULL){
		printf("Loi mo file");
	}
	fread(hs,sizeof(Hocsinh),1,f1);
	fclose(f1);
    Inmang(hs,n);
  }
  
  
  
  
  
