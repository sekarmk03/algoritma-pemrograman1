#include<stdio.h>
#include<string.h>

int main(){
    int i, j, n, spasi = 0;
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
            printf("%s", str[i]);
        }
        else if (i % 2 == 1)
        {
            for ( j = 0; j < spasi; j++)
            {
                printf(" ");
            }
            for ( j = strlen(str[i])-1; j >= 0; j--)
            {
                if (str[i][j] == 'a')
                    str[i][j] = '4';
                if (str[i][j] == 'i')
                    str[i][j] = '1';
                if (str[i][j] == 'e')
                    str[i][j] = '3';
                if (str[i][j] == 'o')
                    str[i][j] = '0';
                printf("%c", str[i][j]);
            }
        }
        printf("\n");
        spasi += strlen(str[i]) / 2;
    }
    return 0;
}