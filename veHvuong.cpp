#include<stdio.h>
int main()
{
    int size, i, j;
    
    printf( "nhap vao kich co: \n" );
    scanf( "%d", &size );
    
    if(size < 1 || size > 100) {
        printf("size tu 1 to 10\n");
        return 0;
    }
    
     for(i=0; i<size; i++) {
        for(j=0; j<size; j++) {
            printf(" $");
        }
        printf("\n");
    }

    return 0;
    }
