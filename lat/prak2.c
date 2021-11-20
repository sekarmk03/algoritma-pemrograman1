#include <stdio.h>

int main (){
    //deklarasi variabel
    int angka;

    //meminta user memasukkan angka
    printf("masukkan angka : ");
    scanf("%d", &angka);

    //pemilihan satu kondisi
    if (angka<10)
    {
        printf("nilainya kurang dari sepuluh\n");
    }
    return 0;
}