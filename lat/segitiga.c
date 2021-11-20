#include <stdio.h>
int main () {
    int a;
    int t;
    printf("masukkan alas :\n");
    scanf("%d", &a);
    printf("masukkan tinggi :\n");
    scanf("%d", &t);
    int Luas = a * t / 2;
    printf("Luas segitiga adalah %d\n", Luas);
    return 0;
}