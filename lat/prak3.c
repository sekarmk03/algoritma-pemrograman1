#include<stdio.h>
typedef struct prak3
{
    int a,b,c;
    char x;
}bungkus;
int main(){
    bungkus bu;
    int hasil=0;
    scanf("%d %d %d %c", &bu.a, &bu.b, &bu.c, &bu.x);
    switch (bu.x)
    {
    case 'A':
        hasil=(bu.a*bu.b)+(bu.b*bu.c);
        break;
    case 'B':
        hasil=(bu.a*bu.b)/bu.c;
        break;
    case 'C':
        hasil=bu.a*(bu.b-bu.c);
        break;
    default:
        hasil=(bu.a+bu.b)-bu.c;
        break;
    }
    printf("%d\n", hasil);
    return 0;
}