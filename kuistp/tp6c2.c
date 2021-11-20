#include<stdio.h>
typedef struct tp6c2
{
    int halaman;
    char namafile[100];
    int awalakhir;
    int binernama[100];
    int jumlahHal;
    int getsize;
    int reverseBiner[100];
    int desimal;
    int pangkat;
}bungkus;

int main(){
    int n;
    scanf("%d", &n);
    bungkus arr[n];
    int i = 0;
    int j;
    arr[0].jumlahHal = 0;
    while (i < n)
    {
        scanf("%d", &arr[i].halaman);
        arr[0].jumlahHal += arr[i].halaman;
        j = 0;
        while (j >= 0)
        {
            scanf(" %c", &arr[i].namafile[j]);
            if (arr[i].namafile[j] == ';')
                break;
            j++;
        }
        arr[i].awalakhir = arr[i].namafile[j-1]+arr[i].namafile[0];
        j = 0;
        while (arr[i].awalakhir != 0)
        {
            arr[i].binernama[j] = arr[i].awalakhir%2;
            arr[i].awalakhir /= 2;
            j++;
        }
        arr[i].getsize = j;
        i++;
    }
    printf("Biner awal:\n");
    i = 0;
    int k;
    while (i < n)
    {
        j = arr[i].getsize-1;
        k = 0;
        while (j >= 0)
        {
            arr[i].reverseBiner[k] = arr[i].binernama[j];
            printf("%d", arr[i].reverseBiner[k]);
            k++;
            j--;
        }
        printf("\n");
        i++;
    }

    arr[0].pangkat = 1;
    i = 0;
    while (i < n) {
        j = arr[i].getsize-3;
        arr[i].desimal = 0;
        while (j >= 0) {
            //printf("%d", arr[i].reverseBiner[j]);
            arr[i].desimal = arr[i].reverseBiner[j] * arr[0].pangkat + arr[i].desimal;
            arr[0].pangkat = arr[0].pangkat * 2;
            j--;
        }
        //printf("\n");
        //printf("%d\n", arr[i].desimal);
        arr[0].pangkat = 1;
        i++;
    }

    printf("\nNama baru:\n");
    i = 0;
    while (i < n)
    {
        printf("%d - ", arr[0].jumlahHal);
        j = 0;
        while (j <= arr[i].getsize-3)
        {
            printf("%d%d - ", arr[i].reverseBiner[j], arr[i].reverseBiner[j+1]);
            j+=2;
        }
        printf("%d", arr[i].desimal);
        printf("\n");
        i++;
    }
    
    return 0;
}