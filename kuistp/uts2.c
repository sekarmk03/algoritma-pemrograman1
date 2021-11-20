#include<stdio.h>
/*  Saya Sekar Madu Kusumawardani 2007703 mengerjakan
    soal UTS Alpro1 2020 C1 dalam mata kuliah
    Algoritma dan Pemrograman untuk keberkahanNya maka
    saya tidak melakukan kecurangan seperti yang telah
    dispesifikasikan. Aamiin.
*/
int main(){
    int n;                      //variabel untuk menentukan panjang array
    int i,j;                    //variabel yang digunakan sebagai iterator
    int a;                      //variabel untuk menampung nilai array pertama sebelum di update
    int banyak=0;               //variabel untuk menentukan banyak index yang ingin ditukar
    int ind[banyak];            //array untuk menampung masukan index yang ingin ditukar
    scanf("%d", &n);            //meminta jumlah masukan array 1 dan 2
    int arr1[n];                //deklarasi array 1
    int arr2[n];                //deklarasi array 2

    //perulangan untuk mengisi array 1
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    //perulangan untuk mengisi array 2
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    //meminta masukan ada berapa nilai yang ingin ditukar
    scanf("%d", &banyak);

    //perulangan untuk menukar nilai
    for ( i = 0; i < banyak; i++)
    {
        scanf("%d", &ind[i]);
        if (ind[i]<n && ind[i]>=0)
        {
            a=arr1[ind[i]];
            arr1[ind[i]]=arr2[ind[i]];
            arr2[ind[i]]=a;
        }
        
    }

    //perulangan untuk mengeluarkan array yang sudah di update
    //hanya separuh array dan selang seling antara array 1 dan 2
    for ( i = 0; i < n/2; i++)
    {
        printf("%d %d", arr1[i], arr2[i]);
        if (i<(n/2)-1)
        {
            printf(" ");
        }
    }

    printf("\n");           //membuat baris baru

    //perulangan untuk mengeluarkan array yang sudah di update
    //hanya separuh array dan selang seling antara array 1 dan 2
    for ( i = (n-1)-(n/2-1); i <= n-1; i++)
    {
        printf("%d %d", arr1[i], arr2[i]);
        if (i<n-1)
        {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}