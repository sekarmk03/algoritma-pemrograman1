#include<stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d", &n);
    char nama[n];
    for ( i = 0; i < n; i++)
    {
        scanf(" %c", &nama[i]);
    }
    for ( j = 0; j < 1; j++)
    {
        for ( i = 0; i < n-1; i++)
        {
            printf(" ");
        }
        for ( i = 0; i < n+(n-1); i++)
        {
            printf("%c", nama[0]);
        }
    }
    printf("\n");
    for ( j = 0; j < n-1; j++)
    {
        for ( i = 0; i < n-(j+2); i++)
        {
            printf(" ");
        }
        for ( i = 0; i < n-(n-(j+1)); i++)
        {
            printf("%c", nama[i]);
        }
        for ( i = 0; i < 2; i++)
        {
            printf("%c", nama[i]);
        }
        for ( i = 0; i < n; i++)
        {
            if (j==0 && i==0)
            {
                printf("%c", nama[n-(i+2)]);
            }
            else if (j!=0 && i==0)
            {
                printf("%c", nama[n-(i+3)]);
            }
        }
        for ( i = 0; i < 1; i++)
        {
            /* code */
        }
        
        printf("\n");
    }
    
    return 0;
}