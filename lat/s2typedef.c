#include<stdio.h>

typedef struct 
{
    int nim;
    int nilai;
}data;

int main(){
    data mhs1, mhs2, mhs3;
    printf("\n");
    printf("========================================\n");
    printf("||         DATA NIM DAN NILAI         ||\n");
    printf("========================================\n");
    printf("=> Mahasiswa A\n");
    printf("   NIM      : ");
    scanf("%d", &mhs1.nim);
    printf("   NILAI    : ");
    scanf("%d", &mhs1.nilai);
    printf("=> Mahasiswa B\n");
    printf("   NIM      : ");
    scanf("%d", &mhs2.nim);
    printf("   NILAI    : ");
    scanf("%d", &mhs2.nilai);
    printf("=> Mahasiswa C\n");
    printf("   NIM      : ");
    scanf("%d", &mhs3.nim);
    printf("   NILAI    : ");
    scanf("%d", &mhs3.nilai);
    if ((mhs1.nilai>mhs2.nilai)&&(mhs1.nilai>mhs3.nilai))
    {
        printf("========================================\n");
        printf("|| Mahasiswa A dengan NIM %d     ||\n", mhs1.nim);
        printf("|| memperoleh nilai terbesar yaitu %d ||\n", mhs1.nilai);
        printf("========================================\n");
    } else if ((mhs2.nilai>mhs1.nilai)&&(mhs2.nilai>mhs3.nilai))
    {
        printf("========================================\n");
        printf("|| Mahasiswa B dengan NIM %d     ||\n", mhs2.nim);
        printf("|| memperoleh nilai terbesar yaitu %d ||\n", mhs2.nilai);
        printf("========================================\n");
    } else if ((mhs3.nilai>mhs1.nilai)&&(mhs3.nilai>mhs2.nilai))
    {
        printf("========================================\n");
        printf("|| Mahasiswa C dengan NIM %d     ||\n", mhs3.nim);
        printf("|| memperoleh nilai terbesar yaitu %d ||\n", mhs3.nilai);
        printf("========================================\n");
    }
    
    return 0;
    
}