#include <cstdio>
#include <iostream>
using namespace std;

class Sortingg{
    public:
    int bil[100];
};

Sortingg Urutkan(int len){
    Sortingg urut;
    int temp = 0, i, idxMin = 0, j;
    for ( i = 0; i < len - 1; i++)
    {
        idxMin = i;
        for ( j = i + 1; j < len; j++)
        {
            if (urut.bil[j] < urut.bil[idxMin])
            {
                idxMin = j;
            }
        }
        temp = urut.bil[idxMin];
        urut.bil[idxMin] = urut.bil[i];
        urut.bil[i] = temp;
    }
    return urut;
}

int main(){
    Sortingg Urut;
    int n, i;
    cin >> n;
    for ( i = 0; i < n; i++)
    {
        cin >> Urut.bil[i];
    }
    //Urut = Urutkan(n);
    int temp = 0, idxMin = 0, j;
    for ( i = 0; i < n - 1; i++)
    {
        idxMin = i;
        for ( j = i + 1; j < n; j++)
        {
            if (Urut.bil[j] < Urut.bil[idxMin])
            {
                idxMin = j;
            }
        }
        temp = Urut.bil[idxMin];
        Urut.bil[idxMin] = Urut.bil[i];
        Urut.bil[i] = temp;
    }
    for ( i = 0; i < n; i++)
    {
        cout << i+1 << ". " << Urut.bil[i] << endl;
    }
    return 0;
}