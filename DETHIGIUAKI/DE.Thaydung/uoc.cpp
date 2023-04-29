#include<stdio.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	int n;
	printf("Nhap n= ");scanf("%d",&n);
	printf("tat ca cac uoc cua %d la: ",n);
	for(int i=1;i<=n;i++){
		if(n%i==0){
			printf("%d\t",i);
		}
	}
	return 0;
}
