#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
   void Nhapmang(int a[], int n){
    for(int i=0;i<n;i++){
	   printf("a[%d]",i+1);
	   scanf("%d",&a[i]);
	}	
   }
   void inmang(int a[], int n){
     for(int i=0;i<n;i++){
	 printf("%d\t",a[i]);
	 }
   }
   int main(){
   	int a[20],b[20] ,n;
   	printf("Nhap n: ");scanf("%d",&n);
   	Nhapmang(a,n);
   	FILE *f1=fopen("songuyen.txt","wb");
   	if(f1==NULL){
   		printf("LOI TAO FILE");
	   }
	fwrite(a,sizeof(a),1,f1);
	fclose(f1);
	// mo file nhi phan de doc
	FILE *f2=fopen("songuyen.txt","rb");
	if(f2==NULL){
		printf("LOI TAO MO FILE");
	}
	// doc file nhi phan de luu vao bang b
	fread(b,sizeof(b),1,f2);
	fclose(f2);
	printf("\n in noi dung mang a-----------------\n");
	inmang(b,n);
   }
