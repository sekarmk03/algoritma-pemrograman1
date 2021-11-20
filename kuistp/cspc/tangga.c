#include<stdio.h>
#include<string.h>

int main(){
    int i, j, k, n, spasi = 0;
    char str[100][100];
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    for ( i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for ( j = 0; j < strlen(str[i]); j++)
            {
                for ( k = 0; k < spasi+j; k++)
                {
                    printf(" ");
                }
                printf("%c\n", str[i][j]);
            }
        }
        if (i % 2 == 1)
        {
            for ( j = 0; j < spasi; j++)
            {
                printf(" ");
            }
            for ( j = strlen(str[i])-1; j >= 0; j--)
            {
                printf("%c", str[i][j]);
            }
            printf("\n");
        }
        spasi += strlen(str[i]);
    }
    return 0;
}