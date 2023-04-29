#include<stdio.h>
#include<math.h>
#include<conio.h>
 int main(){
 	int a,b,u1,u2;
 	printf("nhap vao 2 so a va b: ");
 	scanf("%d%d",&a,&b);
 	u1=a;u2=b;
 	for(;u1!=u2;){
 		if(u1>u2){
 			u1=u1-u2;
		 }else{
		 	u2=u2-u1;
		 }
	 }
	 printf("USCLN la :%d\n",u2);
	 printf("BSCNN la: %d\n",a*b/u2);
	 u1=a,u2=b;
	 while(u1!=u2){
	 	if(u1>u2){
	 		u1=u1-u2;
		 }else{
		 	u2=u2-u1;
		 }
	 }
	 printf("USCLN la :%d\n",u2);
	 printf("BSCNN la: %d\n",a*b/u2);
	 u1=a;u2=b;
	 do{
	 		if(u1>u2){
	 		u1=u1-u2;
		 }else{
		 	u2=u2-u1;
		 }
	 }while(u1!=u2);
	 printf("USCLN la :%d\n",u2);
	 printf("BSCNN la: %d\n",a*b/u2);
	 return 0;
}
 	
