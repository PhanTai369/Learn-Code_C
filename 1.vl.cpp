#include<stdio.h>
#include<math.h>
#include<conio.h>
   int main(){
   	int sum=0,n,x;
   	printf("nhap vao n\n");
   	scanf("%d",&n);
   	for(int i=1;i<=n;i++){
   		  printf("nhap n thu %d\t",i);
   		  scanf("%d",&x);//x de nhan gia tri nhap tu ban phim
		   sum=sum+x;
	    }
   		printf("in ra %d",sum);
   		   	
   	
   	
   	
   	
   	
   	return 0;
 }
