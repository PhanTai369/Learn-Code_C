#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
   void xoakituthua(char st[]){
   	 int n=strlen(st);
   	   while(st[0]==' ')
   	       strcpy(&st[0],&st[1]); // strcpy l� m?t h�m du?c s? d?ng trong ng�n ng? l?p tr�nh C d? sao ch�p n?i dung c?a m?t chu?i k� t? sang m?t chu?i k� t? kh�c.
   	       // xoa giua chuoi
   	       for(int i=0;i<n;i++){
			  if(st[i]==' '&& st[i+1]==' '){
			  	strcpy(&st[i],&st[i+1]);
			  	i--;
			  }
			  // xoa cuoi chuoi
			  while(st[n-1]==' ')
			      strcpy(&st[n-1],&st[n]);
			  }
	 puts(st);	   
	   }
	int main(){
		char st[50];
		int n;
		printf("Nhap chuoi vao: ");gets(st);
		xoakituthua(st);
	}
