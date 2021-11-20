#include<stdio.h>
#include<string.h>
int main(){
    int i, j, k;
    char input[100];
    int temp;
    gets(input);
    int enkripsi[strlen(input)][8];
    for ( i = 0; i < strlen(input); i++)
    {
        if (input[i] == 32)
        {
            input[i] -= 5;
        }
        else if (input[i] >= 97 && input[i] <= 122)
        {
            input[i] -= 96;
        }
        temp = input[i];
        for(j = 0; j < 8; j++)
        {
            enkripsi[i][j] = temp % 2;
            temp /= 2;
        }
        for ( k = 7; k >= 0; k--)
        {
            printf("%d", enkripsi[i][k]);
        }
    }
    printf("\n");
    return 0;
}

