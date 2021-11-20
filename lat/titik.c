#include <stdio.h>
#include <math.h>
int main () {
    int x1;
    int y1;
    int x2;
    int y2;
    printf("Masukkan nilai x1 :\n");
    scanf("%d", &x1);
    printf("Masukkan nilai y1 :\n");
    scanf("%d", &y1);
    printf("Masukkan nilai x2 :\n");
    scanf("%d", &x2);
    printf("Masukkan nilai y2 :\n");
    scanf("%d", &y2);
    int jarak = (sqrt((x1 - x2) * (x1 - x2))) + (y1 - y2) * (y1 - y2);
    printf("jarak dua titik adalah %d\n", jarak);
    return 0;
}