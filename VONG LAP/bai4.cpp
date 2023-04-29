#include<stdio.h>
#include<math.h>
#include<conio.h>
 int main(){
 	int n;
 	printf("nhap n:  ");
 	scanf("%d",&n);
 	for(int i=1;i<=n;i++){
 		if(n%i==0){
 			printf("in ra %d\n",i);
		 }
	 }
	 int i=1;
	 while(i<=n){
	 	if(n%i==0){
	 		printf("in ra %d\n",i);
		 }
		 i++;
	 }
	 i=1;
	 do{
	 	if(n%i==0){
	 		printf("in ra man hinh %d\n",i);
		 }
		 i++;
	 }while(i<=n);
	return 0;
}
	 
