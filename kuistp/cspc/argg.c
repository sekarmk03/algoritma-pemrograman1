#include<stdio.h>
int main(){
    int n1,n2;
    int i,j;
    scanf("%d", &n1);
    int arr1[n1], a1[100], b1[100], a2[100], b2[100];
    for ( i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
        for ( j = 0; j < i; j++)
        {
            if (arr1[i]%2==1)
            {
                a1[j]=i;
                //printf("index : %d", a1);
            }
            else if (arr1[i]%2==0)
            {
                b1[j]=i;
                //printf("index : %d", b1);
            }
        }
        
    }
    scanf("%d", &n2);
    int arr2[n2];
    for ( i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
        if (arr2[i]%2==1)
        {
            for ( j = i; j < 1; j++)
            {
                a2[j]=i;
            }
            //printf("index : %d", a2);
        }
        else if (arr2[i]%2==0)
        {
            for ( j = i; j < 1; j++)
            {
                b2[j]=i;
                //printf("index : %d", b2);
            }
        }
    }
    int a=0;
    for ( i = 0; i < n1 || i < n2; i++)
    {
        printf("%d %d %d %d\n", a1[i], a2[i], b1[i], b2[i]);
        if (n1==n2)
        {
            if (a1[i]==a2[i] && b1[i]==b2[i])
            {
                a+=1;
            }
            else if (a1[i]!=a2[i] && b1[i]!=b2[i])
            {
                a=0;
            }
        }
        else if (n1!=n2)
        {
            a=0;      
            /*if (a1==a2 && b1==b2)
            {
                printf("tidak valid\n");
            }
            else if (a1!=a2 && b1!=b2)
            {
                printf("tidak valid\n");        
            }*/
        }
    }
    if (a>=1)
    {
        printf("valid\n");
    }
    else if (a==0)
    {
        printf("tidak valid\n");
    }
    return 0;
}