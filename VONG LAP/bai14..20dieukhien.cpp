#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<float.h>
#include<ctype.h>
 // bai 14
 float tinhNghichdao(int n){
 	float s=0;
 	for(float i=1;i<=n;i++){
 		s+=1/i;
    }
    return s;
} 
 // bai15
 bool CheckSohoanhao(int x){
 	int s=0;
 	for(int i=1;i<x;i++){
 		if(x%i==0){
		 s+=i;
      }
    }
	if(s==x){
	return true;
	}else return false;
}
  void inSohoanhao(){
     printf("cac so hoan hao la: ");
     for(int i=1; i<=1000;i++){
     	if(CheckSohoanhao(i)==true){
     		printf("%5d",i);
     	}
    }
}	 	
 //bai16
 void inChuso(int n){
 	int t, c,dv;
 	t=n/100;
 	c=(n%100)/10;
 	dv=(n%100)%10;
 	printf("%d co chu so hang tram la %d\n ",n,t);
 	printf("%d co chu so hang chuc la %d\n ",n,c);
 	printf("%d co chu so hang don vi la %d\n ",n,dv);
}
  // bai17
 void inBangcuuchuong(int n){
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
}
 //bai18
 void Bai(int n){
   	int s=0;
   	for(int i=1;i<=n;i++){
   	if(i%2!=0){
   		printf("%d\t",i);
   		s+=i;
	   }
    } 
	   printf("Tong cac so le: %d\n ",s);
}
 //bai19
 int tinhTongkhongchiacho7(int a, int b){
 	int s=0;
 	while(a<=b){
 		if(a%7!=0){
 			s+=a;
		 }
		 a++;
	 }
	 return s;
 } 
  //bai20
 long tinhTong(int n){
 	int x=9;
 	int s=0;
 	for(int i=1;i<=n;i++){
 		s+=x;
 		x=x*10+9;
	 }
	 return s;
 } 
 // menu
 void menu(int a){
 	int n;
 do{
 	printf("\nHay chon bai tap: ");scanf("%d",&a);
 	switch(a){
 		case 14:{
 			do{
 				printf("Enter a number ");scanf("%d",&n);
			 }while(n<1);
			 printf("dap an la %f", tinhNghichdao(n));
			break;
		 }
		case 15:{
			inSohoanhao();
			break;
		}
		case 16:{
			do{
				printf("nhap n ");scanf("%d",&n);
			}while(n>999 || n<100);
			inChuso(n);
			break;
		}
		case 17:{
			do{
				printf("nhap n ");scanf("%d",&n);
				printf("Bang cuu chuong %d:\n", n);
			}while(n>9);
			 inBangcuuchuong(n);
			break;
		}
		case 18:{
			printf("nhap n: ");scanf("%d",&n);
			Bai(n);
			break;
		}
		case 19:{
			int x, y;
			do{
				printf("nhap vao 2 gia tri: ");scanf("%d%d",&x,&y);
			}while(x>y);
			printf("Tong cac so khong chia het cho 7 trong khoang %d - %d la %d",x,y,tinhTongkhongchiacho7(x,y));
			break;
	    }
	    case 20:{
	    	printf("Nhap n: ");scanf("%d",&n);
	    	printf("dap an la %d",tinhTong(n));
	    	break;
	    }
		default:printf("khong co bai nay!");
	 }
	}while(a!=0);
}
  int main(){
  	{
  		printf("Bai 14: Tinh tong nghich dao cua n so tu nhiendau tien\n");
  		printf("Bai 15: Tim so hoan hao\n");
  		printf("Bai 16: In ra so hang tram, hang chuc, hang don vi\n");
  		printf("Bai 17: in ra bang cuu cuong\n");
  		printf("Bai 18: Tinh tong cua day so 1-n\n");
  		printf("Bai 19: Tinh tong cac so khong chia het cho het cho 7\n");
  		printf("Bai 20: Tinh tong [9 + 99 + 999 + 9999+...+]\n");
  		printf("====================================================\n");
  }
  int a;
  menu(a);
  
  }	
			
		
		
		
		
		
		 
		 
		 
		 

  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
 
