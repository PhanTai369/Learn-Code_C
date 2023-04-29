#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;

    printf("Nhap vao mot chuoi ky tu: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    for(i = 0; i < len-1; i++) { // Th�m di?u ki?n len-1 d? tr�nh truy c?p vu?t qu� k�ch thu?c chu?i
        if(str[i] == ' ' && str[i+1] == ' ') {
            for(j = i+1; j < len; j++) { // D?ch c�c k� t? ph�a sau kho?ng tr?ng sang tr�i d? x�a kho?ng tr?ng
                str[j-1] = str[j];
            }
            len--; // Gi?m d? d�i chu?i di 1 sau khi x�a kho?ng tr?ng
            i--; // L�i l?i 1 v? tr� d? xem x�t l?i k� t? v?a du?c d?ch l�n
        }
    }

    str[len-1] = '\0'; // �?t k� t? k?t th�c chu?i v�o v? tr� len-1

    printf("Chuoi sau khi xoa khoang trang thua: %s\n", str);

    return 0;
}

