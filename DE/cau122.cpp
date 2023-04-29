#include<stdio.h>
#include<math.h>
#include<conio.h>
   int Nhap(){
   	int n;
   	printf("Nhap n= ");scanf("%d",&n);
   	return n;
   }
   void TinhTBC(){
   	int n,s=0, dem=0;
   	do{
   		n=Nhap();
		if(n<0){
			n=Nhap();
		}
		if(n==0){
			break;
		}
		s+=n;
		dem++;
		   	   }while(n!=0);
	    if(dem==0){
	    	printf("Khong co so nguyen duong");
		}else {
			printf("TBC =%f",(float)s/dem);
		}
   }
	int main(){
	   TinhTBC();
	  	}
