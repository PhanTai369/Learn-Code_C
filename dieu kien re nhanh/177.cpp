#include<stdio.h>
#include<math.h>
#include<conio.h>
  int main(){
  	char kitu;
  	printf("nhap ki tu sau   ");
  	scanf("%c",&kitu);
  	 switch(kitu){
  	 	case 'E':printf("Xuat sac",kitu);break;
  	 	case 'V':printf("Rat tot",kitu);break;
  	 	case 'G':printf("Xuat sac",kitu);break;
  	 	case 'A':printf("Trung Binh",kitu);break;
  	 	case 'F':printf("Hoc lai",kitu);break;
	   default:printf("nhap lai");
	   }
	  return 0;
}  	
