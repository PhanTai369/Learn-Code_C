#include<stdio.h>
#include<math.h>
#include<conio.h>
 int main(){
 	int n;
	int  sum=0;
 	scanf("%d",&n);
 	for(int i=1;i<=n+1;i++){
 		sum=sum+pow(i,2);
	 }
	 printf("tong:%d\n",sum);
	 int i=1;
	 sum=0;
	 while(i<=n+1){ 
	 	sum=sum+pow(i,2);
	 	i++;
	 }
	 printf("tong:%d\n",sum);
	 sum=0;
	 i=1;
	 do{
	 	sum=sum+pow(i,2);
	 	i++;
	 }while(i<=n+1);
	 printf("tong:%d",sum);
    return 0;
 }
 
