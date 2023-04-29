#include<stdio.h>
#include<math.h>
#include<conio.h>
 int main(){
    int a,b,c;
	printf("nhap vao a b c : ");
	scanf("%d%d%d", &a,&b,&c);
	/*cach 1 tim so lon nhat trong 3 so nguyen*/
//	(a>b) ? ((a>c)?printf("max: %d",a):printf("max:%d",c)) : 
//	(b>c) ? printf("max: %d",b):printf("max: %d", c);
	/* cach 2 tim so nho nhat trong  3 so nguyen*/
	(a<b && a<c)?printf("so nho nhat %d\n: ",a):
		(b<c && b<a)?printf("so nho nhat %d\n: ",b):
			printf("so nho nhat c: ",c);
 	return 0;
 }
