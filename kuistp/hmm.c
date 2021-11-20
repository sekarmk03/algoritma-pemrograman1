#include<stdio.h>
#include<string.h>
int main(){
    char kalimat[100];
    char huruf[50];
    int angka[50];
    int n;
    scanf("%s", &kalimat);
    scanf("%d", &n);
    int i, j;
    for ( i = 0; i < n; i++){
        scanf(" %c %d", &huruf[i], &angka[i]);
    }
    int total[50];
    for ( i = 0; i < strlen(huruf); i++)
    {
        total[i] = 0;
        for ( j = 0; j < strlen(kalimat); j++){
            if (huruf[i] == kalimat[j]){
                total[i]++;
            }
        }
        if (total[i] >= angka[i]){
            printf("aku sih yes");
        } else{
            printf("aku sih no");
        }
        printf("\n");
    }
    return 0;
}