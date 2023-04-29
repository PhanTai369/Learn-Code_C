#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *f1 = fopen("mauthu1.txt", "r");
    FILE *f2 = fopen("mauthu2.txt", "w");
    if (f1 == NULL && f2 == NULL) {
        printf("Loi mo file");
        return 1;
    }
    int c;
    int  dem = 1; // bien dem do theo d�i k� t? d?u ti�n c?a t?
    while ((c = getc(f1)) != EOF) {
        if (dem) {
            c = toupper(c); // chuyen doi k� tu dau ti�n cua tu th�nh chu in hoa
          dem= 0; // d�nh d?u d� x? l� k� t? d?u ti�n c?a t?
        }
        if (isspace(c)) {
            dem= 1; // d�nh d?u b?t d?u m?t t? m?i
        }
        putc(c, f2);
    }
    fclose(f1);
    fclose(f2);
    fprintf(f1,"Da chuyen moi ki tu dau thanh chu in hoa va luu vao file mauthu2.txt\n");
    return 0;
}

