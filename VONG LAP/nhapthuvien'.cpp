#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<iostream>
using namespace std;

int demSo(int n){
	int dem=0;
	do{
		n/=10;
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

void doExcercise()
{
	int n, bt;
	do{
		cout<<"Chon bai tap: "; cin>>bt;
	}while(bt>5 || bt<1);
	cout<<"Nhap mot so nguyen: "; cin>>n;
	switch(bt){
		case 1:{
			cout<<n<<" co "<<demSo(n)<<" chu so.";
			break;
		}
		case 2:{
			cout<<"So cuoi cung cua "<<n<<" la "<<timSocuoicung(n);
			break;
		}
		case 3:{
			cout<<"So dau tien cua "<<n<<" la "<<timSodautien(n);
			break;
		}
		case 4:{
			cout<<"Tong cac chu so cua "<<n<<" la "<<tinhTongcacChuso(n);
			break;
		}
		case 5:{
			cout<<"So dao nguoc cua "<<n<<" la "<<daoNguoc(n);
			break;
		}
	}
	
}
int main(){
	cout<<"Nhap so nguyen n"<<endl;
	cout<<"1.Dem co bao nhieu chu so"<<endl;
	cout<<"2.Tim so cuoi cung cua n"<<endl;
	cout<<"3.Tim so dau tien cua n"<<endl;
	cout<<"4.Tinh tong cac chu so"<<endl;
	cout<<"5.Dao nguoc n"<<endl;
	doExcercise();
}
 
