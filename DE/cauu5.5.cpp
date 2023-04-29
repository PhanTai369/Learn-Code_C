#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;

    printf("Nhap vao mot chuoi ky tu: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    for(i = 0; i < len-1; i++) { // Thêm di?u ki?n len-1 d? tránh truy c?p vu?t quá kích thu?c chu?i
        if(str[i] == ' ' && str[i+1] == ' ') {
            for(j = i+1; j < len; j++) { // D?ch các ký t? phía sau kho?ng tr?ng sang trái d? xóa kho?ng tr?ng
                str[j-1] = str[j];
            }
            len--; // Gi?m d? dài chu?i di 1 sau khi xóa kho?ng tr?ng
            i--; // Lùi l?i 1 v? trí d? xem xét l?i ký t? v?a du?c d?ch lên
        }
    }

    str[len-1] = '\0'; // Ð?t ký t? k?t thúc chu?i vào v? trí len-1

    printf("Chuoi sau khi xoa khoang trang thua: %s\n", str);

    return 0;
}

