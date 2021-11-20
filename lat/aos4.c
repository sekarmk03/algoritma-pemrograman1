#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d", &n);
    char arr[n][100];
    int maks = 0;
    int i = 0, j = 0;
    while (i < n)
    {
        scanf("%s", arr[i]);
        if (strlen(arr[i]) > maks)
        {
            maks = strlen(arr[i]);
        }
        i++;
    }
    char simpan[maks][n];
    for ( i = 0; i < maks; ++i)
    {
        for ( j = 0; j < n; ++j)
        {
            if (i < strlen(arr[j]))
            {
                simpan[i][j] = arr[j][i];
            }
            else
            {
                simpan[i][j] = ' ';
            }
        }
    }
    printf("\n");
    for ( i = 0; i < maks; ++i)
    {
        for ( j = 0; j < n; ++j)
        {
            printf("%c", simpan[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}