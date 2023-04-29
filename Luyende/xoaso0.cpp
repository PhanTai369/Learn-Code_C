#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
int main() {
	int value;
	printf("Nhap n= ");scanf("%d",&value);
	int temp = 0, heso=1;
	while (value > 0) {
		int k = value % 10;    
if(  k != 0) {
            temp = k*heso+temp;
            heso = heso*10;
        }
        value = value/10;  
        }
printf("%d", temp);
}
