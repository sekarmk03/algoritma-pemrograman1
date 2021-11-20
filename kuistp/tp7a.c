/*
    Saya Sekar Madu Kusumawardani [2007703] mengerjakan 
    soal TP7 Alpro 1 C1 2020 - PSPW20
    dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahanNya maka saya tidak melakukan kecurangan
    seperti yang telah dispesifikasikan. Aamiin
*/

//library yang digunakan
#include<stdio.h>       //library input output
#include<string.h>      //library manipulasi string

//deklarasi fungsi
int main()              //fungsi main = fungsi utama dalam program = selalu dijalankan pertama kali
{             

//deklarasi variabel
    char utama[100];                    //untuk menampung kata utama
    char kunci[100];                    //untuk menampung kata kunci
    char tanpakunci[100];               //untuk menampung kata tanpa kunci
    int lenU = 0, lenK = 0;             //untuk menampung panjang string utama dan string kunci
    int sama = 0, pindah = 0, fin = 0;  //untuk pengecekan karakter2 string
    int i, j;                           //iterator yang digunakan pada looping

//perulangan untuk mengisi string utama dengan karakter
//do-while menjalankan lebih dulu baru mengecek kondisi
    i = 0;      //penetapan nilai awal iterator
    do
    {
        scanf(" %c", &utama[i]);    //meminta masukan karakter
        i++;                        //increment iterator sebanyak 1 setiap mengulang
    } while (utama[i-1] != '|');    //kondisi yang harus dipenuhi agar perulangan berlanjut
    utama[i] = '\0';                //mengisi index terakhir string utama dengan null untuk mengantisipasi error

//meminta masukan untuk mengisi string kunci
    scanf("%s", &kunci);             //masukan langsung berupa string/kata (bukan karakter satu per satu)

//menyimpan panjang string pada variabel
    lenU = strlen(utama)-1;         //mengambil panjang string menggunakan fungsi strlen pada library string.h
    lenK = strlen(kunci);           //mengambil panjang string menggunakan fungsi strlen pada library string.h

//proses mengidentifikasi kata yang sama pada string utama dengan kata pada string kunci
    i = 0;              //penetapan nilai awal iterator
    while (i < lenU)    //akan terus diulang selama i kurang dari panjang string utama
    {
        //pengecekan apakah karakter yang sama pada string utama dengan string kunci letaknya berurutan
        j = 0;                              //penetapan nilai awal iterator
        while (j < lenK)                    //akan terus diulang selama j kurang dari panjang string kunci
        {
            if (utama[i+j] == kunci[j])     //pengecekan jika ada karakter yang sama
            {
                sama++;                     //jika ada, nilai variabel sama akan bertambah sebanyak 1
            }
            j++;                            //increment nilai j sebanyak 1
        }
        //proses menghapus karakter yang sama
        j = 0;                  //penetapan nilai awal iterator
        if (sama == lenK)       //pengecekan apakah jumlah karakter yang sama = panjang string kunci
        {
            while (j < lenK)    //jika iya, masuk ke perulangan dan akan diulang selama j kurang dari panjang string kunci
            {
                utama[i+j] = 0; //karakter yang sama nilainya diubah menjadi null agar nantinya dapat dibedakan dengan karakter lain (teridentifikasi)
                pindah++;       //nilai variabel pindah bertambah sebanyak 1 setiap perulangan
                                //variabel ini nantinya digunakan dalam proses pemindahan karakter string yang berbeda ke string yang baru
                j++;            //increment nilai j sebanyak 1
            }
        }
        sama = 0;               //mengembalikan nilai awal variabel sama
        j = 0;                  //mengembalikan nilai awal variabel j
        i++;                    //increment nilai i sebanyak 1 untuk mengecek kembali karakter selanjutnya pada string utama
    }

//proses output pertama
    if (pindah == lenU)                     //jika nilai variabel pindah sama dengan panjang string utama
    {                                       //maka string utama dianggap hilang
        printf("=== Kalimat Hilang ===\n"); //cetak kalimat ke layar saat kondisi pengecekan bernilai true
    }
    else                                    //jika tidak (false), maka :
    {
        printf("Tanpa kata kunci: ");       //cetak kalimat ke layar

        //proses mengeluarkan string baru yang kata kuncinya sudah dihapus
        i = 0;                              //penetapan nilai awal iterator
        j = 0;                              //penetapan nilai awal iterator
        //proses memindahkan string yang tidak bernilai null ke string yang baru
        while (i < lenU)                    //proses diulang selama i kurang dari panjang string utama
        {
            if (utama[i] != 0)              //jika karakter tidak sama dengan null maka karakter ditransfer ke string baru
            {
                tanpakunci[fin] = utama[i]; //karakter dipindahkan dari string utama ke string tanpakunci
                fin++;                      //variabel untuk mengidentifikasi panjang string tanpakunci
            }
            i++;                            //increment nilai i sebanyak 1 untuk mengulang proses
        }
        tanpakunci[fin] = '\0';               //mengisi index terakhir string tanpakunci dengan null untuk mengantisipasi error
        printf("%s\n\n", tanpakunci);       //menampilkan isi string ke layar
    }

//proses output kedua (membuat pola dari string tanpa kunci)
    int panjang = fin;                      //memindahkan nilai pada variabel fin ke variabel panjang

    //pola barisan ketika panjang string tanpakunci GANJIL atau GENAP
    //pola bagian 1
    /*    ganjil          genap
        *       *       *      *
         *     *         *    *
          *   *           *  *
           * *             **
    */
    j = 0;                                  //menetapkan nilai awal iterator
    while (j < panjang/2)                   //akan diulang selama j kurang dari panjang string tanpakunci dibagi 2
    {
        //membuat pola spasi di awal
        i = 0;
        while (i < j)
        {
            printf(" ");
            i++;
        }
        //membuat pola awal dari karakter pada string tanpakunci
        i = 0;
        while (i < 1)
        {
            printf("%c", tanpakunci[j]);    
            i++;
        }
        //membuat pola spasi tengah
        i = 0;
        while (i < panjang-((j+1)*2))
        {
            printf(" ");
            i++;
        }
        //membuat pola akhir dari karakter pada string tanpakunci
        i = 0;
        while (i < 1)
        {
            printf("%c", tanpakunci[panjang-(j+1)]);
            i++;
        }
        //membuat baris baru di setiap perulangan baris
        printf("\n");
        j++;
    }

    //pola barisan ketika panjang string tanpakunci GANJIL
    if (panjang%2 == 1)
    {
        //pola bagian 1.1
        /*  mencetak 1 karakter (huruf yang letaknya di tengah kalimat pada string tanpakunci)
                *
        */
        //membuat perulangan baris
        j = 0;
        while (j < 1)
        {
            //membuat pola spasi (hanya ada pola spasi di awal)
            i = 0;
            while (i < panjang/2)
            {
                printf(" ");
                i++;
            }
            //membuat pola tengah dari karakter pada tengah kalimat
            i = 0;
            while (i < 1)
            {
                printf("%c", tanpakunci[panjang/2]);
                i++;
            }
            //membuat baris baru di setiap perulangan baris
            printf("\n");
            j++;
        }

        //pola bagian 1.2
        /*  
               * *
              *   *
             *     *
            *       *
        */
        //membuat perulangan baris
        j = 0;
        while (j < panjang/2)
        {
            //membuat pola spasi awal
            i = panjang/2-(j+1);
            while (i > 0)
            {
                printf(" ");
                i--;
            }
            //membuat pola awal dari karakter pada string tanpakunci
            i = 0;
            while (i < 1)
            {
                printf("%c", tanpakunci[panjang/2-(j+1)]);
                i++;
            }
            //membuat pola spasi tengah
            i = 0;
            while (i < j*2+1)
            {
                printf(" ");
                i++;
            }
            //membuat pola akhir dari karakter pada string tanpakunci
            i = 0;
            while (i < 1)
            {
                printf("%c", tanpakunci[panjang/2+(j+1)]);
                i++;
            }
            //membuat baris baru di setiap perulangan baris
            printf("\n");
            j++;
        }
    }

    //pola ketika panjang string tanpakunci GENAP
    if (panjang%2 == 0)
    {
        //pola bagian 2
        /*
              *  *
             *    *
            *      *
        */
        //membuat perulangan baris
        j = 0;
        while (j < panjang/2 - 1)
        {
            //membuat pola spasi awal
            i = 0;
            while (i < panjang/2-(j+2))
            {
                printf(" ");
                i++;
            }
            //membuat pola awal dari karakter pada string tanpakunci
            i = 0;
            while (i < 1)
            {
                printf("%c", tanpakunci[panjang/2-(j+2)]);
                i++;
            }
            //membuat pola spasi tengah
            i = 0;
            while (i < j+1)
            {
                printf("  ");
                i++;
            }
            //membuat pola akhir dari karakter pada string tanpakunci
            i = 0;
            while (i < 1)
            {
                printf("%c", tanpakunci[panjang/2+(j+1)]);
                i++;
            }
            //membuat baris baru di setiap perulangan baris
            printf("\n");
            j++;
        }   
    }

    //selesai
    //mengembalikan nilai fungsi integer agar program berjalan normal
    return 0;
}