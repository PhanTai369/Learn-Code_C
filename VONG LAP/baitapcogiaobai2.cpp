#include <stdio.h>

void timM(int n) {
    int s = 0;
    int i = 1;

    do {
        printf("Nhap vao so n: ");
        scanf("%d", &n);
    } while (n <= 0);

    if (n == 1) {
        printf("Khong the tim duoc gia tri cua m");
    } else {
        while (s < n) {
            s += i;
            i++;
        }
        printf("Gia tri cua m la: %d", i - 2);
    }
}

int main() {
    int n;
    timM(n);
    return 0;
}



#include <stdio.h>

//int main() {
//   int n, m = 1, sum = 0;
//
//   printf("Nhap vao so n: ");
//   scanf("%d", &n);
//
//   while (sum + m < n) {
//      sum += m;
//      m++;
//   }
//
//   printf("Gia tri m tim duoc la: %d", m-1);
//
//   return 0;
//}
//





   
   
