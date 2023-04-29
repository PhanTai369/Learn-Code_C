#include <stdio.h>
#include <string.h>

int Demtu(char st[]){
	int dem=0;
	for(int i=0;i<strlen(st);i++){
		if(st[i]!=' '){
			dem++;
	 while(st[i]!=' ' && i<strlen(st)){
	 	i++;
	       }
		}
	}
	return dem;
}
int main(){
	char st[50];
	printf("Nhap chuoi: ");gets(st);
	printf("So tu trong chuoi la: %d",Demtu(st));
}
