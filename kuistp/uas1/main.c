/*
    Saya Sekar Madu Kusumawardani [2007703] mengerjakan 
    soal Ulangan Akhir Semester - PFTBSS20
    dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahanNya maka saya tidak melakukan kecurangan
    seperti yang telah dispesifikasikan. Aamiin
*/
/*=== LIBRARY ===*/
#include "header.h" //-----------------> menggunakan library yang disusun sendiri

/*=== FUNGSI UTAMA ===*/
int main(){ //-------------------------> fungsi yang pertama kali dijalankan
/*--- Deklarasi Var Lokal ---*/
    int n; //--------------------------> penentu banyaknya isi array struct
/*--- Meminta Masukan ---*/
    scanf("%d", &n); //----------------> meminta masukan untuk mengisi var n
    Masukan(n); //---------------------> memanggil prosedur untuk mengisi array of struct
/*--- Pengecekan dan Output ---*/
    Banding(n); //---------------------> memanggil prosedur untuk membandingkan panjang string
    return 0;
}