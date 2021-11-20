#include <stdio.h>

int main(){
    char huruf; //deklarasi var

    //meminta char memasukan huruf
    scanf(" %c", &huruf);
        //simbol variabel yang dipanggil
                // perwakilan var yg diberi nilai
    int angka; //deklarasi var
    float angka_berkoma; //deklarasi var

    //meminta dua masukan
    scanf("%d%f", &angka, &angka_berkoma);
    //memasukan semua var
    printf("%c %d %f\n", huruf, angka, angka_berkoma);
    return 0;

}