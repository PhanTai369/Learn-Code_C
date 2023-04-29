#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
    struct Hocsinh{
 	char tenSV[20];
 	int namSinh;
 	float Dtb;
 };
     void Nhapthongtin(Hocsinh hs[20], int &n){
	 for(int i=0;i<n;i++){
	   printf("\nThong tin sv thu %d\n",i+1);
	   printf("Ten sinh vien: ");gets(hs[i].tenSV);
	   printf("nam sinh: ");scanf("%d",&hs[i].namSinh);
	   printf("Diem Tb: ");scanf("%f",&hs[i].Dtb);
	    fflush(stdin);
	 }
	}
  void Inthongtin(Hocsinh hs[20], int n){
    for(int i=0;i<n;i++){
        printf("%s\t %d\t %f\n", hs[i].tenSV, hs[i].namSinh, hs[i].Dtb);
    }
}
int main(){
	Hocsinh hs[20];
	int n;
	printf("Nhap so luong hoc sinh: ");
	scanf("%d",&n);
	fflush(stdin);
	Nhapthongtin(hs,n);
//	Inthongtin(hs,n);
	// ghi vao file nhi phan
	char tenfile[30];
	printf("Nhap ten File: ");gets(tenfile);
	FILE *f=fopen(tenfile,"wb");
	if(f==NULL){
		printf("Loi mo file");
	}
	fwrite(hs,sizeof(Hocsinh),1,f);
	fclose(f);
	// doc file
	char ten[20];
	printf("Nhap ten File: ");gets(ten);
	FILE *f1=fopen(ten,"rb");
	if(f1==NULL){
		printf("Loi mo file");
	}
	fread(hs,sizeof(Hocsinh),1,f1);
	fclose(f1);
	printf("\n In thong tin sinh vien lay tu file \n ");
	Inthongtin(hs,n);
	return 0;
}
