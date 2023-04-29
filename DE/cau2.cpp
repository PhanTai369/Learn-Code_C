#include<stdio.h>
#include<math.h>
#include<conio.h> 
int main(){
	float s=1,gt=1;
	int n;
	printf("Nhap n= ");scanf("%d",&n);
	while(n<=0){
		printf("Nhap lai n: ");scanf("%d",&n);
		}
		for(int i=1;i<=n;i++){
		gt=gt*i;
		s=s+pow(-1,i)*gt/(i+1);
		}
	printf("s=%.2f",s);
	}
	
	
	
	
	
	
	
	
	
  
