#include<stdio.h>
#include<math.h>
#include<conio.h>
//  int main(){
//  	int n,s=0;
//  	scanf("%d",&n);
//  	for(int i=1;i<n;i++){
//  		if(n%i==0){
//  			s+=i;
//  	}
//  	 }
//  		if(s==n){
//  		printf("%d la so hoan hao:",n);
//  		}else{
//  			printf("khong phai so hoan hoai: %d",n);
//  			}
//		  
//  	so hoan hao la so chia het cho tat ca cac so , sau do cong lai bang chinh no(ngoài tru chinh no)
  	
  	int main(){
  		int n,s;
  		printf("nhap n= ");scanf("%d",&n);
  		for(int i=1;i<n;i++){
  			if(n%i==0){
  				s=s+i;
				  }
			  }
        if(n==s){
		 printf("%d la so hoan hao", n);
		}else {
		printf("%d khong phai la so hoan hao",n);
		}  	
  	
  	return 0;
  	}
