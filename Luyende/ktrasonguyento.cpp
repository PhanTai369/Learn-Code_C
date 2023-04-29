#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
bool KtraSNT(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void Songuyento(int n){
    if(KtraSNT(n)){
        printf("%d la so nguyen to\n",n);
    }else{
        printf("%d khong phai la so nguyen to\n",n);
    }
}
int main(){
    int n;
    printf("Nhap n= ");scanf("%d",&n);
    Songuyento(n);
    return 0;
}

