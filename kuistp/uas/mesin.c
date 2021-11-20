#include "header.h"

void Luas(int *i){
    if (strcmp(arr[*i].str, "persegi") == 0){
        luas[*i] = arr[*i].x1 * arr[*i].x2;
        printf("%0.2f\n", luas[*i]);
    } else if (strcmp(arr[*i].str, "segitiga") == 0){
        luas[*i] = arr[*i].x1 * arr[*i].x2 * 0.5;
        printf("%0.2f\n", luas[*i]);
    }
}

float Max(int n){
    float max;
    int i = 0;
    max = luas[i];
    for ( i = 1; i < n; i++){
        if (max < luas[i]){
            max = luas[i];
        }
    }
    return max;
}