#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	 float a, b, c, d;
    printf("\nNhap a b c: ");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0){
    	printf("giai phuong trinh bac nhat:%f",-b/a);
	}else//a!=0
	{ 
	d=pow(b,2)-4*a*c;
	if(d>0){
	       printf("x1=%f\n",(-b+sqrt(d))/(2*a));
	       printf("x2=%f\n",(-b-sqrt(d))/(2*a));     
	}else if(d==0){
		printf("nghiem kep=%f",-b/(a*2));
	}else{
		printf("phuong trinh vo nghiem");
	}
	}
	return 0;
}
