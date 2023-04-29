#include<stdio.h>
#include<math.h>
#include<conio.h>
bool Ktrachanam(int n){
	if(n>0){
	   return true;
	}else if(n<0){
	   return false;
	}
}
void Nhapso(int n, int x){
  int duong=0, am=0;
  printf("nhap n ");scanf("%d",&n);
  for(int i=1;i<=n;i++){
    printf("nhap so %d ",i);scanf("%d",&x);
     if(Ktrachanam(x)==true){
     	duong++;
		 }else am++;
     	}
     printf("Co %d so duong, Co %d so am ",duong,am);  
}
    int main(){
   	int i,o;
    Nhapso(i,o);
}





