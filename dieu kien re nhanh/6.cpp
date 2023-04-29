#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
   int a,b,c,d;
   printf("nhap vao 4 so nguyen\n");
   scanf("%d%d%d%d",&a,&b,&c,&d);
   if(a>b && a>c && a>d){
   	printf("so lon nhat%d",a);
   	}else if(b>c && b>a && b>d){
   		printf("so lon nhat la%d",b);
   	}else if(c>a && c>b && c>d){
   		printf("so lon nhat la%d",c);	   
   		}else if(d>a && d>c && d>b){
   		  printf("so lon nhat la%d",d);
		   }else {printf("so nho nhat la:%d",d);}
		   }else{ printf("so nho nhat la%d",c);}
		   }else{printf("so nho nhat la%d",b);}
		   printf("so nho nhat la%d",a);
		   
		
   		
   		
   		
   		
   		
   		
   		
   		
   		return 0;
   		}
