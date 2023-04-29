#include<stdio.h>
#include<math.h>
#include<conio.h>
   void Nhap(int a[100],int n){
   	
      for(int i=0;i<n;i++){
	     printf("phan tu thu a[%d]: ",i);
	     scanf("%d",&a[i]);
	  }
   }
   void inmang(int a[100],int n){
   	for(int i=0;i<n;i++){
   		printf("%d\t",a[i]);
		   }
	   }
   void TBcongsole(int a[100],int n){
   	int dem=0,s=0;
   	 for(int i=0;i<n;i++){
			if(a[i]%2!=0){
				s+=a[i];
				dem++;	
			}
		}
	  if(dem!=0){
	  	printf("TBC: %.2f",(float)s/dem);
	}else{
		printf("mang khong co so le");
	}
	}
	
	int Tinhtongdx(int a[100], int n){
       int i,j,s=0;
     // cach 2 may dt
       for(i=0,j=n-1;i<j;i++,j--){
         if(a[i]==a[j]){
   	       s+=a[i]+a[j];
       } 
     }
     return s;
   }
   void Sapxepcacsonhodan(int a[],int n){
   int mid;
   for(int i=0;i<n-1;i++){
   	for(int j=i+1;j<n;j++){
   		if(a[j]>a[i]){
		   mid=a[i];
		   a[i]=a[j];
		   a[j]=mid;
		   }
		}
	}
   
}
   int main(){
   	
   	  
    int n, a[100];
    printf("Nhap n= ");scanf("%d",&n);
    Nhap(a,n);
    inmang(a,n);
   TBcongsole(a,n);
    printf("\nTong cac so doi xung:%d ",Tinhtongdx(a,n));
 
      Sapxepcacsonhodan(a,n);
      printf("\nSau khi sap xep giam dan\n");
      inmang(a,n);
   
   }
