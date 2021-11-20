#include<stdio.h>
/*  Saya Sekar Madu Kusumawardani 2007703 mengerjakan
    soal Kompetensi TP3 Alpro1 2020 C1 dalam mata kuliah
    Algoritma dan Pemrograman untuk keberkahanNya maka
    saya tidak melakukan kecurangan seperti yang telah
    dispesifikasikan. Aamiin.
*/

typedef struct //pembuatan bungkusan
{              //bungkusan berisi 3 variabel dengan tipe integer dan 1 variabel tipe char
    int tgl;   //variabel tanggal parkir
    int noK;   //variabel nomor kendaraan
    int waktu; //variabel lama waktu parkir
    char kode; //variabel kode kendaraan
    int harga; //variabel harga
}parkir;       //nama bungkusan

int main(){    //pemakaian fungsi
    parkir p1, p2, p3;              //inisialisasi bungkusan
    int h1=6000, h2=3000, h3=10000; //pendeklarasian variabel yang akan digunakan

    //meminta masukan dari user berupa tanggal, nomor kendaraan, kode kendaraan, dan waktu parkir
    scanf("%d %d %c %d", &p1.tgl, &p1.noK, &p1.kode, &p1.waktu);
    scanf("%d %d %c %d", &p2.tgl, &p2.noK, &p2.kode, &p2.waktu);
    scanf("%d %d %c %d", &p3.tgl, &p3.noK, &p3.kode, &p3.waktu);

    //switch untuk mengecek masukan pada variabel kode kendaraan (p1.kode)
    switch (p1.kode)
    {
    case 'A':                 //saat user memasukkan A
        p1.harga=p1.waktu*h1; //proses total harga
        break;                //berhentikan pengecekan jika sudah benar
    case 'B':                         //saat user memasukkan B
        p1.harga=p1.waktu*h2;         //proses total harga
        break;                        //berhentikan pengecekan jika sudah benar
    case 'C':                 //saat user memasukkan C
        p1.harga=p1.waktu*h3; //proses total harga
        break;                //berhentikan pengecekan jika sudah benar
    default:                          //saat user memasukkan selain dari A,B,dan C
        break;                        //berhentikan program
    }

    //switch untuk mengecek masukan pada variabel kode kendaraan (p2.kode)
    switch (p2.kode)
    {
    case 'A':                 //saat user memasukkan A
        p2.harga=p2.waktu*h1; //proses total harga
        break;                //berhentikan pengecekan jika sudah benar
    case 'B':                        //saat user memasukkan B
        p2.harga=p2.waktu*h2;        //proses total harga
        break;                       //berhentikan pengecekan jika sudah benar
    case 'C':                 //saat user memasukkan C
        p2.harga=p2.waktu*h3; //proses total harga
        break;                //berhentikan pengecekan jika sudah benar
    default:                          //saat user memasukkan selain dari A,B,dan C
        break;                        //berhentikan program
    }

    //switch untuk mengecek masukan pada variabel kode kendaraan (p3.kode)
    switch (p3.kode)
    {
    case 'A':                 //saat user memasukkan A
        p3.harga=p3.waktu*h1; //proses total harga
        break;                //berhentikan pengecekan jika sudah benar
    case 'B':                         //saat user memasukkan B
        p3.harga=p3.waktu*h2;         //proses total harga
        break;                        //berhentikan pengecekan jika sudah benar
    case 'C':                 //saat user memasukkan C
        p3.harga=p3.waktu*h3; //proses total harga
        break;                //berhentikan pengecekan jika sudah benar
    default:                          //saat user memasukkan selain dari A,B,dan C
        break;                        //berhentikan program
    }
    
    //pengecekan dengan kondisi masukan tanggal dan nomor kendaraan tidak ada yang nol
    if ((p1.tgl!=0)&&(p1.noK!=0)&&(p1.waktu!=0)&&
        (p2.tgl!=0)&&(p2.noK!=0)&&(p2.waktu!=0)&&
        (p3.tgl!=0)&&(p3.noK!=0)&&(p3.waktu!=0))
    {
        //pengecekan apakah nomor kendaraan berkelipatan 8 dan parkir sekitar 7 hari terakhir di bulan itu
        if ((p1.noK%8==0)&&(p1.tgl>=25)&&(p1.tgl<=31))
        {
            p1.harga=p1.harga*9/10;
        }
        //pengecekan apakah nomor kendaraan berkelipatan 8 dan parkir sekitar 7 hari terakhir di bulan itu
        if ((p2.noK%8==0)&&(p2.tgl>=25)&&(p2.tgl<=31))
        {
            p2.harga=p2.harga*9/10;
        }
        //pengecekan apakah nomor kendaraan berkelipatan 8 dan parkir sekitar 7 hari terakhir di bulan itu
        if ((p3.noK%8==0)&&(p3.tgl>=25)&&(p3.tgl<=31))
        {
            p3.harga=p3.harga*9/10;
        }
    }
    
    printf(">> DATA PARKIR MANG OLEH\n");               //tampilkan
    printf("-  Nomor Kendaraan : %d\n", p1.noK);        //tampilkan nomor kendaraan

    switch (p1.kode)                                    //switch untuk mengecek masukan pada variabel kode kendaraan (p1.kode)
    {
    case 'A':                                           //saat user memasukkan A
        printf("-  Jenis Kendaraan : Mobil\n");         //tampilkan jenis kendaraan
        break;                                          //hentikan program jika sudah benar
    case 'B':                                   //saat user memasukkan B
        printf("-  Jenis Kendaraan : Motor\n"); //tampilkan jenis kendaraan
        break;                                  //hentikan program jika sudah benar
    case 'C':                                           //saat user memasukkan B
        printf("-  Jenis Kendaraan : Truk\n");          //tampilkan jenis kendaraan
        break;                                          //hentikan program jika sudah benar
    default:                                    //saat user memasukkan selain dari A,B,dan C
        break;                                  //hentikan program
    }

    printf("-  Total Biaya Parkir : %d\n",p1.harga);    //tampilkan total biaya parkir
    printf("-  Nomor Kendaraan : %d\n", p2.noK);        //tampilkan nomor kendaraan

    switch (p2.kode)                                    //switch untuk mengecek masukan pada variabel kode kendaraan (p2.kode)
    {
    case 'A':                                   //saat user memasukkan A
        printf("-  Jenis Kendaraan : Mobil\n"); //tampilkan jenis kendaraan
        break;                                  //hentikan program jika sudah benar
    case 'B':                                           //saat user memasukkan B
        printf("-  Jenis Kendaraan : Motor\n");         //tampilkan jenis kendaraan
        break;                                          //hentikan program jika sudah benar
    case 'C':                                   //saat user memasukkan C
        printf("-  Jenis Kendaraan : Truk\n");  //tampilkan jenis kendaraan
        break;                                  //hentikan program jika sudah benar
    default:                                            //saat user memasukkan selain dari A,B,dan C
        break;                                          //hentikan program
    }

    printf("-  Total Biaya Parkir : %d\n",p2.harga);    //tampilkan total biaya parkir
    printf("-  Nomor Kendaraan : %d\n", p3.noK);        //tampilkan nomor kendaraan

    switch (p3.kode)                                    //switch untuk mengecek masukan pada variabel kode kendaraan (p3.kode)
    {
    case 'A':                                   //saat user memasukkan A
        printf("-  Jenis Kendaraan : Mobil\n"); //tampilkan jenis kendaraan
        break;                                  //hentikan program jika sudah benar
    case 'B':                                           //saat user memasukkan B
        printf("-  Jenis Kendaraan : Motor\n");         //tampilkan jenis kendaraan
        break;                                          //hentikan program jika sudah benar
    case 'C':                                   //saat user memasukkan A
        printf("-  Jenis Kendaraan : Truk\n");  //tampilkan jenis kendaraan
        break;                                  //hentikan program jika sudah benar
    default:                                            //saat user memasukkan selain dari A,B,dan C
        break;                                          //hentikan program
    }
    
    printf("-  Total Biaya Parkir : %d\n",p3.harga);    //tampilkan total biaya parkir    
    return 0;                                           //hentikan program tanpa diulang
}