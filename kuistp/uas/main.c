#include "header.h"
int main(){
    int i = 0;
    int n = 0;
    scanf("%d", &n);
    for ( i = 0; i < n; i++){
        scanf("%d", &arr[i].x1);
        scanf("%d", &arr[i].x2);
        scanf("%s", arr[i].str);
    }
    for ( i = 0; i < n; i++)
    {
        Luas(&i);
    }
    
    float max = Max(n);
    printf("maksimal: %0.2f\n", max);
    return 0;
}