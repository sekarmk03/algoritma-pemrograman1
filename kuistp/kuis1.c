/*
    Saya Sekar Madu Kusumawardani [2007703] mengerjakan 
    soal Kuis 1
    dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahanNya maka saya tidak melakukan kecurangan
    seperti yang telah dispesifikasikan. Aamiin
*/


/*=== Library yang digunakan ===*/
#include<stdio.h>       //library fungsi input-output
#include<string.h>      //library fungsi pengolah string


/*=== Fungsi/Method utama ===*/
int main(){


/*=== Deklarasi variabel ===*/
    char input[200], huruf[100];    //variabel array karakter
    //               ^untuk menampung huruf yang akan di cari dalam string input
    //   ^untuk menampung string yang akan di cek
    int syarat[100], jumlah[100];   //variabel array integer
    //               ^untuk menampung jumlah huruf yang dicari
    //  ^untuk menampung masukan syarat minimal jumlah huruf
    int i, j, n;                    //variabel iterator(i dan j) dan penentu looping(n)


/*=== Meminta masukan ===*/
    scanf("%s", &input);                        //meminta masukan berupa string
    scanf("%d", &n);                            //meminta masukan integer penentu loop berikutnya
    i = 0;
    while (i < n)                               //di loop sebanyak n
    {
        scanf(" %c %d", &huruf[i], &syarat[i]); //meminta masukan berupa huruf yang diminta dicari jumlahnya dan syarat jumlah minimalnya
        i++;
    }


/*=== Pengecekan jumlah huruf pada string input yang sama dengan huruf yang diminta ===*/
    i = 0;
    while (i < strlen(huruf))                   //diulang sebanyak jumlah huruf pada array huruf
    {
        jumlah[i] = 0;                          //membuat nol jumlah untuk mengantisipasi error
        j = 0;
        while (j < strlen(input))               //diulang sebanyak jumlah huruf pada string masukan
        {
            if (huruf[i] == input[j])           //pengecekan jika ada huruf pada string masukan yang sama dengan huruf yang diminta
            {
                jumlah[i]++;                    //maka nilai variabel jumlah bertambah sebanyak 1
            }
            j++;
        }


/*=== Mencetak keluaran ===*/
        if (jumlah[i] >= syarat[i])             //jika jumlahnya lebih besar atau sama dengan syarat minimal yang diminta
        {
            printf("aku sih yes\n");            //cetak ke layar "aku sih yes"
        }
        else                                    //jika tidak
        {
            printf("aku sih no\n");             //cetak ke layar "aku sih no"
        }
        i++;
    }
    

/*=== Menghentikan program ===*/
    return 0;
}