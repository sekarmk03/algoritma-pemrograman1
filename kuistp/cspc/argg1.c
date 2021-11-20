#include<stdio.h>
int main(){
    int n1,n2;
    int i;
    int a1=0,a2=0,b1=0,b2=0;
    int cek=1;
    scanf("%d", &n1);
    int arr1[n1];
    for ( i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &n2);
    int arr2[n2];
    for ( i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    if (n1==n2)
    {
        for ( i = 0; i < n1; i++)
        {
            if ((arr1[i]%2==1 && arr2[i]%2==0)||(arr1[i]%2==0 && arr2[i]%2==1))
            {
                printf("tidak valid\n");
                cek=0;
                break;
            }
        }
        if (cek)
        {
            printf("valid\n");
        }
    }
    else if (n1!=n2)
    {
        printf("tidak valid\n");
    }
    return 0;
}