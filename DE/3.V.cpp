#include<stdio.h>
#include<math.h>
#include<conio.h>
  void Xaunhiphan(int a[], int n){
  	int i=0;
  	while(n>0){
  		a[i]=n%2;
  		n=n/2;
  		i++;
	  }
	for(int j=i-1;j>=0;j--){
		printf("%d",a[j]);
		
	}
  }
  int main(){
  	int n;
  	int a[30];
  	printf("Nhap n= ");scanf("%d",&n);
  	printf("Xau ki tu nhi phan la: ");
  	Xaunhiphan(a,n);
  }
