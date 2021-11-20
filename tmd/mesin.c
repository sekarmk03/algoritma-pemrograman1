/*
    Saya [Sekar Madu Kusumawardani_2007703] mengerjakan evaluasi Tugas Masa Depan
    dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya
    tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/


/*=== Library yang digunakan ===*/
#include "header.h" //---------------------------------> library yang dibuat sendiri pada file header.h

/*=== Fungsi untuk mengidentifikasi apakah string terakhir atau bukan ===*/
int Akhir(int *i){ //-----------------------------------> integer pass by reference agar fungsi dapat di looping di prosedur lain
    if (*i == n-1){ //----------------------------------> jika string ke i adalah string terakhir yang dimasukkan
        return 1; //------------------------------------> kembalikan nilai 1 pada fungsi
    }
    return 0; //----------------------------------------> jika tidak, kembalikan nilai 0
}

/*=== Prosedur Masukan ===*/
void Masukan(){
    int i;
    scanf("%d", &mode); //-----------------------------> meminta masukan angka untuk disimpan di var mode
    scanf("%d", &n); //--------------------------------> meminta masukan angka untuk disimpan di var n
    /*--- Perulangan mengisi array of string ---*/
    for (i = 0; i < n; i++) { //-------------------> diulang sebanyak n
        scanf("%s", str[i]); //------------------------> meminta masukan string
        Pstr[i] = strlen(str[i]); //-----------------------> memasukan nilai dari fungsi panjang ke array[i]
    }
    scanf("%d", &tebal); //----------------------------> meminta masukan angka penentu ketebalan pola
}

/*=== Prosedur Tampilan ===*/
void Tampilan(){
    int i; //------------------------------------------> deklarasi variabel i sbg iterator
    /*--- Perulangan menampilkan pola.
          Tampilan pola dibagi menjadi
          5 baris. ---*/
    /*--- Baris pertama ---*/
    for ( i = 0; i < tebal; i++) {
        Baris1(); //-----------------------------------> memanggil prosedur yang berisi semua pola pada baris pertama
    }
    /*--- Baris kedua ---*/
    for ( i = 0; i < tebal; i++) {
        Baris2(); //-----------------------------------> memanggil prosedur yang berisi semua pola pada baris kedua
    }
    /*--- Baris ketiga ---*/
    for ( i = 0; i < tebal; i++) {
        Baris3(); //-----------------------------------> memanggil prosedur yang berisi semua pola pada baris ketiga
    }
    /*--- Baris keempat ---*/
    for ( i = 0; i < tebal; i++) {
        Baris4(); //-----------------------------------> memanggil prosedur yang berisi semua pola pada baris keempat
    }
    /*--- Baris kelima ---*/
    for ( i = 0; i < tebal; i++) {
        Baris5(); //-----------------------------------> memanggil prosedur yang berisi semua pola pada baris kelima
    }
}

/*=== Pola Baris
      Dibagi menjadi 5 baris ===*/

