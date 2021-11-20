#include <stdio.h>
#include <string.h>

int main(){

    //=== VARIABEL ===//
    char strIn[100]; //input
    char string[100][100];//kata
    char pisah[50]; //pemisah
    int i, j, l, m, o, p, compare;;
    int s, k;
    int baris, kolom;
    int temp, spasi = 0;

    //=== INPUT ===//
    scanf("%s", strIn);
    fgets(strIn, sizeof strIn, stdin);

    int len = strlen(strIn);

    k = 0; s = 0; 
    i = 0; 
    while (i <= len)
    {
        if (strIn[i] == '|' || strIn[i] == '\0')
        {
            string[s][k] = '\0';
            s++;
            j = 0;
        }
        else
        {
            string[s][k] = strIn[i];
            j++;
        }    
        i++;
    }
    
    i=0;
    while (i < s-1)
    {
        printf("Tanpa kata kunci: %s\n", string[i]);
        i++;
    }
    
    baris = 0;
    while(baris < len)
    {
        kolom = 0;
        while(kolom < len)
        {
            if ( (baris == kolom) || ((baris + kolom) == (len-1)) )
            {
                printf("%c", string[kolom]);
            }
            else{
                printf(" ");
            }
            kolom++;
            }
            printf("\n");
            baris++;
        }

    return 0;
}