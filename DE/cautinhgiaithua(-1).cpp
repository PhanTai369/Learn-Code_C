#include<stdio.h>
#include<math.h>
#include<conio.h>
    int Tinhgiaithua(int n){
	    int s=1;
	    for(int i=2;i<=n;i++){
	    	s=s*i;
		}
		return s;
	}
	float tinhTong(int n){
		float s=0;
		float dau=1;
		for(int i=1;i<=n;i++){
			s=s+(dau*i)/Tinhgiaithua(i);
			dau=dau*(-1);
		}
		return s;
	}
	int main(){
		int n;
		printf("Nhap n= ");scanf("%d",&n);
		printf("Ket qua = %f",tinhTong(n));
	}
