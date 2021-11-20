#include<stdio.h>
int main(){
    int i;
    int n;
    int cek=0;
    int dep[100];
    int bel[100];
    scanf("%d", &n);
    float arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
        dep[i]=arr[i];
        bel[i]=(arr[i]-dep[i])*100+.5;
        if (dep[i]%bel[i]==0)
        {
            cek++;
        }
    }
    if (n>=3 && cek>=3)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    
    return 0;
}