#include<stdio.h>

int main(){
    char nilai;
    printf("Masukkan nilai Anda :\n");
    scanf("%c", &nilai);
    switch (nilai)
    {
    case 'A':
        printf("PERFECT!\n");
        break;
    case 'B':
        printf("GOOD!\n");
        break;
    case 'C':
        printf("NOT BAD!\n");
        break;
    case 'D':
        printf("YOUR SCORE IS BAD!\n");
        break
    case 'E':
        printf("REMEDIAL, HERE WE GO AGAIN!\n");
    default:
        printf("YOU DONT HAVE ANY SCORE!\n");
        break;
    }
    return 0;
}