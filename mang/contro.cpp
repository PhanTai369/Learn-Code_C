#include<stdio.h>
#include<math.h>
#include<conio.h>
// int main(){
// int a=20;
// printf("Gia tri cua a: %d\n",a);
// printf("dia chi cua a: %p\n",&a);
// printf("gia tri tai dia chi cua a: %d",*&a);
// printf("\n -----Bien con tro--------\n");
// int *p=&a;
// printf("gia tri cua con tro p:%p\n ",p);
// printf("Dia chi cua con tro p:%p\n ",&p);
// printf("gia tri tai dia chi ma con tro p tro toi:%d\n ",*p);
// *p+=50;// luc nay con tro p lam thay doi gia tri tai vung a
// printf("Gia tri cua a: %d\n",a);
// int c=100;
//  p=&c;
//  *p+=20;
//  printf("Gia tri cua c: %d\n",c);
// // truong hop khong tro toi dau thi sao?
// int s=0;jf
// int *p1=NULL;
         
  // truyen tham so cho ham
  //cach 1: truyen tham tri(truyen gia tri)
  int tinhtong(int x, int y){//x,y la tham so
   return x+y;
  }
  //cach 2 truyen tham chieu
  void hoanvi(int &x, int &y){
  	int temp=x;
  	x=y;// lay gia tri cua y gan cho x
  	y=temp;
  	}
   //cách 3: truyen bang con tro
   void Hoanvi2(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
   
   }
  int main(){
  int a=10, b=20;
  printf("Tong %d \n",a,b,tinhtong(a,b));
  int x=10, y=20;
  printf("x=%d, y=%d\n",x,y);
  hoanvi(x,y);// phai luon luon la bienn
   printf("x=%d, y=%d\n",x,y);
   Hoanvi2(&x,&y);
   printf("x=%d, y=%d\n",x,y);
  }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