/*=== Baris pertama ===*/
void Baris1(){
    /*--- Deklarasi var lokal ---*/
    int i, satu = 0, tiga = 0, akhir = 0;
    //-------------------------^variabel penampung nilai fungsi Akhir
    //---------------^variabel penentu pola untuk angka 3
    //-----^variabel penentu pola untuk angka 1
    //--^variabel iterator
    /*--- Pengecekan mode pola,
          jika 1 = +628 , jika 2 = 08 ---*/
    if (mode == 1) { //---------------------------------> jika mode = 1
        //tampilkan prosedur pola pembentuk +628 baris ke-1
        Pola6(); Batas();
        Pola1(tiga, akhir); Batas();
        Pola1(tiga, akhir); Batas();
        Pola1(tiga, akhir);
    } else if (mode == 2) { //--------------------------> jika mode = 2
        //tampilkan prosedur pola pembentuk 08 baris ke-1
        Pola1(tiga, akhir); Batas();
        Pola1(tiga, akhir);
    } 
    /*--- Perulangan pengecekan panjang string.
          untuk membuat pola baris pertama
          sesuai dengan panjang string ---*/
    for ( i = 0; i < n; i++) {
        if (Akhir(&i) == 1) akhir = Akhir(&i); //-------> jika fungsi Akhir bernilai 1, simpan nilainya ke variabel akhir
        if (Pstr[i] == 1) { //--------------------------> jika panjang string = 1
            satu = 1; //--------------------------------> ubah nilai var satu untuk membatasi pola yang tampil
            Batas(); Pola3(tiga, satu); //--------------> tampilkan pola
        } else if (Pstr[i] == 2 || Pstr[i] == 3 || //---> jika panjang string = 2 atau 3 atau
                   Pstr[i] == 5 || Pstr[i] == 6 || //---> 5 atau 6 atau
                   Pstr[i] == 8 || Pstr[i] == 9) { //---> 8 atau 9 (disatukan karena memiliki pola yang sama)
            if (Pstr[i] == 3) tiga = 3; //--------------> jika panjangnya = 3, ubah nilai var tiga untuk membatasi pola yang tampil
            Batas(); Pola1(tiga, akhir); //--------------------> tampilkan pola
        } else if (Pstr[i] == 4) { //-------------------> jika panjang string = 4
            Batas(); Pola2(); //------------------------> tampilkan pola
        } else if (Pstr[i] == 7) { //-------------------> jika panjang string = 7
            Batas(); Pola5(akhir); //------------------------> tampilkan pola
        }
        satu = 0; tiga = 0; //--------------------------> mengembalikan nilai var satu dan tiga untuk digunakan di perulangan selanjutnya
    }
    printf("\n"); //------------------------------------> buat baris baru jika semua pola baris ke-1 sudah ditampilkan
}

/*=== Baris kedua ===*/
void Baris2(){
    /*--- Deklarasi var lokal ---*/
    int i, satu = 0, tiga = 0, akhir = 0;
    //-------------------------^variabel penampung nilai fungsi Akhir
    //---------------^variabel penentu pola untuk angka 3
    //-----^variabel penentu pola untuk angka 1
    //--^variabel iterator
    /*--- Pengecekan mode pola,
          jika 1 = +628 , jika 2 = 08 ---*/
    if (mode == 1) { //---------------------------------> jika mode = 1
        //tampilkan prosedur pola pembentuk +628 baris ke-2
        Pola1(tiga, akhir); Batas();
        Pola4(akhir); Batas();
        Pola3(tiga, satu); Batas();
        Pola2();
    } else if (mode == 2) { //--------------------------> jika mode = 2
        //tampilkan prosedur pola pembentuk 08 baris ke-2
        Pola2(); Batas();
        Pola2();
    }
    /*--- Perulangan pengecekan panjang string.
          untuk membuat pola baris kedua
          sesuai dengan panjang string ---*/
    for ( i = 0; i < n; i++) {
        if (Akhir(&i) == 1) akhir = Akhir(&i); //-------> jika fungsi Akhir bernilai 1, simpan nilainya ke variabel akhir
        if (Pstr[i] == 1 || Pstr[i] == 2 || //----------> jika panjang string = 1 atau 2 atau
            Pstr[i] == 3 || Pstr[i] == 7) { //----------> 3 atau 7 (disatukan karena memiliki pola yang sama)
            if (Pstr[i] == 1) satu = 1; //--------------> jika panjangnya = 1, ubah nilai var satu untuk membatasi pola yang tampil
            if (Pstr[i] == 3) tiga = 3; //--------------> jika panjangnya = 3, ubah nilai var tiga untuk membatasi pola yang tampil
            Batas(); Pola3(tiga, satu); //--------------> tampilkan pola
        } else if (Pstr[i] == 4 || Pstr[i] == 8 || //---> jika panjang string = 4 atau 8 atau
                 Pstr[i] == 9) { //---------------------> 9 (disatukan karena memiliki pola yang sama)
            Batas(); Pola2(); //------------------------> tampilkan pola
        } else if (Pstr[i] == 5 || Pstr[i] == 6) { //---> jika panjang string = 5 atau 6 (disatukan karena memiliki pola yang sama)
            Batas(); Pola4(akhir); //------------------------> tampilkan pola
        }
        satu = 0; tiga = 0; //--------------------------> mengembalikan nilai var satu dan tiga untuk digunakan di perulangan selanjutnya
    }
    printf("\n"); //------------------------------------> buat baris baru jika semua pola baris ke-2 sudah ditampilkan
}

