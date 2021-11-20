/*
    Saya [Sekar Madu Kusumawardani_2007703] mengerjakan evaluasi Tugas Masa Depan
    dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya
    tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
/*
    Catatan :
    Ini adalah file revisi kedua (Versi 2). Saya menemukan algoritma yang lebih efektif
    dibandingkan dengan algoritma pada file pertama. Saya akan terus
    berusaha agar ke depannya saya dapat menemukan algoritma yang lebih
    efektif dibandingkan algoritma pada revisi kedua ini.
    - Versi 1 di upload tgl 28 Des 2020
    - Versi 2 di upload tgl 5 Jan 2021
*/

/*=== LIBRARY ===*/
#include "header.h" //----------------------------------------> library yang disusun sendiri

/*=== FUNGSI & PROSEDUR ===*/

/*=== Fungsi Pendeteksi String Terakhir ===*/
int Akhir(int *i){ //-----------------------------------------> integer pass by reference agar fungsi dapat di looping di prosedur lain
/*--- Pengecekan ---*/
    if (*i == n-1){ //----------------------------------------> jika mencapai index ke n-1
        return 1; //------------------------------------------> kembalikan nilai 1 pada fungsi
    }
    return 0; //----------------------------------------------> default, kembalikan nilai 0
}

/*=== Prosedur Masukan User ===*/
void Masukan(){
    int i; //-------------------------------------------------> variabel lokal Masukan(), sebagai iterator
    scanf("%d%d", &mode, &n); //------------------------------> meminta masukan integer untuk mengisi variabel mode & n
    /*--- perulangan masukan string ---*/
    for (i = 0; i < n; i++) { //------------------------------> diulang sebanyak n
        scanf("%s", str[i]); //-------------------------------> meminta masukan string, disimpan di variabel str
        Pstr[i] = strlen(str[i]); //--------------------------> mengambil panjang string, disimpan di variabel Pstr
    }
    scanf("%d", &tebal); //-----------------------------------> meminta masukan integer untuk mengisi variabel tebal
}

/*=== Prosedur Menampilkan Pola ===*/
void Tampilan(){
    int i; //-------------------------------------------------> variabel lokal Masukan(), sebagai iterator
    for ( i = 0; i < tebal; i++) { Baris1(); } //-------------> perulangan ketebalan untuk pola baris pertama
    for ( i = 0; i < tebal; i++) { Baris2(); } //-------------> perulangan ketebalan untuk pola baris kedua
    for ( i = 0; i < tebal; i++) { Baris3(); } //-------------> perulangan ketebalan untuk pola baris ketiga
    for ( i = 0; i < tebal; i++) { Baris4(); } //-------------> perulangan ketebalan untuk pola baris keempat
    for ( i = 0; i < tebal; i++) { Baris5(); } //-------------> perulangan ketebalan untuk pola baris kelima
}

/*=== Prosedur Pola ===*/
void Pola(int batas, int a, int b, int c, int satu, int tiga, int akhir){
    /*
        jika batas = 1, maka merupakan pola pembatas
        jika satu = 1, maka bertemu pola string 1 karakter
        jika tiga = 1, maka bertemu pola string 3 karakter
        jika akhir = 1, maka merupakan pola string terakhir
    */
    int i; //-------------------------------------------------> variabel lokal Masukan(), sebagai iterator
        if (satu == 1){ //------------------------------------> jika panjang string = 1, beri batasan tampilan pola
            a = 2; b = 2; //----------------------------------> agar tidak menampilkan pola spasi
        }
        if (tiga == 1) a = 3; //------------------------------> jika panjang string = 3, beri batasan tampilan pola
        /*
            ket. (a, b, c)
                  0 = spasi
                  1 = H
            semua pola diulang sesuai ketebalan yang ditentukan user
        */
        if (batas != 1) { //----------------------------------> jika bukan pola pembatas
            for ( i = 0; i < tebal; i++) {
                if (a == 1) printf("H");            
            }
            for ( i = 0; i < tebal; i++) {
                if (a == 0 && a != 2 && a != 3) printf(" ");            
            }
            for ( i = 0; i < tebal; i++) {
                if (b == 1) printf("H");            
            }
            for ( i = 0; i < tebal; i++) {
                if (b == 0 && b != 2) printf(" ");
            }
            for ( i = 0; i < tebal; i++) {
                if (c == 1) printf("H");            
            }
            /*--- pengecekan string terakhir ---*/
            if (akhir != 1) { //------------------------------> jika bukan string terakhir,
                for ( i = 0; i < tebal; i++) {
                    if((c == 0)) printf(" "); //--------------> print pola spasi
                }
            }
        }
        if (batas == 1) { //----------------------------------> jika merupakan pola batas
            for ( i = 0; i < tebal; i++) {
                printf(" "); //
            }
        }
}

