#include<stdio.h>
int main(){
    int laba[4]={100, 150, 75, 175}; //array untuk mendata laba gorengan
    int ge, ba, pis, ci, hari; //variabel untuk inputan user
    int sehari, total; //variabel untuk proses dan output

    scanf("%d%d%d%d%d", &ge, &ba, &pis, &ci, &hari); //meminta masukan jumlah gorengan yang dibeli
    sehari=(laba[0]*ge)+(laba[1]*ba)+(laba[2]*pis)+(laba[3]*ci); //proses menghitung laba dalam 1 hari
    total=hari*sehari; //laba sehari dikali jumlah hari

    printf("%d\n", total); //tampilkan total laba dalam n hari
    return 0;
}