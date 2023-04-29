#include <math.h>
#include <stdio.h>
#include<conio.h>
bool Ktrasonguento(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void Songuyento(int a[], int n) {
    printf("\nCac so nguyen to trong mang la:\n");
    for (int i = 0; i < n; i++) {
        if (Ktrasonguento(a[i])) {
            printf("%d ", a[i]);
        }
    }
}

void Nhap(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap vao phan tu %d: ", i);
        scanf("%d", &a[i]);
    }
}

void inmang(int a[], int n) {
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int main() {
    int a[20];
    int n;
    printf("Nhap n vao: ");
    scanf("%d", &n);
    Nhap(a, n);
    inmang(a, n);
    Songuyento(a, n);
    return 0;
}

