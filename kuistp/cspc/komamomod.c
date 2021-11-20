#include <stdio.h>

int main(){
    float bil;
    int depan;
    int belakang;
    printf("masukkan bilangan berkoma : ");
    scanf("%f", &bil);
    depan=bil;
    belakang=(bil-depan)*100;
    if (depan%belakang == 0)
    {
        printf("bilangan di depan koma merupakan KELIPATAN bilangan di belakang koma");
    }
    else if (depan%belakang >= 1)
    {
        printf("bilangan di depan koma BUKAN merupakan KELIPATAN bilangan di belakang koma");
        
    }
    
    return 0;
}