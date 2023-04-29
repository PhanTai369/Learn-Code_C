#include<stdio.h>
#include<conio.h>
#include<math.h>

float tinhmotsochiachogiaithua(int n){
    float s=0, g=1;
    for(int i=1;i<=n;i++){
        g=g*i;
        s+=((float)1/g);
    }
    return s;  
}
int tong(int n) {
    int s = 0;
    for(int i = 1; i <= n; i++) {
        s += i;
    }
    return s;
}
void ybcuabai6(int n){
    float s6=0;
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            s6 += tong(j-i+1);
        }
    }
    printf("S6 = %.2f\n", s6);
}
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Tong cua s2 la %f\n", tinhmotsochiachogiaithua(n));
    ybcuabai6(n);
    return 0;
}

