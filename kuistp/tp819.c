#include<stdio.h>
#include<string.h>
int main(){
    char pertama[100][100];
    int i = 0, j = 0;
    do
    {
        scanf("%s", &pertama[i]);
        i++;
    } while (strcmp(pertama[i-1], "ngak") != 0);
    int panjang = i-1;
    char kedua[panjang][100];
    char ketiga[panjang][100];
    i = 0;
    int maks = 0;
    int indeks = 0;
    while (i < panjang)
    {
        scanf("%s", &kedua[i]);
        if (strlen(pertama[i]) >= strlen(kedua[i]))
            strcpy(ketiga[i], pertama[i]);
        else
            strcpy(ketiga[i], kedua[i]);
        if(strlen(ketiga[i]) > maks)
        {
            indeks = strlen(ketiga[i]) + panjang-1;
            maks = strlen(ketiga[i]);
        }
        i++;
    }
    printf("indeks : %d maks %d\n", indeks, maks);
    char output[indeks][panjang];
    /*for ( i = 0; i < indeks; i++)
    {
        if (i <= panjang-2)
        {
            int k = 1;
            while (k <= panjang-2)
            {
                output[i][k+j] = ' ';
                k++;
            }
            i++;
        }
        for ( j = 0; j < panjang; j++)
        {
            
            output[i][j] = ketiga[j][i];
            printf("%c", output[i][j]);
        }
        printf("\n");
    }*/
    for ( i = 0; i < panjang; i++)
    {
        printf("%s", ketiga[i]);
    }

    return 0;
}