#include <stdio.h>

int main() {
    int a, b, c, d;
    int max, min;
    printf("Nh?p vào b?n s? nguyên: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    max = a;
    min = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    if (d < min) {
        min = d;
    }
    printf("S? l?n nh?t là %d\n", max);
    printf("S? nh? nh?t là %d\n", min);
       int ma, m;
    ma = m = a;
    if (b < max && b > ma) {
        ma = b;
    }
    if (c < max && c > ma) {
        ma = c;
    }
    if (d < max && d > ma) {
        ma = d;
    }
    if (b > min && b < m) {
        m = b;
    }
    if (c > min && c < m) {
        m = c;
    }
    if (d > min && d < m) {
        m = d;
    }
    printf("S? không ph?i l?n nh?t và nh? nh?t là %d\n", ma);
    printf("S? không ph?i nh? nh?t và l?n nh?t là %d\n", m);

    return 0;
}

