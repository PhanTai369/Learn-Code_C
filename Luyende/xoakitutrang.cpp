#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main(){
    char str[100]; 
    int i, j;
    printf("Nhap chuoi: ");
    gets(str); 
    i = 0;
    while (str[i] != '\0') { 
        if (isblank(str[i])) { //d? ki?m tra xem m?t k� t? c� ph?i l� k� tu trang 
            j = i + 1;
            while (isblank(str[j])) { 
                j++;
            }
            if (str[j] != '\0') { 
                str[i] = str[j]; 
                str[j] = ' '; 
            } else { 
                str[i] = '\0'; 
            }
        }
        i++;
    }
    puts(str);
    return 0;
}

