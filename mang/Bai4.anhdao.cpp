#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
  int demnguyenam(char st[50]){
   int dem=0;
   for(int i=0;i<strlen(st);i++){// duyet chuoi
      switch(st[i]){
      	 case 'u':
      	 case 'U':
		   case 'e':
		   	 case 'E':
		   	 	 case 'o':
		   	 	 	 case 'O':
		   	 	 	 	 case 'a': 
		   	 	 	 	  case 'A':
		   	 	 	 	  	 case 'i':
		   	 	 	 	  	 	 case 'I': 
										   dem++;
	} // ketthuc for dong nghia da kiem tra
   }
   return dem;
  }
  int main(){
    char st[50];
    printf("Nhap ho ten khong dau: ");gets(st);
   // printf("So luong nguyen am trong chuoi la: %d",demnguyenam(st));
  
  
  // bai 2 thay dung
   st[0]=toupper(st[0]);
     for(int i=1;i<strlen(st);i++){
     	if(isspace(st[i]) && !isspace(st[i+1]) && st[i+1]!='\0'){
     		st[i+1]=toupper(st[i+1]);
     		}
      }
    printf("\n Ho va ten: %s",st);
    }
  
  
  
