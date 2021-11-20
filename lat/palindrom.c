#include<stdio.h>
#include<string.h>

int main(){
    int angka = 0, kebalikan = 0, hasilmod = 0, simpanAngka = 0, panjangAngka = 0, simpanAngka2, i;
    char arr[100];
    for (i = 0; i < 5; i++)
    {
        scanf("%c", &arr[i]);
    }
    arr[i] = '\0';
    strrev(arr);
    printf("%s\n", arr);
    scanf("%d", &angka);
    simpanAngka2 = angka;
    simpanAngka = angka;
    while (simpanAngka != 0)
    {
        simpanAngka /= 10;
        panjangAngka++;
    }
    //printf("%d", panjangAngka);
    for (i = 0; i < panjangAngka; i++)
    {
        hasilmod = simpanAngka2 % 10;
        kebalikan = kebalikan * 10 + hasilmod;
        simpanAngka2 /= 10;
    }
    if (kebalikan == angka)
    {
        printf("ini palindrom\n");
    }
    else
    {
        printf("ini bukan palindrom\n");
    }
    
    return 0;
}