#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void nhapMang(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("Nhap gia tri thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int demSoNguyenTo(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        int isPrime = 1;
        if(arr[i] < 2) {
            isPrime = 0;
        } else {
            for(int j = 2; j <= sqrt(arr[i]); j++) {
                if(arr[i] % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }
        if(isPrime) {
            count++;
        }
    }
    return count;
}

void sapXepTangDan(int arr[], int n) {
    int temp;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[i]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void inMang(int arr[], int n) {
    printf("\nMang sau khi sap xep la: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main(){
	int n;
	printf("nhap so luong phan tu: "); scanf("%d",&n);
	int arr[1000];
	nhapMang(arr,n);
	printf("\nmang co %d so nguyen to ",demSoNguyenTo(arr,n));
	sapXepTangDan(arr,n);
}

