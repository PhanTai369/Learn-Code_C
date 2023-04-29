#include<stdio.h>
#include<math.h>
#include<conio.h>
 int main(){
 	// câu 16
// 	char c;
// 	printf("nhap vao chu cai bat ki: ");
// 	scanf("%c", &c);
// 	(c>=65 && c<=90)?printf("chu do la chu in hoa: %c", c):
// 		(c>=97 && c<=122)?printf("chu do la chu in thuong: %c", c):
//		 printf("khong phai là chu cai in hoa hay chu cai in thuong: %c",c);
		 
		 //câu 17
//		 int a, b, c, d;
//		 printf("nhap vao 4 so nguyen a b c d: ");
//		 scanf("%d%d%d%d", &a,&b,&c,&d);
//		 (a>b && a>c && a>d)?printf("so lon nhat la: %d",a):
//		 	(b>a && b>c && b>d)?printf("so lon nhat la: %d",b):
//		 		(c>a && c>b && c>d)?printf("so lon nhat la:%d",c):
//		 			printf("so lon nhat la: %d", d);
        // cach 2
        int a,b,c,d;
        printf("nhap vao 4 so nguyen: ");
        scanf("%d%d%d%d",&a,&b,&c,&d);
        int max1 =(a>b)?a:b;
        int max2 =(c>d)?c:d;
        int max3 =(max1>max2)?max1:max2;
        printf("so lon nhat: %d%d%d%d la %d: ",a,b,c,d,max3);		 
 		   return 0;
 		   }
