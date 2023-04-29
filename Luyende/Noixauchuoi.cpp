#include <stdio.h>
#include <string.h>

int main() {
   char Ho[50];
   char Lot[30];
   char Ten[20];
   printf("Nhap ho: ");gets(Ho);
   printf("Nhap lot: ");gets(Lot);
   printf("Nhap ten: ");gets(Ten);
   
   strcat(Ho, " ");
   strcat(Ho,Lot);
   strcat(Ho," ");
   strcat(Ho, Ten);
   printf("Ho va ten la: %s", Ho);
   return 0;
}

