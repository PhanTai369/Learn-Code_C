#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    
    int i, sum = 0;
    for (i = 1; i <= (2*n+1); i+=2) {
        sum += i*i;
    }
    
    printf("Tong S = %d", sum);
    
    return 0;
}

