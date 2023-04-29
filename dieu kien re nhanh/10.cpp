#include<stdio.h>
#include<math.h>
#include<conio.h>
  int main(){
  	char nguoi1, nguoi2;
  	printf("nguoi choi 1: ");
  	scanf("%c",nguoi1);
  	fflush(stdin);
  	printf("nguoi choi 2: ");
  	scanf("%c",nguoi2);
  	if(nguoi1==nguoi2){
  		printf("hoa");
	  }else if(nguoi1=='B' && nguoi2=='K' || nguoi1=='K' && nguoi2=='O'|| nguoi1=='O' && nguoi2=='B'){
	  	printf("nguoi thu 1 WINNER");
	  }else if(nguoi2=='B' && nguoi1=='K' || nguoi2=='K' && nguoi1=='O'|| nguoi2=='O' && nguoi1=='B'){
	  	printf("nguoi thu 2 WINNER");
	  }
	  return 0;
}
