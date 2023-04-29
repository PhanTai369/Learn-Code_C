#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
  int main(){
    int n, x, sum=0;
    printf("Nhap n= ");scanf("%d",&n);
    while(n<=0){
	printf("Moi nhap lai: ");
	scanf("%d",&n);
	}
    for(int i=1;i<=n;i++){
	  printf("Phan tu thu %d: ",i);
	  scanf("%d",&x);
	  sum+=x;
	}
  printf("Tong: %d", sum);
  
  }
