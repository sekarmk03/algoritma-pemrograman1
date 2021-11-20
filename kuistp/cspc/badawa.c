#include <stdio.h>
#include <string.h>
#include <math.h>

int Segi34(int x, int len);
int Segi8(int x, int len);

int main(){
    int n, x, len;
    char kalimat[100], bangun[30];
    scanf("%s%d", kalimat, &n);
    int jumlahkalimat[n];
    int i;
    len = strlen(kalimat);
    for ( i = 0; i < n; i++)
    {
        scanf("%s%d", bangun, &x);
        if (strcmp(bangun, "kotak") == 0 || strcmp(bangun, "segitiga") == 0)
        {
            jumlahkalimat[i] = Segi34(x, len);
        }
        else
        {
            jumlahkalimat[i] = Segi8(x, len);
        }
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d\n", jumlahkalimat[i]);
    }
    return 0;
}

int Segi34(int x, int len){
    int jumlah;
    float rumus, p = len;
    rumus = ceil((x * x) / p);
    jumlah = rumus;
    return jumlah;
}

int Segi8(int x, int len){
    int i, jumlah, atas, kotak;
    float rumus, p = len;
    atas = x * 2;
    for ( i = 0; i < x-2; i++)
    {
        atas += 2;
    }
    kotak = x * (x + (2 * (x - 1)));
    rumus = ceil((atas * 2 + kotak) / p);
    jumlah = rumus;
    return jumlah;
}