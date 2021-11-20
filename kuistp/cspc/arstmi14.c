#include<stdio.h>
#include<string.h>

int main(){
    int i, j, k, n;
    int spasi = 0;
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
            for ( j = 0; j < spasi; j++)
            {
                printf(" ");
            }
            printf("%s\n", str[i]);
        }
        else if (i % 2 == 1)
        {
            spasi += strlen(str[i-1]) / 2;
            for ( j = strlen(str[i])-1; j >= 0; j--)
            {
                for ( k = 0; k < spasi; k++)
                {
                    printf(" ");
                }
                if (str[i][j] == 'a')
                    str[i][j] = '4';
                if (str[i][j] == 'i')
                    str[i][j] = '1';
                if (str[i][j] == 'e')
                    str[i][j] = '3';
                if (str[i][j] == 'o')
                    str[i][j] = '0';
                printf("%c\n", str[i][j]);
            }
        }
    }
    return 0;
}