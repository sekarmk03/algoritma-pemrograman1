#include<stdio.h>
int main(){
    int i;
    int arr[6];
    int a = 0;
    int b = 0;
    int nap[6];
    int jil[6];
    for ( i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }
    for ( i = 0; i < 6; i++)
    {
        if (arr[i]%2==1)
        {
                jil[b]=arr[i];
                b+=1;
        }else if (arr[i]%2==0)
        {
                nap[a]=arr[i];
                a+=1;
        }
    }
    if ((b==3)||(a==3))
    {
        for ( i = 0; i < 3; i++)
        {
            a=i;
            b=i;
            printf("%d\n%d\n", nap[a], jil[b]);
        }
    } else
    {
        printf("tidak valid\n");
    }
    return 0;
}