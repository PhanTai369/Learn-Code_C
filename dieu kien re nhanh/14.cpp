#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float t, l, h,tong;	
	int dk1,dk2,dk;
	printf("nhap vao diem toan li hoa");
	scanf("%f%f%f",&t,&l,&h);
	tong=(t+l+h);
	dk1= t>=6.5 && l>=5.5 && h>=5 && tong>=19  ;
	dk2= t>=6.5 && l>=5.5 && h>=5 && (t+l)>=14 ;
	printf("xet tuyen(1-2): ");scanf("%d",&dk);
	if(dk==1){
		switch(dk1){
			case 1 : printf("du dieu kien nhap hoc",dk);break;
			case 0 : printf("khong du dieu kien nhap hoc",dk);
		}
	} else if(dk==2){
	    switch(dk2){
			case 1 : printf("du dieu kien nhap hoc",dk);break;
			case 0 : printf("khong du dieu kien nhap hoc",dk);
		}
	} else {
			printf("Nhap sai %d",dk);
	}
		
		return 0;
		}
	
