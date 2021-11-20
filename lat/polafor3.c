#include<stdio.h>//menggunakan library stdio.h
int main(){
    int i;//iterator i untuk perulangan
    int j;//iterator untuk for bersarang
    int n;//jumlah perulangan yang ingin dilakukan
    scanf("%d", &n);//meminta user mengisi variabel n
    for ( i = 0; i < n; i++)//perulangan sebanyak n
    {
        for ( j = 0; j < n; j++)
        {
            printf("*"); //pola barisan bintang sebanyak n kolom
        }
        printf("\n"); //membuat baris baru untuk pola barisan bintang
    }
    return 0;
}
