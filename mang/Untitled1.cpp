#include <stdio.h>
#include <math.h>

int isPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n, i;
    float sumPositive = 0, sumNegative = 0, countPositive = 0, countNegative = 0;

    printf("Nhap so luong phan tu cua mang (n <= 100): ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);

        if (a[i] > 0)
        {
            sumPositive += a[i];
            countPositive++;
        }
        else if (a[i] < 0)
        {
            sumNegative += a[i];
            countNegative++;
        }
    }

    if (countPositive == 0)
    {
        printf("Khong co so duong trong mang!\n");
    }
    else
    {
        printf("Trung binh cong cac so duong trong mang la: %.2f\n", sumPositive / countPositive);
    }

    if (countNegative == 0)
    {
        printf("Khong co so am trong mang!\n");
    }
    else
    {
        printf("Trung binh cong cac so am trong mang la: %.2f\n", sumNegative / countNegative);
    }

    printf("Cac so nguyen to trong mang la: ");
    for (i = 0; i < n; i++)
    {
        if (isPrime(a[i]))
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n");

    int evenCount = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            evenCount++;
        }
    }

    if (evenCount == 0)
    {
        printf("Khong co so chan trong mang!\n");
    }
    else
    {
    	
    	
    	
    	    int evenArr[evenCount], evenIndex = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            evenArr[evenIndex++] = a[i];
        }
    }

    bubbleSort(evenArr, evenCount);

    printf("Cac so chan trong mang theo thu tu tang dan la: ");
    for (i = 0; i < evenCount; i++)
    {
        printf("%d ", evenArr[i]);
    }
    printf("\n");

    return 0;
}

       

