#include<stdio.h>
int main(){
    int n=0;
    int i,j;
    scanf("%d", &n);
    unsigned char ar1[n], ar2[n], ar3[n];
    for ( i = 0; i < n; i++)
    {
        scanf(" %c", &ar1[i]);
    }
    for ( i = 0; i < n; i++)
    {
        if (ar1[i]>=65 && ar1[i]<=90)
        {
            ar2[i]=ar1[i]-n;
            if (ar2[i]<65 && n<=26)
            {
                ar2[i]=ar2[i]+26;
                //ar2[i]=90-(64-ar2[i]);
            }
            else if (ar2[i]<65 && n>26)
            {
                for ( j = 1; j <= 26; j++)
                {

                    ar2[i]=90-(64-ar2[i]);
                }
            }
            printf("%c", ar2[i]);
        }
        else if (ar1[i]>=97 && ar1[i]<=122)
        {
            ar3[i]=ar1[i]+n;
            if (ar3[i]>122 && n<=26)
            {
                //ar1[i]=ar1[i]-26;
                ar3[i]=96+(ar3[i]-122);
            }
            else if (ar3[i]>122 && n>26)
            {
                for ( j = 1; j <= 26; j++)
                {
                    ar3[i]=96+(ar3[i]-122);
                }
            }
            printf("%c", ar3[i]);
        }
    }
    /*for ( i = 0; i < n; i++)
    {
        printf("%c", ar1[i]);
    }*/
    printf("\n");
    return 0;
}