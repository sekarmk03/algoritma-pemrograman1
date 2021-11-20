#include<stdio.h>
#include<string.h>
int main(){
    char input[100];
    char panjang[100];
    int i = 0;
    int terpanjang = 0;
    do
    {
        scanf("%s", input);
        if (strlen(input) > terpanjang)
        {
            terpanjang = strlen(input);
            strcpy(panjang, input);
        }
        i++;
    } while (strcmp(input, "udah") != 0);
    printf("================\n");
    printf("string terpanjang adalah %s", panjang);
    return 0;
}