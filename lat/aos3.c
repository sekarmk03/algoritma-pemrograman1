#include<stdio.h>
#include<string.h>
int main(){
    char arr[50][100];
    int i = 0;
    do
    {
        scanf("%s", &arr[i]);
        i++;
    } while (strcmp(arr[i-1], "mantul") != 0);
    printf("===============\n");
    int panjang = i-1;
    for ( i = 0; i < panjang; i++)
    {
        printf("%d\n", strlen(arr[i]));
    }
    return 0;
}