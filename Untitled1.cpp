#include <stdio.h>
#include<math.h>
#include<conio.h>
int main(){
//	int sum = 0;
//	for(int i=0; i<10; i++){
//		sum= sum + 1;
//		}
//		printf("sum = %d", sum);
//		}
int a, b;
 char pheptoan;
  printf("nhap vao 2 so nguyen: ");
  scanf("%d %d", &a, &b);
  printf("nhap phep toan (+): ");
  fflush(stdin);// xoa bo nho dem
  scanf("%c", &2pheptoan);
  int x=(pheptoan=='+')?(a+b):(a-b);
  printf("x=%d",x);
  return 0;
  
}
