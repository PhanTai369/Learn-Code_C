#include <stdio.h>

void luuMangXuongFile(int a[], int n, char tenFile[50]) {
    FILE* f;
    f = fopen(tenFile, "w"); 
    if(f == NULL) {
        printf("Khong the mo file %s", tenFile);
        return;
    }
    for(int i = 0; i < n; i++) {
        fprintf(f, "%d ", a[i]); 
    }
    fclose(f); 
}

int main() {
    int A[] = {2, 3, -7, 2, 4, -12};
    int n = 6;
    char tenFile[50];
    luuMangXuongFile(A, n, "SOnguyen.txt");
    return 0;
}

