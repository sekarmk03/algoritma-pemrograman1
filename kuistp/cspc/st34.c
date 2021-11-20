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
    //printf("vokal : %d\nkonsonan : %d\n", vokal, konsonan);
    n = ((vokal * konsonan) % 2 == 0) ? 4 : 3;
    if (panjang <= n*2)
    {
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
        else if (panjang > n)
        {
            for ( j = 0; j < n; j++)
            {
                for ( i = 0; i < j; i++)
                {
                    printf(" ");
                }
                printf("%c\n", input[index]);
                index++;
            }
            printf("%d", panjang % index);
            for ( i = 0; i < panjang % index; i++)
            {
                printf("%c", input[index]);
                index++;
            }
            printf("\n");
        }
    }
    else
    {
        for ( k = 0; k < (panjang+1)/(n*2); k++)
        {
            for ( j = 0; j < n; j++)
            {
                for ( i = 0; i < j; i++)
                {
                    printf(" ");
                }
                printf("%c\n", input[index]);
                index++;
            }
            for ( i = 0; i < n; i++)
            {
                printf("%c", input[index]);
                index++;
            }
            printf("\n");
        }
    }
    return 0;
}