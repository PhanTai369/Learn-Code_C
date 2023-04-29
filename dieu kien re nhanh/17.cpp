#include <stdio.h>

int main() {
    char grade;

    printf("Nhap diem cua ban: ");
    scanf("%c", &grade);

    switch (grade) {
        case 'E':
            printf("Xuat sac");
            break;
        case 'V':
            printf("Rat tot");
            break;
        case 'G':
            printf("Tot");
            break;
        case 'A':
            printf("Trung binh");
            break;
        case 'F':
            printf("Hoc lai");
            break;
        default:
            printf("Nhap sai ky tu");
    }

    return 0;
}

