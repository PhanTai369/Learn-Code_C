#include<stdio.h>
#include<math.h>
#include<conio.h>
 int main(){
 	 const int RIGHT_PIN=12345;
 	int mapin;
 	int count=0;
	 printf("nhap vao ma pin\t");
 	scanf("%d",&mapin);//nhap ma pin tu ban phim
 	count++;
 	while (mapin!=RIGHT_PIN&&count<3){
 		printf("ma pin sai nhap lai\t");
 		scanf("%d",&mapin);//nhap lai ma pin
 		if(mapin!=RIGHT_PIN){
		 count++;//bien dieu khien vong lap, khong co khong duoc
 		}
 		}
 	if(count==3){
	 printf("nhap sai 3 lan, khoa the");
	 }else {
	 printf("moi bn rut tien");
	 }
	 	
 		
 	// viec copy doan code ma pin duoc lap nhieu lan => phai dung vong lap va vi khong kiem soat duoc so lan nhap dung nen dung vong lap khong xac dinh
 	
 	
 	
 	return 0;
 	}
