#include<stdio.h>
#include<math.h>
#include<conio.h>
   int tinhTongbinhPhuong(int n){
    int s=0;
   	   for(int i=1;i<=n+1;i++){
   	   	s+=pow(i,2);
	    }
		 return s ;
	   }
	int main(){
	int n;
	printf("nhap vao n: ");scanf("%d",&n);
	printf("tong %d",tinhTongbinhPhuong(n));
	
	}
	  
