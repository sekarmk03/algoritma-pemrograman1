#include <stdio.h>
#include <string.h>


void CariMaxMin(int arr[], int *mx, int *mn, int n){
    int i;
    for ( i = 1; i < n; i++)
    {
        if (*mx < arr[i])
        {
            *mx = arr[i];
        }
        if (*mn > arr[i])
        {
            *mn = arr[i];
        }
    }
}

int main(){
    int n, i, maks, min;
    scanf("%d", &n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    maks = arr[0];
    min = arr[0];
    CariMaxMin(arr, &maks, &min, n);
    printf("maks = %d\nmin = %d\n", maks, min);
    return 0;
}

//prosedur void CariMaxMin mengolah dua variabel pass by reference
//sehingga hasil pengolahan masuk ke variabel asli
//hal ini sama dengan mengembalikan nilai dari kedua variabel tersebut