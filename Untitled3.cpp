#include <stdio.h>

int main() {
   int maSV, namSinh;
   float diemTB;
   char hoTen[50], queQuan[50];

   printf("Nh?p m� s? sinh vi�n: ");
   scanf("%d", &maSV);

   printf("Nh?p h? t�n sinh vi�n: ");
   scanf("%s", hoTen);

   printf("Nh?p qu� qu�n c?a sinh vi�n: ");
   scanf("%s", queQuan);

   printf("Nh?p nam sinh c?a sinh vi�n: ");
   scanf("%d", &namSinh);

   printf("Nh?p di?m trung b�nh c�c nam h?c c?a sinh vi�n: ");
   scanf("%f", &diemTB);

   printf("\nTh�ng tin c?a sinh vi�n: \n");
   printf("M� s? sinh vi�n: %d\n", maSV);
   printf("H? t�n: %c\n", hoTen);
   printf("Qu� qu�n: %c\n", queQuan);
   printf("Nam sinh: %d\n", namSinh);
   printf("�i?m trung b�nh c�c nam h?c: %.2f\n", diemTB);

   return 0;
}

