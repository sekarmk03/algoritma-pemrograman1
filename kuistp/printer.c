#include <stdio.h>
/*  Saya Sekar Madu Kusumawardani 2007703 mengerjakan
    soal Kompetensi TP1 Alpro1 2020 C1 dalam mata kuliah
    Algoritma dan Pemrograman untuk keberkahanNya maka
    saya tidak melakukan kecurangan seperti yang telah
    dispesifikasikan. Aamiin.
*/
int main(){
    //method
    int mnt, dtk, jml, proses, jam, menit, detik, ist;
    //deklarasi variabel
    scanf("%d\n", &mnt);
    //meminta input menit per sekali cetak
    scanf("%d\n", &dtk);
    //meminta input detik per sekali cetak
    scanf("%d", &jml);
    //meminta input jumlah yang dicetak
    proses = ((mnt * jml)*60) + (dtk * jml);
    //proses perhitungan awal
    ist = (proses / 60) / 30;
    //menghitung berapa kali istirahat setiap 30 menit ngeprint
    jam = proses / 3600;
    //menghitung waktu yang dibutuhkan dalam (jamnya)
    menit = (proses / 60) + ist - (jam*60);
    //menghitung waktu yang dibutuhkan dalam (menitnya)
    detik = proses % 60;
    //menghitung waktu yang dibutuhkan (detiknya)
    printf("Istirahat sebanyak : %d\n", ist);
    //output berapa kali istirahat
    printf("Total waktu yang diperlukan : %d jam %d menit %d detik\n", jam, menit, detik);
    //output total waktu yang dibutuhkan
    return 0;
    //menghentikan program
}