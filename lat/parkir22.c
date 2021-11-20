#include<stdio.h>
typedef struct
{
    int tgl;
    int noK;
    int waktu;
    char kode;
}parkir;

int main(){
    parkir p1, p2, p3;
    int j1;
    int hargaA, hargaB, hargaC, h1=6000, h2=3000, h3=10000;
    int hargaAx, hargaBx, hargaCx;
    int t1,t2,t3;
    char jns1,jns2,jns3;

    scanf("%d %d %c %d", &p1.tgl, &p1.noK, &p1.kode, &p1.waktu);
    scanf("%d %d %c %d", &p2.tgl, &p2.noK, &p2.kode, &p2.waktu);
    scanf("%d %d %c %d", &p3.tgl, &p3.noK, &p3.kode, &p3.waktu);

    switch (p1.kode)
    {
    case 'A':
        hargaA=p1.waktu*h1;
        break;
    case 'B':
        hargaA=p1.waktu*h2;
        break;
    case 'C':
        hargaA=p1.waktu*h3;
        break;
    default:
        break;
    }
    switch (p2.kode)
    {
    case 'A':
        hargaB=p2.waktu*h1;
        break;
    case 'B':
        hargaB=p2.waktu*h2;
        break;
    case 'C':
        hargaB=p2.waktu*h3;
        break;
    default:
        break;
    }
    switch (p3.kode)
    {
    case 'A':
        hargaC=p3.waktu*h1;
        break;
    case 'B':
        hargaC=p3.waktu*h2;
        break;
    case 'C':
        hargaC=p3.waktu*h3;
        break;
    default:
        break;
    }
    
    printf(">> DATA PARKIR MANG OLEH\n");
    printf("-  Nomor Kendaraan : %d\n", p1.noK);
    switch (p1.kode)
    {
    case 'A':
        printf("-  Jenis Kendaraan : Mobil\n");
        break;
    case 'B':
        printf("-  Jenis Kendaraan : Motor\n");
        break;
    case 'C':
        printf("-  Jenis Kendaraan : Truk\n");
        break;
    default:
        break;
    }
    if ((p1.tgl!=0)&&(p1.noK!=0)&&(p1.waktu!=0))
    {
        if ((p1.noK%4==0)&&(p1.tgl>=25)&&(p1.tgl<=31))
        {
            hargaAx=(hargaA)*90/100;
            printf("-  Total Biaya Parkir : %d\n",hargaAx);
        } else
        {
            printf("-  Total Biaya Parkir : %d\n",hargaA);
        }
    }

    printf("-  Nomor Kendaraan : %d\n", p2.noK);
    switch (p2.kode)
    {
    case 'A':
        printf("-  Jenis Kendaraan : Mobil\n");
        break;
    case 'B':
        printf("-  Jenis Kendaraan : Motor\n");
        break;
    case 'C':
        printf("-  Jenis Kendaraan : Truk\n");
        break;
    default:
        break;
    }
    if ((p2.tgl!=0)&&(p2.noK!=0)&&(p2.waktu!=0))
    {
        if ((p2.noK%4==0)&&(p2.tgl>=25)&&(p2.tgl<=31))
        {
            hargaBx=hargaB*90/100;
            printf("-  Total Biaya Parkir : %d\n",hargaBx);
        }else
        {
            printf("-  Total Biaya Parkir : %d\n",hargaB);
        }
    }

    printf("-  Nomor Kendaraan : %d\n", p3.noK);
    switch (p3.kode)
    {
    case 'A':
        printf("-  Jenis Kendaraan : Mobil\n");
        break;
    case 'B':
        printf("-  Jenis Kendaraan : Motor\n");
        break;
    case 'C':
        printf("-  Jenis Kendaraan : Truk\n");
        break;
    default:
        break;
    }
    if ((p3.tgl!=0)&&(p3.noK!=0)&&(p3.waktu!=0))
    {
        if ((p3.noK%4==0)&&(p3.tgl>=25)&&(p3.tgl<=31))
        {
            hargaCx=hargaC*90/100;
            printf("-  Total Biaya Parkir : %d\n",hargaCx);
        }else
        {
            printf("-  Total Biaya Parkir : %d\n",hargaC);
        }   
    }
    return 0;
}
