#include <stdio.h>

void printMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Max value in the array: %d\n", max);
}
void findElement(int arr[100],int n, int x){
	int index=-1;

;    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        printf("Khong ton tai %d trong mang.\n", x);
        return;
    }

    printf("\nPhan tu %d trong mang xuat hien o vi tri thu: %d\n", x, index);
    printf("\n");
}


void sortArray(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j <n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void deleteNegative(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;
            
            break;
        }
    }
    if (n== 0) {
        printf("The array is empty.\n");
    } else {
        printf("Phan tu sau khi xoa: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}

void saveArrayToFile(int arr[], int n) {
    FILE *f = fopen("Songuyen.txt", "w");
    for (int i = 0; i < n; i++) {
        fprintf(f, "%d ", arr[i]);
    }
    fclose(f);
    printf("Array saved to file Songuyen.txt\n");
}

int main() {
    int A[] = {2, 3, -7, 2, 4, -12};
   int n=sizeof(A)/4;

    // 1.1
    printMax(A, n);

    // 1.2
    int x;
    printf("Enter a value X: ");
    scanf("%d", &x);
    findElement(A,n,x);

//    // 1.3
//    sortArray(A, n);

    // 1.4
//    deleteNegative(A,n);
//
//    // 1.5
//    saveArrayToFile(A, n);

    return 0;
}

