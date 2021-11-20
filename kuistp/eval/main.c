#include "header.h"
/*
    Saya Sekar Madu Kusumawardani [2007703] mengerjakan 
    soal Evaluasi 2
    dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahanNya maka saya tidak melakukan kecurangan
    seperti yang telah dispesifikasikan. Aamiin
*/

int main(){
/*--- Deklarasi Var Lokal ---*/
    int n = 0, m = 0, cek1 = 0, cek2 = 0, ana = 0, tampung = 0;
    //------------------------------------^variabel untuk menampung fungsi CekAna
    //--------------------------^variabel untuk menampung banyak karakter dalam kalimat 1
    //----------------^variabel untuk menampung banyak karakter dalam kalimat 2
    //---------^variabel untuk menentukan banyak kata pada kalimat 1
    //--^variabel untuk menentukan banyak kata pada kalimat 2
    char kalimat1[100][100], kalimat2[100][100];
    //-----------------------^variabel untuk menampung kalimat kedua
    //---^variabel untuk menampung kalimat pertama
    //char str1[100], str2[100];
    //--------------^variabel untuk menampung kalimat kedua setelah digabung
    //---^variabel untuk menampung kalimat pertama setelah digabung
/*--- Meminta Masukan ---*/
    scanf("%d", &n);
    //----------^meminta masukan untuk disimpan dalam variabel n
    Masukan(n, kalimat1); //memanggil prosedur masukan untuk memasukkan string
    scanf("%d", &m);
    //----------^meminta masukan untuk disimpan dalam variabel m
    Masukan(m, kalimat2); //memanggil prosedur masukan untuk memasukkan string
/*--- Proses Pengecekan Anagram ---*/
    tampung = Gabung(n, m, kalimat1, kalimat2); //mengisi variabel cek1 dengan nilai dari fungsi Gabung
    //printf("%s\n", str1);
    //printf("%s\n", str2);
    //cek2 = Gabung(m, kalimat2); //mengisi variabel cek2 dengan nilai dari fungsi Gabung
    //printf("%d", cek2);
    ana = CekAna(cek1, cek2); //mengisi variabel ana dengan nilai dari fungsi CekAna
    //printf("%d", ana);
    //printf("%s\n", str2);
/*--- Menampilkan Keluaran ---*/
    Keluaran(ana); //memanggil prosedur keluaran untuk menampilkan hasil
    return 0;
}