/*=== Baris ketiga ===*/
void Baris3(){
    /*--- Deklarasi var lokal ---*/
    int i, satu = 0, tiga = 0, akhir = 0;
    //-------------------------^variabel penampung nilai fungsi Akhir
    //---------------^variabel penentu pola untuk angka 3
    //-----^variabel penentu pola untuk angka 1
    //--^variabel iterator
    /*--- Pengecekan mode pola,
          jika 1 = +628 , jika 2 = 08 ---*/
    if (mode == 1) { //---------------------------------> jika mode = 1
        //tampilkan prosedur pola pembentuk +628 baris ke-3
        Pola7(); Batas();
        Pola1(tiga, akhir); Batas();
        Pola1(tiga, akhir); Batas();
        Pola1(tiga, akhir);
    } else if (mode == 2) { //--------------------------> jika mode = 2
        //tampilkan prosedur pola pembentuk 08 baris ke-3
        Pola2(); Batas();
        Pola1(tiga, akhir);
    }
    /*--- Perulangan pengecekan panjang string.
          untuk membuat pola baris ketiga
          sesuai dengan panjang string ---*/
    for ( i = 0; i < n; i++) {
        if (Akhir(&i) == 1) akhir = Akhir(&i); //-------> jika fungsi Akhir bernilai 1, simpan nilainya ke variabel akhir
        if (Pstr[i] == 1 || Pstr[i] == 7) { //----------> jika panjang string = 1 atau 7
            if (Pstr[i] == 1) satu = 1; //--------------> jika panjangnya = 1, ubah nilai var satu untuk membatasi pola yang tampil
            Batas(); Pola3(tiga, satu); //--------------> tampilkan pola
        } else if (Pstr[i] == 2 || Pstr[i] == 3 || //---> jika panjang string = 2 atau 3 atau
                   Pstr[i] == 4 || Pstr[i] == 5 || //---> 4 atau 5 atau
                   Pstr[i] == 6 || Pstr[i] == 8 || //---> 6 atau 8 atau
                   Pstr[i] == 9) { //-------------------> 9 (disatukan karena memiliki pola yang sama)
            if (Pstr[i] == 3) tiga = 3; //--------------> jika panjangnya = 3, ubah nilai var tiga untuk membatasi pola yang tampil
            Batas(); Pola1(tiga, akhir); //--------------------> tampilkan pola
        }
        satu = 0; tiga = 0; //--------------------------> mengembalikan nilai var satu dan tiga untuk digunakan di perulangan selanjutnya
    }
    printf("\n"); //------------------------------------> buat baris baru jika semua pola baris ke-1 sudah ditampilkan
}

