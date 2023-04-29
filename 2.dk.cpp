#include<stdio.h>
#include<conio.h>
#include<math.h>
  int main(){
  	int t,l,h;
  	float dtb;
  	printf("nhap diem toan ly hoa: ");
  	scanf("%d%d%d",&t,&l,&h);
  	dtb=(t+l+h)/3;
  	if(dtb>=8){
  		printf("gioi: %.2f",dtb);
  		}else if(dtb>=7){
  			printf("kha: %.2f",dtb);
  			}else if(dtb>=5){
  				printf("trung binh:%.2f",dtb);
  				}else{
  					printf("yeu:%.2f",dtb);
				  }  
	return 0;
	}			  				
