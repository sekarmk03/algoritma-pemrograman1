#include<stdio.h>
#include<string.h>
int main(){
    char string1[25] = "hayukk";
    char string2[25] = "meluncur";

    //akan bernilai negatif
    int cmp1 = strcmp(string1, string2);

    //akan bernilai positif
    int cmp2 = strcmp(string2, string1);

    printf("cmp1 : %d\n", cmp1);
    printf("cmp2 : %d\n", cmp2);
    return 0;
}