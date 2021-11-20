#include<stdio.h>
int main(){
    printf("====== Sewa Alat Kemping ======\n");
    printf("1. Tenda            Rp. 25.000\n");
    printf("2. Sleeping bag     Rp. 7.000\n");
    printf("3. Matras           Rp. 3.000\n");
    printf("4. Kompor portable  Rp. 8.000\n");
    printf("5. Carrier          Rp. 12.000\n");
    printf("\n");

    int total = 0;
    char pilih = 'x';

    printf("Barang yang akan dibeli (hentikan dengan o) :\n");
    while (pilih != 'o')
    {
        scanf(" %c", &pilih);
        switch (pilih)
        {
        case '1':
            total+=25000;
            break;
        case '2':
            total+= 7000;
            break;
        case '3':
            total+=3000;
            break;
        case '4':
            total+= 8000;
            break;
        case '5':
            total+=12000;
        default:
            break;
        }
    }
    printf("Total tagihan : Rp. %d\n", total);
    return 0;
}