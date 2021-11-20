#include<stdio.h>
int main(){
    int n,j,i;
    scanf("%d", &n);
    for ( j = 0; j < n; j++)
    {
        for ( i = 0; i < n-(j+1); i++)
        {
            printf("#");
        }
        for ( i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}