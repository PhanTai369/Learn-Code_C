#include <stdio.h>

int main() {
    int a, b, c, d;
    int max, min;
    printf("Nh?p v�o b?n s? nguy�n: ");
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
    printf("S? l?n nh?t l� %d\n", max);
    printf("S? nh? nh?t l� %d\n", min);
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
    printf("S? kh�ng ph?i l?n nh?t v� nh? nh?t l� %d\n", ma);
    printf("S? kh�ng ph?i nh? nh?t v� l?n nh?t l� %d\n", m);

    return 0;
}

