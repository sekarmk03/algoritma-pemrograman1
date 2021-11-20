#include<stdio.h>
typedef struct cust
{
    int pilihanMenu;
    int banyak;
    int total;
    char member;
}customer;
int main(){
    printf("===============================\n");
    printf("SELAMAT DATANG DI MAMANG RESTO!\n");
    printf("===============================\n");
    printf("              MENU             \n");
    printf("1. Sosis Bakar      : Rp.5.000\n");
    printf("2. Nasi Goreng      : Rp.18.000\n");
    printf("3. Spaghetti        : Rp.20.500\n");
    printf("4. Green Tea        : Rp.8.000\n");
    printf("===============================\n");

    customer pertama;
    pertama.total=0;

    printf("Masukkan pilihan menu Anda  :  ");
    scanf("%d", &pertama.pilihanMenu);
    printf("Masukkan banyak menu yang Anda pilih  :  ");
    scanf("%d", &pertama.banyak);
    printf("Apakah Anda adalah member dari Mamang Resto(Y/N)? ");
    scanf("%c", &pertama.member);

    switch (pertama.pilihanMenu)
    {
    case 1:
        pertama.total = pertama.banyak * 5000;
        break;
    case 2:
        pertama.total = pertama.banyak * 18000;
        break;
    case 3:
        pertama.total = pertama.banyak * 20500;
        break;
    case 4:
        pertama.total = pertama.banyak * 8000;
        break;
    default:
        printf("===============================\n");
        printf("Menu yang Anda pilih tidak tersedia\n");
        printf("===============================\n");
        break;
    }
    if ((pertama.total > 0)&&(pertama.pilihanMenu>=0)&&(pertama.pilihanMenu <= 4))
    {
        if (pertama.member=='Y')
        {
            pertama.total = pertama.total - ((pertama.total*20)/100);
        }
        printf("===============================\n");
        printf("Total Pesanan Anda  :  Rp.%d\n", pertama.total);
        printf("===============================\n");
    }
    return 0;
}
