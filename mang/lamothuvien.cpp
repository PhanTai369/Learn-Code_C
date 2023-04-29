#include <stdio.h>

void nhapMang(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &arr[i]);
    }
}

int timSoChanLonNhat(int arr[], int n) {
    int i;
    int max = -1;
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0 && arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int timSoLeNhoNhat(int arr[], int n) {
    int i;
    int min = 1000000;
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 != 0 && arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    nhapMang(arr, n);

    int max = timSoChanLonNhat(arr, n);
    if (max != -1) {
        printf("So chan lon nhat trong mang la: %d\n", max);
    } else {
        printf("Khong co so chan trong mang.\n");
    }

    int min = timSoLeNhoNhat(arr, n);
    if (min != 1000000) {
        printf("So le nho nhat trong mang la: %d\n", min);
    } else {
        printf("Khong co so le trong mang.\n");
    }

    return 0;
}

