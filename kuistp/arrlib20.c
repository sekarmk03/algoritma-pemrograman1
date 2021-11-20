/*
Saya [Muhammad Satria Ramadhani] mengerjakan Ulangan Tengah Semester [UTS (arrlib20)] dalam mata kuliah [Algoritma dan Pemrograman I]
       untuk keberkahan-Nya, maka saya tidak melakukan kecurangan sesuai yang telah dispesifikasikan. Aamiin.
*/
#include <stdio.h>

int main()
{
    // Deklarasi variabel umum.
    int i = 0, temp = 0; // Alokasi untuk batasan dan nilai sementara (digunakan di for-loop).
    int m = 0, n = 0; // Alokasi untuk masukkan jumlah array utama (n) dan array pengubah (m).

    // Masukan jumlah array utama.
    scanf("%d", &n);

    // Proses array pertama.
    int arr1[n]; // Alokasi untuk susunan array pertama.
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]); // Masukan susunan array pertama dari indeks ke-0 sampai ke-(n - 1). 
    }

    // Proses array kedua.
    int arr2[n]; // Alokasi untuk susunan array kedua.
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]); // Masukan susunan array kedua dari indeks ke-0 sampai ke-(n - 1).
    }

    // Masukan jumlah array pengubah.
    scanf("%d", &m);

    // Proses array ketiga.
    int arr3[m]; // Alokasi untuk susunan array pengubah indeks.
    for(i = 0; i < m; i++)
    {
        scanf("%d", &arr3[i]); // Masukan susunan array pengubah indeks.
    }

    // Proses penukaran nilai.
    for(i = 0; i < m; i++)
    {
        temp = arr1[arr3[i]]; // Nilai Array pertama disimpan di variabel sementara.
        arr1[arr3[i]] = arr2[arr3[i]]; // Nilai Array kedua dimasukkan ke array pertama.
        arr2[arr3[i]] = temp; // Nilai Array kedua mengambil nilai yang disimpan di variabel sementara.
        temp = 0; // Mengembalikan nilai variabel sementara, untuk berjaga-jaga.
    }

    // Proses keluaran baris pertama.
    for(i = 0; i < (n / 2); i++)
    {
        // Keluaran array pertama dan kedua dari awal sampai tengah, secara bergiliran.
        printf("%d ", arr1[i]);
        printf("%d", arr2[i]);

        // Pemeriksaan agar nilai terakhir tidak menghasilkan spasi. 
        if(i != ((n / 2) - 1))
        {
            printf(" ");
        }
    }
    printf("\n");

    // Proses keluaran baris kedua.
    for(i = (n / 2); i < n; i++)
    {
        // Keluaran array pertama dan kedua dari tengah sampai akhir, secara bergiliran.
        printf("%d ", arr1[i]);
        printf("%d", arr2[i]);

        // Pemeriksaan agar nilai terakhir tidak menghasilkan spasi.
        if(i != (n - 1))
        {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
