#include<stdio.h>
int main(){
    int col0, col1, col2, col3, col4, col5, col6;
    int a1,a2,x1,a3,a4,a5;
    int b1,b2,b3,b4,b5,b6;
    int c1,c2,c3,c4;
    int d1,d2,d3,d4;
    int n;
    scanf("%d", &n);
    for ( col0 = 0; col0 < 1; col0++)
    {
        for ( col1 = 0; col1 < n*4-1; col1++)
        {
            printf(" ");
        }
        for ( col2 = 0; col2 < n*2; col2++)
        {
            printf("*");
        }
        printf("\n");
    }
    for ( col3 = 0; col3 < n-1; col3++)
    {
        for ( a1 = 0; a1 < n-col3+2; a1++)
        {
            printf(" ");
        }
        for ( a2 = 0; a2 < col3*2+1; a2++)
        {
            printf("*");
        }
        for (x1 = 0; x1 < n-col3+2; x1++)
        {
            printf(" ");
        }
        for ( a3 = 0; a3 < n; a3++)
        {
            printf("*");
        }
        for ( a4 = 0; a4 < n; a4++)
        {
            printf(" ");
        }
        for ( a5 = 0; a5 < n; a5++)
        {
            printf("*");
        }
        printf("\n");
    }

    for ( col4 = 0; col4 < 2; col4++)
    {
        for ( b1 = 0; b1 < col4; b1++)
        {
            printf(" ");
        }
        for ( b2 = 0; b2 < n*4-(1+(col4*2)); b2++)
        {
            printf("*");
        }
        for ( b3 = 0; b3 < col4; b3++)
        {
            printf(" ");
        }
        for ( b4 = 0; b4 < n; b4++)
        {
            printf("*");
        }
        for ( b5 = 0; b5 < n; b5++)
        {
            printf(" ");
        }
        for ( b6 = 0; b6 < n; b6++)
        {
            printf("*");
        }
        printf("\n");
    }  
        for ( col5 = 0; col5 < n-1; col5++)
        {
            for ( c1 = 0; c1 < (col5+1)*2; c1++)
            {
                printf(" ");
            }
            for ( c2 = 0; c2 < 9-(2*(1+(col5*2))); c2++)
            {
                printf("-");
            }
            for ( c3 = 0; c3 < (col5+1)*2; c3++)
            {
                printf(" ");
            }
            for ( c4 = 0; c4 < n*2; c4++)
            {
                printf("*");
            }
            printf("\n");
        }
        for ( col6 = 0; col6 < n-2; col6++)
        {
            for ( d1 = 0; d1 < n+2; d1++)
            {
                printf(" ");
            }
            for ( d2 = 0; d2 < n-2; d2++)
            {
                printf("*");
            }
            for ( d3 = 0; d3 < n+2; d3++)
            {
                printf(" ");
            }
            printf("\n");
        }
        
        /*for ( col5 = 0; col5 < n-1; col5++)
        {
            for ( c1 = 0; c1 < col5+2; c1++)
            {
                printf(" ");
            }
            for ( c2 = 0; c2 < b2-2 ; c2++)
            {
                printf("*");
            }
            for ( c3 = 0; c3 < col5+2; c3++)
            {
                printf(" ");
            }
            printf("\n");
        }*/
    
    return 0;
}