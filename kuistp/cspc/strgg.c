#include<stdio.h>
#include<string.h>

int main(){
    int panjang, i, j, index;
    char str[100];
    int vokal = 0, konsonan = 0;
    scanf("%s", str);
    panjang = strlen(str);
    for ( i = 0; i < panjang; i++)
    {
        if (str[i] == 'a' || str[i] == 'i' || str[i] == 'u' || str[i] == 'e' || str[i] == 'o')
        {
            vokal++;
        }
        else
        {
            konsonan++;
        }
    }
    int baris;
    if ((vokal * konsonan) % 2 == 0)
    {
        baris = panjang/4;
        if (panjang % 4 != 0)
        {
            baris += 1;
        }
        index = 0;
        for ( i = 0; i < baris; i++)
        {
            for ( j = 0; j < 4; j++)
            {
                if (index < strlen(str))
                {
                    printf("%c", str[index]);
                    index++;
                }
            }
            printf("\n");
        }
    }
    else
    {
        baris = panjang/3;
        if (panjang % 3 != 0)
        {
            baris += 1;
        }
        index = 0;
        for ( i = 0; i < baris; i++)
        {
            for ( j = 0; j < 3; j++)
            {
                if (index < strlen(str))
                {
                    printf("%c", str[index]);
                    index++;
                }
            }
            printf("\n");
        }
    }
    return 0;
}