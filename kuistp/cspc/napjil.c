#include <stdio.h>
#include<conio.h>

int main(){
    int a, b, c, d, e, f, cek=0;
    int bil1, bil2, bil3, bil4, bil5, bil6;
    scanf("%d\n%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &e, &f);
    if ((a%2==0)&&(a%2!=0))
    {
        cek+=1;
    }
    if ((b%2==0)&&(b%2!=0))
    {
        cek+=1;
    }
    if ((c%2==0)&&(c%2!=0))
    {
        cek+=1;
    }
    if ((d%2==0)&&(d%2!=0))
    {
        cek+=1;
    }
    if ((e%2==0)&&(e%2!=0))
    {
        cek+=1;
    }
    if ((f%2==0)&&(f%2!=0))
    {
        cek+=1;
    }

    if (cek==3)
    {
        printf("%d\n%d\n%d\n%d\n%d\n%d\n", bil1, bil2, bil3, bil4, bil5, bil6);
    } else
    {
        printf("tidak valid\n");
    }

    return 0;
    
}