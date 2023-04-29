#include<stdio.h>
#include<math.h>
#include<conio.h>
  int main(){
  	int n,s=0;
  	scanf("%d",&n);
  	int i=1;
  	while(i<n){
  		if(n%i==0){//nghia la i cua uoc n
  			s+=i;
}			  // tinh tong cac uoc
  			i++;
  }
    if(s==n){
	printf("%d la so hh",n);
	}
	return 0;
	}			
