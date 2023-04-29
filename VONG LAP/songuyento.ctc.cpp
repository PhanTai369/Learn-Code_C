#include <stdio.h>

int isPrime(int n) {
  if (n <= 1) {
    return 0;
  }
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int n;
  printf("Nhap vao mot so nguyen duong: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    if (isPrime(i)) {
      printf("%d la so nguyen to.\n", i);
    } else {
      printf("%d khong la so nguyen to.\n", i);
    }
  }

  return 0;
}

