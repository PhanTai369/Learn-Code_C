#include<stdio.h>
#include<math.h>
#include<conio.h>
 int main(){
 	int n;
 	int s=0;
 	scanf("%d",&n);
 	int i=1;
// 	 for(;i<=n;){
// 	 	s+=i;
// 	 	i++
// 	 }	
// 	  printf("s=%d",s);
 	  
 	 // while
// 	while (i<=n){
//	 s+=i;
//	 i++;
//	 }
//	 printf("s=%d",s);  
// 	   while ... do;
    do{
    	s=s+pow(i,2);
    	i++;
    	
	}while(i<=n);
	printf("s=%d",s); 
 	
 	
 	
 	return 0;
 	}
