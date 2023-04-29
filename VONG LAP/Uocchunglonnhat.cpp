#include <stdio.h>
#include <math.h>

int TimUocSoLonNhat(int n){
    if(n == 1) {
        return 1; // tru?ng h?p n=1 thì uocMax cung b?ng 1
    }
    int uocMax = n; // gán giá tr? ban d?u cho uocMax
    for(int i = n-1; i >= 1; i--) {
        if(n%i == 0) {
            uocMax = i;
            break; // tìm du?c uocMax thì thoát vòng l?p
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

