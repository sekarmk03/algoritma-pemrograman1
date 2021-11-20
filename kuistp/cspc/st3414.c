#include<stdio.h>
#include<string.h>
int main(){
    int panjang, vokal = 0, konsonan = 0, i, j, k, index = 0, n = 0;
    char input[100];
    scanf("%s", input);
    panjang = strlen(input);
    for ( i = 0; i < panjang; i++)
    {
        if (input[i] == 'a' || input[i] == 'i' || input[i] == 'u' || input[i] == 'e' || input[i] == 'o')
        {
            vokal++;
        }
        else
        {
            konsonan++;
        }
    }
    n = ((vokal * konsonan) % 2 == 0) ? 4 : 3;
    if (panjang <= n)
    {
        for ( j = 0; j < panjang; j++)
        {
            for ( i = 0; i < j; i++)
            {
                printf(" ");
            }
            printf("%c\n", input[index]);
            index++;
        }
    }
    else
    {
        while (panjang > 0)
        {
            for ( j = 0; j < n; j++)
            {
                if (panjang == 0)
                {
                    break;
                }
                for ( i = 0; i < j; i++)
                {
                    printf(" ");
                }
                printf("%c\n", input[index]);
                index++;
                panjang--;
            }
            if (panjang == 0)
            {
                break;
            }
            //printf("== %d ==\n", panjang);
            for ( i = 0; i < n; i++)
            {
                if(panjang > 0)
                printf("%c", input[index]);
                index++;
                panjang--;
            }
            printf("\n");
            //printf("== %d ==\n", panjang);
            //panjang = panjang;
        }
    }
    return 0;
}