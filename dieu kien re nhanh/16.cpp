#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	char makh, ten[50];
	int kw,dk;
	printf("nhap vao ma khach hang");
	scanf("%c",&makh);
	fflush(stdin);
	printf("nhap ten khach hang");
	gets(ten);
	printf("so kw tieu thu"); scanf("%d",&kw);
	dk=(kw<=199)?1:
		(kw>199 && kw<=400)?2:
			(kw>400 && kw <=600)?3:4;
	switch(dk){
	case 1: printf("%d USD",kw*3500);break;		
	case 2: printf("%d USD",kw*4500);break;		
	case 3: printf("%d USD",kw*5500);break;		
	case 4: printf("%d USD",kw*6000);break;	
	}
	return 0;
	}	
