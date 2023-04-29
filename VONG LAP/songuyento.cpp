#include <stdio.h>

int main() {
    int n, i, flag = 0;
    printf("Nhap vao mot so nguyen duong: ");
    scanf("%d", &n);

    // kiem tra so nguyen to
    for (i = 2; i <= n / 2; ++i) {
        // neu n chia het cho i, khong phai so nguyen to
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (n == 1) {
        printf("1 khong phai la so nguyen to.");
    }
    else {
        if (flag == 0)
            printf("%d la so nguyen to.", n);
        else
            printf("%d khong phai la so nguyen to.", n);
    }

    return 0;
}

