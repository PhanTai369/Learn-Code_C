#include <stdio.h>
#include <math.h>

int TimUocSoLonNhat(int n){
    if(n == 1) {
        return 1; // tru?ng h?p n=1 th� uocMax cung b?ng 1
    }
    int uocMax = n; // g�n gi� tr? ban d?u cho uocMax
    for(int i = n-1; i >= 1; i--) {
        if(n%i == 0) {
            uocMax = i;
            break; // t�m du?c uocMax th� tho�t v�ng l?p
        }
    }
    return uocMax;
}

int main() {
    int n;
    printf("Nhap vao n: ");
    scanf("%d", &n);
    printf("Uoc chung lon nhat cua %d la %d", n, TimUocSoLonNhat(n));
    return 0;
}

