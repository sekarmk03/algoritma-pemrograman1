#include<stdio.h>
/*  Saya Sekar Madu Kusumawardani 2007703 mengerjakan
    soal Kompetensi TP1 Alpro1 2020 C1 dalam mata kuliah
    Algoritma dan Pemrograman untuk keberkahanNya maka
    saya tidak melakukan kecurangan seperti yang telah
    dispesifikasikan. Aamiin.
*/
int main(){
    int j1, m1, j2, m2, ja, ma, jb, mb, jam1, jam2, jama, jamb, total1, total2, totala, totalb; //deklarasi variabel yang digunakan untuk menentukan waktu
    scanf("%d%d%d%d%d%d%d%d", &j1, &m1, &j2, &m2, &ja, &ma, &jb, &mb); //meminta masukan waktu dari user
    jam1=j1*60;
    total1=jam1+m1;
    jam2=j2*60;
    total2=jam2+m2;
    jama=ja*60;
    totala=jama+ma;
    jamb=jb*60;
    totalb=jamb+mb;

    if ((((j1&&j2&&ja&&jb)<24)&&((m1&&m2&&ma&&mb)<60)))
    {
            if ( (((totala>=total1)&&(total1<total2))) || ((totalb>=totala)&&(totalb>total1)))
            {
                printf("hore dibaca si dia\n"); //tampilkan jika memnuhi kondisi
            } else
            {
                printf("ikhlaskan saja\n"); //tampilkan jika kondisi tidak terpenuhi
            }
    }
    
    return 0;
}