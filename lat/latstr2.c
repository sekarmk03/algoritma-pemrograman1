#include<stdio.h>
#include<string.h>
int main(){
    char string1[25];
    char string2[25];
    char tampungan[25];

    scanf("%s", string1);
    scanf("%s", string2);

    int cmp = strcmp(string1,string2);
    if (cmp == 0)
    {
        printf("String nya sama\n");
    }
    if (strcmp(string1, string2) == 0)
    {
        printf("String nya memang sama\n");
    }
    else
    {
        printf("String nya berbeda\n");
    }
    
    do
    {
        scanf("%s", tampungan);
    } while (strcmp(tampungan, "stop") != 0);
    
    return 0;
}