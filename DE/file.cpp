#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
  void Nhap(int a[], int &n){
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
  void docFile(int a[100], int &n, char tenFile[50]){
  	FILE *f;   // khai bao con tro file
  	f=fopen(tenFile,"r");//Mo file de doc
  	if(f==NULL){
  		printf("Loi mo file");
  		return ;
	  }
  	fscanf(f,"%d",&n);// n doc so 5 dong dau tien cua file
  	for(int i=0;i<n;i++){
  		fscanf(f,"%d",&a[i]);
	  }
	  fclose(f);// dong file
  }
  void docFile2(int a[100], int &n, char tenFile[50]){
  	FILE *f;
  	f=fopen(tenFile,"r");
  	if(f==NULL){
  		printf("Loi mo File");
  		return;
	  }
	// doc file dang 2 khi khong co so so luong phan tu cu the
	int i=0;
	while(!feof(f)){    // trong khi chua ket thuc File thi doc
		fscanf(f,"%d",&a[i]);
		i++;
	}
	n=i;
	fclose(f);
  }
  void tinhTongLe(int a[100], int &n, char tenFile[50]){
	int s = 0;
	for (int i=0; i<n;i++){
		if (a[i] %2!=0){
			s+= a[i];
		}
	}
	
	printf("\nTong le = %d",s);
}
  int demsobehon0(int a[100], int n){
  	int dem=0;
  	for(int i=0; i<n;i++){
	  if(a[i]<0){
	  	dem++;
	  }
	  }
	  return dem;
  }
  
  int main(){
  	int a[100], n;
  	docFile(a,n,"MANGSONGUYEN.txt");
  	inmang(a,n);
  	tinhTongLe(a,n,"MANGSONGUYEN.txt");
  	printf("\nCac dem nho hon 0: %d",demsobehon0(a,n));
  }
