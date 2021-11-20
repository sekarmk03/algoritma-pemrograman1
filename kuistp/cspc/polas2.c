#include<stdio.h>
int main(){
    int n,row,i;
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        printf(" ");
    }
    for ( i = 0; i < n; i++)
    {
        printf("*");
    }
    for ( i = 0; i < n*2-2; i++)
    {
        printf(" ");
    }
    for ( i = 0; i < n; i++)
    {
        printf("*");
    }
    printf("\n");
    for ( row = 0; row < n-1; row++)
    {
        for ( i = 0; i < (n-2)-row; i++)
        {
            printf(" ");
        }
        for ( i = 0; i < row+1; i++)
        {
            printf("*");
        }
        for ( i = 0; i < n+1; i++)
        {
            printf("*");
        }
        for ( i = 0; i < n*2-2; i++)
        {
            printf(" ");
        }
        for ( i = 0; i < row+1; i++)
        {
            printf(" ");
        }
        for ( i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    for ( row = 0; row < n-1; row++)
    {
        for ( i = 0; i < n+row; i++)
        {
            printf(" ");
        }
        for ( i = 0; i < n; i++)
        {
            printf("*");
        }
        for ( i = 0; i < (n+(n-3))-(row*2); i++)
        {
            printf(" ");
        }
        for ( i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    for ( i = 0; i < (n+1)+(n-2); i++)
    {
        printf(" ");
    }
    for ( i = 0; i < n*2-1; i++)
    {
        printf("*");
    }
    printf("\n");
    for ( row = 0; row < n; row++)
    {
        for ( i = 0; i < n-row; i++)
        {
            printf(" ");
        }
        for ( i = 0; i < n; i++)
        {
            printf("*");
        }
        for ( i = 0; i < (n+(n-3))+(row*2); i++)
        {
            printf(" ");
        }
        for ( i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}