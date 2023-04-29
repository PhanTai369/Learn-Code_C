#include<stdio.h>
#include<math.h>
#include<conio.h>
  int main(){// câu 2.10
//  	int a, b;
//  	printf("nhap vao hai so nguyen a b: ");
//  	scanf("%d%d",&a,&b);
//  	(a>b)?printf("so lon nhat: %d",a):printf("so lon nhat: %d",b);
            // câu 2.11
//   int a, b, c, d;
//   printf("nhap vao 3 so nguyen a b c d: ");
//   scanf("%d%d%d", &a,&b,&c,&d); 
//(a>b && a>c)?printf("so lon nhat:%d\n ",a):
//    	(b>a && b>c)?printf("so lon nhat: %d\n", b):
//    		printf("so lon nhat la: %d", c);
           //câu 2.12
          // int a;
//           printf("nhap vao so nguyen: ");
//           scanf("%d", &a);
//           (a>0)?printf("so duong: %d",a):(a<0)?printf("so am: %d",a):
             //printf("khong am khong duong: %d",a);
   /*  câu 2.13
//    
//     (a>b)?((a>c)?printf("so lon nhat:%d",a):printf("so lon nhat:%d",c)):
//	 (b>c)?printf("so lon nhat: %d", b):printf("so lon nhat: %d", c);
//	   (a>b && a>c && a>d)?printf("so lon nhat: %d\n",a):
//	   	(b>a && b>c && b>d)?printf("so lon nhat: %d\n", b):
//	   		(c>a && c>b && c>d)?printf("so lon nhat: %d\n",c):
//	   			printf("so lon nhat: %d",d);                       */

      //câu 2.14
//      int a;
//      printf("nhap vao so: ");
//      scanf("%d", &a);
//      (a%2==0)?printf("so chan:%d ",a): printf("so le: %d",a);
     
     
      //câu 2.15
//     char hoTen[50];
//     float dtb;
//     int years;
//     printf("Nhap ho ten: ");
//     gets(hoTen);
//     printf("nhap nam sinh: ");
//     scanf("%d", &years);
//     printf("nhap diem trung binh: ");
//     scanf("%f", &dtb);
//	 (dtb>=8)?printf("xep loai gioi: %f\n",dtb):
//	 (dtb>=7 && dtb <8)?printf("xep loai kha: %f\n", dtb):
//	 (dtb>=5 && dtb <7)?printf("xep loai trung binh: %f\n", dtb):
//	 printf("xep loai yeu: %f\n", dtb);
//	 printf("ho ten sinh vien: %s\n", hoTen);
//	 printf("nam sinh: %d\n", years);
//	      
   // câu 2.16
//    int years;
//    printf("Nhap tuoi: ");
//    scanf("%d", &years);
//    (years>60)?printf("Lao Nien: %d\n",years):
//    	(years>=40 && years <=60)?printf("Trung nien: %d\n", years):
//    		(years>=18 && years <39)?printf("Thanh Nien: %d\n", years):
//    			printf("thieu nien: %d",years);
   // int a,b,x;
//	printf("nhap vao gia tri a b: ");
//	scanf("%d%d", &a,&b);
//	(a*x+b==0):printf("in ra ket qua:%d", (-b/a)); 
   int a,b,x;
    printf("Nhap he so a: ");
    scanf("%d", &a);
    printf("Nhap he so b: ");
    scanf("%d", &b);
    x = (b == 0) ? 0 : (-b/a);
    printf("Nghiem cua phuong trinh %dx + %d = 0 la %d", a, b, x);

    
    
  	return 0;
  	}
