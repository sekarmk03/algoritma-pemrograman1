#include<stdio.h>
/*  Saya Sekar Madu Kusumawardani 2007703 mengerjakan
    soal Kompetensi kuis1 Alpro1 2020 C1 dalam mata kuliah
    Algoritma dan Pemrograman untuk keberkahanNya maka
    saya tidak melakukan kecurangan seperti yang telah
    dispesifikasikan. Aamiin.
*/
int main(){
    int x1,y1,x2,y2,a1,a2,b1,b2; //deklarasi variabel masukan
    int p1,l1,l2,p2,luas1,luas2; //deklarasi variabel proses

    scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&a1,&b1,&a2,&b2); //meminta user memasukan data

    l1=y1-y2; //proses hitung lebar persegi panjang 1
    p1=x2-x1; //proses hitung panjang persegi panjang 1
    luas1=p1*l1; //proses hitung luas persegi panjang 1
    l2=b1-b2; //proses hitung lebar persegi panjang 2
    p2=a2-a1; //proses hitung panjang persegi panjang 2
    luas2=p2*l2; //proses hitung luas persegi panjang 2

    if ((b1<y2)||(b2>y1)||(a1>x2)||(a2<x1)) //kondisi saat persegi panjang tidak beririsan
    {
        printf("tidak beririsan\n"); //jika kondisi tidak terpenuhi maka tampilkan
    } else
    {
        printf("beririsan\n"); //jika kondisi terpenuhi maka tampilkan
    }
    
    if (luas1>luas2) //kondisi yang harus dipenuhi jika persegi panjang pertama yang lebih luas
    {
        printf("pertama\n"); //tampilkan jika persegi panjang pertama lebih luas
    } else if (luas2>luas1) //kondisi yang harus dipenuhi jika persegi panjang kedua yang lebih luas
    {
        printf("kedua\n"); //tampilkan jika persegi panjang kedua lebih luas
    }

    return 0;        
}