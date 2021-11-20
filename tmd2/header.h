/*
    Saya [Sekar Madu Kusumawardani_2007703] mengerjakan evaluasi Tugas Masa Depan
    dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya
    tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/


/*=== Library yg digunakan ===*/
#include<stdio.h> //--------------> library berisi fungsi input output
#include<string.h> //-------------> library berisi fungsi pengolah string


/*=== Variabel Global ===*/
//variabel yang digunakan berulang-ulang pada mesin
int mode; //----------------------> untuk menampung masukan mode 1 atau 2
int n; //-------------------------> untuk menampung banyak string yang dimasukan
char str[100][100]; //------------> untuk menampung string masukan
int tebal; //---------------------> untuk menampung pola ketebalan output
int Pstr[100]; //-----------------> untuk menampung panjang setiap string


/*=== Deklarasi Fungsi ===*/
int Akhir(int *i); //------------> untuk mengidentifikasi apakah string terakhir atau bukan


/*=== Deklarasi Prosedur ===*/
/*--- prosedur yang dipanggil di main ---*/
void Masukan(); //----------------> untuk menginput masukan mode, n, str, dan tebal
void Tampilan(); //---------------> untuk menampung prosedur pembentuk pola dan menampilkannya

/*--- prosedur penyatu pola
      membentuk pola per baris---*/
void Baris1(); //-----------------> untuk membuat pola baris ke-1
void Baris2(); //-----------------> untuk membuat pola baris ke-2
void Baris3(); //-----------------> untuk membuat pola baris ke-3
void Baris4(); //-----------------> untuk membuat pola baris ke-4
void Baris5(); //-----------------> untuk membuat pola baris ke-5

/*--- prosedur pola dibagi
      menjadi 7 pola berbeda
      untuk membentuk pola angka
      serta 1 pola pembatas angka ---*/
void Pola1(int tiga, int akhir); //----------> untuk membuat pola1 | |H| |
void Pola2(); //------------------> untuk membuat pola2 |H| |H|
void Pola3(int tiga, int satu); //> untuk membuat pola3 | | |H|
void Pola4(int akhir); //------------------> untuk membuat pola4 |H| | |
void Pola5(int akhir); //------------------> untuk membuat pola5 |H|H| |
void Pola6(); //------------------> untuk membuat pola6 | | | |
void Pola7(); //------------------> untuk membuat pola7 |H|H|H|
void Batas(); //------------------> untuk membuat pola batas setiap angka | |