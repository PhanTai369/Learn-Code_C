#include<stdio.h>
#include<math.h>
#include<conio.h>
  int main(){
   float dtb;
   printf("nhap dtb: ");
   scanf("%f",&dtb);
   if(dtb>=8){
   	printf("Xep loai gioi: %.2f",dtb);
   }else if(dtb>=7){
   		printf("xep loai kha: %.2f",dtb);
	   }
   else if(dtb>=5) {
   	printf("xep loai trung binh: %.2f",dtb);
   }else{
   printf("xep loai yeu:%.2f",dtb);
   }
   return 0;
}
   
