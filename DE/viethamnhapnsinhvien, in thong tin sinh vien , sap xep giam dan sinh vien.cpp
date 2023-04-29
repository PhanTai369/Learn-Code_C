#include <stdio.h>

#define MAXSV 50 // gi?i h?n s? sinh viên

struct Student {
    char masv[30];
     char hoten[30];
    float Diemtb;
};

int main() {
    int n, i;
    struct Student students[MAXSV];

    printf("Nhap so sinh vien: ");
    scanf("%d", &n);

    // Nh?p thông tin c?a t?ng sinh viên
    for (i = 0; i < n; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
        printf("ma sinh vien: ");
        scanf("%s", students[i].masv);
        printf("ho ten: ");
        scanf("%s", &students[i].hoten);
        fflush(stdin);
        printf("Diem trung binh: ");
        scanf("%f", &students[i].Diemtb);
    }

    // Hi?n th? thông tin c?a t?ng sinh viên
    printf("\nDanh sach sinh vien:\n");
    for (i = 0; i < n; i++) {
        printf("Sinh vien thu %d: Ten: %s, Tuoi: %d, Diem trung binh: %.2f\n", i + 1, students[i].masv, students[i].hoten, students[i].Diemtb);
    }

    return 0;
}

