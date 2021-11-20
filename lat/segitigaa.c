#include <stdio.h> //mengambil library stdio.h

int main(){
    int a,b,c;
    printf("masukkan sisi a : ");
    scanf("%d", &a);
    printf("masukkan sisi b : ");
    scanf("%d", &b);
    printf("masukkan sisi c : ");
    scanf("%d", &c);
    if ((a==b)&&(a==c))
    {
        printf("Segitiga sama sisi");
    } else if ((b*b==c*c-a*a)||(a*a==c*c-a*a)||(c*c==a*a+b*b))
    {
        printf("Segitiga siku-siku");
    } else if (((a==b)&&(a!=c))||((a==c)&&(a!=b))||((b==c)&&(b!=a)))
    {
        printf("Segitiga sama kaki");
    } else if (a!=b!=c)
    {
        printf("Segitiga sembarang");
    } else
    {
        printf("masukan tidak valid");
    }
    
    
    
    
    
}