#include <stdio.h>
int main(){ /*deklarasi variabel dan tipe data yang akan digunakan*/ int a1, a2, a3, a4, a5, a6; int cek=0; /*meminta user memasukkan nilai berupa angka*/ scanf("%d\n%d\n%d\n%d\n%d\n%d", &a1, &a2, &a3, &a4, &a5, &a6);/*pengondisian dan parameter kondisi yang harus dipenuhi yaitu minimal ada 3 masukan, yang merupakan angka ribuan*/if ((a1>=1000)&&(a1<10000)){/*jika kondisi terpenuhi makan nilai 1 ditambahkan ke dalam variabel cek*/cek+=1;}if ((a2>=1000)&&(a2<10000)){/*jika kondisi terpenuhi makan nilai 1 ditambahkan ke dalam variabel cek*/cek+=1;}if ((a3>=1000)&&(a3<10000)){/*jika kondisi terpenuhi makan nilai 1 ditambahkan ke dalam variabel cek*/cek+=1;}if ((a4>=1000)&&(a4<10000)){/*jika kondisi terpenuhi makan nilai 1 ditambahkan ke dalam variabel cek*/cek+=1;}if ((a5>=1000)&&(a5<10000)){/*jika kondisi terpenuhi makan nilai 1 ditambahkan ke dalam variabel cek*/cek+=1;}if ((a6>=1000)&&(a6<10000)){/*jika kondisi terpenuhi makan nilai 1 ditambahkan ke dalam variabel cek*/cek+=1;}/*jika nilai dari variabel cek sudah ada 3 atau lebih*/if (cek>=3){/*print jika memenuhi kondisi*/printf("ribuan 3 atau lebih\n");} else{/*print jika kondisi tidak terpenuhi*/printf("tidak valid\n");}/*hentikan program*/return 0;}