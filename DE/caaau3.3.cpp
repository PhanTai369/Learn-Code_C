#include <stdio.h>

int main() {
    int n, max = 0;
    
    printf("Nhap vao mot so nguyen n: ");
    scanf("%d", &n);

    while (n < 1) {
    	printf("Nhap lai n voi (n>=1):  ");scanf("%d",&n);
    	}
    while(n >0){
        int a = n % 10;
        if (a > max) {
            max = a;
        }
        n = n/10;
    }
    printf("Chu so lon nhat la: %d\n", max);
    
    return 0;
}

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int count = 0;
    
    printf("Nh?p chu?i: ");
    fgets(str, 1000, stdin);
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (ispunct(str[i])) {
            count++;
        }
    }
    
    printf("S? l?n xu?t hi?n c?a c�c k� t? d?c bi?t l� %d.", count);
    
    return 0;
}


