//#include <stdio.h>
//
//int main() {
//    char c;
//
//    printf("Nh?p m?t ký t?: ");
//    scanf("%c", &c);
//    printf("Mã ASCII c?a ký t? %c là %d\n", c, c);
//
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    float toan, ly, hoa, dtb;
//
//    printf("Nhap diem mon Toan: ");
//    scanf("%f", &toan);
//
//    printf("Nhap diem mon Ly: ");
//    scanf("%f", &ly);
//
//    printf("Nhap diem mon Hoa: ");
//    scanf("%f", &hoa);
//	dtb = (toan + ly + hoa) / 3.0;
//
//    printf("%-10s%.1f\n", "Toan", toan);
//    printf("%-10s%.1f\n", "Ly", ly);
//    printf("%-10s%.1f\n", "Hoa", hoa);
//    printf("----------------------------------\n");
//    printf("%-10s%.2f", "DTB", dtb);
//
//    return 0;
//}

#include <stdio.h>
#include <math.h>

int main() {
    int a, a3;
    printf("Nhap vao mot so nguyen a: ");
    scanf("%d", &a);
    // ép ki?u a thành s? nguyên
    a3 =  pow((float)a, 3);  // tính a^3

    printf("Gia tri a^3 la: %d", a3);

    return 0;
}


