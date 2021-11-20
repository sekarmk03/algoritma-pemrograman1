#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n-(n-i)+1; j++)
        /* perulangan :
           misal input n=5
           baris 1 = 5-(5-0)+1 = 1 bintang
           baris 2 = 5-(5-1)+1 = 2 bintang
           baris 3 = 5-(5-2)+1 = 3 bintang
        */
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}