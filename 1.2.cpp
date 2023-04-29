#include<stdio.h>
#include<math.h>
#include<conio.h>
 int main(){
// 	int nam;
// 	printf("nhap vao nam: ");
// 	scanf("%d", &nam);
// 	(nam%400==0) ? printf("nam do la nam nhuan: %d\n",nam):
// 	(nam%4==0 && nam%100!=0)?printf("nam do la nam nhuan: %d\n",nam):
//	 printf("nam do khong phai la nam nhuan: %d",nam);
 char c;
    printf("nhap vao 1 ki tu a: ");
    scanf("%c",&c);
    (c=='u'||c=='U'||c=='e'||c=='E'||c=='o'||c=='O'||c=='i'||c=='I'||c=='a'||c=='A')?
    printf("%c la nguyen am",c):printf("%c la phu am", c);
 	
 	
 		return 0;
 }