/*
    ket. pola :     (batas-abc-satu-tiga-akhir)
                1.) 1-000-0-0-0 -> pola batas -> | |
                2.) 0-010-s-t-akhir -> pola 1 -> | |H| |
                3.) 0-101-s-t-akhir -> pola 2 -> |H| |H|
                4.) 0-001-s-t-akhir -> pola 3 -> | | |H|
                5.) 0-100-s-t-akhir -> pola 4 -> |H| | |
                6.) 0-110-s-t-akhir -> pola 5 -> |H|H| |
                7.) 0-000-s-t-akhir -> pola 6 -> | | | |
                8.) 0-111-s-t-akhir -> pola 7 -> |H|H|H|
*/

/*=== Prosedur Baris Pertama ===*/
void Baris1(){
    int i, s = 0, t = 0, akhir = 0; //------------------------> deklarasi variabel lokal iterator dan pass by value
    //-------------------^penampung hasil identifikasi string terakhir
    //------------^penampung batasan pola string 3 karakter
    //-----^penampung batasan pola string 1 karakter
    /*--- Pola Sesuai Mode ---*/
    if (mode == 1) { //---------------------------------------> jika mode 1, tampilkan pola baris pertama +628
        Pola(0,0,0,0,s,t,akhir); Pola(1,0,0,0,0,0,0); //------> pola 4; batas;
        Pola(0,0,1,0,s,t,akhir); Pola(1,0,0,0,0,0,0); //------> pola 1; batas;
        Pola(0,0,1,0,s,t,akhir); Pola(1,0,0,0,0,0,0); //------> pola 1, batas;
        Pola(0,0,1,0,s,t,akhir); //---------------------------> pola 1;
    } else if (mode == 2) { //--------------------------------> jika mode 2, tampilkan pola baris pertama 08
        Pola(0,0,1,0,s,t,akhir); Pola(1,0,0,0,0,0,0); //------> pola 1; batas;
        Pola(0,0,1,0,s,t,akhir); //---------------------------> pola 1;
    }
    /*--- Pola Sesuai Panjang String ---*/
    for ( i = 0; i < n; i++) { //-----------------------------> pengecekan angka yang muncul diulang sebanyak n (banyaknya string)
        if (Akhir(&i) == 1) akhir = Akhir(&i); //-------------> pemanggilan fungsi Akhir() untuk mengecek string terakhir
        if (Pstr[i] == 1) { //--------------------------------> jika panjang string = 1,
            s = 1; //-----------------------------------------> update nilai var s menjadi 1
            Pola(1,0,0,0,0,0,0); Pola(0,0,0,1,s,t,akhir); //--> batas; pola 3;
        } else if (Pstr[i] == 2 || Pstr[i] == 3 || //-----]
                   Pstr[i] == 5 || Pstr[i] == 6 || //-----]---> jika panjang string = 2 / 3 / 5 / 6 / 8 / 9
                   Pstr[i] == 8 || Pstr[i] == 9) { //-----]
            Pola(1,0,0,0,0,0,0); //---------------------------> batas;
            if (Pstr[i] == 3) t = 1; //-----------------------> jika panjang string = 3, update nilai var t menjadi 1
            Pola(0,0,1,0,s,t,akhir); //-----------------------> pola 1
        } else if (Pstr[i] == 4) { //-------------------------> jika panjang string = 4
            Pola(1,0,0,0,0,0,0); Pola(0,1,0,1,s,t,akhir); //--> batas; pola 2
        } else if (Pstr[i] == 7) { //-------------------------> jika panjang string = 7
            Pola(1,0,0,0,0,0,0); Pola(0,1,1,0,s,t,akhir); //--> batas; pola 5
        }
        s = 0; t = 0; //--------------------------------------> mengembalikan nilai var s & t ke awal (0)
    }
    printf("\n"); //------------------------------------------> cetak baris baru jika semua string sudah menampilkan pola baris 1
}

