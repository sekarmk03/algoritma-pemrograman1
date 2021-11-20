#include<stdio.h>
int main(){
    int n,i;
    scanf("%d", &n);
    int x[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%c", &x[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%c", x[i]);
    }
    
    return 0;
}