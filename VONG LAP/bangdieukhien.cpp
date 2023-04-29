#include<stdio.h>
#include<math.h>
#include<conio.h>
  int main(){
  	 char c;
  	 int i;
  	 do{
  	 	printf("1.rut 1000\n");
  	 	printf("2.rut 2000\n");
  	 	printf("3.rut 3000\n");
  	 	printf("4.rut 5000\n");
  	 	printf("chon dinh muc de rut tu ban phim");
  	 	scanf("%d",&i);
  	 	switch(i){
  	 		case 1:printf("ban rut vua rut 1000\n");break;
  	 		case 2:printf("ban rut vua rut 2000\n");break;
  	 		case 3:printf("ban rut vua rut 3000\n");break;
  	 		case 4:printf("ban rut vua rut 5000\n");break;
  	 		default : printf("khong co dinh muc nay?\n");
			   }
			   fflush(stdin);
  	 	printf("Ban co muon tt rut tien hay khong? ");// truoc khi nhap tu ban phim phai xoa bo nho dem
  	 	scanf("%c",&c);
	   }while(c=='y' || c=='Y');
	   
	  
	  
	  
	  
	  }
  	
