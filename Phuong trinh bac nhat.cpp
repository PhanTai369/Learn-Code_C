#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a, b, c;
    printf("\nNhap a: ");
    scanf("%f", &a);
    printf("\nNhap b: ");
    scanf("%f", &b);
   // if else if
    if(a!=0){
    	printf("phuong trinh co 1 nghiem: %f", -b/a);
	}else if(b==0){// nguoc lai a==0 b==0
		printf("phuong trinh vo so nghiem");
	}else{//b!=0 phu dinh b==0, giu nguyen a==0
		printf("phuong trinh vn");
	}
	// if long nhau
//	if(a==0){
//		if(b==0){
//			printf("ptvsn");
//		} 
//		else{
//			printf("ptvn");
//			}
//	} 
//	else{
//		printf("nghiem:%f",-b/a);
//	}
	
    return 0;

}
