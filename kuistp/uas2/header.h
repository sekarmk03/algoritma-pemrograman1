/*
    Saya Sekar Madu Kusumawardani [2007703] mengerjakan 
    soal Ulangan Akhir Semester - PFTBSP20
    dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahanNya maka saya tidak melakukan kecurangan
    seperti yang telah dispesifikasikan. Aamiin
*/

/*=== LIBRARY ===*/
#include<stdio.h> //-------------------> library berisi fungsi input output
#include<string.h> //------------------> library berisi fungsi pengolah string

/*=== TIPE DATA TERSTRUKTUR ===*/
typedef struct
{
    int a, b; //-----------------------> tipe integer - sebagai paanjang dan lebar atau alas dan tinggi
    char str[50]; //-------------------> tipe char (string) - penentu operasi luas
}bks;
bks arr[100]; //-----------------------> struct dijadikan array

/*=== DEKLARASI VAR GLOBAL ===*/
float hasil[100];

/*=== DEKLARASI PROSEDUR DAN FUNGSI ===*/
void Masukan(int n); //----------------> prosedur untuk meminta masukan mengisi struct
int Cek(int *i); //--------------------> fungsi untuk mengecek string segitiga atau persegi
void Hitung(int cek, int *i); //-------> prosedur untuk menghitung luas
float Maks(int n); //-------------------> fungsi untuk mencari luas maksimal