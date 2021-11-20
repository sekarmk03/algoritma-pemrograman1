#include <stdio.h>

int main(){

    //deklarasi variabel dan tipe data yang akan digunakan
    float f1, f2, f3, f4, f5, f6;
    int dep1, dep2, dep3, dep4, dep5,dep6;
    float has1, has2, has3, has4, has5, has6;
    int nah1, nah2, nah3, nah4, nah5, nah6;
    int cek = 0;

    //meminta user memasukkan nilai berupa angka berkoma
    scanf("%f\n%f\n%f\n%f\n%f\n%f", &f1, &f2, &f3, &f4, &f5, &f6);

    //proses akumulasi angka berkoma menjadi bilangan bulat
    dep1=f1;
    //proses untuk membuat satu angka di belakang koma maju ke depan koma
    has1=(f1-dep1)*10;
    //proses menjadikan angka berkoma menjadi bilangan bulat
    nah1=has1;

    dep2=f2;
    has2=(f2-dep2)*10;
    nah2=has2;

    dep3=f3;
    has3=(f3-dep3)*10;
    nah3=has3;

    dep4=f4;
    has4=(f4-dep4)*10;
    nah4=has4;

    dep5=f5;
    has5=(f5-dep5)*10;
    nah5=has5;

    dep6=f6;
    has6=(f6-dep6)*10;
    nah6=has6;

    //printf("%d\n%d\n%d\n%d\n%d\n%d", nah1, nah2, nah3, nah4, nah5, nah6);


    /*pengondisian dan parameter kondisi yang harus dipenuhi
    yaitu minimal ada 3 masukan, yang satu angka di belakang komanya
    merupakan kelipatan dari 3*/
    if ((nah1%3 == 0)&&(nah1!=0))
    {
        cek+=1;
    }
    if ((nah2%3 == 0)&&(nah2!=0))
    {
        cek+=1;
    }
    if ((nah3%3 == 0)&&(nah3!=0))
    {
        cek+=1;
    }
    if ((nah4%3 == 0)&&(nah4!=0))
    {
        cek+=1;
    }
    if ((nah5%3 == 0)&&(nah5!=0))
    {
        cek+=1;
    }
    if ((nah6%3 == 0)&&(nah6!=0))
    {
        cek+=1;
    }
    

    if( cek>=3 )
    {
    //  jika kondisi di atas ada yang terpenuhi maka munculkan pesan "valid"
        printf("valid\n");
    } else
    {
    //  jika kondisi tidak terpenuhi maka munculkan pesan "tidak valid"
        printf("tidak valid\n");
    }
    

    //menghentikan proses
   return 0;

}