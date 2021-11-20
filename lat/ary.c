#include<stdio.h>
#include<string.h>
int main(){
    char nama[100][100];
    int i,j, jumlah[50], panjang = 0;
    i = 0;
    do
    {
        scanf("%s", nama[i]);
        i++;
        panjang++;
    } while (strcmp(nama[i-1], "stop") != 0);
    i = 0;
    while (i < 50)
    {
        jumlah[i] = 0;
        i++;
    }
    int maks = 0, gen = 0, gan = 0;
    char terbanyak[100], ganjil[100][100], genap[100][100];
    i = 0;
    while (i < panjang-1)
    {
        j = 0;
        while (j < strlen(nama[i]))
        {
            jumlah[i] += nama[i][j];
            j++;
        }
        printf("jumlah ascii dari %s = %d\n", nama[i], jumlah[i]);
        if (jumlah[i] > maks)
        {
            maks = jumlah[i];
            int k = 0;
            while (k < strlen(nama[i]))
            {
                terbanyak[k] = nama[i][k];
                k++;
            }
            k = 0;
        }
        if (jumlah[i] % 2 == 1)
        {
            strcpy(ganjil[gan], nama[i]);
            gan++;
        }
        if (jumlah[i] % 2 == 0)
        {
            strcpy(genap[gen], nama[i]);
            gen++;
        }
        i++;
    }
    printf("\nascii terbanyak adalah %s\n\n", terbanyak);
    i = 0;
    printf("yang ganjil :\n");
    while (i < gan)
    {
        printf("%d . %s\n", i+1, ganjil[i]);
        i++;
    }
    printf("yang genap :\n");
    i = 0;
    while (i < gen)
    {
        printf("%d . %s\n", i+1, genap[i]);
        i++;
    }
    
    return 0;
}