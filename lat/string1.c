#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    scanf("%s", &str);
    printf("Pola Huruf 1\n");
    int i, j, spasi = 0;
    for ( i = 0; i < strlen(str); i++)
    {
        for ( j = 0; j < i /*spasi*/; j++)
        {
            printf(" ");
        }
        printf("%c\n", str[i]);
        //spasi++;
    }
    printf("%d\n", strlen(str));



    printf("Pola Huruf 2\n");
    for ( i = 0; i <= strlen(str) / 2; i++)
    {
        for ( j = 0; j < i; j++)
        {
            printf(" ");
        }
        printf("%c\n", str[i]);
    }
    for ( i = strlen(str) / 2 + 1; i < strlen(str) ; i++)
    {
        for ( j = strlen(str)-(i+1); j > 0; j--)
        {
            printf(" ");
        }
        printf("%c\n", str[i]);
    }
    


    printf("Pola Huruf 3\n");
    for ( i = 0; i < strlen(str); i++)
    {
        for ( j = strlen(str)-(i+1); j > 0; j--)
        {
            printf(" ");
        }
        printf("%c\n", str[i]);
    }
    


    printf("Pola Huruf 3\n");
    for ( i = strlen(str)-1; i >= 0; i--)
    {
        for ( j = i; j > 0; j--)
        {
            printf(" ");
        }
        printf("%c\n", str[i]);
    }
    
    return 0;
}