#include<stdio.h>
#include<conio.h>
#include<math.h>
 int main(){
 	int a,b,c,x;
 	printf("nhap vao 3 so: ");
 	scanf("%d",&x);
 	a=(x/100);
 	b=(x%100)/10;
    c=(x%100)%10;
  x=(a>0 && c>0)?printf("in ra 3 so:%d ",c*100+b*10+a ):printf("khong hop le");
  return 0;
  }
