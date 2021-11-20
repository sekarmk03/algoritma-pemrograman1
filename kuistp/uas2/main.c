/*
    Saya Sekar Madu Kusumawardani [2007703] mengerjakan 
    soal Ulangan Akhir Semester - PFTBSP20
    dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahanNya maka saya tidak melakukan kecurangan
    seperti yang telah dispesifikasikan. Aamiin
*/

/*=== LIBRARY ===*/
#include "header.h" //-------------------------> menggunakan library yang disusun sendiri

/*=== FUNGSI UTAMA ===*/
int main(){ //---------------------------------> fungsi yang pertama kali dijalankan
/*--- Deklarasi Var Lokal ---*/
    int n, i, cek = 0;
    //--------^untuk menampung nilai fungsi Cek
    //-----^iterator
    //--^penentu banyak masukan
/*--- Meminta Masukan ---*/
    scanf("%d", &n); //------------------------> meminta masukan untuk mengisi nilai n sebagai penentu masukan struct
    Masukan(n); //-----------------------------> memanggil prosedur masukan untuk mengisi struct
/*--- Proses Cek dan Hitung---*/
    for ( i = 0; i < n; i++) //----------------> diulang sebanyak n
    {
        cek = Cek(&i); //----------------------> menyimpan nilai fungsi Cek pada variabel cek
        Hitung(cek, &i); //--------------------> menghitung luas di prosedur Hitung berdasarkan nilai dari variabel cek
    }
/*--- Menampilkan yang Terluas ---*/
    printf("maksimal: %0.2f\n", Maks(n)); //---> pengecekan yang paling luas dan menampilkan nilainya
    return 0;
}