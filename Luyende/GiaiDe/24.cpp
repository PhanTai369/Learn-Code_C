#include <stdio.h>
  void Nhapmang(int A[], int n){
     for(int i=1;i<=n;i++){
	 printf("a[%d]= ",i);
	 scanf("%d",&A[i]);
	 }
  
  }
int timSoLonNhat(int A[], int n) {
    int max = A[0];
    for(int i = 1; i <= n; i++) {
        if(A[i] > max) {
            max = A[i];
        }
    }
    return max;
}

int main() {
    int A[50],n;
     printf("NHAP N= ");scanf("%d",&n);
     Nhapmang(A,n);
    int max = timSoLonNhat(A, n);
    printf("So lon nhat trong mang la: %d\n", max);
    return 0;
}

