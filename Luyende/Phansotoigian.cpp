#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
   int UCLN(int a, int b){
    if(b==0){
    	return a;
	}else{
		return UCLN(b,a%b);
	}
   }
   int main(){
    int ms, ts;
    printf("Nhap tu so: ");scanf("%d",&ts);
    printf("Nhap mau so: ");scanf("%d",&ms);
    while(ms<=0){
	 printf("Moi nhap lai\n");
	 printf("Nhap mau so: ");scanf("%d",&ms);
	}
	int uoc=UCLN(ts,ms);
	  ts/=uoc;
	  ms/=uoc;
	  printf("Phan so toi gian: %d / %d", ts,ms);
	  return 0;
	
   }
