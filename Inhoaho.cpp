#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
  void Nhapmang(int a[], int n){
  	for(int i=0;i<n;i++){
  		printf("a[%d]: ",i);
  		scanf("%d",&a[i]);
	  }
  }
  void inmanga(int a[], int n){
  	for(int i=0;i<n;i++){
  		printf("%d\t",a[i]);
	  }
  }
  void Timvitridautien(int a[], int n, int x){
  	  int index=-1;
	  for(int i=0;i<n;i++){
  		if(a[i]==x){
  			 index=i;
		  }
	  }
	  if(index==-1){
	  	printf("khong co phan tu X trong mang");
	  }else{
	      printf("Phan tu %d nam o vi tri %d", x, index);	
	  }
	  
  }
  void Xoakitu(int a[], int n){
  	for(int i=0;i<n;i++){
  		if(a[i]<0){
  			for(int j=i;j<n-1;i++){
  				a[j]=a[j+1];
			  }
			  n--;
			  break;
		  }
	  }
	  if(n==0){
	    printf("Khong co x trong mang");
	  }else{
	  	printf("phan tu sau khi xao: ");
	    for(int i=0;i<n;i++){
		   printf("%d\t",a[i]);
		}
	  }
  }
  int main(){
  	int n; int a[50];
  	printf("Nhap n = ");scanf("%d",&n);
  	Nhapmang(a,n);
  	inmanga(a,n);
  	int x;
  	printf("Nhap x= ");scanf("%d",&x);
  	Timvitridautien(a,n,x);
  	Xoakitu(a,n);
  	return 0;
  }
