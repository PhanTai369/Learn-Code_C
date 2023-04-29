#include<stdio.h>
#include<conio.h>
#include<math.h>
  int main(){
  	char c;
  	printf("nhap vao 1 chu cai: ");
  	scanf("%c",&c);
  	(c=='u'|| c=='U' || c=='a' || c=='A' || c=='o' || c=='O' || c=='e' || c=='E' || c=='i' || c=='I')?
	  printf("%c la so nguyen am: ",c):
  		printf("%c la phu am: ",c);
  		
  		return 0;
  		}
