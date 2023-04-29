#include<stdio.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<ctype.h>
#include<stdlib.h>
  void removeElement(int a[100],int n, int x){
	int i;
   for(int i=x; i<n-1; i++) {
        a[i] = a[i+1];
    }
    n--;

    printf("Mang sau khi xoa phan tu tai vi tri %d:\n", x);
    for(int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }}
int main() {
    int a[]={2,3,5,2,4,2};
    int n=sizeof(a)/4;
    int k;
    printf("Nhap vi tri can xoa (0 <= k < %d): ", n);
    scanf("%d", &k);
    while(k<0 || k>=n){
	 printf("Moi ban nhap lai: ");
	 scanf("%d",&k);
	}
    
	removeElement(a,n,k);
	}

