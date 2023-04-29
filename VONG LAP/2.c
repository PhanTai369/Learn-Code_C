#include<stdio.h>
#include<math.h>
#include<conio.h>
 int main(){
 	int n;
 	int i=1;
 	float s=0;
 	scanf("%d",&n);
 	for (i=1;i<=n;i++){
 		s=s+((float)1/i);
 		}
 	printf("s=%.2f\n",s);
 	
 	 while(i<=n){
 	    s=s+((float)1/i);
 	    i++;
		 }
 	    printf("S2=%.2f",s);
	 return 0;
	 }	
	 
