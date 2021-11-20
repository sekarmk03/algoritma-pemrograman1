#include <stdio.h>
int main(){
    int bil1, bil2, kali, tambah;
    printf ("masukkan 2 buah bilangan sembarang :\n");
    scanf ("%d\n", &bil1);
    scanf ("%d", &bil2);
    kali = bil1 * bil2;
    tambah = bil1 + bil2;
    printf("===================================\n");
    if ((bil1%2==0)&&(bil2%2==0))
    {
        printf("hasil kalinya adalah %d\n", kali);
        
    } else if ((bil1%2==1)&&(bil2%2>=1))
    {
        printf("Hasil tambahnya adalah %d\n", tambah);
    } else
    {
        printf("%d %d", bil1, bil2);
    }
    
    return 0;
    
}