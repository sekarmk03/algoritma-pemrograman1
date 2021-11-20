#include<stdio.h>
#include<string.h>
int main(){
    int n, i, j, cek = 0, yes = 0;
    scanf("%d", &n);
    char str[100][100];
    for ( i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
        for ( j = 0; j < strlen(str[i]); j++)
        {
            if (str[i][j] >= 48 && str[i][j] <= 57)
            {
                cek++;
            }
        }
        if (cek >= 2)
        {
            yes++;
        }
        cek = 0;
    }
    if (yes >= 3)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}