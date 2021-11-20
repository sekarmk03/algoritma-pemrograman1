/*
    Saya Sekar Madu Kusumawardani [2007703] mengerjakan 
    soal TP10 Alpro 1 C1 2020 - BSMBC20
    dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahanNya maka saya tidak melakukan kecurangan
    seperti yang telah dispesifikasikan. Aamiin
*/

/*=== LIBRARY ===*/
#include "header.h" //-------> library yang dibuat sendiri

/*=== FUNGSI UTAMA ===*/
int main(){ //---------------> fungsi yang dijalankan pertama oleh mesin
/*--- Deklarasi dan inisialisasi var lokal ---*/
    char string[100]; //-----> untuk menampung string masukan
    int pal = 0; //----------> untuk menampung nilai fungsi pengecek palindrom
/*--- Input ---*/
    scanf("%s", string); //--> meminta masukan berupa string
/*--- Inisialisasi ---*/
    pal = CekPal(string); //-> nilai fungsi pengecek palindrom ditampung dalam var pal
/*--- Output ---*/
    Pola(pal, string); //----> tampilkan pola yang sesuai
/*--- Program dihentikan ---*/
    return 0; //-------------> mengembalikan nilai 0 ke fungsi main
}