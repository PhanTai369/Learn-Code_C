#include<stdio.h>
#include<math.h>
#include<conio.h>
 int main(){
 	int n;
 	int s=0;
 	scanf("%d",&n);
 	int i=1;
 	while(n<=0){
 		printf("nhap sai,hay nhap lai\n");
 		scanf("%d",&n);
 		}
 	while(i<=n){
 		s+=pow(i,2);
 		i++;
 		}
 	printf("s=%d",s);
	 return 0;
	 }	
