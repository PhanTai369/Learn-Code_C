#include<stdio.h>
#include<math.h>
#include<conio.h>
 int main(){
 	int thang, nam;
 	printf("nhap vao thang (1-12): ");
 	scanf("%d",&thang);
 	switch(thang){
 		case 1: printf("thanng %d co 31 ngay",thang);break;
 		case 3: printf("thanng co 31 ngay",thang);break;
 		case 5: printf("thanng co 31 ngay",thang);break;
 		case 7: printf("thanng co 31 ngay",thang);break;
 		case 8: printf("thanng co 31 ngay",thang);break;
 		case 10: printf("thanng co 31 ngay",thang);break;
 		case 12: printf("thanng co 31 ngay",thang);break;
 		case 4:printf("thang co 30 ngay",thang);break;
 		case 6:printf("thang co 30 ngay",thang);break;
 		case 9:printf("thang co 30 ngay",thang);break;
 		case 11:printf("thang co 30 ngay",thang);break;
 		case 2:
 			{ printf("nhap nam: "),scanf("%d",&nam);
 			if(nam%400==0||(nam%4==0 && nam%100!=0)){
 				printf("thang %d co 29 ngay",thang);}
 				else { printf("Thang 2 co 28 ngay");
				 }break;
				 default : printf("khong co");
			 }
			 }
		 return 0;
	 }
