#include<stdio.h>
#include<string.h>
int main(){
    int n, i, j, cek = 0, yes = 0, panjang = 0;
    scanf("%d", &n);
    char input[100][100];
    for ( i = 0; i < n; i++)
    {
        scanf("%s", &input[i]);
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < strlen(input[i]); j++)
        {
            if (input[i][j] == 'b' && input[i][j+1] == 'a')
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