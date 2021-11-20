#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int tabInt[n];
    int i;
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &tabInt[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d\n", tabInt[i]);
    }
    return 0;
}