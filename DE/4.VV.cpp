#include <stdio.h>

void Nhap(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("Nhap phan tu thu [%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

void insert(int arr[], int n, int x, int k) {
    int i;
    // Dich chuyen phan tu tu k den n-1 sang phai mot vi tr�
    for (i = n - 1; i >= k; i--) {
        arr[i + 1] = arr[i];
    }
    // Ch�n gi� tri x v�o gia tr� k
    arr[k] = x;
}

int sum_negative(int arr[], int n) {
    int i, sum = 0;
    // T�nh tong c�c so �m trong mang
    for (i = 0; i < n; i++) {
        if (arr[i] < 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int n, arr[100], x, k, i, sum;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    Nhap(arr, n);

    // Nhap gi� tri x v� va tr� k
    do {
        printf("Nhap gia tri x va vi tri k (0 <= k <= %d):\n", n);
        scanf("%d %d", &x, &k);
        if (k < 0 || k > n) {
            printf("Vi tri k khong hop le. Vui long nhap lai.\n");
        }
    } while (k < 0 || k > n);
    // Ch�n gi� tri x v�o vao tr� k trong mang
    insert(arr, n, x, k);
    // T�nh tong c�c so �m trong mang
    sum = sum_negative(arr, n + 1);
    // In ra ket qua
    printf("Mang sau khi chen gia tri x vao vi tri k:\n");
    for (i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nTong cac so am trong mang: %d\n", sum);
    return 0;
}

