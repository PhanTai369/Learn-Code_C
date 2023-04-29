#include <stdio.h>

int main() {
    int day;

    printf("Nhap vao mot so tu 1 den 7: ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Hom nay la Chu Nhat.\n");
            break;
        case 2:
            printf("Hom nay la thu Hai.\n");
            break;
        case 3:
            printf("Hom nay la thu Ba.\n");
            break;
        case 4:
            printf("Hom nay la thu Tu.\n");
            break;
        case 5:
            printf("Hom nay la thu Nam.\n");
            break;
        case 6:
            printf("Hom nay la thu Sau.\n");
            break;
        case 7:
            printf("Hom nay la thu Bay.\n");
            break;
        default:
            printf("Khong phai ngay trong tuan.\n");
    }

    return 0;
}

