#include<stdio.h>
int main(){
    int i,j=0;
    int n1,n2;
    int desimal = 0, getbin = 0, pangkat = 1, sum = 0;
    scanf("%d", &n1);
    char bin1[n1];
    for ( i = 0; i < n1; i++)
    {
        scanf(" %c", &bin1[i]);
    }
    scanf("%d", &n2);
    char bin2[n2];
    for ( i = 0; i < n2; i++)
    {
        scanf(" %c", &bin2[i]);
    }
    char biner[n1+n2];
    for ( i = 0; i < n1+n2; i++)
    {

        biner[j]=bin1[i];
        biner[j+1]=bin2[i];
        j+=2;
    }
    for ( i = 0; i < n1+n2; i++)
    {
        printf("%c", biner[i]);
    }
    
    
    return 0;
}