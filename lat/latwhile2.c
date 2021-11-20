#include<stdio.h>
typedef struct latwhile2
{
    int desimal;
    char kode;
}array;

int main(){
    int n,i;
    scanf("%d", &n);
    array arr[n];
    for ( i = 0; i < n; i++)
    {
        scanf(" %c", &arr[i].kode);
        scanf(" %d", &arr[i].desimal);
    }
    pr
    return 0;
}