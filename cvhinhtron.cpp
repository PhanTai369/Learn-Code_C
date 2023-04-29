#include<stdio.h>
#include<conio.h>
int main(){
	float R, S, cv;
	printf("Nhap vao ban kinh duong tron: ");
	scanf("%f", &R);
	S = 3.14 * R * R;
	cv = 2 * 3.14 * R;
	printf("ban kinh hinh tron: %2f\n", R);
	printf("dien tich cua hinh tron: %2f\n", S);
	printf("chu vi hinh tron: %2f\n", cv);
	return 0;
	}	
	
