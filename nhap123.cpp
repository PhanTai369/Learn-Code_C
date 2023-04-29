#include<stdio.h>
int main(){
	int  x=10, y=10;
  int z=(x=x+y,y++,++x);
	printf("x=%d y=%d z=%d",x,y,z);
	return 0;
}
