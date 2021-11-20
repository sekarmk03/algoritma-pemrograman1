#include<stdio.h>
int main(){
    int col, row, n;
    scanf("%d", &n);
    for ( col = 0; col < n; col++)
    {
        for ( row = 0; row < n-col; row++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}