#include<stdio.h>
int main(){
    int col, row1, row2, row3, n;
    scanf("%d", &n);
    for ( col = 0; col < n; col++)
    {
        for ( row1 = 0; row1 < n-(1+col); row1++)
        {
            printf(" ");
        }
        for ( row2 = 0; row2 < n-(n-col); row2++)
        {
            printf("*");
        }
        for ( row3 = 0; row3 < n-col; row3++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}