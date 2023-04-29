#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
 int main(){
  char ten[50];
  printf("Nhap ho va ten: ");gets(ten);
  ten[0]=toupper(ten[0]);
  for(int i=0;i<strlen(ten);i++){
       if(isspace(ten[i]) && !isspace(ten[i+1]) && ten[i+1]!='\0'){
	        ten[i+1]=toupper(ten[i+1]);
	   }
  }
  printf("Ho ten: %s",ten);
 }