/*=== Prosedur Baris Kedua ===*/
void Baris2(){
    int i, s = 0, t = 0, akhir = 0;  //------------------------> deklarasi variabel lokal iterator dan pass by value
    //-------------------^penampung hasil identifikasi string terakhir
    //------------^penampung batasan pola string 3 karakter
    //-----^penampung batasan pola string 1 karakter
    /*--- Pola Sesuai Mode ---*/
    if (mode == 1) { //---------------------------------------> jika mode 1, tampilkan pola baris kedua +628
        Pola(0,0,1,0,s,t,akhir); Pola(1,0,0,0,0,0,0); //------> pola 1; batas;
        Pola(0,1,0,0,s,t,akhir); Pola(1,0,0,0,0,0,0); //------> pola 4; batas;
        Pola(0,0,0,1,s,t,akhir); Pola(1,0,0,0,0,0,0); //------> pola 3; batas;
        Pola(0,1,0,1,s,t,akhir); //---------------------------> pola 2; batas;
    } else if (mode == 2) { //--------------------------------> jika mode 2, tampilkan pola baris kedua 08
        Pola(0,1,0,1,s,t,akhir); Pola(1,0,0,0,0,0,0); //------> pola 2; batas;
        Pola(0,1,0,1,s,t,akhir); //---------------------------> pola 2;
    }
    /*--- Pola Sesuai Panjang String ---*/
    for ( i = 0; i < n; i++) { //-----------------------------> pengecekan angka yang muncul diulang sebanyak n (banyaknya string)
        if (Akhir(&i) == 1) akhir = Akhir(&i); //-------------> pemanggilan fungsi Akhir() untuk mengecek string terakhir
        if (Pstr[i] == 1 || Pstr[i] == 2 || //------------]
            Pstr[i] == 3 || Pstr[i] == 7) { //------------]---> jika panjang string = 1 / 2 / 3 / 7
            Pola(1,0,0,0,0,0,0); //---------------------------> batas;
            if (Pstr[i] == 1) s = 1; //-----------------------> jika panjang string = 1, update nilai var s menjadi 1
            if (Pstr[i] == 3) t = 1; //-----------------------> jika panjang string = 3, update nilai var t menjadi 1
            Pola(0,0,0,1,s,t,akhir); //-----------------------> pola 3;
        } else if (Pstr[i] == 4 || Pstr[i] == 8 || //-----]
                 Pstr[i] == 9) { //-----------------------]---> jika panjang string = 4 / 8 / 9
            Pola(1,0,0,0,0,0,0); Pola(0,1,0,1,s,t,akhir); //--> batas; pola 2
        } else if (Pstr[i] == 5 || Pstr[i] == 6) { //---------> jika panjang string = 5 / 6
            Pola(1,0,0,0,0,0,0); //---------------------------> batas;
            if (akhir == 1) { //------------------------------> jika string terakhir
                Pola(0,1,2,2,s,t,akhir); //-------------------> ubah parameter b & c menjadi 2 agar spasi tidak ditampilkan
            } else { //---------------------------------------> jika bukan string terakhir
                Pola(0,1,0,0,s,t,akhir); //-------------------> pola 4
            }
        }
        s = 0; t = 0; //--------------------------------------> mengembalikan nilai var s & t ke awal (0)
    }
    printf("\n"); //------------------------------------------> cetak baris baru jika semua string sudah menampilkan pola baris 2
}

