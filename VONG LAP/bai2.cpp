#include<stdio.h>
#include<math.h>
#include<conio.h>
 int main(){
 	int n;
 	float x,max;
 	printf("nhap vao so:");
 	scanf("%d",&n);
 	for(int i=1;i<=n;i++){
 		printf("cac so: ");
 		scanf("%f",&x);
 		if(x>=max){
 			max=x;
		 }
	 }
	 		 printf("so lon nhat: %.1f\n",max);
	 int i=1;
	 max=0;
	 while(i<=n){
	 	printf("cac so: ");
 		scanf("%f",&x);
	 	if(x>=max){
	 		max=x;
		 }		
		 i++; 
	}
	 printf("so lon nhat: %.1f\n",max); 
	 i=1;
	 max=0;
	 do{
	    printf("cac so: ");
 		scanf("%f",&x);
 		if(x>=max){
 			max=x;
		 }
	 	i++;
	 }while(i<=n);
	 printf("So lon nhat: %.1f",max);
	 return 0;
}
