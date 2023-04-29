#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
    int main(){
    	char st[1000];
    	int dem=0;
    	printf("Nhap vao chuoi: ");gets(st);
    	for(int i=0;st[i]!='\0';i++){
    		if(ispunct(st[i]) && st[i]!='/'){
    			dem++;
			}
		}
		printf("cac ki tu dac biet trong chuoi la %d",dem);
	}
