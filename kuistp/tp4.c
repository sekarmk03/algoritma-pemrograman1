#include<stdio.h>                                               //mulai program, menggunakan fungsi-fungsi yang ada di dalam library stdio.h
/*  Saya Sekar Madu Kusumawardani 2007703 mengerjakan
    soal Kompetensi TP4 Alpro1 2020 C1 dalam mata kuliah
    Algoritma dan Pemrograman untuk keberkahanNya maka
    saya tidak melakukan kecurangan seperti yang telah
    dispesifikasikan. Aamiin.
*/
/* soal (saat masukan pola adalah 4 dan e)
    ****                ********
    ****                ****    *
    ****                ****    *
    ****                ********
     ****.,.,.,.,.,.,.,****
       ***.,.,.,.,.,.,***
         **.,.,.,.,.,**
           **********
--------------------------------
  ----------------------------
*/
/* soal (saat masukan pola adalah 4 dan p)
    ****.,.,.,.,.,.,.,.,********        >>bagian pertama
    ****.,.,.,.,.,.,.,.,****    *       >>bagian kedua
    ****.,.,.,.,.,.,.,.,****    *         ~~~~~~~~~~~~
    ****.,.,.,.,.,.,.,.,********        >>bagian ketiga
     ****.,.,.,.,.,.,.,****             >>bagian keempat
       ***.,.,.,.,.,.,***                 ~~~~~~~~~~~~
         **.,.,.,.,.,**                   ~~~~~~~~~~~~
           **********                   >>bagian kelima
--------------------------------        >>bagian keenam
  ----------------------------            ~~~~~~~~~~~~
*/
int main(){                                                     //fungsi yang pertama kali dijalankan
    int n;                  //deklarasi variabel yang akan digunakan untuk menentukan pola
    char c;                 //deklarasi variabel yang akan digunakan untuk menentukan isi cangkir penuh atau setengah
    int i,j;                //deklarasi variabel yang akan digunakan sebagai iterator
    scanf("%d %c", &n, &c); //meminta masukan dari user berupa angka dan huruf

                                                                //semua perulangan menggunakan iterator++ untuk menaikkan nilai sebanyak satu
                                                                //semua perulangan dimulai saat iterator bernilai 0
    //blok1
    //digunakan untuk membuat operasi pola bagian pertama
    //contoh saat masukan pola adalah 4
    /*    ****                ********
    */
    for ( j = 0; j < 1; j++)                                    //perulangan print new line sebanyak 1 kali
    {
        for ( i = 0; i < n; i++)                                //perulangan output ' ' sebanyak n kolom
        {
            printf(" ");                                        //output yang diulang
        }
        for ( i = 0; i < n; i++)                                //perulangan output '*' sebanyak n kolom
        {
            printf("*");                                        //output yang diulang
        }
        if ((c>=65 && c<=90) || (c>=97 && c<=122))              //pengecekan kondisi jika masukan kedua dari user adalah char huruf
        {
            if (c==65 || c==69 || c==73 || c==79 || c==85 ||    //pengecekan kondisi jika huruf yang dimasukkan adalah huruf vokal
                c==97 || c==101 || c==105 || c==111 || c==117)
            {
                for ( i = 0; i < n*4; i++)                      //perulangan saat kondisi terpenuhi, print ' ' sebanyak (n x 4) kolom
                {
                    printf(" ");                                //output yang diulang
                }
            }else                                               //pengecekan kondisi saat kondisi sebelumnya tidak terpenuhi,
            {                                                   //yaitu apabila huruf yang dimasukkan adalah huruf konsonan            
                for ( i = 0; i < n*2; i++)                      //perulangan saat kondisi terpenuhi, print '.,' sebanyak (n x 2) kolom
                {
                    printf(".,");                               //output yang diulang
                }
            }
        }
        for ( i = 0; i < n*2; i++)                              //perulangan output '*' sebanyak (n x 2) kolom
        {
            printf("*");                                        //output yang diulang
        }
        printf("\n");                                           //newline yang diulang oleh for terluar untuk membuat baris baru
    }

    //blok2
    //digunakan untuk membuat operasi pola bagian kedua
    //contoh saat masukan pola adalah 4
    /*    ****                ****    *
          ****                ****    *
    */
    for ( j = 0; j < n-2; j++)                                  //perulangan pembuatan baris baru sebanyak (n - 2) baris
    {
        for ( i = 0; i < n; i++)                                //proses line 85 sampai 109 sama dengan proses pada blok1 
        {
            printf(" ");
        }
        for ( i = 0; i < n; i++)
        {
            printf("*");
        }
        if ((c>=65 && c<=90) || (c>=97 && c<=122))
        {
            if (c==65 || c==69 || c==73 || c==79 || c==85 ||
                c==97 || c==101 || c==105 || c==111 || c==117)
            {
                for ( i = 0; i < n*4; i++)
                {
                    printf(" ");
                }
            }else
            {
                for ( i = 0; i < n*2; i++)
                {
                    printf(".,");
                }
            }
        }
        for ( i = 0; i < n; i++)                                //perulangan output '*' sebanyak n kolom
        {
            printf("*");                                        //output yang diulang
        }
        for ( i = 0; i < n; i++)                                //perulangan output ' ' sebanyak n kolom
        {
            printf(" ");                                        //output yang diulang
        }
        for ( i = 0; i < 1; i++)                                //perulangan output '*' sebanyak 1 kolom
        {
            printf("*");                                        //output yang diulang
        }
        printf("\n");                                           //newline yang diulang oleh for terluar untuk membuat baris baru
    }

    //blok3
    //digunakan untuk membuat operasi pola bagian ketiga
    //contoh saat masukan pola adalah 4
    /*    ****                ********
    */
    for ( j = 0; j < 1; j++)                                    //proses line 130 sampai 162 sama dengan proses pada blok1
    {
        for ( i = 0; i < n; i++)
        {
            printf(" ");
        }
        for ( i = 0; i < n; i++)
        {
            printf("*");
        }
        if ((c>=65 && c<=90) || (c>=97 && c<=122))
        {
            if (c==65 || c==69 || c==73 || c==79 || c==85 ||
                c==97 || c==101 || c==105 || c==111 || c==117)
            {
                for ( i = 0; i < n*4; i++)
                {
                    printf(" ");
                }
            }else
            {
                for ( i = 0; i < n*2; i++)
                {
                    printf(".,");
                }
            }
        }
        for ( i = 0; i < n*2; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    //blok4
    //digunakan untuk membuat operasi pola bagian keempat
    //contoh saat masukan pola adalah 4
    /*     ****.,.,.,.,.,.,.,****
             ***.,.,.,.,.,.,***
               **.,.,.,.,.,**
    */
    for ( j = 0; j < n-1; j++)                                  //perulangan pembuatan baris baru sebanyak (n - 1) baris
    {
        for ( i = 0; i < (n+1)+(j*2); i++)                      //perulangan output ' ' sebanyak (n+1)+(jx2) kolom
        {
            printf(" ");                                        //output yang diulang
        }
        for ( i = 0; i < n-j; i++)                              //perulangan output '*' sebanyak (n-j) kolom
        {
            printf("*");                                        //output yang diulang
        }
        for ( i = 0; i < ((n*2)-1)-j; i++)                      //perulangan output '.,' sebanyak (((nx2)-1)-j) kolom
        {
            printf(".,");                                       //output yang diulang
        }
        for ( i = 0; i < n-j; i++)                              //perulangan output '*' sebanyak (n-j) kolom
        {
            printf("*");                                        //output yang diulang
        }
        printf("\n");                                           //newline yang diulang oleh for terluar untuk membuat baris baru
    }

    //blok5
    //digunakan untuk membuat operasi pola bagian kelima
    //contoh saat masukan pola adalah 4
    /*           **********
    */
    for ( j = 0; j < 1; j++)                                    //perulangan pembuatan baris baru sebanyak 1 baris
    {
        for ( i = 0; i < (n*3)-1; i++)                          //perulangan output ' ' sebanyak ((nx3)-1) kolom
        {
            printf(" ");                                        //output yang diulang
        }
        for ( i = 0; i < (n*2)+2; i++)                          //perulangan output '*' sebanyak ((n*2)+2) kolom
        {
            printf("*");                                        //output yang diulang
        }
        printf("\n");                                           //newline yang diulang oleh for terluar untuk membuat baris baru
    }
    
    //blok6
    //digunakan untuk membuat operasi pola bagian keenam
    //contoh saat masukan pola adalah 4
    /*--------------------------------
        ----------------------------
    */
    for ( j = 0; j < 2; j++)                                    //perulangan pembuatan baris baru sebanyak 2 baris
    {
        for ( i = 0; i < j*2; i++)                              //perulangan output ' ' sebanyak (jx2) kolom
        {
            printf(" ");                                        //output yang diulang
        }
        for ( i = 0; i < (n*8)-(j*4); i++)                      //perulangan output '-' sebanyak ((nx8)-(jx4)) kolom
        {
            printf("-");                                        //output yang diulang
        }
        printf("\n");                                           //newline yang diulang oleh for terluar untuk membuat baris baru
    }
    return 0;                                                   //hentikan program
}