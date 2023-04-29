#include<stdio.h>
#include<conio.h>
#include<math.h>
   void danhMucBaiTap(){
 		printf("1.dem bao nhieu so n\n");
   		printf("2.tim so cuoi cua n\n");
   		printf("3.tim so dau tien n\n");
   		printf("4.tinh tong cac chu so n\n");
   		printf("5.Dao nguoc cua n\n");
 } 
   int  demSo(int n){
   	  int dem=0;
   	  do{
   	  	n=n/10;
   	  	dem++;
		 }while(n!=0);
		 return dem;
	   }
	   
    int timSocuoicung(int n){
	int n2=n/10*10;
	int last=n-n2;
	return last;
 }
 int timSodautien(int n){
	int first=n/pow(10, demSo(n)-1);
	return first;
 }
  int tinhTongcacChuso(int n){
	int s=0;
	int n2=n;
	for(int i=1;i<=demSo(n);i++){
		s+=(n2%10);
		n2/=10;
	}
	return s;
 }
 int daoNguoc(int n){
	int soDao=0;
	for(int i=demSo(n);i>0;i--){
		soDao+=(n%10)*pow(10, i-1);
		n/=10;
	}
	return soDao;
 }
 void menu(){
 int chonBai;
 do{
 	danhMucBaiTap();
 	printf("0.STOP\n");
 	printf("Moi chon bai: ");scanf("%d",&chonBai);
 	switch(chonBai){
	 case 1:{
	 		int n;
	 	printf("Nhap n: ");scanf("%d",&n);
	 	printf("co tat ca cac so la: %d\n",demSo(n));
		break;
	 }
	 case 2:{
	 		int n;
	 	printf("Nhap n: ");scanf("%d",&n);
	 	printf("Tim so cuoi cun %d\n",timSocuoicung(n));
		break;
	 }
	 case 3:{
	 	int n;
	 	printf("Nhap n: ");scanf("%d",&n);
	 	printf("tim so dau tien: %d\n",timSodautien(n));
		break;
	 }	 
	 case 4:{	int n;
	 	printf("Nhap n: ");scanf("%d",&n);
	 	printf("Tinh tong cac so: %d\n",tinhTongcacChuso(n));
		break;
	 }	 
	 case 5:{
	 		int n;
	 	printf("Nhap n: ");scanf("%d",&n);
	 	printf("so nghich dao: %d\n",daoNguoc(n));
		break;
	 }
	 default: printf("Vui long chon dung bai tap\n");
  } 
    }while(chonBai!=0);
 }
 int main(){
   menu();
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
