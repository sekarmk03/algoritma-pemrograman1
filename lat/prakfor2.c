#include<stdio.h>
int main(){
    int i, j;
    int n;
    scanf("%d", &n);
    int hasil_faktorial = 1;
    for ( i = n; i > 0; i--)
    {
        hasil_faktorial*=i;
    }
    printf("%d\n", hasil_faktorial);
    return 0;
}