/*=== Baris keempat ===*/
void Baris4(){
    /*--- Deklarasi var lokal ---*/
    int i, satu = 0, tiga = 0, akhir = 0;
    //-------------------------^variabel penampung nilai fungsi Akhir
    //---------------^variabel penentu pola untuk angka 3
    //-----^variabel penentu pola untuk angka 1
    //--^variabel iterator
    /*--- Pengecekan mode pola,
          jika 1 = +628 , jika 2 = 08 ---*/
    if (mode == 1) { //---------------------------------> jika mode = 1
        //tampilkan prosedur pola pembentuk +628 baris ke-4
        Pola1(tiga, akhir); Batas();
        Pola2(); Batas();
        Pola4(akhir); Batas();
        Pola2();
    } else if (mode == 2) { //--------------------------> jika mode =2
        //tampilkan prosedur pola pembentuk 08 baris ke-4
        Pola2(); Batas();
        Pola2();
    }
    /*--- Perulangan pengecekan panjang string.
          untuk membuat pola baris keempat
          sesuai dengan panjang string ---*/
    for ( i = 0; i < n; i++) {
        if (Akhir(&i) == 1) akhir = Akhir(&i); //-------> jika fungsi Akhir bernilai 1, simpan nilainya ke variabel akhir
        if (Pstr[i] == 1 || Pstr[i] == 3 || //----------> jika panjang string =1 atau 3 atau
            Pstr[i] == 4 || Pstr[i] == 5 || //----------> 4 atau 5 atau
            Pstr[i] == 7 || Pstr[i] == 9) { //----------> 7 atau 9 (disatukan karena memiliki pola yang sama)
            if (Pstr[i] == 1) satu = 1; //--------------> jika panjangnya = 1, ubah nilai var satu untuk membatasi pola yang tampil
            if (Pstr[i] == 3) tiga = 3; //--------------> jika panjangnya = 3, ubah nilai var tiga untuk membatasi pola yang tampil
            Batas(); Pola3(tiga, satu); //--------------> tampilkan pola
        } else if (Pstr[i] == 2) { //-------------------> jika panjang string = 2
            Batas(); Pola4(akhir); //------------------------> tampilkan pola
        } else if (Pstr[i] == 6 || Pstr[i] == 8) { //---> jika panjang string = 6 atau 8 (disatukan karena memiliki pola yang sama)
            Batas(); Pola2(); //------------------------> tampilkan pola
        }
        satu = 0; tiga = 0; //--------------------------> mengembalikan nilai var satu dan tiga untuk digunakan di perulangan selanjutnya
    }
    printf("\n"); //------------------------------------> buat baris baru jika semua pola baris ke-4 sudah ditampilkan
}

/*=== Baris kelima ===*/
void Baris5(){
    /*--- Deklarasi var lokal ---*/
    int i, satu = 0, tiga = 0, akhir = 0;
    //-------------------------^variabel penampung nilai fungsi Akhir
    //---------------^variabel penentu pola untuk angka 3
    //-----^variabel penentu pola untuk angka 1
    //--^variabel iterator
    /*--- Pengecekan mode pola,
          jika 1 = +628 , jika 2 = 08 ---*/
    if (mode == 1) { //---------------------------------> jika mode = 1
        //tampilkan prosedur pola pembentuk +628 baris ke-5
        Pola6(); Batas();
        Pola1(tiga, akhir); Batas();
        Pola1(tiga, akhir); Batas();
        Pola1(tiga, akhir);
    } else if (mode == 2) { //--------------------------> jika mode = 2
        //tampilkan prosedur pola pembentuk 08 baris ke-5
        Pola1(tiga, akhir); Batas();
        Pola1(tiga, akhir);
    }
    /*--- Perulangan pengecekan panjang string.
          untuk membuat pola baris kelima
          sesuai dengan panjang string ---*/
    for ( i = 0; i < n; i++) {
        if (Akhir(&i) == 1) akhir = Akhir(&i); //-------> jika fungsi Akhir bernilai 1, simpan nilainya ke variabel akhir
        if (Pstr[i] == 1 || Pstr[i] == 4 || //----------> jika panjang string = 1 atau 4 atau
            Pstr[i] == 7) { //--------------------------> 7 (disatukan karena memiliki pola yang sama)
            if (Pstr[i] == 1) satu = 1; //--------------> jika panjangnya = 1, ubah nilai var satu untuk membatasi pola yang tampil
            Batas(); Pola3(tiga, satu); //--------------> tampilkan pola
        } else if (Pstr[i] == 2 || Pstr[i] == 3 || //---> jika panjang string = 2 atau 3 atau
                   Pstr[i] == 5 || Pstr[i] == 6 || //---> 5 atau 6 atau
                   Pstr[i] == 8 || Pstr[i] == 9) { //---> 8 atau 9 (disatukan karena memiliki pola yang sama)
            if (Pstr[i] == 3) tiga = 3; //--------------> jika panjangnya = 3, ubah nilai var tiga untuk membatasi pola yang tampil
            Batas(); Pola1(tiga, akhir); //--------------------> tampilkan pola
        }
        satu = 0; tiga = 0; //--------------------------> mengembalikan nilai var satu dan tiga untuk digunakan di perulangan selanjutnya
    }
    printf("\n"); //------------------------------------> buat baris baru jika semua pola baris ke-5 sudah ditampilkan
}

