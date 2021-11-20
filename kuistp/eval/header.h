#include<stdio.h>
#include<string.h>

char str1[100], str2[100];

void Masukan(int n, char str[][100]); //Prosedur Meminta Masukan
int Gabung(int n, int m, char kalimat1[][100], char kalimat2[][100]); //Fungsi Menggabungkan String dan Mencari Jumlah Karakternya
int CekAna(); //Fungsi Pengecekan Anagram
void Keluaran(int ana); //Prosedur menampilkan keluaran