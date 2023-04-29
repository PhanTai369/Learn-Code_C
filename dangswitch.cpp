#include<stdio.h>
#include<math.h>
#include<conio.h>
 int main(){
 	int a,b;
 	char phepToan;
 	printf("nhap 2 so nguyen: "); scanf("%d%d",&a,&b);
 	fflush(stdin);//xoa bo nho dem
 	printf("nhap phep toan (+,-,*,/)");scanf("%c",&phepToan);
 	switch(phepToan){
 		case '+': printf("%d + %d = %d",a,b,a+b);
 		break;
 		case '-':printf("%d - %d = %d",a,b,a-b);
 		break;
 		case '*':printf("%d * %d= %d",a,b,a*b);
 		break;
 		case '/':
		 if(b!=0){
			printf("%d / %d = %.2f",a,b,(float)a/b);
		 }else{
		 	printf("mau bang 0");
		 }break;
		 default:
		 	printf("khong ton tai phep toan %c",phepToan);	
	 }
	 return 0;
	 }
