#include<stdio.h>
int main(){
    int col1, col2, row1, row2, n;
    scanf("%d", &n);
    for ( col1 = 0; col1 < n; col1++)
    {
        for ( row1 = 0; row1 < n-(n-col1)+1; row1++)
        {
            printf("*");
        }
        printf("\n");
    }
    for ( col2 = 0; col2 < n-1; col2++)
    {
        for ( row2 = 0; row2 < n-col2-1; row2++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}