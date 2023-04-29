#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
   void Nhapmang(int a[], int n){
   	srand(time(NULL));
   	for(int i=0;i<n;i++){
   		a[i]=rand()%100;
	   }
   }
   void Inmang(int a[], int n){
   	for(int i=0;i<n;i++){
   		printf("%d\t",a[i]);
	   }
   }
   void Timsoledautien(int a[], int n){
   	int i;
   	for(int i=0;i<n;i++){
   		if(a[i]%2!=0){
   			printf("\nPhan tu le dau tien la: %d, tai vi tri: %d\n",a[i],i+1);
   			break;
		   }
	   }
	if(i==n){
		printf("Khong co so le nao trong mang ca\n");
}
   }
  int Timtong(int a[], int n){
  	int chan, le;
  	for(int i=0;i<n;i++){
  		if(a[i]%2==0){
  			chan=a[i];
  			break;
		  }
	  }
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			le=a[i];
		
		}
	}
	return chan+le;
  }
  int main(){
  	int n;
  	int a[30];
  	printf("Nhap n= ");scanf("%d",&n);
  	while(0>=n || n>100){
  		printf("Moi nhap lai: ");scanf("%d",&n);
	  }
	Nhapmang(a,n);
	Inmang(a,n);
	Timsoledautien(a,n);
	printf("Tong 2 so la: %d",Timtong(a,n));
	return 0;
  }
