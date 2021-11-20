#include<stdio.h>
typedef struct 
{
    int nim;
    int nilai;
}siswa;
int main(){
    siswa pertama;
    siswa kedua;
    scanf("%d %d", &pertama.nim, &pertama.nilai);
    scanf("%d %d", &kedua.nim, &kedua.nilai);
    printf("NIM Siswa Pertama : %d\n", pertama.nim);
    printf("Nilai siswa pertama : \n", pertama.nilai);
    printf("NIM Siswa kedua :\n", kedua.nim);
    printf("Nilai siswa kedua :\n", kedua.nilai);
    return 0;
}