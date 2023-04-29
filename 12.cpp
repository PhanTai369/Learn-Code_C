#include <stdio.h>
#include<conio.h>
#include<math.h>

int main(){
 int a = 125, b = 12345;
  long ax = 12345678890;
  short s = 4043;
  float x = 2.13459;
  double dx = 1.1415927;
  char c ='W';
  unsigned long ux= 2541567890;
  printf("a+c=%d\n", a + (int) c);
  printf("x+c=%f\n", x + (float)c);
  printf("dx+x=%f\n", dx+x);
  printf("dx+ax=%ld\n", ((int)dx)+ax);
  printf("dx+ax=%ld\n", ((int)dx)+ax);
 
  printf("a+x=%f\n", a+x);
  printf("s+b=%d\n", s+b);
  printf("ax+b=%ld\n", ax+b);  
  printf("s+c=%d\n", s+(int)c);  
  printf("ax+c=%d\n", ax+(int)c);  
  printf("ax+ux=%ld\n", ax+ux);  
  printf("Size of%d",sizeof(long int));
  return 0;
  }
