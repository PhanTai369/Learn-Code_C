#include<stdio.h>
#include<math.h>
#include<conio.h>
// so nguyento
  bool Kiemtrasonguyento(int n){
  	int dem=0;
  	
  	if(n<2){
  		return false;
  	}else{
  			for(int i=2;i<=n/2;i++){
            if(n%i==0){
             	dem++;//dem uoc so cua n
	   		}
     }
 }
   if(dem==0){
   	return true;
   	}else{
   		return false;
	   }
 }
 
 int tinhTongbinhPhuong(int n){
    int s=0;
   	   for(int i=1;i<=n+1;i++){
   	   	s+=pow(i,2);
	    }
		 return s ;
	   }
 
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
 
 
 
 void danhMucBaiTap(){
 		printf("1.Tinh tong binh phuong\n");
   		printf("2.giai phuong trinhbac nhat\n");
   		printf("3.giai phuong trinhbac nhat\n");
   		printf("4.Kiem tra so nguyen to\n");
 }
 
   void menu(){
   	int chonBai;
   	do{
   		printf("moi nhap laij");
   		danhMucBaiTap();
   		printf("0.Stop\n");
   		printf("Moi chon bai: ");scanf("%d",&chonBai);
   		switch(chonBai){
   			case 1: {
   				int n;
   				printf("nhap n= ");scanf("%d",&n);
   				printf("Tong= %d\n",tinhTongbinhPhuong(n));break;
			 }
			case 2: {
			float a,b;
			printf(" nhap a va b: ");scanf("%f%f",&a,&b);
			 Giaiphuongtrinhbacnhat(a,b);
			 break;
			 }
			case 3: {
			float a,b,c;
			printf("Nhap a  b  c");scanf("%f%f%f",&a,&b,&c); 
			giaiphuongtrinhbachai(a,b,c);
            break;
            }
            case 4: {
            	int n, dem=0;
            	printf("nhap n= ");scanf("%d",&n);
            	if(Kiemtrasonguyento(n)){
            		printf("%d la so nguyen to\n ",dem);
            		}else{
            			printf("%d khong phai la so nguyen to\n",n);
					}
			   break;
			   }  
			}	
	   }while(chonBai!=0);
	}
	
	
	int main(){
		menu();

	}   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
