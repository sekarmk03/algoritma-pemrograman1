#include<stdio.h>

typedef struct
{
    int pembilang;
    int penyebut;
}pecahan;

int main(){
    pecahan p1, p2, p3;
    printf("masukkan nilai pembilang dan peneybut pecahan pertama : ");
    scanf("%d %d", &p1.pembilang, &p1.penyebut);
    printf("masukkan nilai pembilang dan penyebut pecahan kedua : ");
    scanf("%d %d", &p2.pembilang, &p2.penyebut);
    p3.pembilang=(p1.pembilang*p2.penyebut)+(p2.pembilang*p1.penyebut);
    p3.penyebut=(p1.penyebut*p2.penyebut);
    printf("hasil pertambahan pecahan adalah\npembilang : %d\npenyebut : %d", p3.pembilang, p3.penyebut);
    return 0;
}