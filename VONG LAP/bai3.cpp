#include<stdio.h>
#include<math.h>
#include<conio.h>
 int main(){
 	int n,x;
 	int i=1, sum=0;
 	printf("nhap n   ");
 	scanf("%d",&n);
 	for(i=1;i<=n;i++){
 		printf("Nhap %d",i);
 		scanf("%d",&x);
 		sum+=x;
	 }
	 printf("tong %d\n",sum);
	 i=1;
	 sum=0;
	 while(i<=n){
	 	sum+=i;
	 	i++;
	 }
	 printf("Tong: %d\n", sum);
	 i=1;
	 sum=0;
	 do{
	 	sum+=i;
	 	i++;
	 }while(i<=n);
	 printf("Tong:%d\n",sum);
	 return 0;
}
