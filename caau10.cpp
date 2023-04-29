#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float cs, cn, diem;
	printf("nhap vao cs cn diem: ");
	scanf("%f %f %f", &cs, &cn, &diem);
	printf("%-20s %-20s\n", "Ten mon","Diem ket qua");
	printf("%-20s %-20.1f\n", "Co so", cs);
	printf("%-20s %-20.1f\n", "chuyen nganh", cn);
	printf("%-20s %-20.1f\n", "diem danh gia", diem);
	printf("---------------------------------------\n");
	printf("%-20s %-20.1f", "diem trung binh", (cs+cn+diem)/3);
	return 0;
	}

