#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
int main(){
	int n, dem=0, s=0;
	printf("Nhap n= ");scanf("%d",&n);
	while(n>0){
		int a=n%10;
		if(a%2==0){
			s+=a;
			dem++;
		}
		n/=10;
	}
	printf("TBC so chan la: %f",(float)s/dem);
}
