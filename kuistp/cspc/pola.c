#include<stdio.h>
#include<string.h>
int main(){
    char input[100];
    scanf("%s", input);
    int panjang = strlen(input)+1;
    for (int i = 0; i < panjang/2; i++) {
        for (int j = 0; j < (panjang/2)-(i+1); j++) {
            printf(" ");
        }
        if (strlen(input) % 2 == 0) {
            printf("%c", input[panjang/2+i]);
            for (int j = 0; j < i*2+1; j++) {
                printf(" ");
            }
            printf("%c", input[(panjang/2)-(i+1)]);
        } else {
            printf("%c", input[(panjang/2-1)+i]);
            if (i > 0) {
                for (int j = 0; j < i*2-1; j++) {
                    printf(" ");
                }
                printf("%c", input[panjang/2-(1+i)]);
            }
        }
        printf("\n");
    }
    return 0;
}