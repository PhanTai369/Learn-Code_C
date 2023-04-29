#include<stdio.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<ctype.h>
#include<stdlib.h>
#include<conio.h>
void Nhapmang(int a[], int n){
	for(int i=0;i<n;i++){
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}

void TBCSole(int a[], int n){
	float dem=0,s=0;
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			s+=a[i];
			dem++;
		}
	}
	printf("\nTBC cac so le la: %f",s/dem);
}

int Doixung(int a[], int n){
	int s = 0;
	for(int i=0,j=n-1;i<j;i++,j--){
		if(a[i]==a[j]){
			s+=a[i]+a[j];
		}
	}
	return s;
}

void Sapxepgiamdan(int a[], int n){
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nMang sap xep giam dan la: ");
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}

void Timkitudautien(int a[], int n, int X) {
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == X) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        printf("X Khong ton tai trong mang\n");
    } else {
        printf("Vi tri cua x trong mang la : %d\n", index+1);
    }
}

int main(){
	int n,x;
	int a[50];
	printf("Nhap n= ");
	scanf("%d",&n);
	while(n<0){
		printf("Moi nhap lai: ");
		scanf("%d",&n);
	}
	Nhapmang(a,n);
	TBCSole(a,n);
	printf("\nTong cac so doi xung:%d ",Doixung(a,n));
	printf("Nhap x: ");scanf("%d",&x);
	Timkitudautien(a,n,x);
	//Sapxepgiamdan(a,n);
	return 0;
}

