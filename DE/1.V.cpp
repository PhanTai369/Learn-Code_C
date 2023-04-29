#include<conio.h>
#include<math.h>
#include<stdio.h>
 int main(){
  int ts, ms;
  printf("Nhap tu so: ");
  scanf("%d",&ts);
  do{
  	printf("Nhap mau so: ");scanf("%d",&ms);
  	if(ms == 0){
	  printf("Mau khong the bang 0, moi nhap lai\n");
	  }
  }while(ms == 0);
  printf("Phan so la: %.2f",(float)ts/ms);
  }
