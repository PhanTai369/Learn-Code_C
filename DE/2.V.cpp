#include <stdio.h>
#include <math.h>

int Nhap() {
    int n;
    do {
        printf("Nhap n: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Moi nhap lai!\n");
        }
    } while (n <= 0);
    return n;
}

int TinhTong_For(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += pow(i, 2);
    }
    return s;
}

int TinhTong_While(int n) {
    int s = 0;
    int i = 1;
    while (i <= n) {
        s += pow(i, 2);
        i++;
    }
    return s;
}
int main() {
    int n = Nhap();
    printf("Tinh tong su dung vong lap for: %d\n", TinhTong_For(n));
    printf("Tinh tong su dung vong lap while: %d\n", TinhTong_While(n));
    return 0;
}

