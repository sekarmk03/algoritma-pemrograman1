#include<stdio.h>
int main(){
    int a,a3,a4,a5,a6,a7,a8,a9,a0,a10;
    int b;
    int c,c1,c2,c3,c4,c5,c6,c7,c8,c9;
    int n;
    scanf("%d", &n);
    printf(">\n>>>>>\n");
    for ( a = 0; a < n-2; a++)
    {
        for ( a3 = 0; a3 < 1; a3++)
        {
            printf(">");
        }
        for ( a4 = 0; a4 < n-(n-a)+1; a4++)
        {
            printf(" ");
        }
        for ( a5 = 0; a5 < 1; a5++)
        {
            printf(">");
        }
        for ( a6 = 0; a6 < n-(n-a)+1; a6++)
        {
            printf(" ");
        }
        for ( a7 = 0; a7 < 1; a7++)
        {
            printf(">");
        }
        for ( a8 = 0; a8 < n-(n-a)+1; a8++)
        {
            printf(" ");
        }
        for ( a9 = 0; a9 < 1; a9++)
        {
            printf(">");
        }
        for ( a0 = 0; a0 < n-(n-a)+1; a0++)
        {
            printf(" ");
        }
        for ( a10 = 0; a10 < 1; a10++)
        {
            printf(">");
        }
        printf("\n");
    }
    for ( b = 0; b < n*4; b++)
    {
        printf(">");
    }
    printf("BROFIST FOREVAH\n");
    for ( c = 0; c < n-2; c++)
    {
        for ( c1 = 0; c1 < 1; c1++)
        {
            printf(">");
        }
        for ( c2 = 0; c2 < a-c ; c2++)
        {
            printf(" ");
        }
        for ( c3 = 0; c3 < 1; c3++)
        {
            printf(">");
        }
        for ( c4 = 0; c4 < a-c; c4++)
        {
            printf(" ");
        }
        for ( c5 = 0; c5 < 1; c5++)
        {
            printf(">");
        }
        for ( c6 = 0; c6 < a-c; c6++)
        {
            printf(" ");
        }
        for ( c7 = 0; c7 < 1; c7++)
        {
            printf(">");
        }
        for ( c8 = 0; c8 < a-c; c8++)
        {
            printf(" ");
        }
        for ( c9 = 0; c9 < 1; c9++)
        {
            printf(">");
        }
        printf("\n");
    }
    printf(">>>>>\n>\n");
    return 0;
}