#include<stdio.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<ctype.h>
#include<stdlib.h>
   void Ghiinhoaten(char ho[50]){
   	int i;
      for( i=0;i<strlen(ho);i++){
      	if(ho[i]==' '){
      		break;
		  }
		  ho[i]=toupper(ho[i]);
	  }
	  for(int j=i+1;j<strlen(ho);j++){
	  	ho[j]=tolower(ho[j]);
	  }
     printf("Chuoi sau khi in hoa: %s",ho);
   }
   int main(){
   	char  ho[50];
   	printf("Nhap ho va ten: ");gets(ho);
   	Ghiinhoaten(ho);
   }
