#include<stdio.h>
#include<string.h>
#include<ctype.h>
void Chuyenkitudauinhoa(char st[50]){
   int i;
   for(int i=0;i<strlen(st);i++){
   	   if(st[i]==' '){
   	   	     break;
		  }
	   st[0]=toupper(st[0]);
   }
   for(int j=i+1;j<strlen(st);j++){
   	   st[i]=tolower(st[i]);
   }
   printf("Chuoi sau khi in hoa la:%s ",st);
}
 int main(){
 	char st[80];
 	printf("Nhap chuoi: ");gets(st);
 	Chuyenkitudauinhoa(st);
 }
//  int main(){
//  	char st[50];
//  	printf("Nhap ");gets(st);
//  	strlwr(st);// chuyen choi hnah ki tu thuong
//  	int i=0;
//  	while(!isspace(st[i])){
//  		i++;
//	  }
//	  for(int j=0;j<i;j++){
//	  	st[j]=toupper(st[j]);
//	  }
//  	printf("chuoi ket qua: %s",st);
//  	
//  }





