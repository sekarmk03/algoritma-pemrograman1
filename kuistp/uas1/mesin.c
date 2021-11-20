/*
    Saya Sekar Madu Kusumawardani [2007703] mengerjakan 
    soal Ulangan Akhir Semester - PFTBSS20
    dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahanNya maka saya tidak melakukan kecurangan
    seperti yang telah dispesifikasikan. Aamiin
*/

/*=== LIBRARY ===*/
#include "header.h" //----------------------------------------> menggunakan library yang disusun sendiri

/*=== PROSEDUR ===*/
/*=== Prosedur Masukan ===*/
void Masukan(int n){ //---------------------------------------> mengolah variabel lokal tipe int dari fungsi main
/*--- Deklarasi Var Lokal ---*/
    int i; //-------------------------------------------------> var lokal untuk iterator
/*--- Perulangan Masukan ---*/
    for ( i = 0; i < n; i++) //-------------------------------> perulangan meminta masukan sebanyak n
    {
        scanf("%s%s", &arr[i].str1, &arr[i].str2); //---------> masukan untuk mengisi struct yang tipenya global
        //--------------------------^mengisi string kedua (array of string)
        //------------^mengisi string pertama (array of string)
    }
}

/*=== Prosedur Perbandingan Panjang String ===*/
void Banding(int n){ //----------------------------------------> mengolah variabel lokal tipe int dari fungsi main
/*--- Deklarasi Var Lokal ---*/
    int i; //
/*--- Perulangan Pembandingan ---*/
    for ( i = 0; i < n; i++) //--------------------------------> diulang sebanyak n
    {
        if (strlen(arr[i].str1) > strlen(arr[i].str2)) //------> jika string pertama lebih panjang
        {
            printf("%s > %s\n", arr[i].str1, arr[i].str2);
        }
        if (strlen(arr[i].str1) < strlen(arr[i].str2)) //------> jika string kedua lebih panjang
        {
            printf("%s < %s\n", arr[i].str1, arr[i].str2);
        }
        if (strlen(arr[i].str1) == strlen(arr[i].str2)) //-----> jika kedua string sama panjang
        {
            printf("%s = %s\n", arr[i].str1, arr[i].str2);
        }
    }
}