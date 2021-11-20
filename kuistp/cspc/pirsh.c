#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int panjang, indexes, akar, pangkat, tambah, tempAkar, temp, index = 0, tanda = 0, ind_ex = 0;
    int i, j, k;
    char input[100];
    scanf("%s", input);
    panjang = strlen(input);
    indexes = panjang-1;
    akar = sqrt(indexes);
    temp = akar;
    tempAkar = floor(akar);
    tambah = 0;
    for ( i = 0; i <= floor(akar); i++)
    {
        pangkat = pow(temp, 2);
        for ( j = 0; j < floor(akar)-i; j++)
        {
            printf(" ");
        }
        index = 0;
        k = 0;
        for ( j = 0; j < i+1; j++)
        {
            if (j > 1)
            {
                k++;
            }
            ind_ex = pangkat+(index+k*2);
            if (ind_ex < strlen(input))
            {
                printf("%c", input[ind_ex]);
                //printf("%d", ind_ex); 
                tanda++;           
            }
            tambah = tempAkar * 2;
            index += tambah + k * 2;
        }
        if (i > 0)
        {
            tempAkar--;        
        }
        temp--;
        printf("\n");
    }
    //printf("tanda = %d\n", tanda);
    if (tanda < strlen(input))
    {
        int temp1 = akar;
        temp = 2;
        tempAkar = 4;
        //printf("tempAkar = %d\n", tempAkar);
        int baris;
        baris = (strlen(input) < pow(akar+1, 2)-1) ? akar-1 : akar;
        for ( i = 0; i < baris; i++)
        {
            pangkat = pow(temp, 2);
            for ( j = 0; j <= i ; j++)
            {
                printf(" ");
            }
            index = 0;
            k = 0;
            ind_ex = 0;
            for ( j = 0; j <= floor(akar); j++)
            {
                if (j > 0)
                {
                    k++;
                    pangkat+=1;
                }
                ind_ex = (pangkat-(j+1))+(index);
                if (ind_ex < strlen(input))
                {
                    printf("%c", input[ind_ex]);
                    //printf("%d", ind_ex);
                }
                index += tempAkar + k * 2;
                //printf("index %d\n", index);
            }
            tempAkar+=2;
            temp++;
            printf("\n");
        }
    }
    
    
    return 0;
}