#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
   int UCLN(int ts, int ms){
   	if(ts==ms){
   		return ts;
	   }else if(ts>ms){
	   	 return UCLN(ts-ms,ms);
	   }else{
	   	return UCLN(ms-ts,ts);
	   }
   }
   int main(){
   	int ts, ms;
   	printf("Nhap ts: ");scanf("%d",&ts);
   	printf("Nhap ms: ");scanf("%d",&ms);
     while(ms==0){
     	printf("Moi nhap lai: ");scanf("%d",&ms);
	 }
	 int uoc=UCLN(ts,ms);
	 ts/=uoc;
	 ms/=uoc;
	 printf("Uoc chung lon nhat: %d",uoc);
	 printf("\nPhan so toi gian sau khi rut gon la: %d/%d",ts,ms);
	 return 0;
   }
