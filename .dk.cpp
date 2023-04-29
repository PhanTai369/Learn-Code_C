#include<stdio.h>
#include<conio.h>
#include<math.h>
  int main(){
  	int a,b,c;
  	printf("nhap vao 3 canh a b c: ");
  	scanf("%d%d%d",&a,&b,&c);
  	float p=(a+b+c)/2;
  	if((a<b+c)&&(b<c+a)&&(c<a+b)){
  		//cau lenh 1
  		if(a==b && b==c){
  			printf(" tam giac deu\n ");
  		}else if(a==b || b==c || a==c){
  			printf("tam giac can\n");
		} else if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a){
  			printf("tam giac vuong\n");
		} else {
  			printf("tam giac thuong\n");
		}
  		printf("dien tich cua tam giac:%.2f\n",sqrt(p*(p-a)*(p-b)*(p-c)));
	} else {
		printf("abc khong phai la tam giac");
	}	
	  return 0;
	  }				
  						