/*=== Prosedur Baris Ketiga ===*/
void Baris3(){
    int i, s = 0, t = 0, akhir = 0;  //------------------------> deklarasi variabel lokal iterator dan pass by value
    //-------------------^penampung hasil identifikasi string terakhir
    //------------^penampung batasan pola string 3 karakter
    //-----^penampung batasan pola string 1 karakter
    /*--- Pola Sesuai Mode ---*/
    if (mode == 1) { //---------------------------------------> jika mode 1, tampilkan pola baris ketiga +628
        Pola(0,1,1,1,s,t,akhir); Pola(1,0,0,0,0,0,0); //------> pola 7; batas;
        Pola(0,0,1,0,s,t,akhir); Pola(1,0,0,0,0,0,0); //------> pola 1; batas;
        Pola(0,0,1,0,s,t,akhir); Pola(1,0,0,0,0,0,0); //------> pola 1; batas;
        Pola(0,0,1,0,s,t,akhir); //---------------------------> pola 1;
    } else if (mode == 2) { //--------------------------------> jika mode 2, tampilkan pola baris ketiga 08
        Pola(0,1,0,1,s,t,akhir); Pola(1,0,0,0,0,0,0); //------> pola 2; batas;
        Pola(0,0,1,0,s,t,akhir); //---------------------------> pola 1;
    }
    /*--- Pola Sesuai Panjang String ---*/
    for ( i = 0; i < n; i++) { //-----------------------------> pengecekan angka yang muncul diulang sebanyak n (banyaknya string)
        if (Akhir(&i) == 1) akhir = Akhir(&i); //-------------> pemanggilan fungsi Akhir() untuk mengecek string terakhir
        if (Pstr[i] == 1 || Pstr[i] == 7) { //----------------> jika panjang string = 1 / 7
            Pola(1,0,0,0,0,0,0); //---------------------------> batas;
            if (Pstr[i] == 1) s = 1; //-----------------------> jika panjang string 1, update nilai vas s menjadi 1
            Pola(0,0,0,1,s,t,akhir); //-----------------------> pola 3;
        } else if (Pstr[i] == 2 || Pstr[i] == 3 || //-----]
                   Pstr[i] == 4 || Pstr[i] == 5 || //-----]
                   Pstr[i] == 6 || Pstr[i] == 8 || //-----]---> jika panjang string = 2 / 3 / 4 / 5 / 6 / 8 / 9
                   Pstr[i] == 9) { //---------------------]
            Pola(1,0,0,0,0,0,0); //---------------------------> batas;
            if (Pstr[i] == 3) t = 1; //-----------------------> jika panjang string = 3, update nilai var t menjadi 1
            Pola(0,0,1,0,s,t,akhir); //-----------------------> pola 1;
        }
        s = 0; t = 0; //--------------------------------------> mengembalikan nilai var s & t ke awal (0)
    }
    printf("\n"); //------------------------------------------> cetak baris baru jika semua string sudah menampilkan pola baris 3
}

/*=== Prosedur Baris Keempat ===*/
void Baris4(){
    int i, s = 0, t = 0, akhir = 0; //------------------------> deklarasi variabel lokal iterator dan pass by value
    //-------------------^penampung hasil identifikasi string terakhir
    //------------^penampung batasan pola string 3 karakter
    //-----^penampung batasan pola string 1 karakter
    /*--- Pola Sesuai Mode ---*/
    if (mode == 1) { //---------------------------------------> jika mode 1, tampilkan pola baris keempat +628
        Pola(0,0,1,0,s,t,akhir); Pola(1,0,0,0,0,0,0); //------> pola 1; batas;
        Pola(0,1,0,1,s,t,akhir); Pola(1,0,0,0,0,0,0); //------> pola 2; batas;
        Pola(0,1,0,0,s,t,akhir); Pola(1,0,0,0,0,0,0); //------> pola 4; batas;
        Pola(0,1,0,1,s,t,akhir); //---------------------------> pola 2;
    } else if (mode == 2) { //--------------------------------> jika mode 2, tampilkan pola baris ketiga 08
        Pola(0,1,0,1,s,t,akhir); Pola(1,0,0,0,0,0,0); //------> pola 2; batas;
        Pola(0,1,0,1,s,t,akhir); //---------------------------> pola 2;
    }
    /*--- Pola Sesuai Panjang String ---*/
    for ( i = 0; i < n; i++) { //-----------------------------> pengecekan angka yang muncul diulang sebanyak n (banyaknya string)
        if (Akhir(&i) == 1) akhir = Akhir(&i); //-------------> pemanggilan fungsi Akhir() untuk mengecek string terakhir
        if (Pstr[i] == 1 || Pstr[i] == 3 || //------------]
            Pstr[i] == 4 || Pstr[i] == 5 || //------------]---> jika panjang string = 1 / 3 / 4 / 5 / 7 / 9
            Pstr[i] == 7 || Pstr[i] == 9) { //------------]
            Pola(1,0,0,0,0,0,0); //---------------------------> batas;
            if (Pstr[i] == 1) s = 1; //-----------------------> jika panjang string = 1, update nilai var s menjadi 1
            if (Pstr[i] == 3) t = 1; //-----------------------> jika panjang string = 3, update nilai var t menjadi 1
            Pola(0,0,0,1,s,t,akhir); //-----------------------> pola 3;
        } else if (Pstr[i] == 2) { //-------------------------> jika panjang string = 2
            Pola(1,0,0,0,0,0,0); //---------------------------> batas;
            if (akhir == 1) { //------------------------------> jika string terakhir
                Pola(0,1,2,2,s,t,akhir); //-------------------> ubah parameter b & c agar spasi tidak ditampilkan
            } else { //---------------------------------------> jika bukan string terakhir
                Pola(0,1,0,0,s,t,akhir); //-------------------> pola 4;
            }
        } else if (Pstr[i] == 6 || Pstr[i] == 8) { //---------> jika panjang string = 6 / 8
            Pola(1,0,0,0,0,0,0); Pola(0,1,0,1,s,t,akhir); //--> batas; pola 2;
        }
        s = 0; t = 0; //--------------------------------------> mengembalikan nilai var s & t ke awal (0)
    }
    printf("\n"); //------------------------------------------> cetak baris baru jika semua string sudah menampilkan pola baris 4
}

