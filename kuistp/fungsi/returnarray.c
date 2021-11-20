#include <stdio.h>
typedef struct
{
    int sum[100], mult[100];
}coba;
coba Cari(int a[], int b[], int n){
    coba c;
    int i;
    for ( i = 0; i < n; i++)
    {
        c.sum[i] = a[i] + b[i];
        c.mult[i] = a[i] * b[i];
    }
    return c;
}
int main(){
    coba hasilC;
    int n, i;
    scanf("%d", &n);
    int x[n], y[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d%d", &x[i], &y[i]);
    }
    hasilC = Cari(x, y, n);
    for ( i = 0; i < n; i++)
    {
        printf("%d + %d = %d\n", x[i], y[i], hasilC.sum[i]);
        printf("%d x %d = %d\n", x[i], y[i], hasilC.mult[i]);
    }
    return 0;
}