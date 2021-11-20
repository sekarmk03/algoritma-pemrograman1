#include<stdio.h>
/*  Saya Sekar Madu Kusumawardani 2007703 mengerjakan
    soal UTS Alpro1 2020 C1 dalam mata kuliah
    Algoritma dan Pemrograman untuk keberkahanNya maka
    saya tidak melakukan kecurangan seperti yang telah
    dispesifikasikan. Aamiin.
*/
int main(){
    int n;              //variabel untuk menentukan bentuk pola
    int i,j;            //iterator yang akan digunakan pada perulangan
    scanf("%d", &n);

    /*
        contoh pola saat masukan 1
         *     *            //barisan 1
        * *   * *           //barisan 2
         * ***   *          //barisan 3
        * *   * *           //barisan 4
         *     *            //barisan 5
    */
    //perulangan untuk membuat pola barisan 1
    for ( j = 0; j < n; j++)
    {
        for ( i = 0; i < n; i++)
        {
            printf(" ");
        }
        for ( i = 0; i < n; i++)
        {
            printf("*");
        }
        for ( i = 0; i < 5*n; i++)
        {
            printf(" ");
        }
        for ( i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    //perulangan untuk membuat pola barisan 2
    for ( j = 0; j < n; j++)
    {
        for ( i = 0; i < n; i++)
        {
            printf("*");
        }
        for ( i = 0; i < n; i++)
        {
            printf(" ");
        }
        for ( i = 0; i < n; i++)
        {
            printf("*");
        }
        for ( i = 0; i < 3*n; i++)
        {
            printf(" ");
        }
        for ( i = 0; i < n; i++)
        {
            printf("*");
        }
        for ( i = 0; i < n; i++)
        {
            printf(" ");
        }
        for ( i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    //perulangan untuk membuat pola barisan 3
    for ( j = 0; j < n; j++)
    {
        for ( i = 0; i < n; i++)
        {
            printf(" ");
        }
        for ( i = 0; i < n; i++)
        {
            printf("*");
        }
        for ( i = 0; i < n; i++)
        {
            printf(" ");
        }
        for ( i = 0; i < 3*n; i++)
        {
            printf("*");
        }
        for ( i = 0; i < 3*n; i++)
        {
            printf(" ");
        }
        for ( i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    //perulangan untuk membuat pola barisan 4
    for ( j = 0; j < n; j++)
    {
        for ( i = 0; i < n; i++)
        {
            printf("*");
        }
        for ( i = 0; i < n; i++)
        {
            printf(" ");
        }
        for ( i = 0; i < n; i++)
        {
            printf("*");
        }
        for ( i = 0; i < 3*n; i++)
        {
            printf(" ");
        }
        for ( i = 0; i < n; i++)
        {
            printf("*");
        }
        for ( i = 0; i < n; i++)
        {
            printf(" ");
        }
        for ( i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    //perulangan untuk membuat pola barisan 5
    for ( j = 0; j < n; j++)
    {
        for ( i = 0; i < n; i++)
        {
            printf(" ");
        }
        for ( i = 0; i < n; i++)
        {
            printf("*");
        }
        for ( i = 0; i < 5*n; i++)
        {
            printf(" ");
        }
        for ( i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}