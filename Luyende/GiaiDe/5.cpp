#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
 void xoakituthua(char a[]){
  	 int n=strlen(a);
   	   while(a[0]==' ')
   	       strcpy(&a[0],&a[1]); 
   	       for(int i=0;i<n;i++){
			  if(a[i]==' ' && a[i+1]==' '){
			  	strcpy(&a[i],&a[i+1]);
			  	i--;
			  }
			  // xoa cuoi chuoi
			  while(a[n-1]==' ')
			      strcpy(&a[n-1],&a[n]);
			  }
	 puts(a);	   
	   }
	int main(){
		char a[30];
	printf("Nhap chuoi: ");gets(a);
     xoakituthua(a);
}
