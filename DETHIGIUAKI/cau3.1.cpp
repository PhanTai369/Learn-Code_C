#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
void SapxepGiamdan(int a[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void Inmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
}

void docfile(char tenfile[50], int a[], int &n) {
    FILE* f = fopen(tenfile, "r");
    if (f == NULL) {
        printf("Loi mo file"); 
    }
    fscanf(f, "%d", &n);
    for (int i = 0; i < n; i++) {
        fscanf(f, "%d", &a[i]);
    }
    fclose(f);
}

void ghifile(char tenfile[50], int a[], int n) {
    FILE* f = fopen(tenfile, "w");
    if (f == NULL) {
        printf("Loi mo file");
    }
    for (int i = 0; i < n; i++) {
        fprintf(f, "%d ", a[i]);
    }
    fclose(f);
}

int main() {
    int a[50];
    char tenfile[50];
    int n;
    docfile("SONGUYEN.txt", a, n);
    SapxepGiamdan(a, n);
    Inmang(a, n);
    printf("\nNhap ten file: ");
    gets(tenfile);
    ghifile(tenfile, a, n);
    return 0;
}

