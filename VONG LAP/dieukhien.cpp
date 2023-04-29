#include<stdio.h>
#include<math.h>
#include<conio.h>
  int main(){
  	 char c;
  	 int i,j;
  	 do{
  	 	printf("1. tinh giai thua\n");
  	 	printf("2.tim so lon nhat\n");
  	 	printf("3.tinh tong cac so nhap tu ban phim\n");
  	 	printf("Ban chon bai de test");
  	 	scanf("%d",&i);
  	 	switch(i){
  	 		case 1:
			   {
  	 			int s=1;
  	 			int n;
  	 			printf("nhap n= ");
  	 			scanf("%d",&n);
  	 			for(int i=1;i<=n;i++){
  	 				s=s*i;
  	 			}
				   printf("giai thua: %d\n",s);
			}break;
			case 2:{
				 float max=0;
			    int n;float x;
			    printf("nhap n= ");scanf("%d",&n);
			    for(int i=1;i<=n;i++){
			    	printf("Nhap so thuc thu %d ",i);
			    	scanf("%f",&x);
			    	if(max<x){
			    		max=x;
			    		}
					}
			    	printf("so thuc lon nhat%f\n ",max);
			}break;	   
			case 3:{
				int n,x,s=0;
				int i=1;
				printf("nhap n= ");scanf("%d",&n);
				while(i<=n){
					printf("nhap so thu %d ",i);
					scanf("%d",&x);
					s+=x;
					i++;
					}
				printf("Tong cac so %d\n",s);
				break;	
				}
		    }	   		   		   	
  	 	printf("Ban co muon thuc hien nua hay khong?\n ");
  	 	scanf("%d",&j);
	   }while(j!=0);
	   
	  
	  
	  
	  return 0;
	  }
  	
