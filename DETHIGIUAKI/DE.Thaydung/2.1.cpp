#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    
    float i, sum = 1.0;
    for (i = 3; i <= n; i += 2) {
        sum += 1.0 / i;
    }
    
    printf("Tong S = %f", sum);
    
    return 0;
}

