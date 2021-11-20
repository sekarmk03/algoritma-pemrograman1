#include <stdio.h>
/*  Saya Sekar Madu Kusumawardani 2007703 mengerjakan
    soal Kompetensi TP2 Alpro1 2020 C1 dalam mata kuliah
    Algoritma dan Pemrograman untuk keberkahanNya maka
    saya tidak melakukan kecurangan seperti yang telah
    dispesifikasikan. Aamiin. */
int main(){
    //deklarasi variabel yang akan digunakan dan tipe datanya
    int makanan[6] = {3000, 2000, 15000, 12000, 10000, 8000}; //berbentuk array agar user dapat dipilih oleh user
    int minuman[3]= {4000, 7000, 5000}; //berbentuk array agar user dapat dipilih oleh user
    int makan1, makan2, minum, jumlah1, jumlah2, jumlah3;
    int harga1, harga2, harga3, bayar, diskon, jadinya;
    //meminta user memasukkan 2 jenis makanan dan 1 jenis minuman yang ingin dibeli
    scanf("%d %d", &makan1, &jumlah1);
    scanf("%d %d", &makan2, &jumlah2);
    scanf("%d %d", &minum, &jumlah3);

    //menu pilihan user untuk makanan jenis pertama
    switch (makan1)
    {
    case 1: //saat user memilih makanan di urutan 1
        harga1 = makanan[0]*jumlah1; //maka harga makanan pada array 0 (array pertama) dikali dengan jumlah yang dimasukkan user
        break;
    case 2:
        harga1 = makanan[1]*jumlah1;
        break;
    case 3:
        harga1 = makanan[2]*jumlah1;
        break;
    case 4:
        harga1 = makanan[3]*jumlah1;
        break;
    case 5:
        harga1 = makanan[4]*jumlah1;
        break;
    case 6:
        harga1 = makanan[5]*jumlah1;
        break;
    default:
        break;
    }

    //menu pilihan user untuk makanan jenis pertama
    switch (makan2)
    {
    case 1: //saat user memilih makanan di urutan 1
        harga2 = makanan[0]*jumlah2; //maka harga makanan pada array 0 (array pertama) dikali dengan jumlah yang dimasukkan user
        break;
    case 2:
        harga2 = makanan[1]*jumlah2;
        break;
    case 3:
        harga2 = makanan[2]*jumlah2;
        break;
    case 4:
        harga2 = makanan[3]*jumlah2;
        break;
    case 5:
        harga2 = makanan[4]*jumlah2;
        break;
    case 6:
        harga2 = makanan[5]*jumlah2;
        break;
    default:
        break;
    }

    //menu pilihan user untuk makanan jenis pertama
    switch (minum)
    {
    case 1: //saat user memilih minuman di urutan 1
        harga3 = minuman[0]*jumlah3; //maka harga minuman pada array 0 (array pertama) dikali dengan jumlah yang dimasukkan user
        break;
    case 2:
        harga3 = minuman[1]*jumlah3;
        break;
    case 3:
        harga3 = minuman[2]*jumlah3;
        break;
    default:
        break;
    }

    //jumlah yang harus dibayarkan adalah total pertambahan harga ketiga jenis pesanan
    bayar=harga1+harga2+harga3;
    printf("Harga       : %d\n", bayar);

    //Jika jumlah makanan yg dipesan berjumlah ganjil dan minuman berjumlah genap
    if (((jumlah1+jumlah2)%2>=1)&&(jumlah3%2==0))
    {
        if (bayar<=40000) //jika Total harga dibawah atau sama dengan 40k maka di diskon 25%
        {
            printf("Anda Mendapat Potongan 25%%\n"); //tampilkan diskonnya
            diskon=bayar*25/100; //perhitungan diskonnya
        } else if (bayar>40000) //jika Total harga diatas 40k maka akan didiskon 50%
        {
            printf("Anda Mendapat Potongan 50%%\n"); //tampilkan diskonnya
            diskon=bayar*50/100; //perhitungan diskonnya
        }
    } else if (((jumlah1+jumlah2)%2==0)&&(jumlah3%2>=1))  //Jika jumlah makanan yg dipesan berjumlah genap dan minuman berjumlah ganjil
    {
        if (bayar<=40000) //Jika Total harga dibawah atau sama dengan 40k maka akan didiskon 20%
        {
            printf("Anda Mendapat Potongan 20%%\n"); //tampilkan diskonnya
            diskon=bayar*20/100; //perhitungan diskon
        } else if (bayar>40000) //Jika Total harga diatas 40k maka akan didiskon 40%
        {
            printf("Anda Mendapat Potongan 40%%\n"); //tampilkan diskon
            diskon=bayar*40/100; //hitung diskon
        }
    } else if ((((jumlah1+jumlah2)%2>=1) && (jumlah3%2>=1)) || (((jumlah1+jumlah2)%2==0) && (jumlah3%2==0)))
    //Jika jumlah makanan berjumlah ganjil dan minuman berjumlah ganjil atau jumlah makanan berjumlah genap dan minuman berjumlah genap
    {
        if (bayar<=25000) //Jika Total harga dibawah atau sama dengan 25k maka akan didiskon 10%
        {
            printf("Anda Mendapat Potongan 10%%\n"); //tampilkan diskon
            diskon=bayar*10/100; //hitung diskon
        } else if (bayar>25000) //Jika Total harga diatas 25k diskon 20%
        {
            printf("Anda Mendapat Potongan 20%%\n"); //tampilkan diskon
            diskon=bayar*20/100; //hitung diskon
        }
    }
    jadinya=bayar-diskon; //harga setelah diskon
    printf("Total Harga : %d\n", jadinya); //tampilkan harga setelah diskon
    return 0;
}