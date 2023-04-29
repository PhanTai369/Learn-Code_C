#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, k;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Dem so nguyen to
    int countPrime = 0;
    printf("Cac so nguyen to: ");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
        	printf("%d\t",arr[i]);
            countPrime++;
        }
    }
    printf("\nSo phan tu la so nguyen to trong mang la: %d\n", countPrime);
    
    // Tinh tong lon nhat cua day lien tiep co K phan tu
    printf("\nNhap so K: ");
    scanf("%d", &k);
    
    int maxSum = 0, currentSum = 0;
    for (int i = 0; i < k; i++) {
        currentSum += arr[i];
    }
    maxSum = currentSum;
    for (int i = k; i < n; i++) {
        currentSum = currentSum + arr[i] - arr[i-k];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }
    printf("Tong lon nhat cua day lien tiep co %d phan tu la: %d\n", k, maxSum);
    
    // Sap xep mang theo thu tu tang dan
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Mang da sap xep tang dan la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

