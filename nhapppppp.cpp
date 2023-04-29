//#include<Stdio.h>
//#include<math.h>
//#include<conio.h>
// int main(){
// 	int a, b, c;
// 	printf("nhap vao 3 so nguyen: ");
// 	scanf("%d%d%d",&a,&b,&c);
// 	if(a<=b && b<=c){
// 		printf("%d %d %d",a,b,c);
// 		}else if(a<=c && c<=b){
// 		printf("%d %d %d",a,c,b);
// 		}else if(b<=a && a<=c){
// 		printf("%d %d %d", b,a,c);
// 		}else if(b<=c && c<=a){
//		printf("%d %d %d", b,c,a);
//		}else if(c<=a && a<=b){
//		printf("%d %d %d",c,a,b);
//		}else if(c<=b && b<=a){
//		printf("%d %d %d", c,b,a);
//
//
//		 
//		 
//		 
//		 return 0;
//		 }
//
//#include <stdio.h>
//
//int main() {
//    int n, sum = 0;
//    printf("Nhap n: ");
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++) {
//        sum += i;
//    }
//    printf("Tong la: %d", sum);
//    return 0;
//}
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Nhap vao mot so nguyen duong: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i ++) {
        sum += i;
    }

    printf("Tong cac so chan tu 1 den %d la: %d\n", n, sum);

    return 0;
}

