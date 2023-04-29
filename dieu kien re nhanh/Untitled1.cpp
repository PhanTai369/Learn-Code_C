#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
   int x;
   printf("nhap vao so nguyen x\n");
   scanf("%d",&x);
   if(x==0){
   printf("0");
   }else {
   	printf("%d la so hang tram:", (x/100)%10);}
   	return 0;
	   }   	
#include <stdio.h>

int main() {
    int x, hangTram;

    printf("Nhap vao so nguyen x: ");
    scanf("%d", &x);

    hangTram = (x / 100) % 10;

    if (hangTram == 0) {
        printf("0\n");
    } else {
        printf("Chu so hang tram cua x la: %d\n", hangTram);
    }

    return 0;
}

