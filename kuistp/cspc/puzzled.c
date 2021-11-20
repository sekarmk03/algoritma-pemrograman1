#include<stdio.h>
#include<string.h>
int main(){
    char pertama[100], kedua[100], pertamaB[100], keduaB[100], gabungan[200];
    int putar1 = 0, putar2 = 0;
    int i = 0, j = 0, a, k;
    int index = 0;
    scanf("%s", &pertama);
    scanf("%d", &putar1);
    scanf("%s", &kedua);
    scanf("%d", &putar2);
    j = 0;
    while (j < putar1)
    {
        i = 1+j;
        a = 0;
        while (i < strlen(pertama))
        {
            pertamaB[a] = pertama[i];
            a++;
            i++;
        }
        k = 0;
        while (k < j+1)
        {
            pertamaB[a]=pertama[k];
            a++;
            k++;
        }
        j++;
    }
    pertamaB[a]='\0';
    //printf("%s\n", pertamaB);
    j = 0;
    while (j < putar2)
    {
        i = 1+j;
        a = 0;
        while (i < strlen(kedua))
        {
            keduaB[i] = kedua[a];
            a++;
            i++;
        }
        k = 0;
        while (k < j+1)
        {
            keduaB[k]=kedua[a];
            a++;
            k++;
        }
        j++;
    }
    keduaB[a]='\0';
    //printf("%s\n", keduaB);
    
    i = 0;
    while (i < strlen(pertama) + strlen(kedua))
    {
        if (index < strlen(pertama))
        {
            gabungan[i] = pertamaB[index];
            printf("%c", gabungan[i]);
            i++;
        }
        if (index < strlen(kedua))
        {
            gabungan[i] = keduaB[index];
            printf("%c", gabungan[i]);
            i++;
        }
        index++;
    }
    printf("\n");
    return 0;
}