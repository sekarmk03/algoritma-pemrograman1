#include<stdio.h>
int main(){
    int n=0;
    int a=0;
    printf("Masukkan ukuran array :\n");
    scanf("%d", &n);
    int arr[n];
    int arrg[a];
    int i;
    printf("Masukkan elemen array :\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        a=i;
        if (arr[i]%2==1)
        {
            arrg[a]=arr[i];
        }
    }
    int maks=arrg[0];
    for ( i = 1; i < a; i++)
    {
        if (maks<arrg[i])
        {
            maks=arrg[i];
        }
    }
    printf("Nilai maksimalnya adalah %d\n", maks);
        
    return 0;
}