#include<stdio.h>
int main(){
    int n,col,a,b,c,d,e;
    scanf("%d", &n);
    for ( col = 0; col < n; col++)
    {
        for ( a = 0; a < col+1; a++)
        {
            printf("*");
        }
        for ( a = 0; a < 2*(n-1)-(col*2); a++)
        {
            printf(" ");
        }
        for ( a = 0; a < col+1; a++)
        {
            printf("*");
        }
        for ( a = 0; a < n; a++)
        {
            printf("*");
        }
        for ( a = 0; a < col+1; a++)
        {
            printf("*");
        }
        printf("\n");
    }
    for ( col = 0; col < n-1; col++)
    {
        for ( b = 0; b < n-(col+1); b++)
        {
            printf("*");
        }
        for ( b = 0; b < 2+(col*2); b++)
        {
            printf(" ");
        }
        for ( b = 0; b < n-(col+1); b++)
        {
            printf("*");
        }
        for ( b = 0; b < n; b++)
        {
            printf("*");
        }
        for ( b = 0; b < n-(col+1); b++)
        {
            printf("*");
        }
        printf("\n");
    }
    for ( col = 0; col < n; col++)
    {
        for ( c = 0; c < col+1; c++)
        {
            printf("*");
        }
        for ( c = 0; c < 2*(n-1)-(col*2); c++)
        {
            printf(" ");
        }
        for ( c = 0; c < col+1; c++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
