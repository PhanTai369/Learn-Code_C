#include<stdio.h>
#include<conio.h>
#include<math.h>
  int main(){
  	int a,b,c;
  	printf("nhap vao 3 so a b c");
  	scanf("%d%d%d",&a,&b,&c);
//  	if(a<b){
//  		if(a<c){
//  			printf("%d%d%d",a,b,c);
//		  }else { 
//		     printf("%d%d%d",a,c,b);
//		  } else if(b<c){
//		    printf("%d%d%d",b,c,a);
//		  }
//		  	printf("%d%d%d",c,a,b);
//		  }
#include <stdio.h>



    // S?p x?p theo th? t? tang d?n
    if (a <= b && b <= c) {
        printf("S? dã du?c s?p x?p: %d %d %d\n", a, b, c);
    } else if (a <= c && c <= b) {
        printf("S? dã du?c s?p x?p: %d %d %d\n", a, c, b);
    } else if (b <= a && a <= c) {
        printf("S? dã du?c s?p x?p: %d %d %d\n", b, a, c);
    } else if (b <= c && c <= a) {
        printf("S? dã du?c s?p x?p: %d %d %d\n", b, c, a);
    } else if (c <= a && a <= b) {
        printf("S? dã du?c s?p x?p: %d %d %d\n", c, a, b);
    } else {
        printf("S? dã du?c s?p x?p: %d %d %d\n", c, b, a);
    }



		  
	  return 0;
}
