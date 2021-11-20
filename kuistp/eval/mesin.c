#include "header.h"

/*--- Prosedur Meminta Masukan ---*/
void Masukan(int n, char str[][100]){
    int i; //variabel iterator
    //perulangan meminta masukan
    for ( i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
}

/*--- Fungsi Menggabungkan String dan Mencari Jumlah Karakternya ---*/
int Gabung(int n, int m, char kalimat1[][100], char kalimat2[][100]){
    int i, j, index = 0;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < strlen(kalimat1[i]); j++)
        {
            str1[index] = kalimat1[i][j];
            index++;
        }
    }
    index = 0;
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < strlen(kalimat2[i]); j++)
        {
            str2[index] = kalimat2[i][j];
            index++;
        }
    }
    return index;
}

/*--- Fungsi Pengecekan Anagram ---*/
int CekAna(){
    int i, j, sama = 0, stop = 0;
    //------------------^untuk pengontrol perulangan
    //--------^untuk menampung ada berapa yang berubah jadi 0
    //-----^iterator
    //--^iterator
/*--- Pengecekan apakah ditemukan karakter yang sama ---*/
    if (strlen(str1) == strlen(str2)) //jika banyak karakter pada kalimat 1 dan 2 sama
    {
        for ( i = 0; i < strlen(str1); i++) //diulang sebanyak karakter pada kalimat 1
        {
            j = 0;
            while (j < strlen(str2) && stop != 1) //diulang selama nilai variabel stop bukan 1
            {
                //jika ditemukan karakter yang sama
                if (str1[i] == str2[j])
                {
                    str2[j] = '0'; //ubah si karakter menjadi '0'
                    stop = 1; //ubah nilai stop menjadi 1 agar keluar dari perulangan
                }
                j++;
            }
            stop = 0;
        }
        //mengecek ada berapa karakter yang telah diubah menjadi '0'
        for ( i = 0; i < strlen(str2); i++)
        {
            if (str2[i] == '0')
            {
                sama++; //jumlah dari karakter '0' dalam string2 disimpan dalam variabel sama
            }
        }
        //jika jumlah nol nya sama dengan panjang string1
        if (sama == strlen(str1))
        {
            //maka anagram
            //kembalikan nilai 1
            return 1;
        }
        else //jika tidak
        {
            //maka bukan anagram
            //kembalikan nilai 0
            return 0;
        }
    }
    else //jika panjang kalimat 1 dan 2 sudah berbeda, maka sudah pasti bukan anagram
    {
        //maka bukan anagram
        //kembalikan nilai 0
        return 0;
    }
}

/*--- Prosedur menampilkan keluaran ---*/
void Keluaran(int ana){
    //jika nilai variabel ana = 1
    if (ana == 1)
    {
        //tampilkan :
        printf("Im ready!\n");
    }
    //jika nilai variabel ana = 0
    else if(ana == 0)
    {
        //tampilkan :
        printf("Not today!\n");
    }
}