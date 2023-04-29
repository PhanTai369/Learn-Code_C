#include<stdio.h>
#include<math.h>
#include<string.h>// goi 2 thu vien
#include<ctype.h>// goi 2 thu vien
#include<conio.h>
 // dem so tu trong chuoi
 //cach 1
// int main(){
// char st[50];
// int dem=0;
//    printf("Nhap thong tin: ");gets(st);
//    for(int i=0;i<strlen(st);i++){  // do dai cua chuoi
//      if(st[i]==' '&&st[i+1]!=' '){
//          dem++;
//     }
//  }
//   printf("so tu trong chuoi la: %d",dem+1);
// }
// 
 
 
 // cach 2
    int demtuTrongchuoi(char st[50]){
    int dem=0, n=strlen(st);
    for(int i=strlen(st);i>0;i--){
	  st[i]=st[i-1];
	}
	st[n+1]='\0';
	st[0]=' ';
	for(int i=0;i<n;i++){
		if(isspace(st[i]) &&! isspace(st[i+1]) && ((st[i+1])!='\0')){
			dem++;
			}
		}
	 return dem;
	} 	
  int main(){
  char st[50];
  printf("NHap chuoi: ");gets(st);
  printf("so tu co trong chuoi la: %d",demtuTrongchuoi(st));
  }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
