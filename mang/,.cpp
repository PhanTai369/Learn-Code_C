#include <math.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
int main(){
	int dem=0;
	char st[100];
	printf("\nNhap vao chuoi : ");
	gets(st);
	for(int i=0;i<strlen(st);i++){
		if(isupper(st[i])){
			dem++;
			}
			}
			printf("\nSo ky tu hoa la : %d",dem);
			}
