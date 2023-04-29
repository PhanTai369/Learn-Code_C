#include<stdio.h>
#include<math.h>
#include<conio.h>
   int Nhap(int n){
  
   	do{
   		printf("nhap vao n ");
   		scanf("%d",&n);
	   }while(0>n);
	   return n;
	}   
   bool Ktrasonguyen(int n){
     if(n<2){
     	return false;
     	}else{
     		for(int i=2;i<n;i++){;
     		if(n%i==0){
     			return false;
     		}		
		 }
	  }
		return true;
	}
	void Songuyento(int n){
      	if(Ktrasonguyen(n)==true){
		  printf("%d la so nguyen to",n);
	    }else{
		  printf("%d khong phai la so nguyento");
		}
			
}
 
	int main(){
	int n=Nhap(n);
	Songuyento(n); 
   	}
   	
