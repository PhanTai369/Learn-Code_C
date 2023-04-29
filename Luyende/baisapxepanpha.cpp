#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main()
{
    char a[100];
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);


    printf("Nhap mang: ");
    for (int i = 0; i < n; i++) {
        scanf(" %c", &a[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (tolower(a[i]) > tolower(a[j])) {
                char temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Danh sach da sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%c ", a[i]);
    }
    return 0;
}

