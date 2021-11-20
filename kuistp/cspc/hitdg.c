#include<stdio.h>
int main(){
    int n, m, p, an, am, ap; //deklarasi variabel inputan
    int waktu, jam, menit; //deklarasi variabel proses
    scanf("%d%d%d%d%d%d", &n, &m, &p, &an, &am, &ap);//meminta inputan user
    waktu=(n*an)+(m*am)+(p*ap);//proses mencari waktu menit totalnya dikali jumlah domba
    jam=waktu/60;//proses mencari jam
    menit=waktu%60;//proses mencari menit
    printf("%.2d:%.2d:00\n", jam, menit);//output dalam bentuk 00:00:00
    return 0;
}