#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
 // ghep chuoi: ho lot ghep voi ten thanh ho va ten
// void ghephovaten(char st1[50], char st2[50]){
// 	strcat(st1," ");// ham noi chuoi
// 	strcat(st1,st2);
// }
// 
// 
// int main(){
// 	char st1[50],  st2[50];
// 	printf("Nhap ho lot: ");
// 	gets(st1);
// 	printf("Nhap ten: ");
// 	gets(st2);
// 	ghephovaten(st1,st2);
// 	printf("Ho va ten : %s\n",st1);
// 	puts(st1);
// }


//int main(){
//	//Nhap 1 chuoi cho den khi gap "done" thi dung;
//	char st[20];
//	do{
//	printf("Nhap chuoi bat ki: ");
//	gets(st);
//    }while(stricmp(st,"done"));
// }

//   // xac dinh do dai cua chuoi
//   int main(){
//   	char st[20];
//   	printf("Nhap chuoi: ");
//   	gets(st);
//   	int i=0;
//   	while(st[i]!='\0'){
//   		i++;	
//	   }
//	   printf("Do dai cua chuoi la %d\n", i);
//	   // ham kich thuoc cua chuoi
//	   int n=strlen(st);
//	   printf("Do dai cua chuoi la %d",n);
//   }
//
 
//     // nhap chuoi, in ra tung ki tu mot
// int main(){
//   	char st[20];
//   	printf("Nhap chuoi: ");
//   	gets(st);
//   	// in tung ki tu mot nhu sau
//   	for(int i=0;i<strlen(st);i++){
//	   putchar(st[i]);
//	   }
//	   
//   }


int main(){
   	char st[50];
   	printf("Nhap thong tin sinh vien : ");gets(st);
   	int kt=0,so=0,hoa=0,thuong=0,space=0;
	for(int i=0;i<strlen(st);i++){
	 if(isalpha(st[i])){
	 kt++;
	 }
	  if(isdigit(st[i])){
	 so++;		
	  }else if(islower(st[i])){
	  	thuong++;
	}else if(isspace(st[i])){
	space++;
	}else if(isupper(st[i])){
	hoa++;
  }
 }
	printf("So ki tu alpha: %d\n",kt);
	printf("So ki tu so: %d\n",so);
	printf("So ki tu hoa: %d\n",hoa);
	printf("So ki tu space: %d\n",space);
	printf("So ki tu thuong: %d\n",thuong);
	
	
   }

















 
 
 
 
 
 
 
 
 
