#include <stdio.h>

// Hàm ki?m tra s? d?i x?ng
int isPalindrome(int n) {
    int rev = 0, temp = n;
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }
    if (n == rev) {
        return 1;
    }
    return 0;
}

int main() {
    int n, i, sum = 0;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (isPalindrome(arr[i])) {
            sum += arr[i];
        }
    }
    printf("Tong cac so doi xung trong mang la: %d", sum);
    return 0;
}

