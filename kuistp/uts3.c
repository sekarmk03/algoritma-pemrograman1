#include<stdio.h>
/*  Saya Sekar Madu Kusumawardani 2007703 mengerjakan
    soal UTS Alpro1 2020 C1 dalam mata kuliah
    Algoritma dan Pemrograman untuk keberkahanNya maka
    saya tidak melakukan kecurangan seperti yang telah
    dispesifikasikan. Aamiin.
*/
int main(){
    int n;                      //variabel untuk menentukan panjang array
    int i;                      //variabel yang digunakan sebagai iterator
    int a;                      //variabel untuk menampung nilai array pertama sebelum di update
    int banyak=0;               //variabel untuk menentukan banyak index yang ingin ditukar
    scanf("%d", &n);            //meminta jumlah masukan array 1 dan 2
    int arr1[n];                //deklarasi array 1
    int arr2[n];                //deklarasi array 2

    //perulangan untuk mengisi array 1
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
        //meminta masukan untuk mengisi array 1
        //perulangan membuat semua index array terisi sesuai panjang array yang sudah ditentukan oleh n
    }

    //perulangan untuk mengisi array 2
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
        //akan diulang selama iterator kurang dari panjang array
    }

    //meminta masukan ada berapa nilai yang ingin ditukar
    scanf("%d", &banyak);

    int ind[banyak];            //array untuk menampung masukan index yang ingin ditukar

    //perulangan untuk menukar nilai
    for ( i = 0; i < banyak; i++)
    {
        scanf("%d", &ind[i]);
        //akan diulang sampai sebanyak variabel banyak
    }

    //perulangan untuk memproses penukaran isi array berdasarkan index
    for ( i = 0; i < banyak; i++)
    {
        //kondisi jika index kurang dari panjang array dan index minimal 0
        if (ind[i]<n && ind[i]>=0)
        {
            a=arr1[ind[i]];             //menyimpan nilai array pada variabel sebelum ditukar nilainya
            arr1[ind[i]]=arr2[ind[i]];  //penyimpanan nilai array kedua ke dalam array pertama (sesuai index)
            arr2[ind[i]]=a;             //penyimpanan nilai awal array pertama (sebelum diupdate) ke dalam array kedua (berdasarkan index)
            a=0;                        //mengembalikan nilai variabel penyimpan nilai menjadi 0
        }
    }
    
    //perulangan untuk mengeluarkan array yang sudah di update
    //hanya separuh array dan selang seling antara array 1 dan 2
    for ( i = 0; i < n/2; i++)
    {
        //tampilkan isi dari array pertama dan kedua yang sudah saling tukar
        printf("%d %d", arr1[i], arr2[i]);

        //kondisi agar spasi di print hanya jika iterator (sebagai penanda index) belum mencapai batas index
        if (i<(n/2)-1)
        {
            printf(" ");
        }
        //akan terus diulang sampai array muncul separuh bagian awal
    }

    printf("\n");           //membuat baris baru

    //perulangan untuk mengeluarkan array yang sudah di update
    //hanya separuh array dan selang seling antara array 1 dan 2
    for ( i = n/2; i < n; i++)
    {
        //tampilkan isi dari array pertama dan kedua yang sudah saling tukar
        printf("%d %d", arr1[i], arr2[i]);

        //kondisi agar spasi di print hanya jika iterator (sebagai penanda index) belum mencapai batas index
        if (i<n-1)
        {
            printf(" ");
        }
        //akan terus diulang mulai dari separuh array sampai akhir array
    }

    printf("\n");           //membuat baris baru
    return 0;
}
