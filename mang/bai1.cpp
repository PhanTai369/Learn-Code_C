#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h> //de dung hanm rand() cho gia tri ngau nhien
#include<time.h>
  int Demsomang(int a[], int n){
  int x; int dem=0;
  printf("Nhap x: ");scanf("%d",&x);
  for(int i=0;i<n;i++){
  	if(a[i]==x){
     dem++;
     }
  }
  return dem;
  }


  void Sochan(int a[], int n){
  	int max=-1;
  	int min=10000;
   for(int i=0;i<n;i++){
   	if(a[i]%2==0 && a[i]>max){
   		max=a[i];
      }else if(a[i]%2!=0 && a[i]<min){
      	min=a[i];
    }
   }
    printf(" \n So chan lon nhat la %d\n",max);
    printf("\n So le lon nhat la %d \n",min);
  }
  void bai2(int a[], int n){
  	float dem=0;
  	int s=0;
    for(int i=0;i<n;i++){
    	if(a[i]%2==0){
    		s+=a[i];
    		dem++;
		}
	}
  	printf("\nGia tri trung binh %.2f\n",(1.0)*s/dem);
  }
  void Nhapmang(int a[], int n){
   for(int i=0;i<n;i++){
   	printf("Nhap vao cac phan tu %d ",i);
   	scanf("%d",&a[i]);
   }
  }
  void inmang(int a[], int n){
  	for(int i=0;i<n;i++){
	  printf("%d\t",a[i]);
	}
  }
  
  void nhapBai2(int a[],int n){
		srand(time(NULL));//tai moi thoi diem khac nhau se cho bo so ngau nhien khac nhau
	for(int i=0;i<n;i++){
		a[i]=rand()%101;
	}
}
  
  
  void Danhmucbaitap(){
   printf(" 1.tinh so chan lon nhat va so le nho nhat\n ");
   printf("2.Tinh gia tri trung binh\n ");
   printf("4.dem cac so xuat hien cua mang");
  }
  void menu(){
  int b;
  int a[20];
  do{
  	Danhmucbaitap();
  	printf("0.Stop\n");
  	printf("Moi chon bai: ");scanf("%d",&b);
  	switch(b){
  		case 1: {
  			int n;
            printf("Nhap vao n ");scanf("%d",&n);
            Nhapmang(a,n);
            inmang(a,n);
            Sochan(a,n);
			break;
	    case 2: {
			int n;
            printf("Nhap vao n ");scanf("%d",&n);
            nhapBai2(a,n);
            inmang(a,n);
            bai2(a,n);
			break;
		}
		case 4:{
			int n;
            printf("Nhap vao n ");scanf("%d",&n);
			Nhapmang(a,n);
			printf("Dem cac so co trong mang: ",Demsomang(a,n));
			 inmang(a,n);
			break;
      }
	}
	}
  	
  }while(b!=0);
}
  int main(){
   menu();
//int a[20],n=10;
//nhapBai2(a,n);
//inmang(a,n);


  
  }  
