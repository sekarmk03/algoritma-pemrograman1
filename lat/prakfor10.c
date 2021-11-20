#include<stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d", &n);
    for ( k = 0; k < 3; k++)
    {
        for ( j = 0; j < n; j++)
        {
            for ( i = 0; i < n-(j+1); i++)
            {
                printf(" ");
            }
            for ( i = 0; i < n; i++)
            {
                printf("*");
            }
            for ( i = 0; i < j*2; i++)
            {
                printf(" ");
            }
            for ( i = 0; i < n; i++)
            {
                printf("*");
            }
            printf("\n");
        }
        for ( j = 0; j < n-1; j++)
        {
            for ( i = 0; i < n-(n-(j+1)); i++)
            {
                printf(" ");
            }
            for ( i = 0; i < n; i++)
            {
                printf("*");
            }
            for ( i = 0; i < (n+1)-(j*2); i++)
            {
                printf(" ");
            }
            for ( i = 0; i < n; i++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}