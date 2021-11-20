#include <stdio.h>
int main(){
    int angka1, angka2;
    int hasilTambah, hasilKurang, hasilKali, hasilBagi, hasilMod;
    printf("Masukkan angka pertama : ");
    scanf("%d", &angka1);
    printf("Masukkan angka kedua :");
    scanf("%d", &angka2);
    hasilTambah = angka1 + angka2;
    hasilKurang = angka1 - angka2;
    hasilKali = angka1 * angka2;
    hasilBagi = angka1 / angka2;
    hasilMod = angka1 % angka2;
    printf("Pertambahan : %d\n", hasilTambah);
    printf("Pengurangan : $d\n", hasilKurang);
    printf("Perkalian : $d\n", hasilKali);
    printf("Pembagian : $d\n", hasilBagi);
    printf("Modulus : $d\n", hasilMod);

    return 0;
}