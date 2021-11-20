#include<stdio.h>                               //deklarasi penggunaan fungsi dalam library stdio.h


/*  Saya Sekar Madu Kusumawardani 2007703 mengerjakan
    soal Kompetensi TP5 Alpro1 2020 C1 dalam mata kuliah
    Algoritma dan Pemrograman untuk keberkahanNya maka
    saya tidak melakukan kecurangan seperti yang telah
    dispesifikasikan. Aamiin.
*/


/*--------------------------------------------------PROGRAM UNTUK MEMAJU MUNDURKAN HURUF DALAM ARRAY-----------------------------------------------------------*/


int main(){                                     //method / fungsi yg akan dijalankan pertama kali (int main untuk mengembalikan nilai integer)
    int n,i,j,a;                                //deklarasi variabel = ukuran array, iterator, dan variabel untuk proses mod
    scanf("%d", &n);                            //meminta masukan ukuran array dari user
    unsigned char arr[n];                       //deklarasi tipe dan variabel array yang akan di maju mundurkan
    for (i = 0; i < n; i++)                     //perulangan untuk mengulang seluruh program di dalamnya
    {
        scanf(" %c", &arr[i]);                  //meminta masukan untuk mengisi array sepanjang n
        if (arr[i]>=65 && arr[i]<=90)           //kondisi jika isi array adalah huruf kapital, maka mundur sebanyak n
        {
            a=n%26;                             //proses untuk mencari sisa hasil bagi
            arr[i]=arr[i]-a;                    //proses mengupdate array - dikurangi dengan a agar isi array mundur
            for ( j = 0; j < 26; j++)           //perulangan untuk mengulang proses pengecekan di dalamnya
            {
                if (arr[i]<65 && n<=26)         //kondisi jika isi array kurang dari A dan ukuran array 26 kebawah
                {
                    arr[i]=arr[i]+26;           //proses mengupdate array - ditambah dengan 26 saat isi array kurang dari A agar isi array mundur namun setelah sampai A, akan kembali mundur dari Z
                    //arr[i]=90-(64-arr[i]);    //proses lain yang dapat dipakai untuk mengupdate isi array
                    break;                      //agar keluar dari proses looping saat kondisi sudah terpenuhi
                }
                else if (arr[i]<65 && n>26)     //kondisi jika isi array kurang dari A dan ukuran array 26 keatas
                {
                    arr[i]=arr[i]+26;           //proses mengupdate array - akan terus ditambah dengan 26 selama isi array masih kurang dari A
                    //arr[i]=90-(64-arr[i]);    //proses lain yang dapat dipakai untuk mengupdate isi array
                }
            }
        }
        else if (arr[i]>=97 && arr[i]<=122)     //kondisi jika isi array adalah huruf kecil, maka maju sebanyak n
        {
            arr[i]=arr[i]+n;                    //proses untuk mengupdate array - ditambah dengan n agar maju sebanyak n
            for ( j = 0; j < 26; j++)           //perulangan untuk mengulang proses pengecekan di dalamnya
            {
                if (arr[i]>122 && n<=26)        //kondisi jika isi array lebih dar z dan ukuran array 26 kebawah
                {
                    arr[i]=96+(arr[i]-122);     //proses mengupdate array - agar array maju sebanyak n , akan kembali ke a saat sudah mencapai z
                    //arr[i]=arr[i]-26;         //proses lain yang dapat dipakai untuk mengupdate isi array
                    break;                      //agar keluar dari proses looping saat kondisi sudah terpenuhi
                }
                else if (arr[i]>122 && n>26)    //kondisi jika isi array lebih dari z dan ukuran array 26 keatas
                {
                    arr[i]=96+(arr[i]-122);     //proses mengupdate array - agar terus dioperasikan selama isi array masih lebih dari z
                    //arr[i]=arr[i]-26;         //proses lain yang dapat dipakai untuk mengupdate isi array
                }
            }
        }
        printf("%c", arr[i]);                   //mengeluarkan isi array yang telah di update (maju atau mundur)
    }
    printf("\n");                               //membuat baris baru agar tidak error di cspc
    return 0;                                   //agar program terhenti dengan normal (mengembalikan nilai 0 kepada integer)
}