/*
        Pola 1
        | |H| |
*/
void Pola1(int tiga, int akhir){ //--------------------------------> mengolah var integer untuk membatasi pola
    int i; //-------------------------------------------> var lokal untuk iterator
    /*--- Semua pola ditampilkan sesuai dengan ketebalan yang diminta ---*/
    //hanya tampilkan pola jika nilai var tiga bukan 3
    if (tiga != 3) {
        for (i = 0; i < tebal; i++) {
            printf(" ");
        }
    }
    for ( i = 0; i < tebal; i++) {
        printf("H");
    }
    if (akhir == 0){
        for ( i = 0; i < tebal; i++) {
            printf(" ");
        }
    }
}

/*
        Pola 2
        |H| |H|
*/
void Pola2(){
    int j; //-------------------------------------------> var lokal untuk iterator
    /*--- Semua pola ditampilkan sesuai dengan ketebalan yang diminta ---*/
    for ( j = 0; j < tebal; j++) {
        printf("H");
    }
    for ( j = 0; j < tebal; j++) {
        printf(" ");
    }
    for ( j = 0; j < tebal; j++) {
        printf("H");
    }
}

/*
        Pola 3
        | | |H|
*/
void Pola3(int tiga, int satu){ //----------------------> mengolah dua var integer untuk membatasi pola
    int j; //-------------------------------------------> var lokal untuk iterator
    /*--- Semua pola ditampilkan sesuai dengan ketebalan yang diminta ---*/
    //hanya tampilkan pola jika nilai var satu bukan 1 dan var tiga bukan 3
    if (satu != 1 && tiga != 3) {
        for ( j = 0; j < tebal; j++) {
            printf(" ");
        }
    }
    //hanya tampilkan pola jika nilai var satu bukan 1
    if (satu != 1) {
        for ( j = 0; j < tebal; j++) {
            printf(" ");
        }
    }
    for ( j = 0; j < tebal; j++) {
        printf("H");
    }
}

/*
        Pola 4
        |H| | |
*/
void Pola4(int akhir){ //-------------------------------> mengolah var integer untuk membatasi pola
    int j; //-------------------------------------------> var lokal untuk iterator
    /*--- Semua pola ditampilkan sesuai dengan ketebalan yang diminta ---*/
    for ( j = 0; j < tebal; j++) {
        printf("H");
    }
    if (akhir == 0){
        for ( j = 0; j < tebal; j++) {
            printf("  ");
        }
    }
}

/*
        Pola 5
        |H|H| |
*/
void Pola5(int akhir){ //-------------------------------> mengolah var integer untuk membatasi pola
    int j; //-------------------------------------------> var lokal untuk iterator
    /*--- Semua pola ditampilkan sesuai dengan ketebalan yang diminta ---*/
    for ( j = 0; j < tebal; j++) {
        printf("HH");
    }
    if (akhir == 0){
        for ( j = 0; j < tebal; j++) {
            printf(" ");
        }
    }
}

/*
        Pola 6
        | | | |
*/
void Pola6(){
    int j; //-------------------------------------------> var lokal untuk iterator
    /*--- Semua pola ditampilkan sesuai dengan ketebalan yang diminta ---*/
    for ( j = 0; j < tebal; j++) {
        printf("   ");
    }
}

/*
        Pola 7
        |H|H|H|
*/
void Pola7(){
    int j; //-------------------------------------------> var lokal untuk iterator
    /*--- Semua pola ditampilkan sesuai dengan ketebalan yang diminta ---*/
    for ( j = 0; j < tebal; j++) {
        printf("HHH");
    }
}

/*
        Pola batas antar pola angka
        | |
*/
void Batas(){
    int j; //-------------------------------------------> var lokal untuk iterator
    /*--- Semua pola ditampilkan sesuai dengan ketebalan yang diminta ---*/
    for ( j = 0; j < tebal; j++) {
        printf(" ");
    }
}
