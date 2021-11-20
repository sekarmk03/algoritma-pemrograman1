#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d", &n);
    char nama[n];
    for ( i = 0; i < n; i++)
    {
        scanf(" %c", &nama[i]);
    }
    for ( j = 0; j < n; j++)
    {
        for ( i = 0; i < n-(j+1); i++)
        {
            printf(" ");
        }
        for ( i = 0; i < j; i++)
        {
            printf("%c", nama[i]);
        }
        for ( i = 0; i < j+1; i++)
        {
            printf("%c", nama[i]);
        }
        for ( i = 0; i < n-j*2; i++)
        {
            printf("%c", nama[i]);
        }
        for ( i = 0; i < n-(j+1); i++)
        {
            if (j==0)
            {
                i=1;
                printf("%c", nama[i-1]);
            } else
            {
                /* code */
            }
            
            
        }
        
        printf("\n");
    }
    
    
    return 0;
}