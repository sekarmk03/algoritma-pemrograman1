#include <stdio.h>
/*  Saya Sekar Madu Kusumawardani 2007703 mengerjakan soal Kompetensi TP2 Alpro1 2020 C1 dalam mata kuliah
    Algoritma dan Pemrograman untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah
    dispesifikasikan. Aamiin. */
int main(){
    //deklarasi variabel yang akan digunakan dan tipe datanya dan value nya
    int a1, a2, a3, j1, j2, j3, har1, har2, har3, bay, dis, total;
    int nas=3000, tem=2000, sat=15000, ay=12000, bas=10000, mi=8000, teh=4000, thai=7000, kop=5000;

    //meminta user memasukkan 2 jenis makanan dan 1 jenis minuman yang ingin dibeli
    scanf("%d %d", &a1, &j1);
    scanf("%d %d", &a2, &j2);
    scanf("%d %d", &a3, &j3);

        //daftar kondisi masukan untuk makanan jenis 1
        if (a1==1){har1=nas*j1;}
        else if (a1==2){har1=tem*j1;}
        else if (a1==3){har1=sat*j1;}
        else if (a1==4){har1=ay*j1;}
        else if (a1==5){har1=bas*j1;}
        else if (a1==6){har1=mi*j1;}
        //daftar kondisi masukan untuk makanan jenis 2
        if (a2==1){har2=nas*j2;}
        else if (a2==2){har2=tem*j2;}
        else if (a2==3){har2=sat*j2;}
        else if (a2==4){har2=ay*j2;}
        else if (a2==5){har2=bas*j2;}
        else if (a2==6){har2=mi*j2;}
        //daftar kondisi masukan untuk minuman
        if (a3==1){har3=teh*j3;}
        else if (a3==2){har3=thai*j3;}
        else if (a3==3){har3=kop*j3;}     

    //jumlah yang harus dibayarkan adalah total pertambahan harga ketiga jenis pesanan
    bay=har1+har2+har3;
    printf("Harga       : %d\n", bay);

    //Jika jumlah makanan yg dipesan berjumlah ganjil dan minuman berjumlah genap
    if (((j1+j2)%2>=1)&&(j3%2==0))
    {
        if ((bay<=40000)&&(bay!=0)) //jika Total harga dibawah atau sama dengan 40k maka di diskon 25%
        {
            printf("Anda Mendapat Potongan 25%%\n"); //tampilkan diskonnya
            dis=bay*25/100; //perhitungan diskonnya
        } else if (bay>40000) //jika Total harga diatas 40k maka akan didiskon 50%
        {
            printf("Anda Mendapat Potongan 50%%\n"); //tampilkan diskonnya
            dis=bay*50/100; //perhitungan diskonnya
        }
    } else if (((j1+j2)%2==0)&&(j3%2>=1))  //Jika jumlah makanan yg dipesan berjumlah genap dan minuman berjumlah ganjil
    {
        if ((bay<=40000)&&(bay!=0)) //Jika Total harga dibawah atau sama dengan 40k maka akan didiskon 20%
        {
            printf("Anda Mendapat Potongan 20%%\n"); //tampilkan diskonnya
            dis=bay*20/100; //perhitungan diskon
        } else if (bay>40000) //Jika Total harga diatas 40k maka akan didiskon 40%
        {
            printf("Anda Mendapat Potongan 40%%\n"); //tampilkan diskon
            dis=bay*40/100; //hitung diskon
        }
    } else if ((((j1+j2)%2>=1) && (j3%2>=1)) || (((j1+j2)%2==0) && (j3%2==0)))
    //Jika jumlah makanan berjumlah ganjil dan minuman berjumlah ganjil atau jumlah makanan berjumlah genap dan minuman berjumlah genap
    {
        if ((bay<=25000)&&(bay!=0)) //Jika Total harga dibawah atau sama dengan 25k maka akan didiskon 10%
        {
            printf("Anda Mendapat Potongan 10%%\n"); //tampilkan diskon
            dis=bay*10/100; //hitung diskon
        } else if (bay>25000) //Jika Total harga diatas 25k diskon 20%
        {
            printf("Anda Mendapat Potongan 20%%\n"); //tampilkan diskon
            dis=bay*20/100; //hitung diskon
        }
    }
    total=bay-dis; //harga setelah diskon
    printf("Total Harga : %d\n", total); //tampilkan harga setelah diskon
    return 0;
}