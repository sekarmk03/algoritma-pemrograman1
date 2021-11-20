/*
    Saya Sekar Madu Kusumawardani [2007703] mengerjakan 
    soal Ulangan Akhir Semester - PFTBSS20
    dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahanNya maka saya tidak melakukan kecurangan
    seperti yang telah dispesifikasikan. Aamiin
*/

/*=== LIBRARY ===*/
#include<stdio.h> //---------------------> library berisi fungsi input output yang sudah disediakan
#include<string.h> //--------------------> library berisi fungsi pengolah string

/*=== TIPE DATA TERSTRUKTUR ===*/
typedef struct
{
    char str1[50]; //--------------------> string pertama
    char str2[50]; //--------------------> string kedua
}str;
str arr[50]; //--------------------------> tipe data terstruktur dijadikan array

/*=== DEKLARASI PROSEDUR ===*/
void Masukan(int n); //------------------> prosedur untuk mengisi struct
void Banding(int n); //------------------> prosedur untuk membandingkan panjang string1 dan string2 pada array struct