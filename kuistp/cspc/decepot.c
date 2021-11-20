#include<stdio.h>
#include<string.h>
int main(){
    int i, j, k;
    long long int biner;
    long long int temp = 0, pangkat = 1, desimal = 0;
    scanf("%d", &biner);
    //for(i = 0; i < 8; i++)
    while(biner != 0)
    {
        temp = biner % 10;
        desimal += temp * pangkat;
        biner /= 10;
        pangkat *= 2;
    }
    printf("%d", desimal);
    return 0;
}