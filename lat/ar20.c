#include<stdio.h>
int main(){
    int a=0;
    int i;
    int inmak=0, inmi=0;
    scanf("%d", &a);
    int ar1[a];
    for ( i = 0; i < a; i++)
    {
        scanf("%d", &ar1[i]); 
    }
    int maks=ar1[0];
    for ( i = 1; i < a; i++)
    {
        if (maks<ar1[i])
        {
            maks=ar1[i];
            inmak=i-1;
        }
    }
    int min=ar1[0];
    for ( i = 1; i < a; i++)
    {
        if (min>ar1[i])
        {
            min=ar1[i];
            inmi=i-1;
        } 
    }
    printf("\n");
    printf("%d\n", inmak*min);
    printf("%d", maks-inmi);
    return 0;
}