#include<stdio.h>
#include<conio.h>
#include<math.h>
  int main(){
  	int a;
  	printf("nhap vao 1 so: ");
  	scanf("%d",&a);
//  	(a%2==0)?((a>0)?printf("%d so chan duong",a):printf("%d so chan am",a)):
//  		(a<0)?printf("%d so le am: ",a):printf("%d so le duong: ",a);
    (a%2==0 && a>0)?printf("%d la so chan duong ", a):
    (a%2==0 && a<0)?printf("%d la so chan am", a):
    	(a%2!=0 && a>0)?printf("%d la so le duong", a):
    		(a%2!=0 && a<0)?printf("%d la so le am", a):printf("zero");
  	return 0;
  	}