/*=== Prosedur Baris Kelima ===*/
void Baris5(){
    int i, s = 0, t = 0, akhir = 0; //------------------------> deklarasi variabel lokal iterator dan pass by value
    //-------------------^penampung hasil identifikasi string terakhir
    //------------^penampung batasan pola string 3 karakter
    //-----^penampung batasan pola string 1 karakter
    /*--- Pola Sesuai Mode ---*/
    if (mode == 1) { //---------------------------------------> jika mode 1, tampilkan pola baris kelima +628
        Pola(0,0,0,0,s,t,akhir); Pola(1,0,0,0,0,0,0); //------> pola 6; batas;
        Pola(0,0,1,0,s,t,akhir); Pola(1,0,0,0,0,0,0); //------> pola 1; batas;
        Pola(0,0,1,0,s,t,akhir); Pola(1,0,0,0,0,0,0); //------> pola 1; batas;
        Pola(0,0,1,0,s,t,akhir); //---------------------------> pola 1;
    } else if (mode == 2) { //--------------------------------> jika mode 2, tampilkan pola baris kelima 08
        Pola(0,0,1,0,s,t,akhir); Pola(1,0,0,0,0,0,0); //------> pola 1; batas;
        Pola(0,0,1,0,s,t,akhir); //---------------------------> pola 1;
    }
    /*--- Pola Sesuai Panjang String ---*/
    for ( i = 0; i < n; i++) { //-----------------------------> pengecekan angka yang muncul diulang sebanyak n (banyaknya string)
        if (Akhir(&i) == 1) akhir = Akhir(&i); //-------------> pemanggilan fungsi Akhir() untuk mengecek string terakhir
        if (Pstr[i] == 1 || Pstr[i] == 4 || //------------]
            Pstr[i] == 7) { //----------------------------]---> jika panjang string = 1 / 4 / 7
            Pola(1,0,0,0,0,0,0); //---------------------------> batas;
            if (Pstr[i] == 1) s = 1; //-----------------------> jika panjang string = 1, update nilai var s menjadi 1
            Pola(0,0,0,1,s,t,akhir); //-----------------------> pola 3;
        } else if (Pstr[i] == 2 || Pstr[i] == 3 || //-----]
                   Pstr[i] == 5 || Pstr[i] == 6 || //-----]---> jika panjang string = 2 / 3 / 5 / 6 / 8 / 9
                   Pstr[i] == 8 || Pstr[i] == 9) { //-----]
            Pola(1,0,0,0,0,0,0); //---------------------------> batas;
            if (Pstr[i] == 3) t = 1; //-----------------------> jika panjang string = 3, update nilai t menjadi 1
            Pola(0,0,1,0,s,t,akhir); //-----------------------> pola 1;
        }
        s = 0; t = 0; //--------------------------------------> mengembalikan nilai var s & t ke awal (0)
    }
    printf("\n"); //------------------------------------------> cetak baris baru jika semua string sudah menampilkan pola baris 5
}