#include<stdio.h>
int main(){
    system("cls");
    int i; //iterator untuk perulangan
    int n; //jumlah perulangan yang ingin dilakukan
    scanf("%d", &n);//meminta user mengisi variabel n
    int a, b, hasil;
    printf("masukkan angka pertama : ");
    scanf("%d", &a);//meminta user memasukkan angka pertama
    printf("masukkan angka kedua : ");
    scanf("%d", &b);//meminta user memasukkan angka kedua
    for ( i = 0; i < n; i++)//perulangan sebanyak n
    {
        a=a+b;//a ditambah b sebanyak n kali
        hasil=a;//hasil diisi oleh a
    }
    printf("hasilnya adalah : %d\n", hasil);//menampilkan keluaran pada user
    return 0;
    
}