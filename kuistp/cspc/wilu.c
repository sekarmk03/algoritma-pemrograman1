#include<stdio.h>

int main(){
    int x, y;     //deklarasi variabel dan penentuan tipe data
    scanf("%d", &y);    //meminta masukkan user ingin berapa kali mengulang
    for (x = 0; x < y ; x++) //perulangan x awal 0, x diulang kurang dari masukan user, x diulang
    {
        printf("Wilujeng Sumping.\n"); //tampilkan perulangan
    }
    return 0; //selesai
    
}