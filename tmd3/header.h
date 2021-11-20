/*
    Saya [Sekar Madu Kusumawardani_2007703] mengerjakan evaluasi Tugas Masa Depan
    dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya
    tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
/*
    Catatan :
    Ini adalah file revisi kedua (Versi 2). Saya menemukan algoritma yang lebih efektif
    dibandingkan dengan algoritma pada file pertama. Saya akan terus
    berusaha agar ke depannya saya dapat menemukan algoritma yang lebih
    efektif dibandingkan algoritma pada revisi kedua ini.
    - Versi 1 di upload tgl 28 Des 2020
    - Versi 2 di upload tgl 5 Jan 2020
*/

/*=== LIBRARY ===*/
#include<stdio.h> //----------------------------------------------------------> library fungsi IO
#include<string.h> //---------------------------------------------------------> library fungsi manipulasi string

/*=== VARIABEL GLOBAL ===*/
int mode; //------------------------------------------------------------------> penampung nilai mode (dari user)
int n; //---------------------------------------------------------------------> penampung jumlah string (dari user)
char str[100][100]; //--------------------------------------------------------> penampung string (dari user)
int tebal; //-----------------------------------------------------------------> penampung nilai ketebalan pola (dari user)
int Pstr[100]; //-------------------------------------------------------------> penampung panjang string

/*=== FUNGSI & PROSEDUR ===*/
int Akhir(int *i); //---------------------------------------------------------> fungsi pendeteksi string terakhir
void Masukan(); //------------------------------------------------------------> prosedur masukan user
void Tampilan(); //-----------------------------------------------------------> prosedur tampilan
void Baris1(); //--------------------------------]
void Baris2(); //--------------------------------]
void Baris3(); //--------------------------------]----------------------------> prosedur pola per baris
void Baris4(); //--------------------------------]
void Baris5(); //--------------------------------]
void Pola(int batas, int a, int b, int c, int satu, int tiga, int akhir); //--> prosedur pola