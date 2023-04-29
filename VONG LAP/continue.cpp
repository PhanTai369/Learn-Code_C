#include<stdio.h>
#include<math.h>
   int Tinhtong(){
	int s=0,n;
   	for(int i=1;i<=10;i++){
   	printf("nhap so thu %d:  ",i);scanf("%d",&n);
   	if(n<0){
   		continue;
	   }
	s=s+n;      
   }
   return s;
}
  int main(){
  	printf("Tinh tong %d",Tinhtong()) ;
	   }


//  int main(){
//  	int s=0,n;
//  	for(int i=1;i<=n;i++){
//  	  if(n<0){
//  	  	continue;
//		}
//		s+=i;
//		printf("%d\t",s);
//	  }
//  }
