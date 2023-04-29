#include<stdio.h>
 #include<math.h>
 #include<conio.h>
 #include<iostream>
 using namespace std;
  bool Ktrasonguyento(int n){
  	 if(n<2){
  	 	return false;
		   }
	  for(int i=2;i<=n/2;i++){
	  	 if(n%i==0){
		      return false   ; 
					}
	  }
	  return true;
	 }
	void Songuyento(int n){
	   int dem=0;
	   for(int i=2;i<n;i++){
	   	if(Ktrasonguyento(i)==true){
	   		dem++;
	   	//	printf("%d\t ",i);
	   	cout<<i<<"\t";
	   		}
	   	}
	 printf("Co tat ca cac so nguyen to la %d\n",dem);  		
	}  
	void TBso(){
	  int n,dem;
	   float s;
	  do{
	  	printf("nhap n ");scanf("%d",&n);
	  	
	  	s+=n;
	  	dem++;
	  	
	  }while( Ktrasonguyento(n)==0);// hoac phu dinh 
	printf("Trung binh cong %f\n",(s-n)/(dem-1));
	
	}	
	int main(){
//	 int n;
//	 printf("nhap n\n ");scanf("%d",&n);
//	cout<<"Nhap n= ";cin>>n;
//	 Songuyento(n);
	TBso()
	
		; 
	 }
	  
