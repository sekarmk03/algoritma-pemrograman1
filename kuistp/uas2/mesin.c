/*
    Saya Sekar Madu Kusumawardani [2007703] mengerjakan 
    soal Ulangan Akhir Semester - PFTBSP20
    dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahanNya maka saya tidak melakukan kecurangan
    seperti yang telah dispesifikasikan. Aamiin
*/

/*=== LIBRARY ===*/
#include "header.h" //--------------------------------------------> menggunakan library yang disusun sendiri

/*=== PROSEDUR DAN FUNGSI ===*/
/*=== Prosedur Masukan ===*/
void Masukan(int n){ //-------------------------------------------> mengolah integer dari var lokal fungsi main
/*--- Deklarasi var Lokal ---*/
    int i; //-----------------------------------------------------> iterator
/*--- Perulangan Mengisi Struct ---*/
    for ( i = 0; i < n; i++) //-----------------------------------> diulang sebanyak n
    {
        scanf("%d%d%s", &arr[i].a, &arr[i].b, arr[i].str); //-----> mengisi struct
        //------------------------------------^mengisi string penentu luas segitiga atau persegi
        //-------------------------^mengisi integer lebar atau tinggi
        //--------------^mengisi integer panjang atau alas
    }
}

/*=== Fungsi Cek Segitiga atau Persegi ===*/
int Cek(int *i){ //-----------------------------------------------> mengolah integer pass by reference dari fungsi main
/*--- Pengecekan ---*/
    if (strcmp(arr[*i].str, "segitiga") == 0) //------------------> jika string = "segitiga"
    {
        return 1; //----------------------------------------------> kembalikan nilai 1 pada fungsi
    }
    if (strcmp(arr[*i].str, "persegi") == 0) //-------------------> jika string = "persegi"
    {
        return 2; //----------------------------------------------> kembalikan nilai 2 pada fungsi
    }
}

/*=== Prosedur Penghitung Luas ===*/
void Hitung(int cek, int *i){ //----------------------------------> mengolah variabel lokal tipe integer dari fungsi main dan pass by reference integer dari main
/*--- Pengecekan ---*/
    if (cek == 1) //----------------------------------------------> jika segitiga
    {
        hasil[*i] = arr[*i].a * arr[*i].b * 0.5; //---------------> rumus luas segitiga
        printf("%0.2f\n", hasil[*i]); //--------------------------> langsung tampilkan dengan dua angka di belakang koma
    }
    if (cek == 2) //----------------------------------------------> jika persegi
    {
        hasil[*i] = arr[*i].a * arr[*i].b; //---------------------> rumus luas persegi
        printf("%0.2f\n", hasil[*i]); //--------------------------> langsung tampilkan dengan dua angka di belakang koma
    }
}

/*=== Fungsi Mencari yang Terluas ===*/
float Maks(int n){ //---------------------------------------------> mengolah variabel lokal tipe integer dari fungsi main
/*--- Deklarasi Var Lokal ---*/
    float maks = 0; //--------------------------------------------> var tipe float untuk mencari luas maksimal
    int i = 0; //-------------------------------------------------> inisialiasi iterator
/*--- Proses mencari nilai maksimal ---*/
    maks = hasil[i]; //-------------------------------------------> menyimpan nilai array hasil index pertama di variabel maks
    for ( i = 1; i < n; i++) //-----------------------------------> diulang atau di cek sebanyak n
    {
        if (maks < hasil[i]) //-----------------------------------> jika nilai array hasil ke 1,... lebih besar dari nilai variabel maks sebelumnya,
        {
            maks = hasil[i]; //-----------------------------------> simpan nilainya di dalam variabel maks
        }
    }
/*--- Mengembalikan nilai variabel maks ke fungsi ---*/
    return maks;
}