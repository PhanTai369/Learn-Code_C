#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
int TBcacsochan(int n) {
    int s = 0, sochan, dem = 0;
    while (n != 0) {
        if ((n % 10) % 2 == 0) {
            sochan = n % 10;
            s += sochan;
            dem++;
        }
        n /= 10;
    }
    if (dem == 0) {
        return 0; // d? tránh chia cho 0
    }
    return (float)s / dem;
}

int main() {
    int n = 0;
    while (n <= 0) {
        printf("Nhap n= ");
        scanf("%d", &n);
    }
    printf("TB cac so chan la %d", TBcacsochan(n));
    return 0;
}

