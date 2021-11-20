#include<stdio.h>
int main(){
    int n=0;
    int i;
    scanf("%d", &n);
    unsigned char ar1[n];
    for ( i = 0; i < n; i++)
    {
        scanf(" %c", &ar1[i]);
    }
    for ( i = 0; i < n; i++)
    {
        if (ar1[i]>=65 && ar1[i]<=90)
        {
            ar1[i]=ar1[i]-n;
            while (ar1[i]<65)
            {
                //ar1[i]=ar1[i]+26;
                ar1[i]=90-(64-ar1[i]);
            }
        } else if (ar1[i]>=97 && ar1[i]<=122)
        {
            ar1[i]=ar1[i]+n;
            while (ar1[i]>122)
            {
                //ar1[i]=ar1[i]-26;
                ar1[i]=96+(ar1[i]-122);
            }
        }
    }
    for ( i = 0; i < n; i++)
    {
        printf("%c", ar1[i]);
    }
    printf("\n");
    return 0;
}