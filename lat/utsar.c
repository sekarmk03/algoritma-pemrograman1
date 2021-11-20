#include<stdio.h>
int main(){
    int i;
    int n;
    int a=0;
    int tambah=0;
    scanf("%d", &n);
    int arr[n];
    if ((n%3==0) && (n!=0))
    {
        for ( i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        a=n/3;
        for ( i = a; i < a+a; i++)
        {
            tambah+=arr[i];
        }
        int b=0;
        b=arr[n-1];
        if (tambah==b)
        {
            printf("sesuai spesifikasi\n");
        }
        else
        {
            printf("tidak sesuai spesifikasi\n");
        }
    }
    return 0;
}