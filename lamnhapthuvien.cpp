#include<stdio.h>
#include<math.h>
#include<conio.h>
  bool Songuyento(int n){
	if(n<2) return false;
	else {
		for(int i=2; i<n; i++){
			if(n%i==0) return false;
		}
	}
	return true;
 }
 void soNguyenTo(int n){
 for (int i = 1; i <= n; i++) {
    if (Songuyento(i)) {
      printf("%d la so nguyen to.\n", i);
    } else {
      printf("%d khong la so nguyen to.\n", i);
    }
  }
	 }
	int main(){
	  int n;
	  printf("Nhap vao n ");
	  scanf("%d",&n);
	  soNguyenTo(n);
	
	
	
	}  
  
  
  
  
  
  
  
  	 
