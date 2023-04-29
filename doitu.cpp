#include <stdio.h>
#define MAX 100

int main()
{
    int n, a[MAX], i, j;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0, j = n-1; i < j; i++, j--)
    {
        if (a[i] != a[j])
        {
            printf("Mang khong doi xung\n");
            return 0;
        }
    }

    printf("Mang doi xung\n");

    return 0;
}

