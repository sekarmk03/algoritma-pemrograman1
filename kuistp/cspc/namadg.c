#include<stdio.h>
int main(){
    char konsonan[10] = {'s','n','d','m','b','t','n','g','k','s'};
    char vokal[6] = {'e','i','o','a','a','a'};
    char nama[4];
    int get = 0;
    int n,m;
    int i,j;
    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; i++)
    {
        for ( j = 1; j <= 4; j++)
        {
            get=(i+1)*j*m;
            if (j%2>0)
            {
                if (get>10)
                {
                    nama[j-1]=konsonan[(get-1)%10];
                }
                else
                {
                    nama[j-1]=konsonan[get-1];                    
                }
            }
            else if (j%2==0)
            {
                if (get>6)
                {
                    nama[j-1]=vokal[(get-1)%6];
                }
                else
                {
                    nama[j-1]=vokal[get-1];                    
                }
            }
        }
        for ( j = 0; j < 4; j++)
        {
            printf("%c", nama[j]);
        }
        printf("\n");
    }
    return 0;
}