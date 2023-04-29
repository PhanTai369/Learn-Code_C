#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
 int main(){
 	float a,b,c,x1,x2, denta;
 	printf("Nhap a b c");scanf("%f%f%f",&a,&b,&c);
 	if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem!");
            } else {
                printf("Phuong trinh vo nghiem!");
            }
        } else {
            printf("Phuong trinh co nghiem duy nhat la: %f", -c / b);
        }
    } else {
	 	denta=b*b-4*a*c;
	 	if(denta<0){
	 		printf("Phuong trinh vo nghiem");
		 }else if(denta==0){
		 printf("Phuong trinh co 1 nghiem: %f",-b/(2*a));
		 }else{
		 	printf("Nghiem cua x1=%.2f",(-b+sqrt(denta))/(2*a));
		 	printf("\nNghiem cua x2=%.2f",(-b-sqrt(denta))/(2*a));
		 }
	 }
	 return 0;
}
