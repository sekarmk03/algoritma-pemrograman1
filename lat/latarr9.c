#include<stdio.h>
int main(){
    int a=0,b=0;
    int i;
    printf("Array pertama :\n");
    scanf("%d", &a);
    int ar1[a], ar2[b];
    for ( i = 0; i < a; i++)
    {
        scanf("%d", &ar1[i]); 
    }
    printf("\nArray kedua :\n");
    scanf("%d", &b);
    for ( i = 0; i < b; i++)
    {
        scanf("%d", &ar2[i]);
    }
    int maks=ar1[0];
    for ( i = 1; i < a; i++)
    {
        if (maks<ar1[i])
        {
            maks=ar1[i];
        }
    }
    int min=ar2[0];
    for ( i = 1; i < b; i++)
    {
        if (min>ar2[i])
        {
            min=ar2[i];
        } 
    }
    printf("Nilai maksimal array pertama : %d\n", maks);
    printf("Nilai minimal array kedua : %d\n", min);
    printf("Jumlah dari nilai maksimal array pertama\n");
    printf("dan nilai minimal array kedua : %d\n", maks+min);
    return 0;
}