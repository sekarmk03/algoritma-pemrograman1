#include <stdio.h>

int main(){

    //deklarasi variabel dan tipe data yang akan digunakan
    float f1, f2, f3, f4, f5, f6;
    int dep1, dep2, dep3, dep4, dep5,dep6;
    float has1, has2, has3, has4, has5, has6;
    int nah1, nah2, nah3, nah4, nah5, nah6;

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
    if ( (((nah1%3)==0) && ((nah2%3)==0) && ((nah3%3)==0)) || //456
    (((nah1%3)==0) && ((nah2%3)==0) && ((nah4%3)==0)) || //356
    (((nah1%3)==0) && ((nah2%3)==0) && ((nah5%3)==0)) || //346
    (((nah1%3)==0) && ((nah2%3)==0) && ((nah6%3)==0)) || //345
    (((nah1%3)==0) && ((nah3%3)==0) && ((nah4%3)==0)) || //256
    (((nah1%3)==0) && ((nah3%3)==0) && ((nah5%3)==0)) || //246
    (((nah1%3)==0) && ((nah3%3)==0) && ((nah6%3)==0)) || //245
    (((nah1%3)==0) && ((nah4%3)==0) && ((nah5%3)==0)) || //236
    (((nah1%3)==0) && ((nah4%3)==0) && ((nah6%3)==0)) || //235
    (((nah1%3)==0) && ((nah5%3)==0) && ((nah6%3)==0)) || //234
    (((nah2%3)==0) && ((nah3%3)==0) && ((nah4%3)==0)) || //156
    (((nah2%3)==0) && ((nah3%3)==0) && ((nah5%3)==0)) || //146
    (((nah2%3)==0) && ((nah3%3)==0) && ((nah6%3)==0)) || //145
    (((nah2%3)==0) && ((nah4%3)==0) && ((nah5%3)==0)) || //136
    (((nah2%3)==0) && ((nah4%3)==0) && ((nah6%3)==0)) || //135
    (((nah2%3)==0) && ((nah5%3)==0) && ((nah6%3)==0)) || //134
    (((nah3%3)==0) && ((nah4%3)==0) && ((nah5%3)==0)) || //126
    (((nah3%3)==0) && ((nah4%3)==0) && ((nah6%3)==0)) || //125
    (((nah3%3)==0) && ((nah5%3)==0) && ((nah6%3)==0)) || //124
    (((nah4%3)==0) && ((nah5%3)==0) && ((nah6%3)==0)) || //123
    (((nah1%3)==0) && ((nah2%3)==0) && ((nah3%3)==0) && ((nah4%3)==0)) || //56
    (((nah1%3)==0) && ((nah2%3)==0) && ((nah3%3)==0) && ((nah5%3)==0)) || //46
    (((nah1%3)==0) && ((nah2%3)==0) && ((nah3%3)==0) && ((nah6%3)==0)) || //45
    (((nah1%3)==0) && ((nah2%3)==0) && ((nah4%3)==0) && ((nah5%3)==0)) || //36
    (((nah1%3)==0) && ((nah2%3)==0) && ((nah4%3)==0) && ((nah6%3)==0)) || //35
    (((nah1%3)==0) && ((nah2%3)==0) && ((nah5%3)==0) && ((nah6%3)==0)) || //34
    (((nah1%3)==0) && ((nah3%3)==0) && ((nah4%3)==0) && ((nah5%3)==0)) || //26
    (((nah1%3)==0) && ((nah3%3)==0) && ((nah4%3)==0) && ((nah6%3)==0)) || //25
    (((nah1%3)==0) && ((nah3%3)==0) && ((nah5%3)==0) && ((nah6%3)==0)) || //24
    (((nah1%3)==0) && ((nah4%3)==0) && ((nah5%3)==0) && ((nah6%3)==0)) || //23
    (((nah2%3)==0) && ((nah3%3)==0) && ((nah4%3)==0) && ((nah5%3)==0)) || //16
    (((nah2%3)==0) && ((nah3%3)==0) && ((nah4%3)==0) && ((nah6%3)==0)) || //15
    (((nah2%3)==0) && ((nah3%3)==0) && ((nah5%3)==0) && ((nah6%3)==0)) || //14
    (((nah2%3)==0) && ((nah4%3)==0) && ((nah5%3)==0) && ((nah6%3)==0)) || //13
    (((nah3%3)==0) && ((nah4%3)==0) && ((nah5%3)==0) && ((nah6%3)==0)) || //12
    (((nah1%3)==0) && ((nah2%3)==0) && ((nah3%3)==0) && ((nah4%3)==0) && ((nah5%3)==0)) || //6
    (((nah1%3)==0) && ((nah2%3)==0) && ((nah3%3)==0) && ((nah4%3)==0) && ((nah6%3)==0)) || //5
    (((nah1%3)==0) && ((nah2%3)==0) && ((nah3%3)==0) && ((nah5%3)==0) && ((nah6%3)==0)) || //4
    (((nah1%3)==0) && ((nah2%3)==0) && ((nah4%3)==0) && ((nah5%3)==0) && ((nah6%3)==0)) || //3
    (((nah1%3)==0) && ((nah3%3)==0) && ((nah4%3)==0) && ((nah5%3)==0) && ((nah6%3)==0)) || //2
    (((nah2%3)==0) && ((nah3%3)==0) && ((nah4%3)==0) && ((nah5%3)==0) && ((nah6%3)==0)) || //1
    (((nah1%3)==0) && ((nah2%3)==0) && ((nah3%3)==0) && ((nah4%3)==0) && ((nah5%3)==0) && ((nah6%3)==0))
    )
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