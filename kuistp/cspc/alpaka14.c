#include<stdio.h>
int main(){
    int i; //iterator
    char arr[6]; //untuk menampung masukan
    int a = 0; //penanda
    int b = 0; //penanda
    char alf[3]; //untuk menampung masukan huruf
    char ang[3]; //untuk menampung masukan angka
    for ( i = 0; i < 6; i++){
        scanf(" %c", &arr[i]); //meminta 6 masukan untuk array char huruf dan char angka
    }
    for ( i = 0; i < 6; i++){ //proses memisahkan char huruf dan char angka
        if (arr[i]>=48 && arr[i]<=57)
        {
                ang[b]=arr[i]; //memasukan char angka ke dalam array untuk menampung char angka
                b+=1; //penanda saat kondisi benar terpenuhi (min maks 3 karakter angka)
        }else if(arr[i]>=97 && arr[i]<=122)
        {
                alf[a]=arr[i]; //memasukan char huruf ke dalam array untuk menampung char huruf
                a+=1; //penanda saat kondisi benar terpenuhi (min maks 3 karakter angka)
        }
    }        
    if ((b==3)||(a==3)){ //pengecekan apakah huruf dan angka ada masing2 3 karakter
            /*a=i;
            b=i;
            printf("%c\n%c\n%c\n%c\n%c\n%c\n", alf[0], ang[0], alf[1], ang[1], alf[2], ang[2]);*/
            for ( i = 0; i < 3; i++) //mengulang keluaran sebanyak 3
            {
                a=i;
                b=i;
                printf("%c\n%c\n", alf[a], ang[b]);//memanggil array untuk keluaran
            }
    } else{
        printf("tidak valid\n"); //jika kondisi huruf/angka kurang/lebih dari 3
    }
    return 0;
}