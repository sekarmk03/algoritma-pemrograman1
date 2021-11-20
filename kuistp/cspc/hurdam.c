#include<stdio.h>
#include<string.h>
int main(){
    int n;
    int temp = -1;
    char input[100];
    int hurufsama[100];
    char tampungan[100];
    int beda = 0;
    scanf("%d", &n);
    scanf("%s", input);
    int i = 0, j = 0, k = 0;
    tampungan[0] = input[0];
    //padepokandombagarutpasirhalang
    //p
    k = 1;
    j = 0;
    int panjang;
    panjang = strlen(input);
    int p = panjang;
    int pTampung;
    pTampung = 1;
    //printf("pTampung : %d\n", pTampung);
    for ( i = 1; i < panjang; i++)
    {
        for ( j = 0; j < pTampung; j++)
        {
            if (input[i] != tampungan[j])
            {
                beda++;
            }
        }
        if (beda == pTampung)
        {
            tampungan[k] = input[i];
            k++;    
        }
        tampungan[k] = '\0';
        pTampung = strlen(tampungan);
        //printf("-> pTampung : %d\n", pTampung);
        beda = 0;
    }
    //printf("%s\n", tampungan);
    for ( i = 0; i < k; i++)
    {
        hurufsama[i] = 0;
        for(j = 0; j < p-i; j++)
        {
            if (tampungan[i] == input[i+j])
            {
                hurufsama[i]++;
            }
        }
        //printf("%c = %d\n", tampungan[i], hurufsama[i]);
    }
    int idxMax, idxMin, tempA;
    char tempB;
    for ( i = 0; i < pTampung-1; i++)
    {
        idxMax = i;
        for ( j = i+1; j < pTampung; j++)
        {
            if (hurufsama[j] > hurufsama[idxMax] && hurufsama[j] != hurufsama[idxMax])
            {
                idxMax = j;
            }
        }
        tempA = hurufsama[idxMax];
        tempB = tampungan[idxMax];
        hurufsama[idxMax] = hurufsama[i];
        tampungan[idxMax] = tampungan[i];
        hurufsama[i] = tempA;
        tampungan[i] = tempB;
    }
    for ( i = 0; i < pTampung; i++)
    {
        idxMin = i;
        for ( j = i+1; j < pTampung; j++)
        {
            if (tampungan[j] < tampungan[idxMin] && hurufsama[j] == hurufsama[idxMin])
            {
                idxMin = j;
            }
        }
        tempB = tampungan[idxMin];
        tempA = hurufsama[idxMin];
        tampungan[idxMin] = tampungan[i];
        hurufsama[idxMin] = hurufsama[i];
        tampungan[i] = tempB;
        hurufsama[i] = tempA;
    }
    for ( i = 0; i < n; i++)
    {
        printf("%c %d\n", tampungan[i], hurufsama[i]);
    }
    return 0;
}