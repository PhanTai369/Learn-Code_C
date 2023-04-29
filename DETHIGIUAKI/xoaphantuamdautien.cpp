#include <stdio.h>

void xoaPhanTu(int a[], int n, int index) {
      for(int i = index; i < n - 1; i++) {
        a[i] = a[i+1];
    }
}
void xoaSoAmDauTien(int a[], int n) {
       for(int i = 0; i < n; i++) {
        if(a[i] < 0) {
            xoaPhanTu(a, n, i);
            
        }
    }
    xoaPhanTu(a, n, n-1);
}

int main() {
    int A[] = {2, 3, - 2, 4, 12};
    int n = sizeof(A)/4; // kích thu?c c?a m?ng
    xoaSoAmDauTien(A, n);
    printf("Phan tu sau khi xoa la: ");
    for(int i = 0; i < n-1; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}

