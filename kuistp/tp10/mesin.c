/*
    Saya Sekar Madu Kusumawardani [2007703] mengerjakan 
    soal TP10 Alpro 1 C1 2020 - BSMBC20
    dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahanNya maka saya tidak melakukan kecurangan
    seperti yang telah dispesifikasikan. Aamiin
*/


/*=== LIBRARY ===*/
#include "header.h" //--------------------------> library yang dibuat sendiri


/*=== FUNGSI ===*/
/*=== Fungsi Pengecekan Palindrom ===*/
int CekPal(char str[]){ //----------------------> mengolah variabel array of char
/*--- Deklarasi var lokal ---*/
    int pal = 0; //-----------------------------> untuk memberi nilai pada fungsi (di return)
    int i, j; //--------------------------------> untuk iterator loop
/*--- Inisialisasi nilai var ---*/
    j = strlen(str)-1; //-----------------------> nilai awal = index terbesar dalam string
    i = 0; //-----------------------------------> nilai awal = index 0
/*--- Perulangan pengecekan huruf yang sama ---*/
    while (str[i] == str[j] && i < j) //--------> ulang jika karakter yang berseberangan sama dan i < j
    {
        i++; j--; //----------------------------> increment i dan decrement j
    }
    if (i >= j) pal = 1; //---------------------> jika i >= j maka palindrom 
    return pal;
}


/*=== PROSEDUR ===*/
/*=== Prosedur Pola String Ganjil ===*/
void Pola1(char str[]){ //----------------------> mengolah variabel array of char
/*--- Deklarasi var lokal ---*/
    int i, j, index = 0; //---------------------> var iterator loop dan penanda index
/*--- Perulangan Pola Atas ---*/
    for ( i = 0; i < strlen(str)/2; i++) //-----> diulang sebanyak panjang string dibagi dua
    {
        /*--- Pola Spasi ---*/
        for ( j = 0; j < strlen(str)/2; j++) //-> diulang sebanyak panjang string dibagi dua
        {
            printf(" ");
        }
        /*--- Pola Huruf ---*/
        printf("%c\n", str[i]);
    }
    index = i-1; //-----------------------------> penanda index awal untuk i selanjutnya
/*--- Pola Tengah ---*/
    printf("%s\n", str);
/*--- Perulangan Pola Bawah ---*/
    for ( i = index; i >= 0; i--) //------------> diulang sampai mencapai index 0 (membalik perulangan pola atas)
    {
        /*--- Pola Spasi ---*/
        for ( j = 0; j < strlen(str)/2; j++) //-> diulang sebanyak panjang string dibagi dua
        {
            printf(" ");
        }
        /*--- Pola Huruf ---*/
        printf("%c\n", str[i]);
    }
}

/*=== Prosedur Pola String Genap ===*/
void Pola2(char str[]){ //----------------------> mengolah variabel array of char
/*--- Deklarasi dan inisialisasi var lokal ---*/
    char str2[100]; //--------------------------> untuk menampung string sementara
    strcpy(str2, str); //-----------------------> menyalin string ke penampung
    int i, j = strlen(str)/2; //----------------> var iterator loop dan penanda index tengah
    int index = j-1; //-------------------------> var penanda index
    str[j] = ' '; //----------------------------> ganti huruf index tengah dengan spasi
/*--- Perulangan memasukan huruf sisa (setelah dibagi 2) ---*/
    for ( i = j+1; i < strlen(str); i++) //-----> huruf yang di update mulai dari index tengah + 1
    {
        str[i] = str2[index]; //----------------> update huruf
        index--; //-----------------------------> decrement index
    }
    str[i] = str2[index]; //--------------------> update huruf paling ujungnya
    str[i+1] = '\0'; //-------------------------> huruf paling ujung + 1 isi dengan null untuk menutup string
    Pola1(str); //------------------------------> setelah itu polanya sama seperti pola string ganjil
}

/*=== Prosedur Pemanggil Pola ===*/
void Pola(int a, char str[]){ //----------------> mengolah variabel integer dan array of string
/*--- Deklarasi dan inisialisasi var lokal ---*/
    int panjang = strlen(str); //---------------> var pembantu untuk menampung panjang array
/*--- Pengecekan pola jika palindrom dan bukan palindrom ---*/
    if (a == 0) //------------------------------> jika bukan palindrom
        printf("%s\n", str); //-----------------> tampilkan string tanpa pola
    else if (a == 1) //-------------------------> jika palindrom
    {
        /*--- Pengecekan string ganjil/genap ---*/
        if (panjang % 2 == 1) //----------------> jika ganjil
            Pola1(str); //----------------------> tampilkan pola 1
        else if (panjang % 2 == 0) //-----------> jika genap
            Pola2(str); //----------------------> tampilkan pola 2
    }
}