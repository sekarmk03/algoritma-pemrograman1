#include<stdio.h>
int main(){
    int n1, n2;
    int pertama=0;
    int kedua=0;
    scanf("%d", &n1);
    int x[n1];
    int i;
    if ((n1%2==0)&&(n1!=0))
    {
        for ( i = 0; i < n1; i++)
        {
            scanf("%d", &x[i]);
        }
        for ( i = 0; i < n1/2; i++)
        {
            //printf("%d\n", x[i]);
            pertama+=x[i];
        }
        //printf("%d", pertama);
    }
    scanf("%d", &n2);
    int y[n2];
    if ((n2%2==0)&&(n2!=0))
    {
        for (i = 0; i < n2; i++)
        {
            scanf("%d", &y[i]);
        }
        for ( i = n2-1; i > (n2/2)-1; i--)
        {
            //printf("%d", y[i]);
            kedua+=y[i];
        }
    }
    //printf("%d\n%d", pertama, kedua);
    if (pertama==kedua)
    {
        printf("valid\n");
    } else
    {
        printf("tidak valid\n");
    }
    return 0;
}