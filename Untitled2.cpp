#include <stdio.h>

int main() {
   int a, b, sum, difference, product, quotient, remainder;

   printf("Nh?p vào s? th? nh?t: ");
   scanf("%d", &a);

   printf("Nh?p vào s? th? hai: ");
   scanf("%d", &b);

   sum = a + b;
   difference = a - b;
   product = a * b;
   quotient = a / b;
   remainder = a % b;

   printf("%d + %d = %d\n", a, b, sum);
   printf("%d - %d = %d\n", a, b, difference);
   printf("%d * %d = %d\n", a, b, product);
   printf("%d / %d = %d\n", a, b, quotient);
   printf("%d %% %d = %d\n", a, b, remainder);

   return 0;
}

