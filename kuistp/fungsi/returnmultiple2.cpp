#include <cstdio>
#include <iostream>
using namespace std;

void CariMaxMin(int arr[], int &mx, int &mn, int n){
    int i;
    for ( i = 1; i < n; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
        }
        if (arr[i] < mn)
        {
            mn = arr[i];
        }
    }
}

int main(){
    int n, i, maks, min;
    cin >> n;
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    maks = arr[0];
    min = arr[0];
    CariMaxMin(arr, maks, min, n);
    cout << "maks = " << maks << endl << "min = " << min << endl;
    return 0;
}