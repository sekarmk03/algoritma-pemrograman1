#include <stdio.h>

int main(){ //method int
    int x; //deklarasi var x dengan tipdat integer untuk menampung input
    printf("mau tanya angka berapa?\n"); //yang pertama ditampilkan ke user
    scanf("%d", &x); //meminta user menginput angka
    if((x>0)&&(x<10)) //cek kondisi apakah x > 0 dan x < 10
    {
        printf("\n%d adalah angka satuan", x);
        //jika iya maka ditampilkan output di atas
        //jika tidak lanjut ke pengecekan selanjutnya
    }
    else if ((x>10)&&(x<100)) //cek kondisi apakah x>10 dan x<100
    {
        printf("\n%d adalah angka puluhan", x);
        //jika iya maka ditampilkan output di atas
        //jika tidak lanjut ke pengecekan selanjutnya
    }
    else if ((x>100)&&(x<1000)) //cek kondisi apakah x>100
    {
        printf("\n%d adalah angka ratusan", x);
        //jika iya maka ditampilkan output di atas
        //jika tidak lanjut ke pengecekan selanjutnya
    }
    else
    {
        printf("\nangka yang kamu masukkan tidak valid.\n");
        printf("batas angka yang bisa ditanyakan adalah 3 digit:).\n");
        printf("silahkan coba lagi!!\n");
    }
    
    return 1;
}