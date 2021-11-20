#include<stdio.h>

int main(){
    int i, j;
    int arr[] = {0, 23, 14, 12, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Asli :\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int idxMin, temp;
    for ( i = 0; i < n-1; i++)
    {
        idxMin = i;
        for ( j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[idxMin]){
                idxMin = j;
            }
        }
        temp = arr[idxMin];
        arr[idxMin] = arr[i];
        arr[i] = temp;
    }
    printf("Ascending :\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}