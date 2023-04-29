#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	 int nhietDo;
	 printf("nhap vao nhiet do hien tai");
	 scanf("%d",&nhietDo);
	 int dk= (nhietDo<=0)?1:
	 	   (nhietDo>0) && (nhietDo<=10)?2:
	 	   	(nhietDo>10 && nhietDo<=20)?3:
	 	   		(nhietDo>20) && (nhietDo<=30)?4:
	 	   			(nhietDo>30) && (nhietDo<=40)?5:6;
	 	   			
	 switch(dk){
	   case 1: printf("nhiet do dong bang");break; 	   			
	   case 2: printf("nhiet do rat lanh");break; 	
	   case 3: printf("nhiet do lanh");break; 	
	   case 4: printf("nhiet do binh thuong");break; 	
	   case 5: printf("nhiet do nong");break; 	
	   case 6: printf("nhiet do rat nong");break; 	
	   }

	
		return 0;
		}
	
