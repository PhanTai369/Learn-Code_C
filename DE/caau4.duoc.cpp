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
    int  dem = 1; // bien dem do theo dõi ký t? d?u tiên c?a t?
    while ((c = getc(f1)) != EOF) {
        if (dem) {
            c = toupper(c); // chuyen doi ký tu dau tiên cua tu thành chu in hoa
          dem= 0; // dánh d?u dã x? lý ký t? d?u tiên c?a t?
        }
        if (isspace(c)) {
            dem= 1; // dánh d?u b?t d?u m?t t? m?i
        }
        putc(c, f2);
    }
    fclose(f1);
    fclose(f2);
    fprintf(f1,"Da chuyen moi ki tu dau thanh chu in hoa va luu vao file mauthu2.txt\n");
    return 0;
}

