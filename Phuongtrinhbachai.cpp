#include<stdio.h>
#include<math.h>
#include<conio.h>
void   Giaiphuongtrinhbacnhat(float a, float b){
	if(a==0){
		if(b==0){
			printf("PTVSN");
		}else{ //a==0,a!=0
			printf("PTVN");
		}   
	}else{ //a!=0
		printf("nghiem phuong trinh bac 1:  x=%1.f ",-b/a);  
		
	}
	}
void   giaiphuongtrinhbachai(float a, float b, float c){
		float denta=0;
	if(a==0){  
	 Giaiphuongtrinhbacnhat(b,c);
	}else{ //a!=0 	
	   denta=b*b-4*a*c;
	   if(denta>0){
	   	  printf("phuong tring x1=%1.f\n",(-b+sqrt(denta))/(2*a));
	   	  printf("phuong tring x2=%1.f\n",(-b-sqrt(denta))/(2*a));
		}else if(denta==0){
			printf("nghiem kep: %1.f",-b/(2*a));
					}else{
					printf("PTB2 Vo Nghiem\n");	
	     }
    }
    }
    int main(){
    	float a,b,c;
    	printf("Nhap a= ");scanf("%f",&a);
    	printf("Nhap b= ");scanf("%f",&b);
    	printf("Nhap c= ");scanf("%f",&c);
        giaiphuongtrinhbachai(a,b,c);//ctc co ket qua la void thi goi nhu the nay
        
    	
    	
    	
		 }
