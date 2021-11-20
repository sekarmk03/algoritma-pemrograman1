#include<stdio.h> //menggunakan library stdio.h
int main(){
    int i; //iterator untuk perulangan
    int n; //jumlah perulangan yang ingin dilakukan
    scanf("%d", &n);//meminta user mengisi variabel n
    for ( i = 0; i < n; i++)//perulangan sebanyak n
    {
        printf("*");//menampilkan pola bintang-bintang
        printf("\n");
    }
    return 0;
}