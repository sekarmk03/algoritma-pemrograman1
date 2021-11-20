#include<stdio.h>
int main(){
    int n,row,i;
    scanf("%d", &n);
    for ( row = 0; row < n-1; row++)
    {
        for ( i = 0; i < row; i++)
        {
            printf(" ");
        }
        for ( i = 0; i < n; i++)
        {
            printf("*");
        }
        for ( i = 0; i < (n-1)-row; i++)
        {
            printf(" ");
        }
        for ( i = 0; i < n+1; i++)
        {
            printf("*");
        }
        for ( i = 0; i < (n-1)-row; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 0; i < 1; i++)
    {
        for ( row = 0; row < n-1; row++)
        {
            printf(" ");
        }
        for ( row = 0; row < n*3; row++)
        {
            printf("*");
        }
        printf("\n");
    }
    for ( row = 0; row < n-1; row++)
    {
        for ( i = 0; i < n-1; i++)
        {
            printf(" ");
        }
        for ( i = 0; i < (n-1)-row; i++)
        {
            printf("*");
        }
        for ( i = 0; i < (n+2)+(2*row); i++)
        {
            printf(" ");
        }
        for ( i = 0; i < (n-1)-row; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (row = 0; row < n; row++)
    {
        for ( i = 0; i < n-1; i++)
        {
            printf(" ");
        }
        for ( i = 0; i < n-(n-(row+1)); i++)
        {
            printf("*");
        }
        for ( i = 0; i < (n+(n-(row*2))+(n-2)); i++)
        {
            printf(" ");
        }
        for ( i = 0; i < n-(n-(row+1)); i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}