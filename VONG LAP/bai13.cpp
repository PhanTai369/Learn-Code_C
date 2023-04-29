#include<stdio.h>
#include<math.h>
    float Tinhgiatritrunginh(){
    	int s=0, dem=0, n;
    	do{
    		printf("nhap vao n ");scanf("%d",&n);
    			if(n==9999){  //dung ham break de dung chuong trinh lai;
    			break;
			}
    		s+=n;
    		dem++;
		}while(n!=9999);
       return (1.0)*s/dem	;
	}
	int main(){
	  printf("TRUNG BINH CONG:%.2f ",Tinhgiatritrunginh())	;
	}
