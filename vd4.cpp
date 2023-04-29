#include<stdio.h>
#include<math.h>
#include<conio.h>
 int main(){
 	float a, b;//a là gia von b là gia ban
 	printf("nhap gia von, gia ban: ");
 	scanf("%f%f", &a, &b);
 	(b-a>0)?printf("lai:%f",b-a):
 	(b-a<0)?printf("lo:%f", b-a):
 		printf("hoa von");
 		return 0;
 		}
 	
