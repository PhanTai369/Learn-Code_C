#include <stdio.h>

int main() {
   int maSV, namSinh;
   float diemTB;
   char hoTen[50], queQuan[50];

   printf("Nh?p mã s? sinh viên: ");
   scanf("%d", &maSV);

   printf("Nh?p h? tên sinh viên: ");
   scanf("%s", hoTen);

   printf("Nh?p quê quán c?a sinh viên: ");
   scanf("%s", queQuan);

   printf("Nh?p nam sinh c?a sinh viên: ");
   scanf("%d", &namSinh);

   printf("Nh?p di?m trung bình các nam h?c c?a sinh viên: ");
   scanf("%f", &diemTB);

   printf("\nThông tin c?a sinh viên: \n");
   printf("Mã s? sinh viên: %d\n", maSV);
   printf("H? tên: %c\n", hoTen);
   printf("Quê quán: %c\n", queQuan);
   printf("Nam sinh: %d\n", namSinh);
   printf("Ði?m trung bình các nam h?c: %.2f\n", diemTB);

   return 0;
}

