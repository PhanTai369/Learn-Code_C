#include<stdio.h>
#include<math.h>
#include<conio.h>
    int Giathua(int n){
    	int gt=1;
    	for(int i=2;i<=n;i++){
    		gt=gt*i;
		}
		return gt;
	}
	float TINHS(int n){
		float s=0, dau=1;
		for(int i=1;i<=n;i++){
			s=s+(dau*i)/Giathua(i);
			dau=dau*(-1);
		}
		return s;
	}
	int main(){
		int n;
		printf("Nhap n= "); scanf("%d",&n);
		printf("Ket qua = %.2f",TINHS(n));
	}
