#include<stdio.h>
#include<math.h>
#include<conio.h>
  int main(){
  	int thang;
  	printf("nhap thang\n");
  	scanf("%d",&thang);
  	switch(thang){
  		case 1: printf("Sunday",thang);break;
  		case 2: printf("Monday",thang);break;
  		case 3: printf("Tuesday",thang);break;
  		case 4: printf("Wednesday",thang);break;
  		case 5: printf("Thursday",thang);break;
  		case 6: printf("Friday",thang);break;
  		case 7: printf("Saturday",thang);break;
  		default: printf("nhap sai , nhap lai");
  	}
  	
  	
  	
  	return 0;
  	}
