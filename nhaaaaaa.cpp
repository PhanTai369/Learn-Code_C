#include<stdio.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<ctype.h>
#include<stdlib.h>
  struct Hocsinh{
  	char ten[50];
  	int nam;
  	float dtb;
  };
  void Nhap(Hocsinh hs[30], int n){
    for(int i=0;i<n;i++){
	  printf("thong tin sinh vien: %d\n ",i+1);
	  printf("Ten sinh vien:");gets(hs[i].ten);
	  printf("Nam sinh:");scanf("%d",&hs[i].nam);
	  printf("DtB:");scanf("%f",&hs[i].dtb);
	  fflush(stdin);
	}
  }
  void Inmang(Hocsinh hs[30], int n){
    for(int i=0;i<n;i++){
    	printf("%s\t %d\t %f\n",hs[i].ten,hs[i].nam,hs[i].dtb);
	}
  }
  int main(){
  	int n;
  	Hocsinh hs[30];
  	printf("Nhap so hoc sinh: ");scanf("%d",&n);
  	fflush(stdin);
  	Nhap(hs,n);
  	char tenfile[50];
  	printf("Nhap ten file: ");gets(tenfile);
  	FILE *f=fopen(tenfile,"wb");
  	if(f==NULL){
  		printf("Loi mo file");
	  }
	fwrite(hs,sizeof(Hocsinh),1,f);
	fclose;
  }
