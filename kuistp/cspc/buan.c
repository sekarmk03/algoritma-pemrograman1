#include<stdio.h>
int main(){
    int a1,a2,a3,a4,a5,a6;
    int penghitung=0;
    scanf("%d%d%d%d%d%d", &a1, &a2, &a3, &a4, &a5, &a6);
    if ((a1>=1000)&&(a1<10000))
    {
        penghitung+=1;
    }
    if ((a2>=1000)&&(a2<10000))
    {
        penghitung+=1;
    }
    if ((a3>=1000)&&(a3<10000))
    {
        penghitung+=1;
    }
    if ((a4>=1000)&&(a4<10000))
    {
        penghitung+=1;
    }
    if ((a5>=1000)&&(a5<10000))
    {
        penghitung+=1;
    }
    if ((a6>=1000)&&(a6<10000))
    {
        penghitung+=1;
    }

    if (penghitung>=3)
    {
        printf("ribuan 3 atau lebih\n");
    } else
    {
        printf("tidak valid\n");
    }
    
    return 0;
    
}