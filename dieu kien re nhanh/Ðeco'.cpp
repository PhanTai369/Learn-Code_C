#include <stdio.h>

int main()
{
    int n, k, count = 0;

    // Nh?p s? lu?ng ph?n t? c?a m?ng
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];

    // Nh?p m?ng a
    printf("Nhap mang a:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Nh?p gi� tr? k
    printf("Nhap gia tri k: ");
    scanf("%d", &k);

    // �?m s? lu?ng ph?n t? trong m?ng c� gi� tr? nh? hon k
    for (int i = 0; i < n; i++) {
        if (a[i] < k) {
            count++;
        }
    }

    // In k?t qu? ra m�n h�nh
    printf("Trong mang a co %d phan tu co gia tri nho hon %d", count, k);

    return 0;
}

