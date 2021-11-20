#include<stdio.h>
int main(){
    int col,n,a,b,c;
    scanf("%d", &n);

    for ( col = 0; col < n*2; col++)
    {
        for ( a = 0; a < col+1; a++){
            printf("*");
        }
        for ( a = 0; a < (n*4-2)-(2*col); a++){
            printf(" ");
        }
        for ( a = 0; a < col*2+1; a++){
            printf("*");
        }
        for ( a = 0; a < (n*4-2)-(2*col); a++){
            printf(" ");
        }
        for ( a = 0; a < col+1; a++){
            printf("*");
        }
        printf("\n");
    }

    for ( col = 0; col < n; col++)
    {
        for ( b = 0; b < n*2+1; b++){
            printf(" ");
        }
        for ( b = 0; b < (n*4)-3; b++){
            printf("*");
        }
        printf("\n");
    }
    
    for ( col = 0; col < n; col++)
    {
        for ( c = 0; c < (n*2+1)+(3*(n-1)) ; c++){
            printf(" ");
        }
        for ( c = 0; c < col; c++){
            printf(" ");
        }
        for ( c = 0; c < n-col; c++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}