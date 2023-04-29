#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#define MAX 50
// Quan li sinh vien (masv, hoten,diemtb)
 struct Sinhvien{
 	char maSV[20];
 	char hoTen[30];
 	float Dtb;
 };
    void Nhapthongtin(Sinhvien sv[20], int &n){
	 for(int i=0;i<n;i++){
	   printf("\nThong tin sv thu %d\n",i+1);
	   printf("Ma sinh vien: ");gets(sv[i].maSV);
	   printf("Ho ten: ");gets(sv[i].hoTen);
	   printf("Diem Tb: ");scanf("%f",&sv[i].Dtb);
	    fflush(stdin);
	 }
	}
  void Inthongtin(Sinhvien sv[20], int n){
    printf("\nThong tin cac sinh vien:\n");
    for(int i=0;i<n;i++){
        printf("Sinh vien thu %d:\nMaSV: %s \nHo ten: %s \nDiem TB: %.2f\n", i+1, sv[i].maSV, sv[i].hoTen, sv[i].Dtb);
    }
}
  void Sapxeptheodiem(Sinhvien sv[20], int n){
    Sinhvien tmp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(sv[i].Dtb<sv[j].Dtb){
                tmp=sv[i];
                sv[i]=sv[j];
                sv[j]=tmp;
            }
        }
    }
    printf("\nDanh sach sinh vien sau khi sap xep theo diem TB giam dan:\n");
}
  void Timkiemmasv(Sinhvien sv[20], int n){
    char masv[MAX];
    int dem = 0;
    printf("\nNhap ma sinh vien can tim kiem: ");
    fflush(stdin);
    gets(masv);
    for(int i=0;i<n;i++){
        if(strcmp(sv[i].maSV, masv) == 0){
            printf("\nThong tin sinh vien can tim:\nMaSV: %s \nHo ten: %s \nDiem TB: %.2f\n", sv[i].maSV, sv[i].hoTen, sv[i].Dtb);
            dem++;
        }
    }
    if(dem == 0){
        printf("Khong tim thay sinh vien co ma %s trong danh sach\n", masv);
    }
}
//    void capnhat(Sinhvien sv[20], int n, char ma[20]){
//	   if(Timkiemmasv(sv,n)!=-1){
//	   	
//	
//	}
   int main(){
  	Sinhvien sv[MAX];
	  int n;
	  printf("Nhap so luong sv: "); // sinh vien dev tu dat
      scanf("%d",&n);
      fflush(stdin);
      Nhapthongtin(sv,n);
  	Inthongtin(sv,n);
  	Sapxeptheodiem(sv,n);
  	Inthongtin(sv,n);
  	Timkiemmasv(sv,n);
  }
