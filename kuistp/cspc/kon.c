    #include <stdio.h>
//           ^nama salah satu library
//  ^meminta library stdio.h

    int main(){
//      ^method yang pertama di eksekusi
// ^statement untuk membuat method yang membutuhkan return di akhir program

    char c1, c2, c3, c4, c5, c6;
//       ^deklarasi 6 buah variabel
//  ^tipe data variabel

    int a=0, b=0;
//       ^deklarasi 6 buah variabel
//  ^tipe data variabel

    scanf("%c\n%c\n%c\n%c\n%c\n%c", &c1, &c2, &c3, &c4, &c5, &c6);
//                                  ^pendataan variabel yang akan diberi value oleh user
//        ^identifikasi tipe data masukan user
//  ^perintah untuk meminta masukan dari user

    if ( ((c1=='a') || (c1=='i') || (c1=='u') || (c1=='e') || (c1=='o')) &&
    ((c2!='a') && (c2!='i') && (c2!='u') && (c2!='e') && (c2!='o')) && 
    ((c3=='a') || (c3=='i') || (c3=='u') || (c3=='e') || (c3=='o')) &&
    ((c4!='a') && (c4!='i') && (c4!='u') && (c4!='e') && (c4!='o')) &&
    ((c5=='a') || (c5=='i') || (c5=='u') || (c5=='e') || (c5=='o')) &&
    ((c6!='a') && (c6!='i') && (c6!='u') && (c6!='e') && (c6!='o')) )
//      ^parameter kondisi
//  ^perintah pengondisian
    {
        // jika masukan user memenuhi kondisi di atas, maka
        a=1;
        //nilai variabel a = 1
    } else if ( ((c1!='a') && (c1!='i') && (c1!='u') && (c1!='e') && (c1!='o')) &&
    ((c2=='a') || (c2=='i') || (c2=='u') || (c2=='e') || (c2=='o')) &&
    ((c3!='a') && (c3!='i') && (c3!='u') && (c3!='e') && (c3!='o')) &&
    ((c4=='a') || (c4=='i') || (c4=='u') || (c4=='e') || (c4=='o')) &&
    ((c5!='a') && (c5!='i') && (c5!='u') && (c5!='e') && (c5!='o')) && 
    ((c6=='a') || (c6=='i') || (c6=='u') || (c6=='e') || (c6=='o')) )
    {
        b=1;
    }


    if ( a==1 )
    {
        /* jika nilai semua variabel = 1
         yang artinya semua masukan user memenuhi semua kondisi, maka*/
        printf("kombinasi valid\n");
        //tampilkan ke layar kombinasi valid
    }
    else if ((b==1))
    {
        printf("kombinasi valid\n");
    }
    else
    {
        /* jika ada ata semua nilai variabel = 0
         yang artinya ada atau semua masukan user tidak memenuhi kondisi, maka*/
        printf("kombinasi tidak valid\n");
        //tampilkan ke layar kombinasi tidak valid
    }
    
    return 0;

    
}