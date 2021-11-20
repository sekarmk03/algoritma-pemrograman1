#include<stdio.h>
/*
    Saya Sekar Madu Kusumawardani [2007703] mengerjakan 
    soal evaluasi - altibe20
    dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahanNya maka saya tidak melakukan kecurangan
    seperti yang telah dispesifikasikan. Aamiin
*/
int main(){
    int n,i,j,k;
    scanf("%d", &n);
    char nama[n];
    int sum=0;
    for ( i = 0; i < n; i++)
    {
        scanf(" %c", &nama[i]);
        sum+=nama[i];
    }
    for ( j = 0; j < n; j++)
    {
        for ( i = 0; i < n-(j+1); i++)
        {
            printf(" ");
        }
        for ( i = 0; i < j; i++)
        {
            printf("%c", nama[i]);
        }
        for ( i = 0; i < j; i++)
        {
            printf("%c", nama[i]);
        }
        for ( i = 0; i < (n*2-1)-(j*2); i++)
        {
            printf("%c", nama[j]);
        }
        for ( i = j-1; i >= 0; i--)
        {
            printf("%c", nama[i]);
        }
        for ( i = j-1; i >= 0; i--)
        {
            printf("%c", nama[i]);
        }
        printf("\n");
    }
    for ( j = n-1; j > 0; j--)
    {
        for ( i = n-(j+1); i > 0; i--)
        {
            printf(" ");
        }
        for ( i = 0; i < n-(j+1); i++)
        {
            printf("%c", nama[i]);
        }
        for ( i = 0; i < n-(j+1); i++)
        {
            printf("%c", nama[i]);
        }
        for ( i = 0; i < (j+1)*2; i++)
        {
            printf("%c", nama[(n-2)-j]);
        }
        for ( i = j-1; i>=0 ; i--)
        {
            printf("%c", nama[i]);
        }
        for ( i = j-1; i>=0 ; i--)
        {
            printf("%c", nama[i]);
        }
        printf("\n");
    }
    if (sum%2==0)
    {
        printf("halo loki.\n");
    }
    else if (sum%2==1)
    {
        printf("good bye my friend.\n");
    }
    return 0;
}